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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<Enemy>
struct List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// Enemy[]
struct EnemyU5BU5D_t17F646169909105322498EFD67B34945C9A08B6F;
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
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// TowerTemplate[]
struct TowerTemplateU5BU5D_t87180366CA923ABAC89FB91753A742A2B672A397;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Wave[]
struct WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// TowerTemplate/Weapon[]
struct WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
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
// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB;
// EnemyHP
struct EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E;
// EnemyHPViewer
struct EnemyHPViewer_t69F02FC5891226039A889A5B4A679ACF66CEC88F;
// EnemySpawner
struct EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameOver
struct GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D;
// GameOverCheck
struct GameOverCheck_t6628E2C305AE819CB76F2E8CA0BD5F8C1C41867B;
// GameStartExit
struct GameStartExit_t19A00811F7081CBA59025BE8D0912E60C41CCBA3;
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
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// LoadingSceneController
struct LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Movement2D
struct Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectDetector
struct ObjectDetector_tFB353B01D51F3E496A54E862DA5ED92D26B10FC6;
// ObjectFollowMousePosition
struct ObjectFollowMousePosition_t995E27C00C208687F6BC7E51862E0027D22B9157;
// Pause
struct Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7;
// PlayerGold
struct PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5;
// PlayerHP
struct PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220;
// Projectile
struct Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneLoad
struct SceneLoad_tC696BDDDB799C18D95E9D7B59EFE98C9893A47F9;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SliderPositionAutoSetter
struct SliderPositionAutoSetter_t09DA476805F4D7B3E5284B7265997B0C1C8B9427;
// Slow
struct Slow_t40BEC4E359773D7BEEBE1F9C5364A7D297A126CC;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// StartScreenTMPAlpha
struct StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B;
// System.String
struct String_t;
// SystemTextViewer
struct SystemTextViewer_t8821BBC121D7F603E90E3F7B2634460B179A41B9;
// TMPAlpha
struct TMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA;
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
// TextTMPViewer
struct TextTMPViewer_t64F7CDF0FE3C4E2FA32DC794BFF4568AC67B7300;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Tile
struct Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64;
// TowerAttackRange
struct TowerAttackRange_t1AC6229E24EECEC9960B23B104755B489273BE8C;
// TowerDataViewer
struct TowerDataViewer_t6740CC4D01535DD42FA74D76F81BE78ED4DD65CC;
// TowerSpawner
struct TowerSpawner_t0F1E87A71018B019CF29878863AC60C0C4F91CF0;
// TowerTemplate
struct TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72;
// TowerWeapon
struct TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// WaveSystem
struct WaveSystem_t3DDD08CD57B79616F06A24D46C13436D1118F65A;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Enemy/<OnMove>d__7
struct U3COnMoveU3Ed__7_t9BC0B289627BCEF5370B56539AE1DA05C3477BBA;
// EnemyHP/<HitAlphaAnimation>d__11
struct U3CHitAlphaAnimationU3Ed__11_t8CA3EF4CD288F052B7AB807F2BEBD0383005B105;
// EnemySpawner/<SpawnEnemy>d__16
struct U3CSpawnEnemyU3Ed__16_tD643219850630BE4CE223742945F4962D7B046BF;
// LoadingSceneController/<LoadSceneProcess>d__4
struct U3CLoadSceneProcessU3Ed__4_t3C47DDC7A300F983D5594AB91E6ADE95373AA4E0;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PlayerHP/<HitAlphaAnimation>d__9
struct U3CHitAlphaAnimationU3Ed__9_t43D64E2BBED7159CE54DFE632D6370BFFF8E66CB;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// StartScreenTMPAlpha/<Fade>d__5
struct U3CFadeU3Ed__5_tC4D6281E4F2A8BD628A459BF6D4BBC927F059070;
// StartScreenTMPAlpha/<FadeInOut>d__4
struct U3CFadeInOutU3Ed__4_t815F8ED12B8378B29EFC52EA9A155DE4042003DB;
// TMPAlpha/<AlphaLerp>d__4
struct U3CAlphaLerpU3Ed__4_tF1014ABE6532D045BC2E40A820DFDD91DC77F3DA;
// TowerSpawner/<OnTowerCancelSystem>d__9
struct U3COnTowerCancelSystemU3Ed__9_t4C1532E59EB9DE85D03DDF4031CEDD35E004A43F;
// TowerWeapon/<SearchTarget>d__49
struct U3CSearchTargetU3Ed__49_t4E63CF5071EA0FD363D6C6F70E92C04BA4D160DC;
// TowerWeapon/<TryAttackCannon>d__50
struct U3CTryAttackCannonU3Ed__50_t4E7E5AF42A01F290DA542C850F77DC5F324EAB1B;
// TowerWeapon/<TryAttackLaser>d__51
struct U3CTryAttackLaserU3Ed__51_t3F77C959D09116C08400F292D77A60DFEFA20FE6;

IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAlphaLerpU3Ed__4_tF1014ABE6532D045BC2E40A820DFDD91DC77F3DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeInOutU3Ed__4_t815F8ED12B8378B29EFC52EA9A155DE4042003DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeU3Ed__5_tC4D6281E4F2A8BD628A459BF6D4BBC927F059070_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CHitAlphaAnimationU3Ed__11_t8CA3EF4CD288F052B7AB807F2BEBD0383005B105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CHitAlphaAnimationU3Ed__9_t43D64E2BBED7159CE54DFE632D6370BFFF8E66CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadSceneProcessU3Ed__4_t3C47DDC7A300F983D5594AB91E6ADE95373AA4E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnMoveU3Ed__7_t9BC0B289627BCEF5370B56539AE1DA05C3477BBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnTowerCancelSystemU3Ed__9_t4C1532E59EB9DE85D03DDF4031CEDD35E004A43F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSearchTargetU3Ed__49_t4E63CF5071EA0FD363D6C6F70E92C04BA4D160DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnEnemyU3Ed__16_tD643219850630BE4CE223742945F4962D7B046BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTryAttackCannonU3Ed__50_t4E7E5AF42A01F290DA542C850F77DC5F324EAB1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTryAttackLaserU3Ed__51_t3F77C959D09116C08400F292D77A60DFEFA20FE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeaponState_t83C08D8DA43E6109C542BEB3E5FE08AE3A53BF5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0DEC985EB735DA21BD9AAAB72CD3510DD715777E;
IL2CPP_EXTERN_C String_t* _stringLiteral1A52C3C9D37BBFD5E5121B35BC4AF16D9B8BA0AA;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral37DBDE708A65BE7036505CCBEEA5644AAD9B7311;
IL2CPP_EXTERN_C String_t* _stringLiteral4745AD03BFBF02E1E8CB316F8DFE3B091A5345D0;
IL2CPP_EXTERN_C String_t* _stringLiteral6BB86BA4FB6A20A4CB7E35A16FC7B10E647D9643;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral704AFD44613B0CAF0F7482DE3039C49A4E0C8714;
IL2CPP_EXTERN_C String_t* _stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9;
IL2CPP_EXTERN_C String_t* _stringLiteral78483B7AFC7D78BB0718543979DEFEE849C80387;
IL2CPP_EXTERN_C String_t* _stringLiteral866DD70C3A3DC235752FD88062B11C19B3B1FA29;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8;
IL2CPP_EXTERN_C String_t* _stringLiteral952CAC206E30AA9CB06A5D717A4FD7CA2320B766;
IL2CPP_EXTERN_C String_t* _stringLiteralA12DF7E063F9EDD6CB3B99E1A6200411CA060DEE;
IL2CPP_EXTERN_C String_t* _stringLiteralA9B96674A8005AFE20586E501B3E6DB60EBC0936;
IL2CPP_EXTERN_C String_t* _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391;
IL2CPP_EXTERN_C String_t* _stringLiteralC865CC1250D741D59C9274B75CE11E9A71CA21A1;
IL2CPP_EXTERN_C String_t* _stringLiteralC92E2BFE09244B135C2ADF950BB41CC58A2FF9C1;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2;
IL2CPP_EXTERN_C String_t* _stringLiteralD89D3D82CB76C5C2909243BBCBE89ADB25948F1D;
IL2CPP_EXTERN_C String_t* _stringLiteralD9BD6F52C9FFFA83B7173A75E070AAE7CA2918E4;
IL2CPP_EXTERN_C String_t* _stringLiteralEA8F6DA97CA86099CF8A77F372C1BC48B1D6D121;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisTowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF_m2708A097F0BD78A35FA7B2F453CB306694C8823D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mA6F818C24BC65C9BF00BA6D5455FF93CDF093CCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMovement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2_m65EBB1D76E2217609D6953128347E9990EAD5440_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA_m88E606E3C7865FB45B859D3ACA02FF2BDA18C4E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3C9E6A980DA050E176CF32E9F6A5414E05E66998_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF_m85027562274501164B6142E4833789C5E920E8E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyHPViewer_t69F02FC5891226039A889A5B4A679ACF66CEC88F_m635D367901E84F11D3EB4C56BAC98770C3BCF179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mD8D79A38B1B77044341029CE43038AEBA28284DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m13E535B8E623931B5A04462B85C02123CE2A6183_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSliderPositionAutoSetter_t09DA476805F4D7B3E5284B7265997B0C1C8B9427_m29C83443BE01DA131F44107553004F54946D6EAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF_m344CABA096DE65B759CB2A378E21BAFF534A2FBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5212A0E073717BF79B93BBA707AB20B862DEC2C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m84DCF90974973450ABD8110FD9B80101AD2FBDF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1508A8255188F2CDBCE32D3835B8FF2E5044318E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m06491E24E76E12248772D510B36BB496FE85048E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1B277B53168A4876E1F5CC6CE3F9A8C66F178962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAlphaLerpU3Ed__4_System_Collections_IEnumerator_Reset_mFD71A34FD78E4E8559841E0F3F2C33A4F00EB316_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeInOutU3Ed__4_System_Collections_IEnumerator_Reset_m552769BEF05ADE75A6EEDBE6EEFC0D9575846E1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeU3Ed__5_System_Collections_IEnumerator_Reset_m716A5A391D17D4FE6D26F2E7FB8E532106F5CEE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CHitAlphaAnimationU3Ed__11_System_Collections_IEnumerator_Reset_m48073BC9C00E20EDFBEA2474AF1CD48BD0BF4F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CHitAlphaAnimationU3Ed__9_System_Collections_IEnumerator_Reset_m9A6C73F52C273FC9DFCAD247FE39477E751115F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadSceneProcessU3Ed__4_System_Collections_IEnumerator_Reset_mF512FBB0331E62CABC264E760DD255255139578B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnMoveU3Ed__7_System_Collections_IEnumerator_Reset_mC0AD912989C87A00B1A7BD83F45B3FFB0A1EBB74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnTowerCancelSystemU3Ed__9_System_Collections_IEnumerator_Reset_m7E91017F9BA3A1DF85C2273254ADC20652203ED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSearchTargetU3Ed__49_System_Collections_IEnumerator_Reset_m5878120AE2CF95E9D5CEB4672F77791AB7ADB7D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnEnemyU3Ed__16_System_Collections_IEnumerator_Reset_m30E92657A5C47102080194F35595632E094B0B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTryAttackCannonU3Ed__50_System_Collections_IEnumerator_Reset_mCF3CADA3D260B2E7BD3A0D9B96770E70AB1E4EE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTryAttackLaserU3Ed__51_System_Collections_IEnumerator_Reset_mB15F5BC3E99E10172EE056F2D9C1E411E1A98897_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TowerTemplateU5BU5D_t87180366CA923ABAC89FB91753A742A2B672A397;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826;
struct WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F;

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

// System.Collections.Generic.List`1<Enemy>
struct List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	EnemyU5BU5D_t17F646169909105322498EFD67B34945C9A08B6F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	EnemyU5BU5D_t17F646169909105322498EFD67B34945C9A08B6F* ___s_emptyArray_5;
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

// Enemy/<OnMove>d__7
struct U3COnMoveU3Ed__7_t9BC0B289627BCEF5370B56539AE1DA05C3477BBA  : public RuntimeObject
{
	// System.Int32 Enemy/<OnMove>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Enemy/<OnMove>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Enemy Enemy/<OnMove>d__7::<>4__this
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___U3CU3E4__this_2;
};

// EnemySpawner/<SpawnEnemy>d__16
struct U3CSpawnEnemyU3Ed__16_tD643219850630BE4CE223742945F4962D7B046BF  : public RuntimeObject
{
	// System.Int32 EnemySpawner/<SpawnEnemy>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnemySpawner/<SpawnEnemy>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EnemySpawner EnemySpawner/<SpawnEnemy>d__16::<>4__this
	EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* ___U3CU3E4__this_2;
	// System.Int32 EnemySpawner/<SpawnEnemy>d__16::<spawnEnemyCount>5__2
	int32_t ___U3CspawnEnemyCountU3E5__2_3;
};

// LoadingSceneController/<LoadSceneProcess>d__4
struct U3CLoadSceneProcessU3Ed__4_t3C47DDC7A300F983D5594AB91E6ADE95373AA4E0  : public RuntimeObject
{
	// System.Int32 LoadingSceneController/<LoadSceneProcess>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LoadingSceneController/<LoadSceneProcess>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// LoadingSceneController LoadingSceneController/<LoadSceneProcess>d__4::<>4__this
	LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5* ___U3CU3E4__this_2;
	// UnityEngine.AsyncOperation LoadingSceneController/<LoadSceneProcess>d__4::<op>5__2
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CopU3E5__2_3;
	// System.Single LoadingSceneController/<LoadSceneProcess>d__4::<timer>5__3
	float ___U3CtimerU3E5__3_4;
};

// StartScreenTMPAlpha/<Fade>d__5
struct U3CFadeU3Ed__5_tC4D6281E4F2A8BD628A459BF6D4BBC927F059070  : public RuntimeObject
{
	// System.Int32 StartScreenTMPAlpha/<Fade>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object StartScreenTMPAlpha/<Fade>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// StartScreenTMPAlpha StartScreenTMPAlpha/<Fade>d__5::<>4__this
	StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B* ___U3CU3E4__this_2;
	// System.Single StartScreenTMPAlpha/<Fade>d__5::start
	float ___start_3;
	// System.Single StartScreenTMPAlpha/<Fade>d__5::end
	float ___end_4;
	// System.Single StartScreenTMPAlpha/<Fade>d__5::<currentTime>5__2
	float ___U3CcurrentTimeU3E5__2_5;
	// System.Single StartScreenTMPAlpha/<Fade>d__5::<percent>5__3
	float ___U3CpercentU3E5__3_6;
};

// StartScreenTMPAlpha/<FadeInOut>d__4
struct U3CFadeInOutU3Ed__4_t815F8ED12B8378B29EFC52EA9A155DE4042003DB  : public RuntimeObject
{
	// System.Int32 StartScreenTMPAlpha/<FadeInOut>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object StartScreenTMPAlpha/<FadeInOut>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// StartScreenTMPAlpha StartScreenTMPAlpha/<FadeInOut>d__4::<>4__this
	StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B* ___U3CU3E4__this_2;
};

// TMPAlpha/<AlphaLerp>d__4
struct U3CAlphaLerpU3Ed__4_tF1014ABE6532D045BC2E40A820DFDD91DC77F3DA  : public RuntimeObject
{
	// System.Int32 TMPAlpha/<AlphaLerp>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TMPAlpha/<AlphaLerp>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TMPAlpha TMPAlpha/<AlphaLerp>d__4::<>4__this
	TMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA* ___U3CU3E4__this_2;
	// System.Single TMPAlpha/<AlphaLerp>d__4::start
	float ___start_3;
	// System.Single TMPAlpha/<AlphaLerp>d__4::end
	float ___end_4;
	// System.Single TMPAlpha/<AlphaLerp>d__4::<currentTime>5__2
	float ___U3CcurrentTimeU3E5__2_5;
	// System.Single TMPAlpha/<AlphaLerp>d__4::<percent>5__3
	float ___U3CpercentU3E5__3_6;
};

// TowerSpawner/<OnTowerCancelSystem>d__9
struct U3COnTowerCancelSystemU3Ed__9_t4C1532E59EB9DE85D03DDF4031CEDD35E004A43F  : public RuntimeObject
{
	// System.Int32 TowerSpawner/<OnTowerCancelSystem>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TowerSpawner/<OnTowerCancelSystem>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TowerSpawner TowerSpawner/<OnTowerCancelSystem>d__9::<>4__this
	TowerSpawner_t0F1E87A71018B019CF29878863AC60C0C4F91CF0* ___U3CU3E4__this_2;
};

// TowerWeapon/<SearchTarget>d__49
struct U3CSearchTargetU3Ed__49_t4E63CF5071EA0FD363D6C6F70E92C04BA4D160DC  : public RuntimeObject
{
	// System.Int32 TowerWeapon/<SearchTarget>d__49::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TowerWeapon/<SearchTarget>d__49::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TowerWeapon TowerWeapon/<SearchTarget>d__49::<>4__this
	TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* ___U3CU3E4__this_2;
};

// TowerWeapon/<TryAttackCannon>d__50
struct U3CTryAttackCannonU3Ed__50_t4E7E5AF42A01F290DA542C850F77DC5F324EAB1B  : public RuntimeObject
{
	// System.Int32 TowerWeapon/<TryAttackCannon>d__50::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TowerWeapon/<TryAttackCannon>d__50::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TowerWeapon TowerWeapon/<TryAttackCannon>d__50::<>4__this
	TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* ___U3CU3E4__this_2;
};

// TowerWeapon/<TryAttackLaser>d__51
struct U3CTryAttackLaserU3Ed__51_t3F77C959D09116C08400F292D77A60DFEFA20FE6  : public RuntimeObject
{
	// System.Int32 TowerWeapon/<TryAttackLaser>d__51::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TowerWeapon/<TryAttackLaser>d__51::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TowerWeapon TowerWeapon/<TryAttackLaser>d__51::<>4__this
	TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* ___U3CU3E4__this_2;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
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

// Wave
struct Wave_t46A8424F3F35C64800660289794914462618636D 
{
	// System.Single Wave::spawnTime
	float ___spawnTime_0;
	// System.Int32 Wave::maxEnemyCount
	int32_t ___maxEnemyCount_1;
	// UnityEngine.GameObject[] Wave::enemyPrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___enemyPrefabs_2;
};
// Native definition for P/Invoke marshalling of Wave
struct Wave_t46A8424F3F35C64800660289794914462618636D_marshaled_pinvoke
{
	float ___spawnTime_0;
	int32_t ___maxEnemyCount_1;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___enemyPrefabs_2;
};
// Native definition for COM marshalling of Wave
struct Wave_t46A8424F3F35C64800660289794914462618636D_marshaled_com
{
	float ___spawnTime_0;
	int32_t ___maxEnemyCount_1;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___enemyPrefabs_2;
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
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

// TowerTemplate/Weapon
struct Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A 
{
	// UnityEngine.Sprite TowerTemplate/Weapon::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_0;
	// System.Single TowerTemplate/Weapon::damage
	float ___damage_1;
	// System.Single TowerTemplate/Weapon::slow
	float ___slow_2;
	// System.Single TowerTemplate/Weapon::buff
	float ___buff_3;
	// System.Single TowerTemplate/Weapon::rate
	float ___rate_4;
	// System.Single TowerTemplate/Weapon::range
	float ___range_5;
	// System.Int32 TowerTemplate/Weapon::cost
	int32_t ___cost_6;
	// System.Int32 TowerTemplate/Weapon::sell
	int32_t ___sell_7;
};
// Native definition for P/Invoke marshalling of TowerTemplate/Weapon
struct Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_0;
	float ___damage_1;
	float ___slow_2;
	float ___buff_3;
	float ___rate_4;
	float ___range_5;
	int32_t ___cost_6;
	int32_t ___sell_7;
};
// Native definition for COM marshalling of TowerTemplate/Weapon
struct Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_0;
	float ___damage_1;
	float ___slow_2;
	float ___buff_3;
	float ___rate_4;
	float ___range_5;
	int32_t ___cost_6;
	int32_t ___sell_7;
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

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
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

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
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

// EnemyHP/<HitAlphaAnimation>d__11
struct U3CHitAlphaAnimationU3Ed__11_t8CA3EF4CD288F052B7AB807F2BEBD0383005B105  : public RuntimeObject
{
	// System.Int32 EnemyHP/<HitAlphaAnimation>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnemyHP/<HitAlphaAnimation>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EnemyHP EnemyHP/<HitAlphaAnimation>d__11::<>4__this
	EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* ___U3CU3E4__this_2;
	// UnityEngine.Color EnemyHP/<HitAlphaAnimation>d__11::<color>5__2
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CcolorU3E5__2_3;
};

// PlayerHP/<HitAlphaAnimation>d__9
struct U3CHitAlphaAnimationU3Ed__9_t43D64E2BBED7159CE54DFE632D6370BFFF8E66CB  : public RuntimeObject
{
	// System.Int32 PlayerHP/<HitAlphaAnimation>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerHP/<HitAlphaAnimation>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerHP PlayerHP/<HitAlphaAnimation>d__9::<>4__this
	PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* ___U3CU3E4__this_2;
	// UnityEngine.Color PlayerHP/<HitAlphaAnimation>d__9::<color>5__2
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CcolorU3E5__2_3;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// TowerTemplate
struct TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.GameObject TowerTemplate::towerPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___towerPrefab_4;
	// UnityEngine.GameObject TowerTemplate::followTowerPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___followTowerPrefab_5;
	// TowerTemplate/Weapon[] TowerTemplate::weapon
	WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* ___weapon_6;
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

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
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

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Enemy::wayPointCount
	int32_t ___wayPointCount_4;
	// UnityEngine.Transform[] Enemy::wayPoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___wayPoints_5;
	// System.Int32 Enemy::currentIndex
	int32_t ___currentIndex_6;
	// Movement2D Enemy::movement2D
	Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* ___movement2D_7;
	// EnemySpawner Enemy::enemySpawner
	EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* ___enemySpawner_8;
	// System.Int32 Enemy::gold
	int32_t ___gold_9;
};

// EnemyHP
struct EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EnemyHP::maxHP
	float ___maxHP_4;
	// System.Single EnemyHP::currentHP
	float ___currentHP_5;
	// System.Boolean EnemyHP::isDie
	bool ___isDie_6;
	// Enemy EnemyHP::enemy
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___enemy_7;
	// UnityEngine.SpriteRenderer EnemyHP::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_8;
};

// EnemyHPViewer
struct EnemyHPViewer_t69F02FC5891226039A889A5B4A679ACF66CEC88F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// EnemyHP EnemyHPViewer::enemyHP
	EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* ___enemyHP_4;
	// UnityEngine.UI.Slider EnemyHPViewer::hpSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___hpSlider_5;
};

// EnemySpawner
struct EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EnemySpawner::enemyHPSliderPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemyHPSliderPrefab_4;
	// UnityEngine.Transform EnemySpawner::canvasTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___canvasTransform_5;
	// UnityEngine.Transform[] EnemySpawner::wayPoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___wayPoints_6;
	// PlayerHP EnemySpawner::playerHP
	PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* ___playerHP_7;
	// PlayerGold EnemySpawner::playerGold
	PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* ___playerGold_8;
	// Wave EnemySpawner::currentWave
	Wave_t46A8424F3F35C64800660289794914462618636D ___currentWave_9;
	// System.Int32 EnemySpawner::currentEnemyCount
	int32_t ___currentEnemyCount_10;
	// System.Collections.Generic.List`1<Enemy> EnemySpawner::enemyList
	List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* ___enemyList_11;
};

// GameOver
struct GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GameOverCheck
struct GameOverCheck_t6628E2C305AE819CB76F2E8CA0BD5F8C1C41867B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlayerHP GameOverCheck::playerHP
	PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* ___playerHP_4;
	// UnityEngine.GameObject GameOverCheck::gameOverPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameOverPanel_5;
	// System.Boolean GameOverCheck::gameOverCheck
	bool ___gameOverCheck_6;
};

// GameStartExit
struct GameStartExit_t19A00811F7081CBA59025BE8D0912E60C41CCBA3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LoadingSceneController
struct LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image LoadingSceneController::progressBar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___progressBar_5;
};

struct LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5_StaticFields
{
	// System.String LoadingSceneController::nextScene
	String_t* ___nextScene_4;
};

// Movement2D
struct Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Movement2D::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.Vector3 Movement2D::moveDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveDirection_5;
	// System.Single Movement2D::baseMoveSpeed
	float ___baseMoveSpeed_6;
};

// ObjectDetector
struct ObjectDetector_tFB353B01D51F3E496A54E862DA5ED92D26B10FC6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TowerSpawner ObjectDetector::towerSpawner
	TowerSpawner_t0F1E87A71018B019CF29878863AC60C0C4F91CF0* ___towerSpawner_4;
	// TowerDataViewer ObjectDetector::towerDataViewer
	TowerDataViewer_t6740CC4D01535DD42FA74D76F81BE78ED4DD65CC* ___towerDataViewer_5;
	// UnityEngine.Camera ObjectDetector::mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___mainCamera_6;
	// UnityEngine.Ray ObjectDetector::ray
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray_7;
	// UnityEngine.RaycastHit ObjectDetector::hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_8;
	// UnityEngine.Transform ObjectDetector::hitTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___hitTransform_9;
};

// ObjectFollowMousePosition
struct ObjectFollowMousePosition_t995E27C00C208687F6BC7E51862E0027D22B9157  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera ObjectFollowMousePosition::mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___mainCamera_4;
};

// Pause
struct Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Pause::pausedMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pausedMenu_5;
};

struct Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7_StaticFields
{
	// System.Boolean Pause::gamePaused
	bool ___gamePaused_4;
};

// PlayerGold
struct PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 PlayerGold::currentGold
	int32_t ___currentGold_4;
};

// PlayerHP
struct PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image PlayerHP::imageScreen
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imageScreen_4;
	// System.Single PlayerHP::maxHP
	float ___maxHP_5;
	// System.Single PlayerHP::currentHP
	float ___currentHP_6;
};

// Projectile
struct Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Movement2D Projectile::movement2D
	Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* ___movement2D_4;
	// UnityEngine.Transform Projectile::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_5;
	// System.Single Projectile::damage
	float ___damage_6;
};

// SceneLoad
struct SceneLoad_tC696BDDDB799C18D95E9D7B59EFE98C9893A47F9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SliderPositionAutoSetter
struct SliderPositionAutoSetter_t09DA476805F4D7B3E5284B7265997B0C1C8B9427  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 SliderPositionAutoSetter::distance
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___distance_4;
	// UnityEngine.Transform SliderPositionAutoSetter::targetTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform_5;
	// UnityEngine.RectTransform SliderPositionAutoSetter::rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform_6;
};

// Slow
struct Slow_t40BEC4E359773D7BEEBE1F9C5364A7D297A126CC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TowerWeapon Slow::towerWeapon
	TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* ___towerWeapon_4;
};

// StartScreenTMPAlpha
struct StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single StartScreenTMPAlpha::fadeTime
	float ___fadeTime_4;
	// TMPro.TextMeshProUGUI StartScreenTMPAlpha::textStartScreen
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textStartScreen_5;
};

// SystemTextViewer
struct SystemTextViewer_t8821BBC121D7F603E90E3F7B2634460B179A41B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI SystemTextViewer::textSystem
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textSystem_4;
	// TMPAlpha SystemTextViewer::tmpAlpha
	TMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA* ___tmpAlpha_5;
};

// TMPAlpha
struct TMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TMPAlpha::lerpTime
	float ___lerpTime_4;
	// TMPro.TextMeshProUGUI TMPAlpha::text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___text_5;
};

// TextTMPViewer
struct TextTMPViewer_t64F7CDF0FE3C4E2FA32DC794BFF4568AC67B7300  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI TextTMPViewer::textPlayerHP
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textPlayerHP_4;
	// TMPro.TextMeshProUGUI TextTMPViewer::textPlayerGold
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textPlayerGold_5;
	// TMPro.TextMeshProUGUI TextTMPViewer::textWave
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textWave_6;
	// TMPro.TextMeshProUGUI TextTMPViewer::textEnemyCount
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textEnemyCount_7;
	// PlayerHP TextTMPViewer::playerHP
	PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* ___playerHP_8;
	// PlayerGold TextTMPViewer::playerGold
	PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* ___playerGold_9;
	// WaveSystem TextTMPViewer::waveSystem
	WaveSystem_t3DDD08CD57B79616F06A24D46C13436D1118F65A* ___waveSystem_10;
	// EnemySpawner TextTMPViewer::enemySpawner
	EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* ___enemySpawner_11;
};

// Tile
struct Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Tile::<IsBuildTower>k__BackingField
	bool ___U3CIsBuildTowerU3Ek__BackingField_4;
};

// TowerAttackRange
struct TowerAttackRange_t1AC6229E24EECEC9960B23B104755B489273BE8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// TowerDataViewer
struct TowerDataViewer_t6740CC4D01535DD42FA74D76F81BE78ED4DD65CC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image TowerDataViewer::imageTower
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imageTower_4;
	// TMPro.TextMeshProUGUI TowerDataViewer::textDamage
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textDamage_5;
	// TMPro.TextMeshProUGUI TowerDataViewer::textRate
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textRate_6;
	// TMPro.TextMeshProUGUI TowerDataViewer::textRange
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textRange_7;
	// TMPro.TextMeshProUGUI TowerDataViewer::textLevel
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textLevel_8;
	// TMPro.TextMeshProUGUI TowerDataViewer::textUpgradeCost
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textUpgradeCost_9;
	// TMPro.TextMeshProUGUI TowerDataViewer::textSellCost
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textSellCost_10;
	// TowerAttackRange TowerDataViewer::towerAttackRange
	TowerAttackRange_t1AC6229E24EECEC9960B23B104755B489273BE8C* ___towerAttackRange_11;
	// UnityEngine.UI.Button TowerDataViewer::buttonUpgrade
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonUpgrade_12;
	// SystemTextViewer TowerDataViewer::systemTextViewer
	SystemTextViewer_t8821BBC121D7F603E90E3F7B2634460B179A41B9* ___systemTextViewer_13;
	// TowerWeapon TowerDataViewer::currentTower
	TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* ___currentTower_14;
};

// TowerSpawner
struct TowerSpawner_t0F1E87A71018B019CF29878863AC60C0C4F91CF0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TowerTemplate[] TowerSpawner::towerTemplate
	TowerTemplateU5BU5D_t87180366CA923ABAC89FB91753A742A2B672A397* ___towerTemplate_4;
	// EnemySpawner TowerSpawner::enemySpawner
	EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* ___enemySpawner_5;
	// PlayerGold TowerSpawner::playerGold
	PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* ___playerGold_6;
	// SystemTextViewer TowerSpawner::systemTextViewer
	SystemTextViewer_t8821BBC121D7F603E90E3F7B2634460B179A41B9* ___systemTextViewer_7;
	// System.Boolean TowerSpawner::isOnTowerButton
	bool ___isOnTowerButton_8;
	// UnityEngine.GameObject TowerSpawner::followTowerClone
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___followTowerClone_9;
	// System.Int32 TowerSpawner::towerType
	int32_t ___towerType_10;
};

// TowerWeapon
struct TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TowerTemplate TowerWeapon::towerTemplate
	TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* ___towerTemplate_4;
	// UnityEngine.Transform TowerWeapon::spawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spawnPoint_5;
	// WeaponType TowerWeapon::weaponType
	int32_t ___weaponType_6;
	// UnityEngine.GameObject TowerWeapon::projectilePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectilePrefab_7;
	// UnityEngine.LineRenderer TowerWeapon::lineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___lineRenderer_8;
	// UnityEngine.Transform TowerWeapon::hitEffect
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___hitEffect_9;
	// UnityEngine.LayerMask TowerWeapon::targetLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___targetLayer_10;
	// System.Int32 TowerWeapon::level
	int32_t ___level_11;
	// WeaponState TowerWeapon::weaponState
	int32_t ___weaponState_12;
	// UnityEngine.Transform TowerWeapon::attackTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___attackTarget_13;
	// UnityEngine.SpriteRenderer TowerWeapon::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_14;
	// TowerSpawner TowerWeapon::towerSpawner
	TowerSpawner_t0F1E87A71018B019CF29878863AC60C0C4F91CF0* ___towerSpawner_15;
	// EnemySpawner TowerWeapon::enemySpawner
	EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* ___enemySpawner_16;
	// PlayerGold TowerWeapon::playerGold
	PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* ___playerGold_17;
	// Tile TowerWeapon::ownerTile
	Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* ___ownerTile_18;
	// System.Single TowerWeapon::addedDamage
	float ___addedDamage_19;
	// System.Int32 TowerWeapon::buffLevel
	int32_t ___buffLevel_20;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WaveSystem
struct WaveSystem_t3DDD08CD57B79616F06A24D46C13436D1118F65A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Wave[] WaveSystem::waves
	WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826* ___waves_4;
	// EnemySpawner WaveSystem::enemySpawner
	EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* ___enemySpawner_5;
	// System.Int32 WaveSystem::currentWaveIndex
	int32_t ___currentWaveIndex_6;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
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

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
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
// TowerTemplate[]
struct TowerTemplateU5BU5D_t87180366CA923ABAC89FB91753A742A2B672A397  : public RuntimeArray
{
	ALIGN_FIELD (8) TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* m_Items[1];

	inline TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TowerTemplate/Weapon[]
struct WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F  : public RuntimeArray
{
	ALIGN_FIELD (8) Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A m_Items[1];

	inline Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sprite_0), (void*)NULL);
	}
	inline Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___sprite_0), (void*)NULL);
	}
};
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA m_Items[1];

	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		m_Items[index] = value;
	}
};
// Wave[]
struct WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826  : public RuntimeArray
{
	ALIGN_FIELD (8) Wave_t46A8424F3F35C64800660289794914462618636D m_Items[1];

	inline Wave_t46A8424F3F35C64800660289794914462618636D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Wave_t46A8424F3F35C64800660289794914462618636D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Wave_t46A8424F3F35C64800660289794914462618636D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___enemyPrefabs_2), (void*)NULL);
	}
	inline Wave_t46A8424F3F35C64800660289794914462618636D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Wave_t46A8424F3F35C64800660289794914462618636D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Wave_t46A8424F3F35C64800660289794914462618636D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___enemyPrefabs_2), (void*)NULL);
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
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LoadingSceneController::LoadSceneProcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadingSceneController_LoadSceneProcess_m95BA7AF06845F3723425871144AA5DB36F4E420E (LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void LoadingSceneController/<LoadSceneProcess>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneProcessU3Ed__4__ctor_mDE31DD3A4C3AE86E25F578FE9663865C823C8A40 (U3CLoadSceneProcessU3Ed__4_t3C47DDC7A300F983D5594AB91E6ADE95373AA4E0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_m5855749CCB7CA99553A65AAA791623484FE7F184 (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AsyncOperation::set_allowSceneActivation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AsyncOperation::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void LoadingSceneController::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingSceneController_LoadScene_m82A8D94FFD6A7647AF2FE38F376CCF1C5A1920A4 (String_t* ___sceneName0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Movement2D>()
inline Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* Component_GetComponent_TisMovement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2_m65EBB1D76E2217609D6953128347E9990EAD5440 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void Enemy/<OnMove>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnMoveU3Ed__7__ctor_mBC376AEAB794048F722AADFC3EEF457280DD3B9F (U3COnMoveU3Ed__7_t9BC0B289627BCEF5370B56539AE1DA05C3477BBA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void Movement2D::MoveTo(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Movement2D_MoveTo_mF1CB1E7E740D8CD33DB87DF41A6078E43A11CE08_inline (Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// System.Void Enemy::OnDie(EnemyDestroyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnDie_mA3EB0D35F224F4F556CFC2068F786B0F8D4F9D36 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, int32_t ___type0, const RuntimeMethod* method) ;
// System.Void EnemySpawner::DestroyEnemy(EnemyDestroyType,Enemy,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_DestroyEnemy_m810309A07F1229081E6AEC1A272CEBDF871245CC (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, int32_t ___type0, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___enemy1, int32_t ___gold2, const RuntimeMethod* method) ;
// System.Void Enemy::NextMoveTo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_NextMoveTo_m05FCC092EBD81D27DD0909DDF6596CFD4A32EFAE (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single Movement2D::get_MoveSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Movement2D_get_MoveSpeed_mD027A0B2C2DB291D9C10061D7E9980AC7BAF3CC7_inline (Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Enemy>()
inline Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void EnemyHP/<HitAlphaAnimation>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHitAlphaAnimationU3Ed__11__ctor_mBA0591793EB0AD5B56ABC73D3AA70DDBD3A334A9 (U3CHitAlphaAnimationU3Ed__11_t8CA3EF4CD288F052B7AB807F2BEBD0383005B105* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Slider>()
inline Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single EnemyHP::get_CurrentHP()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EnemyHP_get_CurrentHP_m1AFCFF4BE6BC8821B29D08C4A03A9B199AAF0A47_inline (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, const RuntimeMethod* method) ;
// System.Single EnemyHP::get_MaxHP()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EnemyHP_get_MaxHP_m464A78A22573CE8C9B945AF5FC6C3DD9DAA4E843_inline (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Enemy>::.ctor()
inline void List_1__ctor_m1508A8255188F2CDBCE32D3835B8FF2E5044318E (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void EnemySpawner/<SpawnEnemy>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyU3Ed__16__ctor_m80A0E98A0DF810B4CD92071E130FF579F3B739C6 (U3CSpawnEnemyU3Ed__16_tD643219850630BE4CE223742945F4962D7B046BF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<SliderPositionAutoSetter>()
inline SliderPositionAutoSetter_t09DA476805F4D7B3E5284B7265997B0C1C8B9427* GameObject_GetComponent_TisSliderPositionAutoSetter_t09DA476805F4D7B3E5284B7265997B0C1C8B9427_m29C83443BE01DA131F44107553004F54946D6EAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SliderPositionAutoSetter_t09DA476805F4D7B3E5284B7265997B0C1C8B9427* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void SliderPositionAutoSetter::Setup(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderPositionAutoSetter_Setup_m8903400BCD1CB9AF6CDB2393E3D308E6C9E0848A (SliderPositionAutoSetter_t09DA476805F4D7B3E5284B7265997B0C1C8B9427* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<EnemyHPViewer>()
inline EnemyHPViewer_t69F02FC5891226039A889A5B4A679ACF66CEC88F* GameObject_GetComponent_TisEnemyHPViewer_t69F02FC5891226039A889A5B4A679ACF66CEC88F_m635D367901E84F11D3EB4C56BAC98770C3BCF179 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EnemyHPViewer_t69F02FC5891226039A889A5B4A679ACF66CEC88F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<EnemyHP>()
inline EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* GameObject_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mD8D79A38B1B77044341029CE43038AEBA28284DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void EnemyHPViewer::Setup(EnemyHP)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHPViewer_Setup_mF5CF139BAAD60BD13EA9E18895837606198EBE40 (EnemyHPViewer_t69F02FC5891226039A889A5B4A679ACF66CEC88F* __this, EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* ___enemyHP0, const RuntimeMethod* method) ;
// System.Void PlayerHP::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHP_TakeDamage_m92376041925A91F87344D006C61B5DCD92BE8047 (PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* __this, float ___damage0, const RuntimeMethod* method) ;
// System.Int32 PlayerGold::get_CurrentGold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerGold_get_CurrentGold_mA17DB7136BE6396A2A166C49FC9AD39C22F471D7_inline (PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* __this, const RuntimeMethod* method) ;
// System.Void PlayerGold::set_CurrentGold(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerGold_set_CurrentGold_m1137A37748EADE9FC54AA7580A472567A7E8B71C (PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Enemy>::Remove(T)
inline bool List_1_Remove_m84DCF90974973450ABD8110FD9B80101AD2FBDF4 (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* __this, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B*, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Enemy>()
inline Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Enemy::Setup(EnemySpawner,UnityEngine.Transform[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Setup_m5D4319F71CE56E91DDF71B948DD20A01419580B8 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* ___enemySpawner0, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___wayPoints1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Enemy>::Add(T)
inline void List_1_Add_m5212A0E073717BF79B93BBA707AB20B862DEC2C0_inline (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* __this, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B*, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void EnemySpawner::SpawnEnemyHPSlider(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_SpawnEnemyHPSlider_mC4FFC130D8303D98E630AE59E5A53801E2C232D4 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single PlayerHP::get_CurrentHP()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerHP_get_CurrentHP_m187C956F1BF80DC9AEF705935571087303834433_inline (PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* __this, const RuntimeMethod* method) ;
// System.Void GameOverCheck::GameOverPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverCheck_GameOverPanel_m08EB13D5331D4070BB7873037F0F0DBF0E4D146D (GameOverCheck_t6628E2C305AE819CB76F2E8CA0BD5F8C1C41867B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m9D43811EF26E70072B39A8CE10402EE074A61901 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void TowerSpawner::SpawnTower(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerSpawner_SpawnTower_m054C4B9E93BEC6D1286DEFE90E0B99ACC7463558 (TowerSpawner_t0F1E87A71018B019CF29878863AC60C0C4F91CF0* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___tileTransform0, const RuntimeMethod* method) ;
// System.Void TowerDataViewer::OnPanel(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerDataViewer_OnPanel_m679D6E160E61A3C026AB2F7255D34038032F4B46 (TowerDataViewer_t6740CC4D01535DD42FA74D76F81BE78ED4DD65CC* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___towerWeapon0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void TowerDataViewer::OffPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerDataViewer_OffPanel_m0B133D457BFA3851AEC37DB52B39E5007145DCAE (TowerDataViewer_t6740CC4D01535DD42FA74D76F81BE78ED4DD65CC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void Pause::CallMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pause_CallMenu_mAE5FED353ADB47E99B5E7BEF3F1553379D57C901 (Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7* __this, const RuntimeMethod* method) ;
// System.Void Pause::CloseMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pause_CloseMenu_mCEA9BF10289F24472E5F088F65566CA711B3D3CC (Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Void PlayerHP/<HitAlphaAnimation>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHitAlphaAnimationU3Ed__9__ctor_mFA76D2B8C18E87E84D70A72FC1735A1AE47FD3AB (U3CHitAlphaAnimationU3Ed__9_t43D64E2BBED7159CE54DFE632D6370BFFF8E66CB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<EnemyHP>()
inline EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* Component_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mA6F818C24BC65C9BF00BA6D5455FF93CDF093CCB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void EnemyHP::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHP_TakeDamage_m319B5C9B2F8231DAD285D4F4E369CE9B13F22A63 (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, float ___damage0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<TowerWeapon>()
inline TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* Component_GetComponentInParent_TisTowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF_m2708A097F0BD78A35FA7B2F453CB306694C8823D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Single TowerWeapon::get_Slow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TowerWeapon_get_Slow_m60E2EA151558976477558BFC7478D1212BA0E5A6 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// System.Void Movement2D::set_MoveSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement2D_set_MoveSpeed_m5D03D594CDCC55E8D12073238219BFB5E8B3B943 (Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Movement2D::ResetMoveSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement2D_ResetMoveSpeed_mB6DFE96C5AE97EF55D4DBEE0F0A0F9CE98A0D2D9 (Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<TMPAlpha>()
inline TMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA* Component_GetComponent_TisTMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA_m88E606E3C7865FB45B859D3ACA02FF2BDA18C4E7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void TMPAlpha::FadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMPAlpha_FadeOut_m043CBBFAA0CAFD85CFBA8F4D312C0CC5E455056A (TMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Single PlayerHP::get_MaxHP()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerHP_get_MaxHP_m734A2C9EDFCF165FF1FCFBCBA17597A853B2C239_inline (PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 WaveSystem::get_CurrentWave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveSystem_get_CurrentWave_m01846639C9EBDF91ED403B4CD9EA5E384A2D0A52 (WaveSystem_t3DDD08CD57B79616F06A24D46C13436D1118F65A* __this, const RuntimeMethod* method) ;
// System.Int32 WaveSystem::get_MaxWave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveSystem_get_MaxWave_m9F6515C205695064AD9646C80E5CA40CE1308CBB (WaveSystem_t3DDD08CD57B79616F06A24D46C13436D1118F65A* __this, const RuntimeMethod* method) ;
// System.Int32 EnemySpawner::get_CurrentEnemyCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EnemySpawner_get_CurrentEnemyCount_m4173A42C959B2BE0535E263EF31FEE54010D9C07_inline (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) ;
// System.Int32 EnemySpawner::get_MaxEnemyCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnemySpawner_get_MaxEnemyCount_m184C21327C84C0C6DB9EE64D7170EAEC45A0A58F (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) ;
// System.Void Tile::set_IsBuildTower(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tile_set_IsBuildTower_m8AE0751713B4A2D8412FC8DFD6EFF4DCC5505566_inline (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TMPAlpha::AlphaLerp(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TMPAlpha_AlphaLerp_mD544AACBC6FEE145E4884AF88F00409446BEB49C (TMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA* __this, float ___start0, float ___end1, const RuntimeMethod* method) ;
// System.Void TMPAlpha/<AlphaLerp>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAlphaLerpU3Ed__4__ctor_m6935D70170D16BE539CA8ABA80F3E1BB0D337C76 (U3CAlphaLerpU3Ed__4_tF1014ABE6532D045BC2E40A820DFDD91DC77F3DA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TowerWeapon>()
inline TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* Component_GetComponent_TisTowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF_m85027562274501164B6142E4833789C5E920E8E0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void TowerDataViewer::UpdateTowerDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerDataViewer_UpdateTowerDate_mEBDF7CA6E5868ABF689000557ACBB8FD1E11D44C (TowerDataViewer_t6740CC4D01535DD42FA74D76F81BE78ED4DD65CC* __this, const RuntimeMethod* method) ;
// System.Single TowerWeapon::get_Range()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TowerWeapon_get_Range_mADE799753388B16683D2D7145EA02D23F7CA9570 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// System.Void TowerAttackRange::OnAttackRange(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerAttackRange_OnAttackRange_m68DB589B6137B31F899959652B2B0A989B1F628B (TowerAttackRange_t1AC6229E24EECEC9960B23B104755B489273BE8C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___range1, const RuntimeMethod* method) ;
// System.Void TowerAttackRange::OffAttackRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerAttackRange_OffAttackRange_m144495E0EA1589AF5EF0DD5816D99FCDC91E59C1 (TowerAttackRange_t1AC6229E24EECEC9960B23B104755B489273BE8C* __this, const RuntimeMethod* method) ;
// WeaponType TowerWeapon::get_WeaponType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TowerWeapon_get_WeaponType_mD5D536AC6A1D64F64CB8E33F4773F7C5D7ED3639_inline (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Single TowerWeapon::get_Damage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TowerWeapon_get_Damage_m5A24D65F4711BF635A2772DF85BC70CE7063A03E (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// System.Single TowerWeapon::get_AddedDamage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TowerWeapon_get_AddedDamage_m05255BC33B6270A9B5990C00F67F647F04350ABD_inline (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Single TowerWeapon::get_Buff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TowerWeapon_get_Buff_m0C84EC3B3120332C995B7222530AD15187189979 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// UnityEngine.Sprite TowerWeapon::get_TowerSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* TowerWeapon_get_TowerSprite_mA437A40D0F5DE7E097BCAEDCED4FA1B1EE9ACDDE (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Single TowerWeapon::get_Rate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TowerWeapon_get_Rate_m20891EF860B714562264126847FCCB8D78128AB3 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 TowerWeapon::get_Level()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TowerWeapon_get_Level_m5D20E8711385F405C9A9AF7DA90EC76068279869 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// System.Int32 TowerWeapon::get_UpgradeCost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TowerWeapon_get_UpgradeCost_m854753D88CF5ED0A177AF6159131CB3B63E2D486 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// System.Int32 TowerWeapon::get_SellCost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TowerWeapon_get_SellCost_m0228420BCB670C7B0AFACC70B98D3C193D169803 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// System.Int32 TowerWeapon::get_MaxLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TowerWeapon_get_MaxLevel_m0C2705C73739BF0EC924E4342ECFF82789875FBD (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean TowerWeapon::Upgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TowerWeapon_Upgrade_m79D0AC0BA996D2721000A078266E182F76F067E8 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// System.Void SystemTextViewer::PrintText(SystemType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemTextViewer_PrintText_m37FE36693493B9F5778C2B7D778AD641D0A66ED7 (SystemTextViewer_t8821BBC121D7F603E90E3F7B2634460B179A41B9* __this, int32_t ___type0, const RuntimeMethod* method) ;
// System.Void TowerWeapon::Sell()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_Sell_m9B816F59B3FAC76324771F3A7DC645062F5D4D66 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Tile>()
inline Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* Component_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3C9E6A980DA050E176CF32E9F6A5414E05E66998 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean Tile::get_IsBuildTower()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tile_get_IsBuildTower_m233F2108E499BF36313C767C696074461180B069_inline (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<TowerWeapon>()
inline TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* GameObject_GetComponent_TisTowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF_m344CABA096DE65B759CB2A378E21BAFF534A2FBD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void TowerWeapon::Setup(TowerSpawner,EnemySpawner,PlayerGold,Tile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_Setup_mED8499D9F7DE53C38D455F46090F283589953B76 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, TowerSpawner_t0F1E87A71018B019CF29878863AC60C0C4F91CF0* ___towerSpawner0, EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* ___enemySpawner1, PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* ___playerGold2, Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* ___ownerTile3, const RuntimeMethod* method) ;
// System.Void TowerSpawner::OnBuffAllBuffTowers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerSpawner_OnBuffAllBuffTowers_mBF8896D0A9C7D2A1F32E911B52CA6AC7A3A81FB5 (TowerSpawner_t0F1E87A71018B019CF29878863AC60C0C4F91CF0* __this, const RuntimeMethod* method) ;
// System.Void TowerSpawner/<OnTowerCancelSystem>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTowerCancelSystemU3Ed__9__ctor_m2B8F3083CEC7BE1771199FA1E5AD4B98FA1E730F (U3COnTowerCancelSystemU3Ed__9_t4C1532E59EB9DE85D03DDF4031CEDD35E004A43F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void TowerWeapon::OnBuffAroundTower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_OnBuffAroundTower_m01E143F61D1328EFB375D5E8CDC7EFC217392586 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void TowerWeapon::ChangeState(WeaponState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_ChangeState_mEF8142876DA3E0F2C7AF02BC6B6E402002A07823 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, int32_t ___newState0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void TowerWeapon::RotateToTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_RotateToTarget_m8DFB3CE735346CCE3C75D61DFC3A0802F68CFAD7 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void TowerWeapon/<SearchTarget>d__49::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSearchTargetU3Ed__49__ctor_mD6D8E7AD4EB998B99D26260F052C86E23DFC0607 (U3CSearchTargetU3Ed__49_t4E63CF5071EA0FD363D6C6F70E92C04BA4D160DC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void TowerWeapon/<TryAttackCannon>d__50::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryAttackCannonU3Ed__50__ctor_m3F1ACABA90C67D2479B749513307DE3CB38920B6 (U3CTryAttackCannonU3Ed__50_t4E7E5AF42A01F290DA542C850F77DC5F324EAB1B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void TowerWeapon/<TryAttackLaser>d__51::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryAttackLaserU3Ed__51__ctor_m48334155FF8E476D90CFDCB9B5D6F20D854B4366 (U3CTryAttackLaserU3Ed__51_t3F77C959D09116C08400F292D77A60DFEFA20FE6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 TowerWeapon::get_BuffLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TowerWeapon_get_BuffLevel_m67E3AFCFC2ADF31D95FAFB28225802105ED1102A_inline (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// System.Void TowerWeapon::set_AddedDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_set_AddedDamage_m5BC8F8484398482C54B34DC4644E2692F398A4C4 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void TowerWeapon::set_BuffLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_set_BuffLevel_m8D7456C595A82235DDC8FEC94A3DFBC12DEF62A1 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Enemy> EnemySpawner::get_EnemyList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* EnemySpawner_get_EnemyList_m74765A74E069D289DF48986FCCC642B1FBA188E0_inline (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Enemy>::get_Item(System.Int32)
inline Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* List_1_get_Item_m1B277B53168A4876E1F5CC6CE3F9A8C66F178962 (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* (*) (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Enemy>::get_Count()
inline int32_t List_1_get_Count_m06491E24E76E12248772D510B36BB496FE85048E_inline (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Projectile>()
inline Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* GameObject_GetComponent_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m13E535B8E623931B5A04462B85C02123CE2A6183 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Projectile::Setup(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Setup_m41B5BED9F4B5BA467C24BFCDE2180EE744F471F1 (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, float ___damage1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* Physics2D_RaycastAll_m0EBAB1266E23657A8F089323B7B71784AF6B3C7B (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit2D_get_transform_mA5E3F8DC9914E79D3C9F6F3F2515B49EEBB4564A (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RaycastHit2D_get_point_mB35E988E9E04328EFE926228A18334326721A36B (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_startWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_endWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform TowerWeapon::FindClosestAttackTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TowerWeapon_FindClosestAttackTarget_mC8A9A1F02DBAEE1F41B13F9BB61740F249B7F6AB (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// System.Boolean TowerWeapon::IsPossibleToAttackTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TowerWeapon_IsPossibleToAttackTarget_m5F45AFD1AF0CF73C0F612BB829D6DDDF04AF614D (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// System.Void TowerWeapon::SpawnProjectile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_SpawnProjectile_mC6B5B32263AD6B57E256D65A171833E827A93D16 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// System.Void TowerWeapon::EnableLaser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_EnableLaser_m7F1245B7F15DA5A3F8C0710FABE493813F2BD22D (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// System.Void TowerWeapon::DisableLaser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_DisableLaser_m1F3A96E7329A5583A8ED1346B7560801F630B7D1 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// System.Void TowerWeapon::SpawnLaser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_SpawnLaser_mBCA7AB4B946E3D8E83BCDF6193616BB74AA77CEC (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) ;
// System.Void EnemySpawner::StartWave(Wave)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_StartWave_m47DF7F2B66C8E09C7E01BDD2EAF9939A5EAB1CEE (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, Wave_t46A8424F3F35C64800660289794914462618636D ___wave0, const RuntimeMethod* method) ;
// System.Void StartScreenTMPAlpha::OnFade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartScreenTMPAlpha_OnFade_m3B3E189703F50D443CC6BC1ECF5A9FFDB7D86550 (StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator StartScreenTMPAlpha::FadeInOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartScreenTMPAlpha_FadeInOut_m379692F713EC81CCF2CD26D79C5B422E49E6B95D (StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B* __this, const RuntimeMethod* method) ;
// System.Void StartScreenTMPAlpha/<FadeInOut>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInOutU3Ed__4__ctor_m357F82B1DB53EAE6A4EC79F671E9B2881D36EB0B (U3CFadeInOutU3Ed__4_t815F8ED12B8378B29EFC52EA9A155DE4042003DB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void StartScreenTMPAlpha/<Fade>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__5__ctor_mD26358BE4CA0F3292CEAA15358D6BEEF8DAD7A51 (U3CFadeU3Ed__5_tC4D6281E4F2A8BD628A459BF6D4BBC927F059070* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator StartScreenTMPAlpha::Fade(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartScreenTMPAlpha_Fade_mB6285E87AD7DE020957AC2C3AA8096E612239EBC (StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B* __this, float ___start0, float ___end1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
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
// System.Void LoadingSceneController::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingSceneController_LoadScene_m82A8D94FFD6A7647AF2FE38F376CCF1C5A1920A4 (String_t* ___sceneName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A52C3C9D37BBFD5E5121B35BC4AF16D9B8BA0AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// nextScene = sceneName;
		String_t* L_0 = ___sceneName0;
		((LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5_StaticFields*)il2cpp_codegen_static_fields_for(LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5_il2cpp_TypeInfo_var))->___nextScene_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5_StaticFields*)il2cpp_codegen_static_fields_for(LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5_il2cpp_TypeInfo_var))->___nextScene_4), (void*)L_0);
		// SceneManager.LoadScene("LoadingScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral1A52C3C9D37BBFD5E5121B35BC4AF16D9B8BA0AA, NULL);
		// }
		return;
	}
}
// System.Void LoadingSceneController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingSceneController_Start_m9CA625032B5D3F3ADC6631E727DA7BF9B1934940 (LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(LoadSceneProcess());
		RuntimeObject* L_0;
		L_0 = LoadingSceneController_LoadSceneProcess_m95BA7AF06845F3723425871144AA5DB36F4E420E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LoadingSceneController::LoadSceneProcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadingSceneController_LoadSceneProcess_m95BA7AF06845F3723425871144AA5DB36F4E420E (LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadSceneProcessU3Ed__4_t3C47DDC7A300F983D5594AB91E6ADE95373AA4E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadSceneProcessU3Ed__4_t3C47DDC7A300F983D5594AB91E6ADE95373AA4E0* L_0 = (U3CLoadSceneProcessU3Ed__4_t3C47DDC7A300F983D5594AB91E6ADE95373AA4E0*)il2cpp_codegen_object_new(U3CLoadSceneProcessU3Ed__4_t3C47DDC7A300F983D5594AB91E6ADE95373AA4E0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadSceneProcessU3Ed__4__ctor_mDE31DD3A4C3AE86E25F578FE9663865C823C8A40(L_0, 0, NULL);
		U3CLoadSceneProcessU3Ed__4_t3C47DDC7A300F983D5594AB91E6ADE95373AA4E0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void LoadingSceneController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingSceneController__ctor_m9157D099E9CE01F99F64370D8737332BBB331F62 (LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5* __this, const RuntimeMethod* method) 
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
// System.Void LoadingSceneController/<LoadSceneProcess>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneProcessU3Ed__4__ctor_mDE31DD3A4C3AE86E25F578FE9663865C823C8A40 (U3CLoadSceneProcessU3Ed__4_t3C47DDC7A300F983D5594AB91E6ADE95373AA4E0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LoadingSceneController/<LoadSceneProcess>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneProcessU3Ed__4_System_IDisposable_Dispose_m13C348481DFA3981FE502944C08283E8504C1BA7 (U3CLoadSceneProcessU3Ed__4_t3C47DDC7A300F983D5594AB91E6ADE95373AA4E0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LoadingSceneController/<LoadSceneProcess>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadSceneProcessU3Ed__4_MoveNext_m2A539E611F79449CE5D28792F2B61C2B8B739029 (U3CLoadSceneProcessU3Ed__4_t3C47DDC7A300F983D5594AB91E6ADE95373AA4E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_005a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// AsyncOperation op = SceneManager.LoadSceneAsync(nextScene);
		String_t* L_4 = ((LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5_StaticFields*)il2cpp_codegen_static_fields_for(LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5_il2cpp_TypeInfo_var))->___nextScene_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_5;
		L_5 = SceneManager_LoadSceneAsync_m5855749CCB7CA99553A65AAA791623484FE7F184(L_4, NULL);
		__this->___U3CopU3E5__2_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CopU3E5__2_3), (void*)L_5);
		// op.allowSceneActivation = false;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_6 = __this->___U3CopU3E5__2_3;
		NullCheck(L_6);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_6, (bool)0, NULL);
		// float timer = 0f;
		__this->___U3CtimerU3E5__3_4 = (0.0f);
		goto IL_00dd;
	}

IL_004a:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (op.progress < 0.9f)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_7 = __this->___U3CopU3E5__2_3;
		NullCheck(L_7);
		float L_8;
		L_8 = AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE(L_7, NULL);
		if ((!(((float)L_8) < ((float)(0.899999976f)))))
		{
			goto IL_008b;
		}
	}
	{
		// progressBar.fillAmount = op.progress;
		LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5* L_9 = V_1;
		NullCheck(L_9);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = L_9->___progressBar_5;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_11 = __this->___U3CopU3E5__2_3;
		NullCheck(L_11);
		float L_12;
		L_12 = AsyncOperation_get_progress_mF3B2837C1A5DDF3C2F7A3BA1E449DD4C71C632EE(L_11, NULL);
		NullCheck(L_10);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_10, L_12, NULL);
		goto IL_00dd;
	}

IL_008b:
	{
		// timer += Time.unscaledDeltaTime;
		float L_13 = __this->___U3CtimerU3E5__3_4;
		float L_14;
		L_14 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		__this->___U3CtimerU3E5__3_4 = ((float)il2cpp_codegen_add(L_13, L_14));
		// progressBar.fillAmount = Mathf.Lerp(0.9f, 1f, timer);
		LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5* L_15 = V_1;
		NullCheck(L_15);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = L_15->___progressBar_5;
		float L_17 = __this->___U3CtimerU3E5__3_4;
		float L_18;
		L_18 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline((0.899999976f), (1.0f), L_17, NULL);
		NullCheck(L_16);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_16, L_18, NULL);
		// if (progressBar.fillAmount >= 1f)
		LoadingSceneController_tC3586BB3788011D5A123BB8CA47DD3E2D31734C5* L_19 = V_1;
		NullCheck(L_19);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_20 = L_19->___progressBar_5;
		NullCheck(L_20);
		float L_21;
		L_21 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline(L_20, NULL);
		if ((!(((float)L_21) >= ((float)(1.0f)))))
		{
			goto IL_00dd;
		}
	}
	{
		// op.allowSceneActivation = true;
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_22 = __this->___U3CopU3E5__2_3;
		NullCheck(L_22);
		AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_22, (bool)1, NULL);
		// yield break;
		return (bool)0;
	}

IL_00dd:
	{
		// while (!op.isDone)
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_23 = __this->___U3CopU3E5__2_3;
		NullCheck(L_23);
		bool L_24;
		L_24 = AsyncOperation_get_isDone_m68A0682777E2132FC033182E9F50303566AA354D(L_23, NULL);
		if (!L_24)
		{
			goto IL_004a;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object LoadingSceneController/<LoadSceneProcess>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadSceneProcessU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m532B8A106D2E8EC5866CA7781B29ACA577CFB30D (U3CLoadSceneProcessU3Ed__4_t3C47DDC7A300F983D5594AB91E6ADE95373AA4E0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LoadingSceneController/<LoadSceneProcess>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneProcessU3Ed__4_System_Collections_IEnumerator_Reset_mF512FBB0331E62CABC264E760DD255255139578B (U3CLoadSceneProcessU3Ed__4_t3C47DDC7A300F983D5594AB91E6ADE95373AA4E0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadSceneProcessU3Ed__4_System_Collections_IEnumerator_Reset_mF512FBB0331E62CABC264E760DD255255139578B_RuntimeMethod_var)));
	}
}
// System.Object LoadingSceneController/<LoadSceneProcess>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadSceneProcessU3Ed__4_System_Collections_IEnumerator_get_Current_mBC48A950800AD8092DCB7C9FC3413F8A189BE17B (U3CLoadSceneProcessU3Ed__4_t3C47DDC7A300F983D5594AB91E6ADE95373AA4E0* __this, const RuntimeMethod* method) 
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
// System.Void SceneLoad::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoad_Update_m76E6BFAC21FCDB4B7E8F77EB447E5B6F7EC48ABE (SceneLoad_tC696BDDDB799C18D95E9D7B59EFE98C9893A47F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)32), NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// LoadingSceneController.LoadScene("MainScene");
		LoadingSceneController_LoadScene_m82A8D94FFD6A7647AF2FE38F376CCF1C5A1920A4(_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void SceneLoad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoad__ctor_m8528315E2E98506800DE3E08AB3C0C9590D5A560 (SceneLoad_tC696BDDDB799C18D95E9D7B59EFE98C9893A47F9* __this, const RuntimeMethod* method) 
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
// System.Void Enemy::Setup(EnemySpawner,UnityEngine.Transform[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Setup_m5D4319F71CE56E91DDF71B948DD20A01419580B8 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* ___enemySpawner0, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___wayPoints1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMovement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2_m65EBB1D76E2217609D6953128347E9990EAD5440_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC865CC1250D741D59C9274B75CE11E9A71CA21A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// movement2D = GetComponent<Movement2D>();
		Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* L_0;
		L_0 = Component_GetComponent_TisMovement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2_m65EBB1D76E2217609D6953128347E9990EAD5440(__this, Component_GetComponent_TisMovement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2_m65EBB1D76E2217609D6953128347E9990EAD5440_RuntimeMethod_var);
		__this->___movement2D_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___movement2D_7), (void*)L_0);
		// this.enemySpawner = enemySpawner;
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_1 = ___enemySpawner0;
		__this->___enemySpawner_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemySpawner_8), (void*)L_1);
		// wayPointCount   = wayPoints.Length;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = ___wayPoints1;
		NullCheck(L_2);
		__this->___wayPointCount_4 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		// this.wayPoints  = new Transform[wayPointCount];
		int32_t L_3 = __this->___wayPointCount_4;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_4 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___wayPoints_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wayPoints_5), (void*)L_4);
		// this.wayPoints  = wayPoints;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_5 = ___wayPoints1;
		__this->___wayPoints_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wayPoints_5), (void*)L_5);
		// transform.position = wayPoints[currentIndex].position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_7 = ___wayPoints1;
		int32_t L_8 = __this->___currentIndex_6;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_11, NULL);
		// StartCoroutine("OnMove");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_12;
		L_12 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteralC865CC1250D741D59C9274B75CE11E9A71CA21A1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Enemy::OnMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enemy_OnMove_mA6DE3935FA39B2F7380E545B09340216C53DB478 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnMoveU3Ed__7_t9BC0B289627BCEF5370B56539AE1DA05C3477BBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnMoveU3Ed__7_t9BC0B289627BCEF5370B56539AE1DA05C3477BBA* L_0 = (U3COnMoveU3Ed__7_t9BC0B289627BCEF5370B56539AE1DA05C3477BBA*)il2cpp_codegen_object_new(U3COnMoveU3Ed__7_t9BC0B289627BCEF5370B56539AE1DA05C3477BBA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnMoveU3Ed__7__ctor_mBC376AEAB794048F722AADFC3EEF457280DD3B9F(L_0, 0, NULL);
		U3COnMoveU3Ed__7_t9BC0B289627BCEF5370B56539AE1DA05C3477BBA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Enemy::NextMoveTo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_NextMoveTo_m05FCC092EBD81D27DD0909DDF6596CFD4A32EFAE (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (currentIndex < wayPointCount - 1)
		int32_t L_0 = __this->___currentIndex_6;
		int32_t L_1 = __this->___wayPointCount_4;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, 1)))))
		{
			goto IL_0073;
		}
	}
	{
		// transform.position = wayPoints[currentIndex].position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = __this->___wayPoints_5;
		int32_t L_4 = __this->___currentIndex_6;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_7, NULL);
		// currentIndex++;
		int32_t L_8 = __this->___currentIndex_6;
		__this->___currentIndex_6 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		// Vector3 direction = (wayPoints[currentIndex].position - transform.position).normalized;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_9 = __this->___wayPoints_5;
		int32_t L_10 = __this->___currentIndex_6;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_13, L_15, NULL);
		V_1 = L_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		V_0 = L_17;
		// movement2D.MoveTo(direction);
		Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* L_18 = __this->___movement2D_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_0;
		NullCheck(L_18);
		Movement2D_MoveTo_mF1CB1E7E740D8CD33DB87DF41A6078E43A11CE08_inline(L_18, L_19, NULL);
		return;
	}

IL_0073:
	{
		// gold = 0;
		__this->___gold_9 = 0;
		// OnDie(EnemyDestroyType.Arrive);
		Enemy_OnDie_mA3EB0D35F224F4F556CFC2068F786B0F8D4F9D36(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void Enemy::OnDie(EnemyDestroyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnDie_mA3EB0D35F224F4F556CFC2068F786B0F8D4F9D36 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	{
		// enemySpawner.DestroyEnemy(type, this, gold);
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_0 = __this->___enemySpawner_8;
		int32_t L_1 = ___type0;
		int32_t L_2 = __this->___gold_9;
		NullCheck(L_0);
		EnemySpawner_DestroyEnemy_m810309A07F1229081E6AEC1A272CEBDF871245CC(L_0, L_1, __this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// private int             gold = 10;
		__this->___gold_9 = ((int32_t)10);
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
// System.Void Enemy/<OnMove>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnMoveU3Ed__7__ctor_mBC376AEAB794048F722AADFC3EEF457280DD3B9F (U3COnMoveU3Ed__7_t9BC0B289627BCEF5370B56539AE1DA05C3477BBA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Enemy/<OnMove>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnMoveU3Ed__7_System_IDisposable_Dispose_m8C56215454080DC3A99088CC620E52ECEE9D5BC6 (U3COnMoveU3Ed__7_t9BC0B289627BCEF5370B56539AE1DA05C3477BBA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Enemy/<OnMove>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnMoveU3Ed__7_MoveNext_mF2ADCF59E53D7A524CC0ED388C4627874251A990 (U3COnMoveU3Ed__7_t9BC0B289627BCEF5370B56539AE1DA05C3477BBA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0089;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// NextMoveTo();
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_4 = V_1;
		NullCheck(L_4);
		Enemy_NextMoveTo_m05FCC092EBD81D27DD0909DDF6596CFD4A32EFAE(L_4, NULL);
	}

IL_0024:
	{
		// transform.Rotate(Vector3.forward * 10);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_5 = V_1;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_7, (10.0f), NULL);
		NullCheck(L_6);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_6, L_8, NULL);
		// if (Vector3.Distance(transform.position, wayPoints[currentIndex].position) < 0.02f * movement2D.MoveSpeed)
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_9 = V_1;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_12 = V_1;
		NullCheck(L_12);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_13 = L_12->___wayPoints_5;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = L_14->___currentIndex_6;
		NullCheck(L_13);
		int32_t L_16 = L_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		float L_19;
		L_19 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_11, L_18, NULL);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_20 = V_1;
		NullCheck(L_20);
		Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* L_21 = L_20->___movement2D_7;
		NullCheck(L_21);
		float L_22;
		L_22 = Movement2D_get_MoveSpeed_mD027A0B2C2DB291D9C10061D7E9980AC7BAF3CC7_inline(L_21, NULL);
		if ((!(((float)L_19) < ((float)((float)il2cpp_codegen_multiply((0.0199999996f), L_22))))))
		{
			goto IL_0079;
		}
	}
	{
		// NextMoveTo();
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_23 = V_1;
		NullCheck(L_23);
		Enemy_NextMoveTo_m05FCC092EBD81D27DD0909DDF6596CFD4A32EFAE(L_23, NULL);
	}

IL_0079:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0089:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while(true)
		goto IL_0024;
	}
}
// System.Object Enemy/<OnMove>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnMoveU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0F9037D2EE3C044AF674A3B3BC53BEE90EF7CF34 (U3COnMoveU3Ed__7_t9BC0B289627BCEF5370B56539AE1DA05C3477BBA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Enemy/<OnMove>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnMoveU3Ed__7_System_Collections_IEnumerator_Reset_mC0AD912989C87A00B1A7BD83F45B3FFB0A1EBB74 (U3COnMoveU3Ed__7_t9BC0B289627BCEF5370B56539AE1DA05C3477BBA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnMoveU3Ed__7_System_Collections_IEnumerator_Reset_mC0AD912989C87A00B1A7BD83F45B3FFB0A1EBB74_RuntimeMethod_var)));
	}
}
// System.Object Enemy/<OnMove>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnMoveU3Ed__7_System_Collections_IEnumerator_get_Current_mB90C7678D010EAD15D56BF0040C7279512A1A920 (U3COnMoveU3Ed__7_t9BC0B289627BCEF5370B56539AE1DA05C3477BBA* __this, const RuntimeMethod* method) 
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
// System.Single EnemyHP::get_MaxHP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnemyHP_get_MaxHP_m464A78A22573CE8C9B945AF5FC6C3DD9DAA4E843 (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, const RuntimeMethod* method) 
{
	{
		// public float            MaxHP => maxHP;
		float L_0 = __this->___maxHP_4;
		return L_0;
	}
}
// System.Single EnemyHP::get_CurrentHP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnemyHP_get_CurrentHP_m1AFCFF4BE6BC8821B29D08C4A03A9B199AAF0A47 (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, const RuntimeMethod* method) 
{
	{
		// public float            CurrentHP => currentHP;
		float L_0 = __this->___currentHP_5;
		return L_0;
	}
}
// System.Void EnemyHP::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHP_Awake_mD025776EB02015CDFAF4B85C845013882C40A65D (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentHP       = maxHP;
		float L_0 = __this->___maxHP_4;
		__this->___currentHP_5 = L_0;
		// enemy           = GetComponent<Enemy>();
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_1;
		L_1 = Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11(__this, Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11_RuntimeMethod_var);
		__this->___enemy_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemy_7), (void*)L_1);
		// spriteRenderer  = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___spriteRenderer_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_8), (void*)L_2);
		// }
		return;
	}
}
// System.Void EnemyHP::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHP_TakeDamage_m319B5C9B2F8231DAD285D4F4E369CE9B13F22A63 (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, float ___damage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DBDE708A65BE7036505CCBEEA5644AAD9B7311);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isDie == true) return;
		bool L_0 = __this->___isDie_6;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (isDie == true) return;
		return;
	}

IL_0009:
	{
		// currentHP -= damage;
		float L_1 = __this->___currentHP_5;
		float L_2 = ___damage0;
		__this->___currentHP_5 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// StopCoroutine("HitAlphaAnimation");
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(__this, _stringLiteral37DBDE708A65BE7036505CCBEEA5644AAD9B7311, NULL);
		// StartCoroutine("HitAlphaAnimation");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral37DBDE708A65BE7036505CCBEEA5644AAD9B7311, NULL);
		// if (currentHP <= 0)
		float L_4 = __this->___currentHP_5;
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_004e;
		}
	}
	{
		// isDie = true;
		__this->___isDie_6 = (bool)1;
		// enemy.OnDie(EnemyDestroyType.Kill);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_5 = __this->___enemy_7;
		NullCheck(L_5);
		Enemy_OnDie_mA3EB0D35F224F4F556CFC2068F786B0F8D4F9D36(L_5, 0, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator EnemyHP::HitAlphaAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyHP_HitAlphaAnimation_mE95B2466EA4BBD7230B8BF9DE3F3F49F442D508F (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CHitAlphaAnimationU3Ed__11_t8CA3EF4CD288F052B7AB807F2BEBD0383005B105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CHitAlphaAnimationU3Ed__11_t8CA3EF4CD288F052B7AB807F2BEBD0383005B105* L_0 = (U3CHitAlphaAnimationU3Ed__11_t8CA3EF4CD288F052B7AB807F2BEBD0383005B105*)il2cpp_codegen_object_new(U3CHitAlphaAnimationU3Ed__11_t8CA3EF4CD288F052B7AB807F2BEBD0383005B105_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CHitAlphaAnimationU3Ed__11__ctor_mBA0591793EB0AD5B56ABC73D3AA70DDBD3A334A9(L_0, 0, NULL);
		U3CHitAlphaAnimationU3Ed__11_t8CA3EF4CD288F052B7AB807F2BEBD0383005B105* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EnemyHP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHP__ctor_m2A18417A936A42002D14F08A999EBB8142789167 (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, const RuntimeMethod* method) 
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
// System.Void EnemyHP/<HitAlphaAnimation>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHitAlphaAnimationU3Ed__11__ctor_mBA0591793EB0AD5B56ABC73D3AA70DDBD3A334A9 (U3CHitAlphaAnimationU3Ed__11_t8CA3EF4CD288F052B7AB807F2BEBD0383005B105* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EnemyHP/<HitAlphaAnimation>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHitAlphaAnimationU3Ed__11_System_IDisposable_Dispose_m5A4EE3B4004575F9BE1AE212E6371B10095DBFE9 (U3CHitAlphaAnimationU3Ed__11_t8CA3EF4CD288F052B7AB807F2BEBD0383005B105* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EnemyHP/<HitAlphaAnimation>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CHitAlphaAnimationU3Ed__11_MoveNext_m8B4E2B1A36551D51B74B5235EF203212D23803FE (U3CHitAlphaAnimationU3Ed__11_t8CA3EF4CD288F052B7AB807F2BEBD0383005B105* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0069;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Color color = spriteRenderer.color;
		EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* L_4 = V_1;
		NullCheck(L_4);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = L_4->___spriteRenderer_8;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_5, NULL);
		__this->___U3CcolorU3E5__2_3 = L_6;
		// color.a = 0.4f;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_7 = (&__this->___U3CcolorU3E5__2_3);
		L_7->___a_3 = (0.400000006f);
		// spriteRenderer.color = color;
		EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* L_8 = V_1;
		NullCheck(L_8);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = L_8->___spriteRenderer_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___U3CcolorU3E5__2_3;
		NullCheck(L_9);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_9, L_10, NULL);
		// yield return new WaitForSeconds(0.05f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, (0.0500000007f), NULL);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0069:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// color.a = 1.0f;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_12 = (&__this->___U3CcolorU3E5__2_3);
		L_12->___a_3 = (1.0f);
		// spriteRenderer.color = color;
		EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* L_13 = V_1;
		NullCheck(L_13);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_14 = L_13->___spriteRenderer_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = __this->___U3CcolorU3E5__2_3;
		NullCheck(L_14);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_14, L_15, NULL);
		// }
		return (bool)0;
	}
}
// System.Object EnemyHP/<HitAlphaAnimation>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CHitAlphaAnimationU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEE0E0ED70B0318CC7E1CF054C6ACFC6E52DBCF15 (U3CHitAlphaAnimationU3Ed__11_t8CA3EF4CD288F052B7AB807F2BEBD0383005B105* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EnemyHP/<HitAlphaAnimation>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHitAlphaAnimationU3Ed__11_System_Collections_IEnumerator_Reset_m48073BC9C00E20EDFBEA2474AF1CD48BD0BF4F54 (U3CHitAlphaAnimationU3Ed__11_t8CA3EF4CD288F052B7AB807F2BEBD0383005B105* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CHitAlphaAnimationU3Ed__11_System_Collections_IEnumerator_Reset_m48073BC9C00E20EDFBEA2474AF1CD48BD0BF4F54_RuntimeMethod_var)));
	}
}
// System.Object EnemyHP/<HitAlphaAnimation>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CHitAlphaAnimationU3Ed__11_System_Collections_IEnumerator_get_Current_mF8B3BDE2CEC2643DE13B318FC9A89087F49B3FEC (U3CHitAlphaAnimationU3Ed__11_t8CA3EF4CD288F052B7AB807F2BEBD0383005B105* __this, const RuntimeMethod* method) 
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
// System.Void EnemyHPViewer::Setup(EnemyHP)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHPViewer_Setup_mF5CF139BAAD60BD13EA9E18895837606198EBE40 (EnemyHPViewer_t69F02FC5891226039A889A5B4A679ACF66CEC88F* __this, EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* ___enemyHP0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.enemyHP = enemyHP;
		EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* L_0 = ___enemyHP0;
		__this->___enemyHP_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyHP_4), (void*)L_0);
		// hpSlider     = GetComponent<Slider>();
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1;
		L_1 = Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA(__this, Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		__this->___hpSlider_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hpSlider_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void EnemyHPViewer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHPViewer_Update_m5E7F5F23682FCA9E3C155AD54A973074D9E5E670 (EnemyHPViewer_t69F02FC5891226039A889A5B4A679ACF66CEC88F* __this, const RuntimeMethod* method) 
{
	{
		// hpSlider.value = enemyHP.CurrentHP / enemyHP.MaxHP;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___hpSlider_5;
		EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* L_1 = __this->___enemyHP_4;
		NullCheck(L_1);
		float L_2;
		L_2 = EnemyHP_get_CurrentHP_m1AFCFF4BE6BC8821B29D08C4A03A9B199AAF0A47_inline(L_1, NULL);
		EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* L_3 = __this->___enemyHP_4;
		NullCheck(L_3);
		float L_4;
		L_4 = EnemyHP_get_MaxHP_m464A78A22573CE8C9B945AF5FC6C3DD9DAA4E843_inline(L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, ((float)(L_2/L_4)));
		// }
		return;
	}
}
// System.Void EnemyHPViewer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyHPViewer__ctor_m404B4AB27B36AAED91D0887971238064FBCDB6A8 (EnemyHPViewer_t69F02FC5891226039A889A5B4A679ACF66CEC88F* __this, const RuntimeMethod* method) 
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
// System.Collections.Generic.List`1<Enemy> EnemySpawner::get_EnemyList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* EnemySpawner_get_EnemyList_m74765A74E069D289DF48986FCCC642B1FBA188E0 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	{
		// public List<Enemy>  EnemyList => enemyList;
		List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* L_0 = __this->___enemyList_11;
		return L_0;
	}
}
// System.Int32 EnemySpawner::get_CurrentEnemyCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnemySpawner_get_CurrentEnemyCount_m4173A42C959B2BE0535E263EF31FEE54010D9C07 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	{
		// public int          CurrentEnemyCount => currentEnemyCount;
		int32_t L_0 = __this->___currentEnemyCount_10;
		return L_0;
	}
}
// System.Int32 EnemySpawner::get_MaxEnemyCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnemySpawner_get_MaxEnemyCount_m184C21327C84C0C6DB9EE64D7170EAEC45A0A58F (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	{
		// public int          MaxEnemyCount => currentWave.maxEnemyCount;
		Wave_t46A8424F3F35C64800660289794914462618636D* L_0 = (&__this->___currentWave_9);
		int32_t L_1 = L_0->___maxEnemyCount_1;
		return L_1;
	}
}
// System.Void EnemySpawner::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_Awake_m203DEC4DF92AA14A3CB0377AD355871C394DFCB5 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1508A8255188F2CDBCE32D3835B8FF2E5044318E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemyList = new List<Enemy>();
		List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* L_0 = (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B*)il2cpp_codegen_object_new(List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m1508A8255188F2CDBCE32D3835B8FF2E5044318E(L_0, List_1__ctor_m1508A8255188F2CDBCE32D3835B8FF2E5044318E_RuntimeMethod_var);
		__this->___enemyList_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyList_11), (void*)L_0);
		// }
		return;
	}
}
// System.Void EnemySpawner::StartWave(Wave)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_StartWave_m47DF7F2B66C8E09C7E01BDD2EAF9939A5EAB1CEE (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, Wave_t46A8424F3F35C64800660289794914462618636D ___wave0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentWave = wave;
		Wave_t46A8424F3F35C64800660289794914462618636D L_0 = ___wave0;
		__this->___currentWave_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___currentWave_9))->___enemyPrefabs_2), (void*)NULL);
		// currentEnemyCount = currentWave.maxEnemyCount;
		Wave_t46A8424F3F35C64800660289794914462618636D* L_1 = (&__this->___currentWave_9);
		int32_t L_2 = L_1->___maxEnemyCount_1;
		__this->___currentEnemyCount_10 = L_2;
		// StartCoroutine("SpawnEnemy");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EnemySpawner::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemySpawner_SpawnEnemy_mF57419462C0D255A9F4485FDA772E17C60B831DC (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnEnemyU3Ed__16_tD643219850630BE4CE223742945F4962D7B046BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnEnemyU3Ed__16_tD643219850630BE4CE223742945F4962D7B046BF* L_0 = (U3CSpawnEnemyU3Ed__16_tD643219850630BE4CE223742945F4962D7B046BF*)il2cpp_codegen_object_new(U3CSpawnEnemyU3Ed__16_tD643219850630BE4CE223742945F4962D7B046BF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpawnEnemyU3Ed__16__ctor_m80A0E98A0DF810B4CD92071E130FF579F3B739C6(L_0, 0, NULL);
		U3CSpawnEnemyU3Ed__16_tD643219850630BE4CE223742945F4962D7B046BF* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EnemySpawner::SpawnEnemyHPSlider(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_SpawnEnemyHPSlider_mC4FFC130D8303D98E630AE59E5A53801E2C232D4 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___enemy0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyHPViewer_t69F02FC5891226039A889A5B4A679ACF66CEC88F_m635D367901E84F11D3EB4C56BAC98770C3BCF179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mD8D79A38B1B77044341029CE43038AEBA28284DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSliderPositionAutoSetter_t09DA476805F4D7B3E5284B7265997B0C1C8B9427_m29C83443BE01DA131F44107553004F54946D6EAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject sliderClone = Instantiate(enemyHPSliderPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___enemyHPSliderPrefab_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		// sliderClone.transform.SetParent(canvasTransform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___canvasTransform_5;
		NullCheck(L_3);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_3, L_4, NULL);
		// sliderClone.transform.localScale = Vector3.one;     // ??? ???? (1, 1, 1,)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_2;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_6);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_6, L_7, NULL);
		// sliderClone.GetComponent<SliderPositionAutoSetter>().Setup(enemy.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_5;
		NullCheck(L_8);
		SliderPositionAutoSetter_t09DA476805F4D7B3E5284B7265997B0C1C8B9427* L_9;
		L_9 = GameObject_GetComponent_TisSliderPositionAutoSetter_t09DA476805F4D7B3E5284B7265997B0C1C8B9427_m29C83443BE01DA131F44107553004F54946D6EAD(L_8, GameObject_GetComponent_TisSliderPositionAutoSetter_t09DA476805F4D7B3E5284B7265997B0C1C8B9427_m29C83443BE01DA131F44107553004F54946D6EAD_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___enemy0;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_9);
		SliderPositionAutoSetter_Setup_m8903400BCD1CB9AF6CDB2393E3D308E6C9E0848A(L_9, L_11, NULL);
		// sliderClone.GetComponent<EnemyHPViewer>().Setup(enemy.GetComponent<EnemyHP>());
		NullCheck(L_8);
		EnemyHPViewer_t69F02FC5891226039A889A5B4A679ACF66CEC88F* L_12;
		L_12 = GameObject_GetComponent_TisEnemyHPViewer_t69F02FC5891226039A889A5B4A679ACF66CEC88F_m635D367901E84F11D3EB4C56BAC98770C3BCF179(L_8, GameObject_GetComponent_TisEnemyHPViewer_t69F02FC5891226039A889A5B4A679ACF66CEC88F_m635D367901E84F11D3EB4C56BAC98770C3BCF179_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = ___enemy0;
		NullCheck(L_13);
		EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* L_14;
		L_14 = GameObject_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mD8D79A38B1B77044341029CE43038AEBA28284DC(L_13, GameObject_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mD8D79A38B1B77044341029CE43038AEBA28284DC_RuntimeMethod_var);
		NullCheck(L_12);
		EnemyHPViewer_Setup_mF5CF139BAAD60BD13EA9E18895837606198EBE40(L_12, L_14, NULL);
		// }
		return;
	}
}
// System.Void EnemySpawner::DestroyEnemy(EnemyDestroyType,Enemy,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_DestroyEnemy_m810309A07F1229081E6AEC1A272CEBDF871245CC (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, int32_t ___type0, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___enemy1, int32_t ___gold2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m84DCF90974973450ABD8110FD9B80101AD2FBDF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (type == EnemyDestroyType.Arrive)
		int32_t L_0 = ___type0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		// playerHP.TakeDamage(1);
		PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* L_1 = __this->___playerHP_7;
		NullCheck(L_1);
		PlayerHP_TakeDamage_m92376041925A91F87344D006C61B5DCD92BE8047(L_1, (1.0f), NULL);
		goto IL_002c;
	}

IL_0016:
	{
		// else if (type == EnemyDestroyType.Kill)
		int32_t L_2 = ___type0;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		// playerGold.CurrentGold += gold;
		PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* L_3 = __this->___playerGold_8;
		PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = PlayerGold_get_CurrentGold_mA17DB7136BE6396A2A166C49FC9AD39C22F471D7_inline(L_4, NULL);
		int32_t L_6 = ___gold2;
		NullCheck(L_4);
		PlayerGold_set_CurrentGold_m1137A37748EADE9FC54AA7580A472567A7E8B71C(L_4, ((int32_t)il2cpp_codegen_add(L_5, L_6)), NULL);
	}

IL_002c:
	{
		// currentEnemyCount--;
		int32_t L_7 = __this->___currentEnemyCount_10;
		__this->___currentEnemyCount_10 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		// enemyList.Remove(enemy);
		List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* L_8 = __this->___enemyList_11;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_9 = ___enemy1;
		NullCheck(L_8);
		bool L_10;
		L_10 = List_1_Remove_m84DCF90974973450ABD8110FD9B80101AD2FBDF4(L_8, L_9, List_1_Remove_m84DCF90974973450ABD8110FD9B80101AD2FBDF4_RuntimeMethod_var);
		// Destroy(enemy.gameObject);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_11 = ___enemy1;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_12, NULL);
		// }
		return;
	}
}
// System.Void EnemySpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner__ctor_m619CE38261A8A67AB91D66ED5BE44E56C1897E74 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
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
// System.Void EnemySpawner/<SpawnEnemy>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyU3Ed__16__ctor_m80A0E98A0DF810B4CD92071E130FF579F3B739C6 (U3CSpawnEnemyU3Ed__16_tD643219850630BE4CE223742945F4962D7B046BF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EnemySpawner/<SpawnEnemy>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyU3Ed__16_System_IDisposable_Dispose_mA0BB11F6036A6CDB422F49B14E3763DDFEF60CBA (U3CSpawnEnemyU3Ed__16_tD643219850630BE4CE223742945F4962D7B046BF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EnemySpawner/<SpawnEnemy>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnEnemyU3Ed__16_MoveNext_m8EB39877CA77866F5A326F25940C1EA0259F6981 (U3CSpawnEnemyU3Ed__16_tD643219850630BE4CE223742945F4962D7B046BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5212A0E073717BF79B93BBA707AB20B862DEC2C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* V_4 = NULL;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_00af;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int spawnEnemyCount = 0;
		__this->___U3CspawnEnemyCountU3E5__2_3 = 0;
		goto IL_00b6;
	}

IL_002d:
	{
		// int        enemyIndex = Random.Range(0, currentWave.enemyPrefabs.Length);
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_4 = V_1;
		NullCheck(L_4);
		Wave_t46A8424F3F35C64800660289794914462618636D* L_5 = (&L_4->___currentWave_9);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = L_5->___enemyPrefabs_2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		V_2 = L_7;
		// GameObject clone      = Instantiate(currentWave.enemyPrefabs[enemyIndex]);
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_8 = V_1;
		NullCheck(L_8);
		Wave_t46A8424F3F35C64800660289794914462618636D* L_9 = (&L_8->___currentWave_9);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = L_9->___enemyPrefabs_2;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_13, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		V_3 = L_14;
		// Enemy      enemy      = clone.GetComponent<Enemy>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_3;
		NullCheck(L_15);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_16;
		L_16 = GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F(L_15, GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F_RuntimeMethod_var);
		V_4 = L_16;
		// enemy.Setup(this, wayPoints);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_17 = V_4;
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_18 = V_1;
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_19 = V_1;
		NullCheck(L_19);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_20 = L_19->___wayPoints_6;
		NullCheck(L_17);
		Enemy_Setup_m5D4319F71CE56E91DDF71B948DD20A01419580B8(L_17, L_18, L_20, NULL);
		// enemyList.Add(enemy);       // ??????? ??? ?????? ?? ???? ????
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_21 = V_1;
		NullCheck(L_21);
		List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* L_22 = L_21->___enemyList_11;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_23 = V_4;
		NullCheck(L_22);
		List_1_Add_m5212A0E073717BF79B93BBA707AB20B862DEC2C0_inline(L_22, L_23, List_1_Add_m5212A0E073717BF79B93BBA707AB20B862DEC2C0_RuntimeMethod_var);
		// SpawnEnemyHPSlider(clone);  // ?? ??? UI ???? ?? ????
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_24 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_3;
		NullCheck(L_24);
		EnemySpawner_SpawnEnemyHPSlider_mC4FFC130D8303D98E630AE59E5A53801E2C232D4(L_24, L_25, NULL);
		// spawnEnemyCount++;
		int32_t L_26 = __this->___U3CspawnEnemyCountU3E5__2_3;
		V_5 = L_26;
		int32_t L_27 = V_5;
		__this->___U3CspawnEnemyCountU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		// yield return new WaitForSeconds(currentWave.spawnTime);
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_28 = V_1;
		NullCheck(L_28);
		Wave_t46A8424F3F35C64800660289794914462618636D* L_29 = (&L_28->___currentWave_9);
		float L_30 = L_29->___spawnTime_0;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_31 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_31, L_30, NULL);
		__this->___U3CU3E2__current_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_31);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00af:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00b6:
	{
		// while(spawnEnemyCount < currentWave.maxEnemyCount)
		int32_t L_32 = __this->___U3CspawnEnemyCountU3E5__2_3;
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_33 = V_1;
		NullCheck(L_33);
		Wave_t46A8424F3F35C64800660289794914462618636D* L_34 = (&L_33->___currentWave_9);
		int32_t L_35 = L_34->___maxEnemyCount_1;
		if ((((int32_t)L_32) < ((int32_t)L_35)))
		{
			goto IL_002d;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object EnemySpawner/<SpawnEnemy>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnEnemyU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE69AE994E166D2ACD06CFB5B19923B09605BD7C5 (U3CSpawnEnemyU3Ed__16_tD643219850630BE4CE223742945F4962D7B046BF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EnemySpawner/<SpawnEnemy>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyU3Ed__16_System_Collections_IEnumerator_Reset_m30E92657A5C47102080194F35595632E094B0B57 (U3CSpawnEnemyU3Ed__16_tD643219850630BE4CE223742945F4962D7B046BF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnEnemyU3Ed__16_System_Collections_IEnumerator_Reset_m30E92657A5C47102080194F35595632E094B0B57_RuntimeMethod_var)));
	}
}
// System.Object EnemySpawner/<SpawnEnemy>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnEnemyU3Ed__16_System_Collections_IEnumerator_get_Current_m0D9EBCD1DE61B1F113F0B31A5E8446AED45F3398 (U3CSpawnEnemyU3Ed__16_tD643219850630BE4CE223742945F4962D7B046BF* __this, const RuntimeMethod* method) 
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
// System.Void GameOver::MainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_MainMenu_m5D0F4937CCCB8735607AA50BB9D886538BA18B81 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LoadingSceneController.LoadScene("MainScene");
		LoadingSceneController_LoadScene_m82A8D94FFD6A7647AF2FE38F376CCF1C5A1920A4(_stringLiteral884820433266E121D9AF505AF4DE98B3BA081DC8, NULL);
		// }
		return;
	}
}
// System.Void GameOver::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_Exit_m4E705BA5006583EAF1B6677FA4368B991683A37A (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void GameOver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver__ctor_m2D4239F9C4BCE2EBFD1D1D6FAFEBAD05F65399B2 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
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
// System.Void GameOverCheck::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverCheck_Awake_mEA4B9506E1A2ED359BF8FB37AFBF0E4F47D88BE1 (GameOverCheck_t6628E2C305AE819CB76F2E8CA0BD5F8C1C41867B* __this, const RuntimeMethod* method) 
{
	{
		// gameOverPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameOverPanel_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// gameOverCheck = false;
		__this->___gameOverCheck_6 = (bool)0;
		// }
		return;
	}
}
// System.Void GameOverCheck::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverCheck_Update_mB2019ADE278773BA24D2E22A4534D752BDAE9FDA (GameOverCheck_t6628E2C305AE819CB76F2E8CA0BD5F8C1C41867B* __this, const RuntimeMethod* method) 
{
	{
		// if (playerHP.CurrentHP <= 0 && !gameOverCheck)
		PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* L_0 = __this->___playerHP_4;
		NullCheck(L_0);
		float L_1;
		L_1 = PlayerHP_get_CurrentHP_m187C956F1BF80DC9AEF705935571087303834433_inline(L_0, NULL);
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = __this->___gameOverCheck_6;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		// GameOverPanel();
		GameOverCheck_GameOverPanel_m08EB13D5331D4070BB7873037F0F0DBF0E4D146D(__this, NULL);
		// gameOverCheck = true;
		__this->___gameOverCheck_6 = (bool)1;
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void GameOverCheck::GameOverPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverCheck_GameOverPanel_m08EB13D5331D4070BB7873037F0F0DBF0E4D146D (GameOverCheck_t6628E2C305AE819CB76F2E8CA0BD5F8C1C41867B* __this, const RuntimeMethod* method) 
{
	{
		// gameOverPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameOverPanel_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameOverCheck::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverCheck__ctor_m6E87246F34D148851DCBC1F384BCB26C4526D83A (GameOverCheck_t6628E2C305AE819CB76F2E8CA0BD5F8C1C41867B* __this, const RuntimeMethod* method) 
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
// System.Void Movement2D::set_MoveSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement2D_set_MoveSpeed_m5D03D594CDCC55E8D12073238219BFB5E8B3B943 (Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => moveSpeed = Mathf.Max(0, value);
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((0.0f), L_0, NULL);
		__this->___moveSpeed_4 = L_1;
		return;
	}
}
// System.Single Movement2D::get_MoveSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Movement2D_get_MoveSpeed_mD027A0B2C2DB291D9C10061D7E9980AC7BAF3CC7 (Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* __this, const RuntimeMethod* method) 
{
	{
		// get => moveSpeed;
		float L_0 = __this->___moveSpeed_4;
		return L_0;
	}
}
// System.Void Movement2D::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement2D_Awake_m95B462631531278C69A7F341FD07E656F492CBA9 (Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* __this, const RuntimeMethod* method) 
{
	{
		// baseMoveSpeed = moveSpeed;
		float L_0 = __this->___moveSpeed_4;
		__this->___baseMoveSpeed_6 = L_0;
		// }
		return;
	}
}
// System.Void Movement2D::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement2D_Update_mB5DC552DDCE8197CB716954D4926F08F28911E48 (Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* __this, const RuntimeMethod* method) 
{
	{
		// transform.position += moveDirection * moveSpeed * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___moveDirection_5;
		float L_4 = __this->___moveSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, L_4, NULL);
		float L_6;
		L_6 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_2, L_7, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_8, NULL);
		// }
		return;
	}
}
// System.Void Movement2D::MoveTo(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement2D_MoveTo_mF1CB1E7E740D8CD33DB87DF41A6078E43A11CE08 (Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) 
{
	{
		// moveDirection = direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___direction0;
		__this->___moveDirection_5 = L_0;
		// }
		return;
	}
}
// System.Void Movement2D::ResetMoveSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement2D_ResetMoveSpeed_mB6DFE96C5AE97EF55D4DBEE0F0A0F9CE98A0D2D9 (Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* __this, const RuntimeMethod* method) 
{
	{
		// moveSpeed = baseMoveSpeed;
		float L_0 = __this->___baseMoveSpeed_6;
		__this->___moveSpeed_4 = L_0;
		// }
		return;
	}
}
// System.Void Movement2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement2D__ctor_m50EA76EF9E978516DC543814A4102D9B6FB6986F (Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 moveDirection = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___moveDirection_5 = L_0;
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
// System.Void ObjectDetector::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDetector_Awake_mB0CB3C0601CB677F9C32783371A0F3DBB6BF868D (ObjectDetector_tFB353B01D51F3E496A54E862DA5ED92D26B10FC6* __this, const RuntimeMethod* method) 
{
	{
		// mainCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		__this->___mainCamera_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCamera_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void ObjectDetector::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDetector_Update_mEEA6794EB5FE2190EAC704F5ACBE7EB2192DAFF4 (ObjectDetector_tFB353B01D51F3E496A54E862DA5ED92D26B10FC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral952CAC206E30AA9CB06A5D717A4FD7CA2320B766);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA12DF7E063F9EDD6CB3B99E1A6200411CA060DEE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (EventSystem.current.IsPointerOverGameObject() == true)
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38(L_0, NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		return;
	}

IL_000d:
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_2;
		L_2 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (!L_2)
		{
			goto IL_00b6;
		}
	}
	{
		// ray = mainCamera.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___mainCamera_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_3);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5;
		L_5 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_3, L_4, NULL);
		__this->___ray_7 = L_5;
		// if (Physics.Raycast(ray, out hit, Mathf.Infinity))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_6 = __this->___ray_7;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_7 = (&__this->___hit_8);
		bool L_8;
		L_8 = Physics_Raycast_m9D43811EF26E70072B39A8CE10402EE074A61901(L_6, L_7, (std::numeric_limits<float>::infinity()), NULL);
		if (!L_8)
		{
			goto IL_00f0;
		}
	}
	{
		// hitTransform = hit.transform;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_9 = (&__this->___hit_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_9, NULL);
		__this->___hitTransform_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hitTransform_9), (void*)L_10);
		// if (hit.transform.CompareTag("Tile"))
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_11 = (&__this->___hit_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_11, NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_12, _stringLiteralA12DF7E063F9EDD6CB3B99E1A6200411CA060DEE, NULL);
		if (!L_13)
		{
			goto IL_0088;
		}
	}
	{
		// towerSpawner.SpawnTower(hit.transform);
		TowerSpawner_t0F1E87A71018B019CF29878863AC60C0C4F91CF0* L_14 = __this->___towerSpawner_4;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_15 = (&__this->___hit_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_15, NULL);
		NullCheck(L_14);
		TowerSpawner_SpawnTower_m054C4B9E93BEC6D1286DEFE90E0B99ACC7463558(L_14, L_16, NULL);
		return;
	}

IL_0088:
	{
		// else if (hit.transform.CompareTag("Tower"))
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_17 = (&__this->___hit_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_17, NULL);
		NullCheck(L_18);
		bool L_19;
		L_19 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_18, _stringLiteral952CAC206E30AA9CB06A5D717A4FD7CA2320B766, NULL);
		if (!L_19)
		{
			goto IL_00f0;
		}
	}
	{
		// towerDataViewer.OnPanel(hit.transform);
		TowerDataViewer_t6740CC4D01535DD42FA74D76F81BE78ED4DD65CC* L_20 = __this->___towerDataViewer_5;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_21 = (&__this->___hit_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_21, NULL);
		NullCheck(L_20);
		TowerDataViewer_OnPanel_m679D6E160E61A3C026AB2F7255D34038032F4B46(L_20, L_22, NULL);
		return;
	}

IL_00b6:
	{
		// else if (Input.GetMouseButtonUp(0))
		bool L_23;
		L_23 = Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081(0, NULL);
		if (!L_23)
		{
			goto IL_00f0;
		}
	}
	{
		// if (hitTransform == null || hitTransform.CompareTag("Tower") == false)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->___hitTransform_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_25)
		{
			goto IL_00de;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___hitTransform_9;
		NullCheck(L_26);
		bool L_27;
		L_27 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_26, _stringLiteral952CAC206E30AA9CB06A5D717A4FD7CA2320B766, NULL);
		if (L_27)
		{
			goto IL_00e9;
		}
	}

IL_00de:
	{
		// towerDataViewer.OffPanel();
		TowerDataViewer_t6740CC4D01535DD42FA74D76F81BE78ED4DD65CC* L_28 = __this->___towerDataViewer_5;
		NullCheck(L_28);
		TowerDataViewer_OffPanel_m0B133D457BFA3851AEC37DB52B39E5007145DCAE(L_28, NULL);
	}

IL_00e9:
	{
		// hitTransform = null;
		__this->___hitTransform_9 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hitTransform_9), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
	}

IL_00f0:
	{
		// }
		return;
	}
}
// System.Void ObjectDetector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDetector__ctor_m6BF2B0E0BB79615E7651FD6A159BFF6C2A2FADA6 (ObjectDetector_tFB353B01D51F3E496A54E862DA5ED92D26B10FC6* __this, const RuntimeMethod* method) 
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
// System.Void ObjectFollowMousePosition::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectFollowMousePosition_Awake_m0E2C94851A22E4C6160B5B7873BA2F12091AF4F0 (ObjectFollowMousePosition_t995E27C00C208687F6BC7E51862E0027D22B9157* __this, const RuntimeMethod* method) 
{
	{
		// mainCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		__this->___mainCamera_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCamera_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void ObjectFollowMousePosition::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectFollowMousePosition_Update_m177A9341E9B9D948FC158FA38FA7B116EA4BB5A9 (ObjectFollowMousePosition_t995E27C00C208687F6BC7E51862E0027D22B9157* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 position    = new Vector3(Input.mousePosition.x, Input.mousePosition.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		float L_3 = L_2.___y_3;
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&V_0), L_1, L_3, NULL);
		// transform.position  = mainCamera.ScreenToWorldPoint(position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___mainCamera_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_5, L_6, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_7, NULL);
		// transform.position  = new Vector3(transform.position.x, transform.position.y, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), L_11, L_14, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_15, NULL);
		// }
		return;
	}
}
// System.Void ObjectFollowMousePosition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectFollowMousePosition__ctor_mCD736E40AAAC17E1A44CA24E535A4D24FA8CFECC (ObjectFollowMousePosition_t995E27C00C208687F6BC7E51862E0027D22B9157* __this, const RuntimeMethod* method) 
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
// System.Void Pause::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pause_Update_m93C50E270526C8F1DACFACAD20AEAFC982D4B1F5 (Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		// if (!gamePaused)
		bool L_1 = ((Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7_StaticFields*)il2cpp_codegen_static_fields_for(Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7_il2cpp_TypeInfo_var))->___gamePaused_4;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// CallMenu();
		Pause_CallMenu_mAE5FED353ADB47E99B5E7BEF3F1553379D57C901(__this, NULL);
		return;
	}

IL_0017:
	{
		// else if (gamePaused)
		bool L_2 = ((Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7_StaticFields*)il2cpp_codegen_static_fields_for(Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7_il2cpp_TypeInfo_var))->___gamePaused_4;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// CloseMenu();
		Pause_CloseMenu_mCEA9BF10289F24472E5F088F65566CA711B3D3CC(__this, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Pause::CallMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pause_CallMenu_mAE5FED353ADB47E99B5E7BEF3F1553379D57C901 (Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gamePaused = true;
		((Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7_StaticFields*)il2cpp_codegen_static_fields_for(Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7_il2cpp_TypeInfo_var))->___gamePaused_4 = (bool)1;
		// pausedMenu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pausedMenu_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Time.timeScale = 0f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// }
		return;
	}
}
// System.Void Pause::CloseMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pause_CloseMenu_mCEA9BF10289F24472E5F088F65566CA711B3D3CC (Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gamePaused = false;
		((Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7_StaticFields*)il2cpp_codegen_static_fields_for(Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7_il2cpp_TypeInfo_var))->___gamePaused_4 = (bool)0;
		// pausedMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pausedMenu_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// }
		return;
	}
}
// System.Void Pause::ExitMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pause_ExitMenu_mF97A64113295E2D2973F97FB59A8B49EEC695800 (Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void Pause::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pause__ctor_m27228FDF21C94BF26431A3DA3CD46F0BC7022B8E (Pause_tBA95B8E0340B28796AF51B491AF0D3EEC1F06DD7* __this, const RuntimeMethod* method) 
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
// System.Void PlayerGold::set_CurrentGold(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerGold_set_CurrentGold_m1137A37748EADE9FC54AA7580A472567A7E8B71C (PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => currentGold = Mathf.Max(0, value);
		int32_t L_0 = ___value0;
		int32_t L_1;
		L_1 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(0, L_0, NULL);
		__this->___currentGold_4 = L_1;
		return;
	}
}
// System.Int32 PlayerGold::get_CurrentGold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerGold_get_CurrentGold_mA17DB7136BE6396A2A166C49FC9AD39C22F471D7 (PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* __this, const RuntimeMethod* method) 
{
	{
		// get => currentGold;
		int32_t L_0 = __this->___currentGold_4;
		return L_0;
	}
}
// System.Void PlayerGold::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerGold__ctor_mC8D1A3F9EEA62F86E89B1C2555FCEC69E71C617E (PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* __this, const RuntimeMethod* method) 
{
	{
		// private int currentGold = 100;
		__this->___currentGold_4 = ((int32_t)100);
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
// System.Single PlayerHP::get_MaxHP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerHP_get_MaxHP_m734A2C9EDFCF165FF1FCFBCBA17597A853B2C239 (PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* __this, const RuntimeMethod* method) 
{
	{
		// public float    MaxHP => maxHP;
		float L_0 = __this->___maxHP_5;
		return L_0;
	}
}
// System.Single PlayerHP::get_CurrentHP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerHP_get_CurrentHP_m187C956F1BF80DC9AEF705935571087303834433 (PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* __this, const RuntimeMethod* method) 
{
	{
		// public float    CurrentHP => currentHP;
		float L_0 = __this->___currentHP_6;
		return L_0;
	}
}
// System.Void PlayerHP::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHP_Awake_m4A3C8382EC8CC30014B478CEAF37C01EDE74778C (PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* __this, const RuntimeMethod* method) 
{
	{
		// currentHP = maxHP;
		float L_0 = __this->___maxHP_5;
		__this->___currentHP_6 = L_0;
		// }
		return;
	}
}
// System.Void PlayerHP::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHP_TakeDamage_m92376041925A91F87344D006C61B5DCD92BE8047 (PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* __this, float ___damage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DBDE708A65BE7036505CCBEEA5644AAD9B7311);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentHP -= damage;
		float L_0 = __this->___currentHP_6;
		float L_1 = ___damage0;
		__this->___currentHP_6 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// StopCoroutine("HitAlphaAnimation");
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(__this, _stringLiteral37DBDE708A65BE7036505CCBEEA5644AAD9B7311, NULL);
		// StartCoroutine("HitAlphaAnimation");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral37DBDE708A65BE7036505CCBEEA5644AAD9B7311, NULL);
		// if (currentHP <= 0)
		float L_3 = __this->___currentHP_6;
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerHP::HitAlphaAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerHP_HitAlphaAnimation_mA209B8222324546072621A695FF794F7180C68C8 (PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CHitAlphaAnimationU3Ed__9_t43D64E2BBED7159CE54DFE632D6370BFFF8E66CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CHitAlphaAnimationU3Ed__9_t43D64E2BBED7159CE54DFE632D6370BFFF8E66CB* L_0 = (U3CHitAlphaAnimationU3Ed__9_t43D64E2BBED7159CE54DFE632D6370BFFF8E66CB*)il2cpp_codegen_object_new(U3CHitAlphaAnimationU3Ed__9_t43D64E2BBED7159CE54DFE632D6370BFFF8E66CB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CHitAlphaAnimationU3Ed__9__ctor_mFA76D2B8C18E87E84D70A72FC1735A1AE47FD3AB(L_0, 0, NULL);
		U3CHitAlphaAnimationU3Ed__9_t43D64E2BBED7159CE54DFE632D6370BFFF8E66CB* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PlayerHP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHP__ctor_m73CB539712E47FCDDA594181C569450C0E6333C2 (PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* __this, const RuntimeMethod* method) 
{
	{
		// private float   maxHP = 20;
		__this->___maxHP_5 = (20.0f);
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
// System.Void PlayerHP/<HitAlphaAnimation>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHitAlphaAnimationU3Ed__9__ctor_mFA76D2B8C18E87E84D70A72FC1735A1AE47FD3AB (U3CHitAlphaAnimationU3Ed__9_t43D64E2BBED7159CE54DFE632D6370BFFF8E66CB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerHP/<HitAlphaAnimation>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHitAlphaAnimationU3Ed__9_System_IDisposable_Dispose_m3B1F5C6EDE762CD891A156478304EC96DC3AA15B (U3CHitAlphaAnimationU3Ed__9_t43D64E2BBED7159CE54DFE632D6370BFFF8E66CB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerHP/<HitAlphaAnimation>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CHitAlphaAnimationU3Ed__9_MoveNext_m17B9997C5381F281D3EA5E9A0A604BBB41E70417 (U3CHitAlphaAnimationU3Ed__9_t43D64E2BBED7159CE54DFE632D6370BFFF8E66CB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0087;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Color color = imageScreen.color;
		PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* L_4 = V_1;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = L_4->___imageScreen_4;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		__this->___U3CcolorU3E5__2_3 = L_6;
		// color.a = 0.2f;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_7 = (&__this->___U3CcolorU3E5__2_3);
		L_7->___a_3 = (0.200000003f);
		// imageScreen.color = color;
		PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* L_8 = V_1;
		NullCheck(L_8);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = L_8->___imageScreen_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___U3CcolorU3E5__2_3;
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		goto IL_008e;
	}

IL_0052:
	{
		// color.a -= Time.deltaTime;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_11 = (&__this->___U3CcolorU3E5__2_3);
		float* L_12 = (&L_11->___a_3);
		float* L_13 = L_12;
		float L_14 = *((float*)L_13);
		float L_15;
		L_15 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		*((float*)L_13) = (float)((float)il2cpp_codegen_subtract(L_14, L_15));
		// imageScreen.color = color;
		PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* L_16 = V_1;
		NullCheck(L_16);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = L_16->___imageScreen_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = __this->___U3CcolorU3E5__2_3;
		NullCheck(L_17);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_18);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0087:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_008e:
	{
		// while(color.a >= 0.0f)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_19 = (&__this->___U3CcolorU3E5__2_3);
		float L_20 = L_19->___a_3;
		if ((((float)L_20) >= ((float)(0.0f))))
		{
			goto IL_0052;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object PlayerHP/<HitAlphaAnimation>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CHitAlphaAnimationU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4046981841FD8BF2C8A4476CD31062AD3BE87367 (U3CHitAlphaAnimationU3Ed__9_t43D64E2BBED7159CE54DFE632D6370BFFF8E66CB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerHP/<HitAlphaAnimation>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHitAlphaAnimationU3Ed__9_System_Collections_IEnumerator_Reset_m9A6C73F52C273FC9DFCAD247FE39477E751115F8 (U3CHitAlphaAnimationU3Ed__9_t43D64E2BBED7159CE54DFE632D6370BFFF8E66CB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CHitAlphaAnimationU3Ed__9_System_Collections_IEnumerator_Reset_m9A6C73F52C273FC9DFCAD247FE39477E751115F8_RuntimeMethod_var)));
	}
}
// System.Object PlayerHP/<HitAlphaAnimation>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CHitAlphaAnimationU3Ed__9_System_Collections_IEnumerator_get_Current_m76315A833799C8F3F09B929725DC76EA553E735F (U3CHitAlphaAnimationU3Ed__9_t43D64E2BBED7159CE54DFE632D6370BFFF8E66CB* __this, const RuntimeMethod* method) 
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
// System.Void Projectile::Setup(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Setup_m41B5BED9F4B5BA467C24BFCDE2180EE744F471F1 (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, float ___damage1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMovement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2_m65EBB1D76E2217609D6953128347E9990EAD5440_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// movement2D = GetComponent<Movement2D>();
		Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* L_0;
		L_0 = Component_GetComponent_TisMovement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2_m65EBB1D76E2217609D6953128347E9990EAD5440(__this, Component_GetComponent_TisMovement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2_m65EBB1D76E2217609D6953128347E9990EAD5440_RuntimeMethod_var);
		__this->___movement2D_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___movement2D_4), (void*)L_0);
		// this.target = target;                       // ????? ???????? target
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___target0;
		__this->___target_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_5), (void*)L_1);
		// this.damage = damage;                       // ????? ???????? ?????
		float L_2 = ___damage1;
		__this->___damage_6 = L_2;
		// }
		return;
	}
}
// System.Void Projectile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Update_m6E056CDE2DC25EDBA5DA3F4D9B9B9A69EC656737 (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (target != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		// Vector3 direction = (target.position - transform.position).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___target_5;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_3, L_5, NULL);
		V_1 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		V_0 = L_7;
		// movement2D.MoveTo(direction);
		Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* L_8 = __this->___movement2D_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		NullCheck(L_8);
		Movement2D_MoveTo_mF1CB1E7E740D8CD33DB87DF41A6078E43A11CE08_inline(L_8, L_9, NULL);
		return;
	}

IL_003f:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_10, NULL);
		// }
		return;
	}
}
// System.Void Projectile::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_OnTriggerEnter2D_m89D04B99E239FF909F005CF90ACF6CBDF722EAF9 (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mA6F818C24BC65C9BF00BA6D5455FF93CDF093CCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!collision.CompareTag("Enemy")) return;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (!collision.CompareTag("Enemy")) return;
		return;
	}

IL_000e:
	{
		// if (collision.transform != target)  return;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_2 = ___collision0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___target_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		// if (collision.transform != target)  return;
		return;
	}

IL_0022:
	{
		// collision.GetComponent<EnemyHP>().TakeDamage(damage);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_6 = ___collision0;
		NullCheck(L_6);
		EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* L_7;
		L_7 = Component_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mA6F818C24BC65C9BF00BA6D5455FF93CDF093CCB(L_6, Component_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mA6F818C24BC65C9BF00BA6D5455FF93CDF093CCB_RuntimeMethod_var);
		float L_8 = __this->___damage_6;
		NullCheck(L_7);
		EnemyHP_TakeDamage_m319B5C9B2F8231DAD285D4F4E369CE9B13F22A63(L_7, L_8, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_9, NULL);
		// }
		return;
	}
}
// System.Void Projectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile__ctor_m9CB69FCF9C97712F4578D9686861E9694A270A58 (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, const RuntimeMethod* method) 
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
// System.Void SliderPositionAutoSetter::Setup(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderPositionAutoSetter_Setup_m8903400BCD1CB9AF6CDB2393E3D308E6C9E0848A (SliderPositionAutoSetter_t09DA476805F4D7B3E5284B7265997B0C1C8B9427* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// targetTransform = target;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___target0;
		__this->___targetTransform_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetTransform_5), (void*)L_0);
		// rectTransform   = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___rectTransform_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rectTransform_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void SliderPositionAutoSetter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderPositionAutoSetter_Update_m9384338BA53C3ACE28954741EAB47AD77961B2C7 (SliderPositionAutoSetter_t09DA476805F4D7B3E5284B7265997B0C1C8B9427* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (targetTransform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___targetTransform_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_2, NULL);
		// return;
		return;
	}

IL_001a:
	{
		// Vector3 screenPosition = Camera.main.WorldToScreenPoint(targetTransform.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___targetTransform_5;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_3, L_5, NULL);
		V_0 = L_6;
		// rectTransform.position = screenPosition + distance;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___rectTransform_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___distance_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_8, L_9, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_10, NULL);
		// }
		return;
	}
}
// System.Void SliderPositionAutoSetter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderPositionAutoSetter__ctor_mD585DBE5379B6FBC26063192B1843EC464D491D1 (SliderPositionAutoSetter_t09DA476805F4D7B3E5284B7265997B0C1C8B9427* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3         distance = Vector3.down * 20.0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (20.0f), NULL);
		__this->___distance_4 = L_1;
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
// System.Void Slow::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slow_Awake_mCC4272CF38D1B2B39580EAC12A83818751DC77A0 (Slow_t40BEC4E359773D7BEEBE1F9C5364A7D297A126CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisTowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF_m2708A097F0BD78A35FA7B2F453CB306694C8823D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// towerWeapon = GetComponentInParent<TowerWeapon>();
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_0;
		L_0 = Component_GetComponentInParent_TisTowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF_m2708A097F0BD78A35FA7B2F453CB306694C8823D(__this, Component_GetComponentInParent_TisTowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF_m2708A097F0BD78A35FA7B2F453CB306694C8823D_RuntimeMethod_var);
		__this->___towerWeapon_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___towerWeapon_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Slow::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slow_OnTriggerEnter2D_m4E1ECD29B5D37811973BD18DE94BAF9CE0305F9F (Slow_t40BEC4E359773D7BEEBE1F9C5364A7D297A126CC* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMovement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2_m65EBB1D76E2217609D6953128347E9990EAD5440_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* V_0 = NULL;
	{
		// if (!collision.CompareTag("Enemy"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// Movement2D movement2D = collision.GetComponent<Movement2D>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_2 = ___collision0;
		NullCheck(L_2);
		Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* L_3;
		L_3 = Component_GetComponent_TisMovement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2_m65EBB1D76E2217609D6953128347E9990EAD5440(L_2, Component_GetComponent_TisMovement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2_m65EBB1D76E2217609D6953128347E9990EAD5440_RuntimeMethod_var);
		V_0 = L_3;
		// movement2D.MoveSpeed -= movement2D.MoveSpeed * towerWeapon.Slow;
		Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* L_4 = V_0;
		Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* L_5 = L_4;
		NullCheck(L_5);
		float L_6;
		L_6 = Movement2D_get_MoveSpeed_mD027A0B2C2DB291D9C10061D7E9980AC7BAF3CC7_inline(L_5, NULL);
		Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* L_7 = V_0;
		NullCheck(L_7);
		float L_8;
		L_8 = Movement2D_get_MoveSpeed_mD027A0B2C2DB291D9C10061D7E9980AC7BAF3CC7_inline(L_7, NULL);
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_9 = __this->___towerWeapon_4;
		NullCheck(L_9);
		float L_10;
		L_10 = TowerWeapon_get_Slow_m60E2EA151558976477558BFC7478D1212BA0E5A6(L_9, NULL);
		NullCheck(L_5);
		Movement2D_set_MoveSpeed_m5D03D594CDCC55E8D12073238219BFB5E8B3B943(L_5, ((float)il2cpp_codegen_subtract(L_6, ((float)il2cpp_codegen_multiply(L_8, L_10)))), NULL);
		// }
		return;
	}
}
// System.Void Slow::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slow_OnTriggerExit2D_mEAFD13D85E24FB4B1C1DF2134BB413762AD243A5 (Slow_t40BEC4E359773D7BEEBE1F9C5364A7D297A126CC* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMovement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2_m65EBB1D76E2217609D6953128347E9990EAD5440_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!collision.CompareTag("Enemy"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// collision.GetComponent<Movement2D>().ResetMoveSpeed();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_2 = ___collision0;
		NullCheck(L_2);
		Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* L_3;
		L_3 = Component_GetComponent_TisMovement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2_m65EBB1D76E2217609D6953128347E9990EAD5440(L_2, Component_GetComponent_TisMovement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2_m65EBB1D76E2217609D6953128347E9990EAD5440_RuntimeMethod_var);
		NullCheck(L_3);
		Movement2D_ResetMoveSpeed_mB6DFE96C5AE97EF55D4DBEE0F0A0F9CE98A0D2D9(L_3, NULL);
		// }
		return;
	}
}
// System.Void Slow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slow__ctor_mF28595144F86C2832ACEC1CB9D8D624704F13574 (Slow_t40BEC4E359773D7BEEBE1F9C5364A7D297A126CC* __this, const RuntimeMethod* method) 
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
// System.Void SystemTextViewer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemTextViewer_Awake_m7C00533408B9A1E898B38CACF19255B47C477976 (SystemTextViewer_t8821BBC121D7F603E90E3F7B2634460B179A41B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA_m88E606E3C7865FB45B859D3ACA02FF2BDA18C4E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textSystem = GetComponent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0;
		L_0 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___textSystem_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textSystem_4), (void*)L_0);
		// tmpAlpha   = GetComponent<TMPAlpha>();
		TMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA* L_1;
		L_1 = Component_GetComponent_TisTMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA_m88E606E3C7865FB45B859D3ACA02FF2BDA18C4E7(__this, Component_GetComponent_TisTMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA_m88E606E3C7865FB45B859D3ACA02FF2BDA18C4E7_RuntimeMethod_var);
		__this->___tmpAlpha_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tmpAlpha_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void SystemTextViewer::PrintText(SystemType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemTextViewer_PrintText_m37FE36693493B9F5778C2B7D778AD641D0A66ED7 (SystemTextViewer_t8821BBC121D7F603E90E3F7B2634460B179A41B9* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9BD6F52C9FFFA83B7173A75E070AAE7CA2918E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA8F6DA97CA86099CF8A77F372C1BC48B1D6D121);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___type0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___type0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_002b;
	}

IL_0009:
	{
		// textSystem.text = "System : Not enough money...";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___textSystem_4;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, _stringLiteralD9BD6F52C9FFFA83B7173A75E070AAE7CA2918E4);
		// break;
		goto IL_002b;
	}

IL_001b:
	{
		// textSystem.text = "System : Invalid build tower...";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___textSystem_4;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, _stringLiteralEA8F6DA97CA86099CF8A77F372C1BC48B1D6D121);
	}

IL_002b:
	{
		// tmpAlpha.FadeOut();
		TMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA* L_4 = __this->___tmpAlpha_5;
		NullCheck(L_4);
		TMPAlpha_FadeOut_m043CBBFAA0CAFD85CFBA8F4D312C0CC5E455056A(L_4, NULL);
		// }
		return;
	}
}
// System.Void SystemTextViewer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemTextViewer__ctor_mFEF5130EB7BD5E851068F4F89DD1DB062FEC4C49 (SystemTextViewer_t8821BBC121D7F603E90E3F7B2634460B179A41B9* __this, const RuntimeMethod* method) 
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
// System.Void TextTMPViewer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextTMPViewer_Update_mF70773ECA7F982BD6F32B3660F69D6ECC853616F (TextTMPViewer_t64F7CDF0FE3C4E2FA32DC794BFF4568AC67B7300* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// textPlayerHP.text   = playerHP.CurrentHP + "/" + playerHP.MaxHP;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___textPlayerHP_4;
		PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* L_1 = __this->___playerHP_8;
		NullCheck(L_1);
		float L_2;
		L_2 = PlayerHP_get_CurrentHP_m187C956F1BF80DC9AEF705935571087303834433_inline(L_1, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* L_4 = __this->___playerHP_8;
		NullCheck(L_4);
		float L_5;
		L_5 = PlayerHP_get_MaxHP_m734A2C9EDFCF165FF1FCFBCBA17597A853B2C239_inline(L_4, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_3, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_6, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_7);
		// textPlayerGold.text = playerGold.CurrentGold.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___textPlayerGold_5;
		PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* L_9 = __this->___playerGold_9;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = PlayerGold_get_CurrentGold_mA17DB7136BE6396A2A166C49FC9AD39C22F471D7_inline(L_9, NULL);
		V_1 = L_10;
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_11);
		// textWave.text       = waveSystem.CurrentWave + "/" + waveSystem.MaxWave;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = __this->___textWave_6;
		WaveSystem_t3DDD08CD57B79616F06A24D46C13436D1118F65A* L_13 = __this->___waveSystem_10;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = WaveSystem_get_CurrentWave_m01846639C9EBDF91ED403B4CD9EA5E384A2D0A52(L_13, NULL);
		V_1 = L_14;
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		WaveSystem_t3DDD08CD57B79616F06A24D46C13436D1118F65A* L_16 = __this->___waveSystem_10;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = WaveSystem_get_MaxWave_m9F6515C205695064AD9646C80E5CA40CE1308CBB(L_16, NULL);
		V_1 = L_17;
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_19;
		L_19 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_15, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_18, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_19);
		// textEnemyCount.text = enemySpawner.CurrentEnemyCount + "/" + enemySpawner.MaxEnemyCount;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_20 = __this->___textEnemyCount_7;
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_21 = __this->___enemySpawner_11;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = EnemySpawner_get_CurrentEnemyCount_m4173A42C959B2BE0535E263EF31FEE54010D9C07_inline(L_21, NULL);
		V_1 = L_22;
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_24 = __this->___enemySpawner_11;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = EnemySpawner_get_MaxEnemyCount_m184C21327C84C0C6DB9EE64D7170EAEC45A0A58F(L_24, NULL);
		V_1 = L_25;
		String_t* L_26;
		L_26 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_27;
		L_27 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_23, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_26, NULL);
		NullCheck(L_20);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_20, L_27);
		// }
		return;
	}
}
// System.Void TextTMPViewer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextTMPViewer__ctor_mFD449C6A55F5455A0771787CD135774451FB987D (TextTMPViewer_t64F7CDF0FE3C4E2FA32DC794BFF4568AC67B7300* __this, const RuntimeMethod* method) 
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
// System.Void Tile::set_IsBuildTower(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_IsBuildTower_m8AE0751713B4A2D8412FC8DFD6EFF4DCC5505566 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsBuildTower { set; get; }
		bool L_0 = ___value0;
		__this->___U3CIsBuildTowerU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean Tile::get_IsBuildTower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tile_get_IsBuildTower_m233F2108E499BF36313C767C696074461180B069 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsBuildTower { set; get; }
		bool L_0 = __this->___U3CIsBuildTowerU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Tile::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_Awake_m8CE361BE2F7DD3BFD42DDCF775CF4F89FCEDCABF (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	{
		// IsBuildTower = false;
		Tile_set_IsBuildTower_m8AE0751713B4A2D8412FC8DFD6EFF4DCC5505566_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Tile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile__ctor_mB2C904B47040471552C938AE751AC0BF80B369E7 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
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
// System.Void TMPAlpha::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMPAlpha_Awake_m421B5F26CB586308F2281290F6C777B3658B983D (TMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text = GetComponent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0;
		L_0 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___text_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void TMPAlpha::FadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMPAlpha_FadeOut_m043CBBFAA0CAFD85CFBA8F4D312C0CC5E455056A (TMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(AlphaLerp(1, 0));
		RuntimeObject* L_0;
		L_0 = TMPAlpha_AlphaLerp_mD544AACBC6FEE145E4884AF88F00409446BEB49C(__this, (1.0f), (0.0f), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TMPAlpha::AlphaLerp(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TMPAlpha_AlphaLerp_mD544AACBC6FEE145E4884AF88F00409446BEB49C (TMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA* __this, float ___start0, float ___end1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAlphaLerpU3Ed__4_tF1014ABE6532D045BC2E40A820DFDD91DC77F3DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAlphaLerpU3Ed__4_tF1014ABE6532D045BC2E40A820DFDD91DC77F3DA* L_0 = (U3CAlphaLerpU3Ed__4_tF1014ABE6532D045BC2E40A820DFDD91DC77F3DA*)il2cpp_codegen_object_new(U3CAlphaLerpU3Ed__4_tF1014ABE6532D045BC2E40A820DFDD91DC77F3DA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAlphaLerpU3Ed__4__ctor_m6935D70170D16BE539CA8ABA80F3E1BB0D337C76(L_0, 0, NULL);
		U3CAlphaLerpU3Ed__4_tF1014ABE6532D045BC2E40A820DFDD91DC77F3DA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CAlphaLerpU3Ed__4_tF1014ABE6532D045BC2E40A820DFDD91DC77F3DA* L_2 = L_1;
		float L_3 = ___start0;
		NullCheck(L_2);
		L_2->___start_3 = L_3;
		U3CAlphaLerpU3Ed__4_tF1014ABE6532D045BC2E40A820DFDD91DC77F3DA* L_4 = L_2;
		float L_5 = ___end1;
		NullCheck(L_4);
		L_4->___end_4 = L_5;
		return L_4;
	}
}
// System.Void TMPAlpha::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMPAlpha__ctor_mC70E2B74EFCB113E4C549F171A99024F98FE8E69 (TMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA* __this, const RuntimeMethod* method) 
{
	{
		// private float           lerpTime = 0.5f;
		__this->___lerpTime_4 = (0.5f);
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
// System.Void TMPAlpha/<AlphaLerp>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAlphaLerpU3Ed__4__ctor_m6935D70170D16BE539CA8ABA80F3E1BB0D337C76 (U3CAlphaLerpU3Ed__4_tF1014ABE6532D045BC2E40A820DFDD91DC77F3DA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TMPAlpha/<AlphaLerp>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAlphaLerpU3Ed__4_System_IDisposable_Dispose_mB6287327B6E0F314440EB0CF5416A33595BDB3C6 (U3CAlphaLerpU3Ed__4_tF1014ABE6532D045BC2E40A820DFDD91DC77F3DA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TMPAlpha/<AlphaLerp>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAlphaLerpU3Ed__4_MoveNext_m00CC38C26C6253981BF5E593D4124EB9754EEF6D (U3CAlphaLerpU3Ed__4_tF1014ABE6532D045BC2E40A820DFDD91DC77F3DA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA* V_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float currentTime = 0.0f;
		__this->___U3CcurrentTimeU3E5__2_5 = (0.0f);
		// float percent     = 0.0f;
		__this->___U3CpercentU3E5__3_6 = (0.0f);
		goto IL_00ab;
	}

IL_0039:
	{
		// currentTime += Time.deltaTime;
		float L_4 = __this->___U3CcurrentTimeU3E5__2_5;
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CcurrentTimeU3E5__2_5 = ((float)il2cpp_codegen_add(L_4, L_5));
		// percent = currentTime / lerpTime;
		float L_6 = __this->___U3CcurrentTimeU3E5__2_5;
		TMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA* L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->___lerpTime_4;
		__this->___U3CpercentU3E5__3_6 = ((float)(L_6/L_8));
		// Color color = text.color;
		TMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA* L_9 = V_1;
		NullCheck(L_9);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = L_9->___text_5;
		NullCheck(L_10);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_10);
		V_2 = L_11;
		// color.a     = Mathf.Lerp(start, end, percent);
		float L_12 = __this->___start_3;
		float L_13 = __this->___end_4;
		float L_14 = __this->___U3CpercentU3E5__3_6;
		float L_15;
		L_15 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_12, L_13, L_14, NULL);
		(&V_2)->___a_3 = L_15;
		// text.color  = color;
		TMPAlpha_t88D9C875D129C5A4A879405A7DDEDE8DBE90B1BA* L_16 = V_1;
		NullCheck(L_16);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = L_16->___text_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = V_2;
		NullCheck(L_17);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_18);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a4:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00ab:
	{
		// while(percent < 1)
		float L_19 = __this->___U3CpercentU3E5__3_6;
		if ((((float)L_19) < ((float)(1.0f))))
		{
			goto IL_0039;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object TMPAlpha/<AlphaLerp>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAlphaLerpU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4DE035F94F2F8463C7AAB918AD414DF16057E41B (U3CAlphaLerpU3Ed__4_tF1014ABE6532D045BC2E40A820DFDD91DC77F3DA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TMPAlpha/<AlphaLerp>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAlphaLerpU3Ed__4_System_Collections_IEnumerator_Reset_mFD71A34FD78E4E8559841E0F3F2C33A4F00EB316 (U3CAlphaLerpU3Ed__4_tF1014ABE6532D045BC2E40A820DFDD91DC77F3DA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAlphaLerpU3Ed__4_System_Collections_IEnumerator_Reset_mFD71A34FD78E4E8559841E0F3F2C33A4F00EB316_RuntimeMethod_var)));
	}
}
// System.Object TMPAlpha/<AlphaLerp>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAlphaLerpU3Ed__4_System_Collections_IEnumerator_get_Current_m9CC866D86C97BDE0E7F7FEDD070CC65821EBD05D (U3CAlphaLerpU3Ed__4_tF1014ABE6532D045BC2E40A820DFDD91DC77F3DA* __this, const RuntimeMethod* method) 
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
// System.Void TowerAttackRange::OnAttackRange(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerAttackRange_OnAttackRange_m68DB589B6137B31F899959652B2B0A989B1F628B (TowerAttackRange_t1AC6229E24EECEC9960B23B104755B489273BE8C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___range1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// float diameter = range * 2.0f;
		float L_1 = ___range1;
		V_0 = ((float)il2cpp_codegen_multiply(L_1, (2.0f)));
		// transform.localScale = Vector3.one * diameter;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, L_4, NULL);
		NullCheck(L_2);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_2, L_5, NULL);
		// transform.position = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___position0;
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void TowerAttackRange::OffAttackRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerAttackRange_OffAttackRange_m144495E0EA1589AF5EF0DD5816D99FCDC91E59C1 (TowerAttackRange_t1AC6229E24EECEC9960B23B104755B489273BE8C* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TowerAttackRange::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerAttackRange__ctor_m98194DF8A77AEBD57D942DA8F92BA6A30EAA1220 (TowerAttackRange_t1AC6229E24EECEC9960B23B104755B489273BE8C* __this, const RuntimeMethod* method) 
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
// System.Void TowerDataViewer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerDataViewer_Awake_m2112840114FBEB2756DD0DA79B1A9BCEAB456EEB (TowerDataViewer_t6740CC4D01535DD42FA74D76F81BE78ED4DD65CC* __this, const RuntimeMethod* method) 
{
	{
		// OffPanel();
		TowerDataViewer_OffPanel_m0B133D457BFA3851AEC37DB52B39E5007145DCAE(__this, NULL);
		// }
		return;
	}
}
// System.Void TowerDataViewer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerDataViewer_Update_m010FC3E51021004385375D17DE3CBE80AB27AFE3 (TowerDataViewer_t6740CC4D01535DD42FA74D76F81BE78ED4DD65CC* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// OffPanel();
		TowerDataViewer_OffPanel_m0B133D457BFA3851AEC37DB52B39E5007145DCAE(__this, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void TowerDataViewer::OnPanel(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerDataViewer_OnPanel_m679D6E160E61A3C026AB2F7255D34038032F4B46 (TowerDataViewer_t6740CC4D01535DD42FA74D76F81BE78ED4DD65CC* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___towerWeapon0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF_m85027562274501164B6142E4833789C5E920E8E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentTower = towerWeapon.GetComponent<TowerWeapon>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___towerWeapon0;
		NullCheck(L_0);
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_1;
		L_1 = Component_GetComponent_TisTowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF_m85027562274501164B6142E4833789C5E920E8E0(L_0, Component_GetComponent_TisTowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF_m85027562274501164B6142E4833789C5E920E8E0_RuntimeMethod_var);
		__this->___currentTower_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentTower_14), (void*)L_1);
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// UpdateTowerDate();
		TowerDataViewer_UpdateTowerDate_mEBDF7CA6E5868ABF689000557ACBB8FD1E11D44C(__this, NULL);
		// towerAttackRange.OnAttackRange(currentTower.transform.position, currentTower.Range);
		TowerAttackRange_t1AC6229E24EECEC9960B23B104755B489273BE8C* L_3 = __this->___towerAttackRange_11;
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_4 = __this->___currentTower_14;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_7 = __this->___currentTower_14;
		NullCheck(L_7);
		float L_8;
		L_8 = TowerWeapon_get_Range_mADE799753388B16683D2D7145EA02D23F7CA9570(L_7, NULL);
		NullCheck(L_3);
		TowerAttackRange_OnAttackRange_m68DB589B6137B31F899959652B2B0A989B1F628B(L_3, L_6, L_8, NULL);
		// }
		return;
	}
}
// System.Void TowerDataViewer::OffPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerDataViewer_OffPanel_m0B133D457BFA3851AEC37DB52B39E5007145DCAE (TowerDataViewer_t6740CC4D01535DD42FA74D76F81BE78ED4DD65CC* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// towerAttackRange.OffAttackRange();
		TowerAttackRange_t1AC6229E24EECEC9960B23B104755B489273BE8C* L_1 = __this->___towerAttackRange_11;
		NullCheck(L_1);
		TowerAttackRange_OffAttackRange_m144495E0EA1589AF5EF0DD5816D99FCDC91E59C1(L_1, NULL);
		// }
		return;
	}
}
// System.Void TowerDataViewer::UpdateTowerDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerDataViewer_UpdateTowerDate_mEBDF7CA6E5868ABF689000557ACBB8FD1E11D44C (TowerDataViewer_t6740CC4D01535DD42FA74D76F81BE78ED4DD65CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DEC985EB735DA21BD9AAAB72CD3510DD715777E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4745AD03BFBF02E1E8CB316F8DFE3B091A5345D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral704AFD44613B0CAF0F7482DE3039C49A4E0C8714);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78483B7AFC7D78BB0718543979DEFEE849C80387);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral866DD70C3A3DC235752FD88062B11C19B3B1FA29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9B96674A8005AFE20586E501B3E6DB60EBC0936);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC92E2BFE09244B135C2ADF950BB41CC58A2FF9C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* G_B9_0 = NULL;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* G_B10_1 = NULL;
	{
		// if (currentTower.WeaponType == WeaponType.Cannon || currentTower.WeaponType == WeaponType.Laser)
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_0 = __this->___currentTower_14;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TowerWeapon_get_WeaponType_mD5D536AC6A1D64F64CB8E33F4773F7C5D7ED3639_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_2 = __this->___currentTower_14;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TowerWeapon_get_WeaponType_mD5D536AC6A1D64F64CB8E33F4773F7C5D7ED3639_inline(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_00a1;
		}
	}

IL_001e:
	{
		// imageTower.rectTransform.sizeDelta = new Vector2(88, 59);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___imageTower_4;
		NullCheck(L_4);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5;
		L_5 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), (88.0f), (59.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_5, L_6, NULL);
		// textDamage.text = "Damage : " + currentTower.Damage + "+" + "<color=red>"
		//                   + currentTower.AddedDamage.ToString("F1") + "</color>";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->___textDamage_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral0DEC985EB735DA21BD9AAAB72CD3510DD715777E);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0DEC985EB735DA21BD9AAAB72CD3510DD715777E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_11 = __this->___currentTower_14;
		NullCheck(L_11);
		float L_12;
		L_12 = TowerWeapon_get_Damage_m5A24D65F4711BF635A2772DF85BC70CE7063A03E(L_11, NULL);
		V_0 = L_12;
		String_t* L_13;
		L_13 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_10;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral704AFD44613B0CAF0F7482DE3039C49A4E0C8714);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral704AFD44613B0CAF0F7482DE3039C49A4E0C8714);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_16 = __this->___currentTower_14;
		NullCheck(L_16);
		float L_17;
		L_17 = TowerWeapon_get_AddedDamage_m05255BC33B6270A9B5990C00F67F647F04350ABD_inline(L_16, NULL);
		V_0 = L_17;
		String_t* L_18;
		L_18 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_0), _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_15;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		String_t* L_20;
		L_20 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_19, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_20);
		goto IL_0144;
	}

IL_00a1:
	{
		// imageTower.rectTransform.sizeDelta = new Vector2(59, 59);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = __this->___imageTower_4;
		NullCheck(L_21);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22;
		L_22 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_21, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_23), (59.0f), (59.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_22, L_23, NULL);
		// if (currentTower.WeaponType == WeaponType.Slow)
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_24 = __this->___currentTower_14;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = TowerWeapon_get_WeaponType_mD5D536AC6A1D64F64CB8E33F4773F7C5D7ED3639_inline(L_24, NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)2))))
		{
			goto IL_0103;
		}
	}
	{
		// textDamage.text = "Slow : " + currentTower.Slow * 100 + "%";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_26 = __this->___textDamage_5;
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_27 = __this->___currentTower_14;
		NullCheck(L_27);
		float L_28;
		L_28 = TowerWeapon_get_Slow_m60E2EA151558976477558BFC7478D1212BA0E5A6(L_27, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_28, (100.0f)));
		String_t* L_29;
		L_29 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_30;
		L_30 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralA9B96674A8005AFE20586E501B3E6DB60EBC0936, L_29, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		NullCheck(L_26);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_26, L_30);
		goto IL_0144;
	}

IL_0103:
	{
		// else if (currentTower.WeaponType == WeaponType.Buff)
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_31 = __this->___currentTower_14;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = TowerWeapon_get_WeaponType_mD5D536AC6A1D64F64CB8E33F4773F7C5D7ED3639_inline(L_31, NULL);
		if ((!(((uint32_t)L_32) == ((uint32_t)3))))
		{
			goto IL_0144;
		}
	}
	{
		// textDamage.text = "Buff : " + currentTower.Buff * 100 + "%";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_33 = __this->___textDamage_5;
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_34 = __this->___currentTower_14;
		NullCheck(L_34);
		float L_35;
		L_35 = TowerWeapon_get_Buff_m0C84EC3B3120332C995B7222530AD15187189979(L_34, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_35, (100.0f)));
		String_t* L_36;
		L_36 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_37;
		L_37 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral866DD70C3A3DC235752FD88062B11C19B3B1FA29, L_36, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		NullCheck(L_33);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_33, L_37);
	}

IL_0144:
	{
		// imageTower.sprite   = currentTower.TowerSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_38 = __this->___imageTower_4;
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_39 = __this->___currentTower_14;
		NullCheck(L_39);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_40;
		L_40 = TowerWeapon_get_TowerSprite_mA437A40D0F5DE7E097BCAEDCED4FA1B1EE9ACDDE(L_39, NULL);
		NullCheck(L_38);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_38, L_40, NULL);
		// textRate.text           = "Rate : " + currentTower.Rate;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_41 = __this->___textRate_6;
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_42 = __this->___currentTower_14;
		NullCheck(L_42);
		float L_43;
		L_43 = TowerWeapon_get_Rate_m20891EF860B714562264126847FCCB8D78128AB3(L_42, NULL);
		V_0 = L_43;
		String_t* L_44;
		L_44 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_45;
		L_45 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral78483B7AFC7D78BB0718543979DEFEE849C80387, L_44, NULL);
		NullCheck(L_41);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_41, L_45);
		// textRange.text          = "Range : " + currentTower.Range;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_46 = __this->___textRange_7;
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_47 = __this->___currentTower_14;
		NullCheck(L_47);
		float L_48;
		L_48 = TowerWeapon_get_Range_mADE799753388B16683D2D7145EA02D23F7CA9570(L_47, NULL);
		V_0 = L_48;
		String_t* L_49;
		L_49 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_50;
		L_50 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralC92E2BFE09244B135C2ADF950BB41CC58A2FF9C1, L_49, NULL);
		NullCheck(L_46);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_46, L_50);
		// textLevel.text          = "Level : " + currentTower.Level;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_51 = __this->___textLevel_8;
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_52 = __this->___currentTower_14;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = TowerWeapon_get_Level_m5D20E8711385F405C9A9AF7DA90EC76068279869(L_52, NULL);
		V_1 = L_53;
		String_t* L_54;
		L_54 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_55;
		L_55 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral4745AD03BFBF02E1E8CB316F8DFE3B091A5345D0, L_54, NULL);
		NullCheck(L_51);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_51, L_55);
		// textUpgradeCost.text    = currentTower.UpgradeCost.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_56 = __this->___textUpgradeCost_9;
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_57 = __this->___currentTower_14;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = TowerWeapon_get_UpgradeCost_m854753D88CF5ED0A177AF6159131CB3B63E2D486(L_57, NULL);
		V_1 = L_58;
		String_t* L_59;
		L_59 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_56);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_56, L_59);
		// textSellCost.text       = currentTower.SellCost.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___textSellCost_10;
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_61 = __this->___currentTower_14;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = TowerWeapon_get_SellCost_m0228420BCB670C7B0AFACC70B98D3C193D169803(L_61, NULL);
		V_1 = L_62;
		String_t* L_63;
		L_63 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_60, L_63);
		// buttonUpgrade.interactable = currentTower.Level < currentTower.MaxLevel ? true : false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_64 = __this->___buttonUpgrade_12;
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_65 = __this->___currentTower_14;
		NullCheck(L_65);
		int32_t L_66;
		L_66 = TowerWeapon_get_Level_m5D20E8711385F405C9A9AF7DA90EC76068279869(L_65, NULL);
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_67 = __this->___currentTower_14;
		NullCheck(L_67);
		int32_t L_68;
		L_68 = TowerWeapon_get_MaxLevel_m0C2705C73739BF0EC924E4342ECFF82789875FBD(L_67, NULL);
		G_B8_0 = L_64;
		if ((((int32_t)L_66) < ((int32_t)L_68)))
		{
			G_B9_0 = L_64;
			goto IL_022f;
		}
	}
	{
		G_B10_0 = 0;
		G_B10_1 = G_B8_0;
		goto IL_0230;
	}

IL_022f:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
	}

IL_0230:
	{
		NullCheck(G_B10_1);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(G_B10_1, (bool)G_B10_0, NULL);
		// }
		return;
	}
}
// System.Void TowerDataViewer::OnClickEventTowerUpgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerDataViewer_OnClickEventTowerUpgrade_mAB4FEE4A58FEFA00117CD6C68D3C53EDA9B2577F (TowerDataViewer_t6740CC4D01535DD42FA74D76F81BE78ED4DD65CC* __this, const RuntimeMethod* method) 
{
	{
		// bool isSuccess = currentTower.Upgrade();
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_0 = __this->___currentTower_14;
		NullCheck(L_0);
		bool L_1;
		L_1 = TowerWeapon_Upgrade_m79D0AC0BA996D2721000A078266E182F76F067E8(L_0, NULL);
		// if (isSuccess == true)
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// UpdateTowerDate();
		TowerDataViewer_UpdateTowerDate_mEBDF7CA6E5868ABF689000557ACBB8FD1E11D44C(__this, NULL);
		// towerAttackRange.OnAttackRange(currentTower.transform.position, currentTower.Range);
		TowerAttackRange_t1AC6229E24EECEC9960B23B104755B489273BE8C* L_2 = __this->___towerAttackRange_11;
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_3 = __this->___currentTower_14;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_6 = __this->___currentTower_14;
		NullCheck(L_6);
		float L_7;
		L_7 = TowerWeapon_get_Range_mADE799753388B16683D2D7145EA02D23F7CA9570(L_6, NULL);
		NullCheck(L_2);
		TowerAttackRange_OnAttackRange_m68DB589B6137B31F899959652B2B0A989B1F628B(L_2, L_5, L_7, NULL);
		return;
	}

IL_003a:
	{
		// systemTextViewer.PrintText(SystemType.Money);
		SystemTextViewer_t8821BBC121D7F603E90E3F7B2634460B179A41B9* L_8 = __this->___systemTextViewer_13;
		NullCheck(L_8);
		SystemTextViewer_PrintText_m37FE36693493B9F5778C2B7D778AD641D0A66ED7(L_8, 0, NULL);
		// }
		return;
	}
}
// System.Void TowerDataViewer::OnClickEventTowerSell()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerDataViewer_OnClickEventTowerSell_mABC0BC308310E789914AEAAAB249EC8FD90114ED (TowerDataViewer_t6740CC4D01535DD42FA74D76F81BE78ED4DD65CC* __this, const RuntimeMethod* method) 
{
	{
		// currentTower.Sell();
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_0 = __this->___currentTower_14;
		NullCheck(L_0);
		TowerWeapon_Sell_m9B816F59B3FAC76324771F3A7DC645062F5D4D66(L_0, NULL);
		// OffPanel();
		TowerDataViewer_OffPanel_m0B133D457BFA3851AEC37DB52B39E5007145DCAE(__this, NULL);
		// }
		return;
	}
}
// System.Void TowerDataViewer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerDataViewer__ctor_m00D4A9046ED29956E87ED437926E603FF57D3946 (TowerDataViewer_t6740CC4D01535DD42FA74D76F81BE78ED4DD65CC* __this, const RuntimeMethod* method) 
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
// System.Void TowerSpawner::ReadyToSpawnTower(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerSpawner_ReadyToSpawnTower_m5B2762CDBDB140A77F9A6C654B78275C9033C86A (TowerSpawner_t0F1E87A71018B019CF29878863AC60C0C4F91CF0* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD89D3D82CB76C5C2909243BBCBE89ADB25948F1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// towerType = type;
		int32_t L_0 = ___type0;
		__this->___towerType_10 = L_0;
		// if (isOnTowerButton == true)
		bool L_1 = __this->___isOnTowerButton_8;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// if (towerTemplate[towerType].weapon[0].cost > playerGold.CurrentGold)
		TowerTemplateU5BU5D_t87180366CA923ABAC89FB91753A742A2B672A397* L_2 = __this->___towerTemplate_4;
		int32_t L_3 = __this->___towerType_10;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_6 = L_5->___weapon_6;
		NullCheck(L_6);
		int32_t L_7 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___cost_6;
		PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* L_8 = __this->___playerGold_6;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = PlayerGold_get_CurrentGold_mA17DB7136BE6396A2A166C49FC9AD39C22F471D7_inline(L_8, NULL);
		if ((((int32_t)L_7) <= ((int32_t)L_9)))
		{
			goto IL_0047;
		}
	}
	{
		// systemTextViewer.PrintText(SystemType.Money);
		SystemTextViewer_t8821BBC121D7F603E90E3F7B2634460B179A41B9* L_10 = __this->___systemTextViewer_7;
		NullCheck(L_10);
		SystemTextViewer_PrintText_m37FE36693493B9F5778C2B7D778AD641D0A66ED7(L_10, 0, NULL);
		// return;
		return;
	}

IL_0047:
	{
		// isOnTowerButton = true;
		__this->___isOnTowerButton_8 = (bool)1;
		// followTowerClone = Instantiate(towerTemplate[towerType].followTowerPrefab);
		TowerTemplateU5BU5D_t87180366CA923ABAC89FB91753A742A2B672A397* L_11 = __this->___towerTemplate_4;
		int32_t L_12 = __this->___towerType_10;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_14->___followTowerPrefab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_15, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		__this->___followTowerClone_9 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___followTowerClone_9), (void*)L_16);
		// StartCoroutine("OnTowerCancelSystem");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_17;
		L_17 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteralD89D3D82CB76C5C2909243BBCBE89ADB25948F1D, NULL);
		// }
		return;
	}
}
// System.Void TowerSpawner::SpawnTower(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerSpawner_SpawnTower_m054C4B9E93BEC6D1286DEFE90E0B99ACC7463558 (TowerSpawner_t0F1E87A71018B019CF29878863AC60C0C4F91CF0* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___tileTransform0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3C9E6A980DA050E176CF32E9F6A5414E05E66998_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF_m344CABA096DE65B759CB2A378E21BAFF534A2FBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD89D3D82CB76C5C2909243BBCBE89ADB25948F1D);
		s_Il2CppMethodInitialized = true;
	}
	Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (isOnTowerButton == false)
		bool L_0 = __this->___isOnTowerButton_8;
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
		// Tile tile = tileTransform.GetComponent<Tile>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___tileTransform0;
		NullCheck(L_1);
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_2;
		L_2 = Component_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3C9E6A980DA050E176CF32E9F6A5414E05E66998(L_1, Component_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3C9E6A980DA050E176CF32E9F6A5414E05E66998_RuntimeMethod_var);
		V_0 = L_2;
		// if (tile.IsBuildTower == true)
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Tile_get_IsBuildTower_m233F2108E499BF36313C767C696074461180B069_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// systemTextViewer.PrintText(SystemType.Build);
		SystemTextViewer_t8821BBC121D7F603E90E3F7B2634460B179A41B9* L_5 = __this->___systemTextViewer_7;
		NullCheck(L_5);
		SystemTextViewer_PrintText_m37FE36693493B9F5778C2B7D778AD641D0A66ED7(L_5, 1, NULL);
		// return;
		return;
	}

IL_0025:
	{
		// isOnTowerButton = false;
		__this->___isOnTowerButton_8 = (bool)0;
		// tile.IsBuildTower = true;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_6 = V_0;
		NullCheck(L_6);
		Tile_set_IsBuildTower_m8AE0751713B4A2D8412FC8DFD6EFF4DCC5505566_inline(L_6, (bool)1, NULL);
		// playerGold.CurrentGold -= towerTemplate[towerType].weapon[0].cost;
		PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* L_7 = __this->___playerGold_6;
		PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = PlayerGold_get_CurrentGold_mA17DB7136BE6396A2A166C49FC9AD39C22F471D7_inline(L_8, NULL);
		TowerTemplateU5BU5D_t87180366CA923ABAC89FB91753A742A2B672A397* L_10 = __this->___towerTemplate_4;
		int32_t L_11 = __this->___towerType_10;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_14 = L_13->___weapon_6;
		NullCheck(L_14);
		int32_t L_15 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___cost_6;
		NullCheck(L_8);
		PlayerGold_set_CurrentGold_m1137A37748EADE9FC54AA7580A472567A7E8B71C(L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_15)), NULL);
		// Vector3 position = tileTransform.position + Vector3.back;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = ___tileTransform0;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_17, L_18, NULL);
		V_1 = L_19;
		// GameObject clone = Instantiate(towerTemplate[towerType].towerPrefab, position, Quaternion.identity);
		TowerTemplateU5BU5D_t87180366CA923ABAC89FB91753A742A2B672A397* L_20 = __this->___towerTemplate_4;
		int32_t L_21 = __this->___towerType_10;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = L_23->___towerPrefab_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_24, L_25, L_26, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// clone.GetComponent<TowerWeapon>().Setup(this, enemySpawner, playerGold, tile);
		NullCheck(L_27);
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_28;
		L_28 = GameObject_GetComponent_TisTowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF_m344CABA096DE65B759CB2A378E21BAFF534A2FBD(L_27, GameObject_GetComponent_TisTowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF_m344CABA096DE65B759CB2A378E21BAFF534A2FBD_RuntimeMethod_var);
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_29 = __this->___enemySpawner_5;
		PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* L_30 = __this->___playerGold_6;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_31 = V_0;
		NullCheck(L_28);
		TowerWeapon_Setup_mED8499D9F7DE53C38D455F46090F283589953B76(L_28, __this, L_29, L_30, L_31, NULL);
		// OnBuffAllBuffTowers();
		TowerSpawner_OnBuffAllBuffTowers_mBF8896D0A9C7D2A1F32E911B52CA6AC7A3A81FB5(__this, NULL);
		// Destroy(followTowerClone);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___followTowerClone_9;
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_32, NULL);
		// StopCoroutine("OnTowerCancelSystem");
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(__this, _stringLiteralD89D3D82CB76C5C2909243BBCBE89ADB25948F1D, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TowerSpawner::OnTowerCancelSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TowerSpawner_OnTowerCancelSystem_mBCDB874E1FB2BACBCFE7227CDB445D62C495A144 (TowerSpawner_t0F1E87A71018B019CF29878863AC60C0C4F91CF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnTowerCancelSystemU3Ed__9_t4C1532E59EB9DE85D03DDF4031CEDD35E004A43F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnTowerCancelSystemU3Ed__9_t4C1532E59EB9DE85D03DDF4031CEDD35E004A43F* L_0 = (U3COnTowerCancelSystemU3Ed__9_t4C1532E59EB9DE85D03DDF4031CEDD35E004A43F*)il2cpp_codegen_object_new(U3COnTowerCancelSystemU3Ed__9_t4C1532E59EB9DE85D03DDF4031CEDD35E004A43F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnTowerCancelSystemU3Ed__9__ctor_m2B8F3083CEC7BE1771199FA1E5AD4B98FA1E730F(L_0, 0, NULL);
		U3COnTowerCancelSystemU3Ed__9_t4C1532E59EB9DE85D03DDF4031CEDD35E004A43F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TowerSpawner::OnBuffAllBuffTowers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerSpawner_OnBuffAllBuffTowers_mBF8896D0A9C7D2A1F32E911B52CA6AC7A3A81FB5 (TowerSpawner_t0F1E87A71018B019CF29878863AC60C0C4F91CF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF_m344CABA096DE65B759CB2A378E21BAFF534A2FBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral952CAC206E30AA9CB06A5D717A4FD7CA2320B766);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* V_2 = NULL;
	{
		// GameObject[] towers = GameObject.FindGameObjectsWithTag("Tower");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral952CAC206E30AA9CB06A5D717A4FD7CA2320B766, NULL);
		V_0 = L_0;
		// for (int i = 0; i < towers.Length; ++i)
		V_1 = 0;
		goto IL_002b;
	}

IL_000f:
	{
		// TowerWeapon weapon = towers[i].GetComponent<TowerWeapon>();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_5;
		L_5 = GameObject_GetComponent_TisTowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF_m344CABA096DE65B759CB2A378E21BAFF534A2FBD(L_4, GameObject_GetComponent_TisTowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF_m344CABA096DE65B759CB2A378E21BAFF534A2FBD_RuntimeMethod_var);
		V_2 = L_5;
		// if (weapon.WeaponType == WeaponType.Buff)
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = TowerWeapon_get_WeaponType_mD5D536AC6A1D64F64CB8E33F4773F7C5D7ED3639_inline(L_6, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)3))))
		{
			goto IL_0027;
		}
	}
	{
		// weapon.OnBuffAroundTower();
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_8 = V_2;
		NullCheck(L_8);
		TowerWeapon_OnBuffAroundTower_m01E143F61D1328EFB375D5E8CDC7EFC217392586(L_8, NULL);
	}

IL_0027:
	{
		// for (int i = 0; i < towers.Length; ++i)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002b:
	{
		// for (int i = 0; i < towers.Length; ++i)
		int32_t L_10 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TowerSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerSpawner__ctor_m963BAF341C5E6F0BF2B6E6BDB99294989E75405B (TowerSpawner_t0F1E87A71018B019CF29878863AC60C0C4F91CF0* __this, const RuntimeMethod* method) 
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
// System.Void TowerSpawner/<OnTowerCancelSystem>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTowerCancelSystemU3Ed__9__ctor_m2B8F3083CEC7BE1771199FA1E5AD4B98FA1E730F (U3COnTowerCancelSystemU3Ed__9_t4C1532E59EB9DE85D03DDF4031CEDD35E004A43F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TowerSpawner/<OnTowerCancelSystem>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTowerCancelSystemU3Ed__9_System_IDisposable_Dispose_m96B32C802F184181165BA63494F5543CBA19D676 (U3COnTowerCancelSystemU3Ed__9_t4C1532E59EB9DE85D03DDF4031CEDD35E004A43F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TowerSpawner/<OnTowerCancelSystem>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnTowerCancelSystemU3Ed__9_MoveNext_m63CE0D7E49BF4A34D505AA166E99BDCC10313B78 (U3COnTowerCancelSystemU3Ed__9_t4C1532E59EB9DE85D03DDF4031CEDD35E004A43F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TowerSpawner_t0F1E87A71018B019CF29878863AC60C0C4F91CF0* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TowerSpawner_t0F1E87A71018B019CF29878863AC60C0C4F91CF0* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0053;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// if (Input.GetKeyDown(KeyCode.Escape) || Input.GetMouseButtonDown(1))
		bool L_4;
		L_4 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)27), NULL);
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		bool L_5;
		L_5 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(1, NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}

IL_002f:
	{
		// isOnTowerButton = false;
		TowerSpawner_t0F1E87A71018B019CF29878863AC60C0C4F91CF0* L_6 = V_1;
		NullCheck(L_6);
		L_6->___isOnTowerButton_8 = (bool)0;
		// Destroy(followTowerClone);
		TowerSpawner_t0F1E87A71018B019CF29878863AC60C0C4F91CF0* L_7 = V_1;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___followTowerClone_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_8, NULL);
		// break;
		goto IL_005c;
	}

IL_0043:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0053:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while(true)
		goto IL_001e;
	}

IL_005c:
	{
		// }
		return (bool)0;
	}
}
// System.Object TowerSpawner/<OnTowerCancelSystem>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnTowerCancelSystemU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9A736C67047CB759888E9C3011FDD7A5EDEB0D07 (U3COnTowerCancelSystemU3Ed__9_t4C1532E59EB9DE85D03DDF4031CEDD35E004A43F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TowerSpawner/<OnTowerCancelSystem>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTowerCancelSystemU3Ed__9_System_Collections_IEnumerator_Reset_m7E91017F9BA3A1DF85C2273254ADC20652203ED5 (U3COnTowerCancelSystemU3Ed__9_t4C1532E59EB9DE85D03DDF4031CEDD35E004A43F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnTowerCancelSystemU3Ed__9_System_Collections_IEnumerator_Reset_m7E91017F9BA3A1DF85C2273254ADC20652203ED5_RuntimeMethod_var)));
	}
}
// System.Object TowerSpawner/<OnTowerCancelSystem>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnTowerCancelSystemU3Ed__9_System_Collections_IEnumerator_get_Current_mA6F3576478CA54CD34E2F5F41624CEACB4D1B797 (U3COnTowerCancelSystemU3Ed__9_t4C1532E59EB9DE85D03DDF4031CEDD35E004A43F* __this, const RuntimeMethod* method) 
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
// System.Void TowerTemplate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerTemplate__ctor_m50FF56F14B3AE6B380B17056DF60DDD2437F799D (TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// Conversion methods for marshalling of: TowerTemplate/Weapon
IL2CPP_EXTERN_C void Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A_marshal_pinvoke(const Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A& unmarshaled, Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___sprite_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'Weapon': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_0Exception, NULL);
}
IL2CPP_EXTERN_C void Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A_marshal_pinvoke_back(const Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A_marshaled_pinvoke& marshaled, Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A& unmarshaled)
{
	Exception_t* ___sprite_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'Weapon': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: TowerTemplate/Weapon
IL2CPP_EXTERN_C void Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A_marshal_pinvoke_cleanup(Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: TowerTemplate/Weapon
IL2CPP_EXTERN_C void Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A_marshal_com(const Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A& unmarshaled, Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A_marshaled_com& marshaled)
{
	Exception_t* ___sprite_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'Weapon': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_0Exception, NULL);
}
IL2CPP_EXTERN_C void Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A_marshal_com_back(const Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A_marshaled_com& marshaled, Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A& unmarshaled)
{
	Exception_t* ___sprite_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'sprite' of type 'Weapon': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___sprite_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: TowerTemplate/Weapon
IL2CPP_EXTERN_C void Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A_marshal_com_cleanup(Weapon_t781F959E6EFE79740CCE826CE2249AEA1DDC0E2A_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Sprite TowerWeapon::get_TowerSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* TowerWeapon_get_TowerSprite_mA437A40D0F5DE7E097BCAEDCED4FA1B1EE9ACDDE (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	{
		// public Sprite       TowerSprite => towerTemplate.weapon[level].sprite;
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_0 = __this->___towerTemplate_4;
		NullCheck(L_0);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_1 = L_0->___weapon_6;
		int32_t L_2 = __this->___level_11;
		NullCheck(L_1);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___sprite_0;
		return L_3;
	}
}
// System.Single TowerWeapon::get_Damage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TowerWeapon_get_Damage_m5A24D65F4711BF635A2772DF85BC70CE7063A03E (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	{
		// public float        Damage      => towerTemplate.weapon[level].damage;
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_0 = __this->___towerTemplate_4;
		NullCheck(L_0);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_1 = L_0->___weapon_6;
		int32_t L_2 = __this->___level_11;
		NullCheck(L_1);
		float L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___damage_1;
		return L_3;
	}
}
// System.Single TowerWeapon::get_Rate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TowerWeapon_get_Rate_m20891EF860B714562264126847FCCB8D78128AB3 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	{
		// public float        Rate        => towerTemplate.weapon[level].rate;
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_0 = __this->___towerTemplate_4;
		NullCheck(L_0);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_1 = L_0->___weapon_6;
		int32_t L_2 = __this->___level_11;
		NullCheck(L_1);
		float L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___rate_4;
		return L_3;
	}
}
// System.Single TowerWeapon::get_Range()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TowerWeapon_get_Range_mADE799753388B16683D2D7145EA02D23F7CA9570 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	{
		// public float        Range       => towerTemplate.weapon[level].range;
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_0 = __this->___towerTemplate_4;
		NullCheck(L_0);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_1 = L_0->___weapon_6;
		int32_t L_2 = __this->___level_11;
		NullCheck(L_1);
		float L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___range_5;
		return L_3;
	}
}
// System.Int32 TowerWeapon::get_UpgradeCost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TowerWeapon_get_UpgradeCost_m854753D88CF5ED0A177AF6159131CB3B63E2D486 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	{
		// public int          UpgradeCost => Level < MaxLevel ? towerTemplate.weapon[level+1].cost : 0;
		int32_t L_0;
		L_0 = TowerWeapon_get_Level_m5D20E8711385F405C9A9AF7DA90EC76068279869(__this, NULL);
		int32_t L_1;
		L_1 = TowerWeapon_get_MaxLevel_m0C2705C73739BF0EC924E4342ECFF82789875FBD(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}

IL_0010:
	{
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_2 = __this->___towerTemplate_4;
		NullCheck(L_2);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_3 = L_2->___weapon_6;
		int32_t L_4 = __this->___level_11;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1)))))->___cost_6;
		return L_5;
	}
}
// System.Int32 TowerWeapon::get_SellCost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TowerWeapon_get_SellCost_m0228420BCB670C7B0AFACC70B98D3C193D169803 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	{
		// public int          SellCost    => towerTemplate.weapon[level].sell;
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_0 = __this->___towerTemplate_4;
		NullCheck(L_0);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_1 = L_0->___weapon_6;
		int32_t L_2 = __this->___level_11;
		NullCheck(L_1);
		int32_t L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___sell_7;
		return L_3;
	}
}
// System.Int32 TowerWeapon::get_Level()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TowerWeapon_get_Level_m5D20E8711385F405C9A9AF7DA90EC76068279869 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	{
		// public int          Level       => level + 1;
		int32_t L_0 = __this->___level_11;
		return ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
}
// System.Int32 TowerWeapon::get_MaxLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TowerWeapon_get_MaxLevel_m0C2705C73739BF0EC924E4342ECFF82789875FBD (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	{
		// public int          MaxLevel    => towerTemplate.weapon.Length;
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_0 = __this->___towerTemplate_4;
		NullCheck(L_0);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_1 = L_0->___weapon_6;
		NullCheck(L_1);
		return ((int32_t)(((RuntimeArray*)L_1)->max_length));
	}
}
// System.Single TowerWeapon::get_Slow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TowerWeapon_get_Slow_m60E2EA151558976477558BFC7478D1212BA0E5A6 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	{
		// public float        Slow        => towerTemplate.weapon[level].slow;
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_0 = __this->___towerTemplate_4;
		NullCheck(L_0);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_1 = L_0->___weapon_6;
		int32_t L_2 = __this->___level_11;
		NullCheck(L_1);
		float L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___slow_2;
		return L_3;
	}
}
// System.Single TowerWeapon::get_Buff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TowerWeapon_get_Buff_m0C84EC3B3120332C995B7222530AD15187189979 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	{
		// public float        Buff        => towerTemplate.weapon[level].buff;
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_0 = __this->___towerTemplate_4;
		NullCheck(L_0);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_1 = L_0->___weapon_6;
		int32_t L_2 = __this->___level_11;
		NullCheck(L_1);
		float L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___buff_3;
		return L_3;
	}
}
// WeaponType TowerWeapon::get_WeaponType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TowerWeapon_get_WeaponType_mD5D536AC6A1D64F64CB8E33F4773F7C5D7ED3639 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	{
		// public WeaponType   WeaponType  => weaponType;
		int32_t L_0 = __this->___weaponType_6;
		return L_0;
	}
}
// System.Void TowerWeapon::set_AddedDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_set_AddedDamage_m5BC8F8484398482C54B34DC4644E2692F398A4C4 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set => addedDamage = Mathf.Max(0, value);
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((0.0f), L_0, NULL);
		__this->___addedDamage_19 = L_1;
		return;
	}
}
// System.Single TowerWeapon::get_AddedDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TowerWeapon_get_AddedDamage_m05255BC33B6270A9B5990C00F67F647F04350ABD (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	{
		// get => addedDamage;
		float L_0 = __this->___addedDamage_19;
		return L_0;
	}
}
// System.Void TowerWeapon::set_BuffLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_set_BuffLevel_m8D7456C595A82235DDC8FEC94A3DFBC12DEF62A1 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => buffLevel = Mathf.Max(0, value);
		int32_t L_0 = ___value0;
		int32_t L_1;
		L_1 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(0, L_0, NULL);
		__this->___buffLevel_20 = L_1;
		return;
	}
}
// System.Int32 TowerWeapon::get_BuffLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TowerWeapon_get_BuffLevel_m67E3AFCFC2ADF31D95FAFB28225802105ED1102A (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	{
		// get => buffLevel;
		int32_t L_0 = __this->___buffLevel_20;
		return L_0;
	}
}
// System.Void TowerWeapon::Setup(TowerSpawner,EnemySpawner,PlayerGold,Tile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_Setup_mED8499D9F7DE53C38D455F46090F283589953B76 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, TowerSpawner_t0F1E87A71018B019CF29878863AC60C0C4F91CF0* ___towerSpawner0, EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* ___enemySpawner1, PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* ___playerGold2, Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* ___ownerTile3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteRenderer      = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___spriteRenderer_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_14), (void*)L_0);
		// this.towerSpawner   = towerSpawner;
		TowerSpawner_t0F1E87A71018B019CF29878863AC60C0C4F91CF0* L_1 = ___towerSpawner0;
		__this->___towerSpawner_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___towerSpawner_15), (void*)L_1);
		// this.enemySpawner   = enemySpawner;
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_2 = ___enemySpawner1;
		__this->___enemySpawner_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemySpawner_16), (void*)L_2);
		// this.playerGold     = playerGold;
		PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* L_3 = ___playerGold2;
		__this->___playerGold_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerGold_17), (void*)L_3);
		// this.ownerTile      = ownerTile;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_4 = ___ownerTile3;
		__this->___ownerTile_18 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ownerTile_18), (void*)L_4);
		// if (weaponType == WeaponType.Cannon || weaponType == WeaponType.Laser)
		int32_t L_5 = __this->___weaponType_6;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_6 = __this->___weaponType_6;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0041;
		}
	}

IL_003a:
	{
		// ChangeState(WeaponState.SearchTarget);
		TowerWeapon_ChangeState_mEF8142876DA3E0F2C7AF02BC6B6E402002A07823(__this, 0, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void TowerWeapon::ChangeState(WeaponState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_ChangeState_mEF8142876DA3E0F2C7AF02BC6B6E402002A07823 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, int32_t ___newState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeaponState_t83C08D8DA43E6109C542BEB3E5FE08AE3A53BF5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopCoroutine(weaponState.ToString());
		int32_t* L_0 = (&__this->___weaponState_12);
		Il2CppFakeBox<int32_t> L_1(WeaponState_t83C08D8DA43E6109C542BEB3E5FE08AE3A53BF5A_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(__this, L_2, NULL);
		// weaponState = newState;
		int32_t L_3 = ___newState0;
		__this->___weaponState_12 = L_3;
		// StartCoroutine(weaponState.ToString());
		int32_t* L_4 = (&__this->___weaponState_12);
		Il2CppFakeBox<int32_t> L_5(WeaponState_t83C08D8DA43E6109C542BEB3E5FE08AE3A53BF5A_il2cpp_TypeInfo_var, L_4);
		String_t* L_6;
		L_6 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void TowerWeapon::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_Update_m2A071B6FB9ABBB1FAAB75E48F436036C8ED2C50E (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (attackTarget != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___attackTarget_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// RotateToTarget();
		TowerWeapon_RotateToTarget_m8DFB3CE735346CCE3C75D61DFC3A0802F68CFAD7(__this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void TowerWeapon::RotateToTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_RotateToTarget_m8DFB3CE735346CCE3C75D61DFC3A0802F68CFAD7 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float dx = attackTarget.position.x - transform.position.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___attackTarget_13;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_2, L_5));
		// float dy = attackTarget.position.y - transform.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___attackTarget_13;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___y_3;
		// float degree = Mathf.Atan2(dy, dx) * Mathf.Rad2Deg;
		float L_12 = V_0;
		float L_13;
		L_13 = atan2f(((float)il2cpp_codegen_subtract(L_8, L_11)), L_12);
		V_1 = ((float)il2cpp_codegen_multiply(L_13, (57.2957802f)));
		// transform.rotation = Quaternion.Euler(0, 0, degree);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_15 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), L_15, NULL);
		NullCheck(L_14);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_14, L_16, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TowerWeapon::SearchTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TowerWeapon_SearchTarget_m7EC2DCC81448948982E9B4EA04F5233CE3514AD4 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSearchTargetU3Ed__49_t4E63CF5071EA0FD363D6C6F70E92C04BA4D160DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSearchTargetU3Ed__49_t4E63CF5071EA0FD363D6C6F70E92C04BA4D160DC* L_0 = (U3CSearchTargetU3Ed__49_t4E63CF5071EA0FD363D6C6F70E92C04BA4D160DC*)il2cpp_codegen_object_new(U3CSearchTargetU3Ed__49_t4E63CF5071EA0FD363D6C6F70E92C04BA4D160DC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSearchTargetU3Ed__49__ctor_mD6D8E7AD4EB998B99D26260F052C86E23DFC0607(L_0, 0, NULL);
		U3CSearchTargetU3Ed__49_t4E63CF5071EA0FD363D6C6F70E92C04BA4D160DC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator TowerWeapon::TryAttackCannon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TowerWeapon_TryAttackCannon_m7386FC92EA559A6AA31BAB5DBC465BEC816EEDE7 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTryAttackCannonU3Ed__50_t4E7E5AF42A01F290DA542C850F77DC5F324EAB1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTryAttackCannonU3Ed__50_t4E7E5AF42A01F290DA542C850F77DC5F324EAB1B* L_0 = (U3CTryAttackCannonU3Ed__50_t4E7E5AF42A01F290DA542C850F77DC5F324EAB1B*)il2cpp_codegen_object_new(U3CTryAttackCannonU3Ed__50_t4E7E5AF42A01F290DA542C850F77DC5F324EAB1B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTryAttackCannonU3Ed__50__ctor_m3F1ACABA90C67D2479B749513307DE3CB38920B6(L_0, 0, NULL);
		U3CTryAttackCannonU3Ed__50_t4E7E5AF42A01F290DA542C850F77DC5F324EAB1B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator TowerWeapon::TryAttackLaser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TowerWeapon_TryAttackLaser_m4124C926DC54310682504BBF57EABDFABC32E2F9 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTryAttackLaserU3Ed__51_t3F77C959D09116C08400F292D77A60DFEFA20FE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTryAttackLaserU3Ed__51_t3F77C959D09116C08400F292D77A60DFEFA20FE6* L_0 = (U3CTryAttackLaserU3Ed__51_t3F77C959D09116C08400F292D77A60DFEFA20FE6*)il2cpp_codegen_object_new(U3CTryAttackLaserU3Ed__51_t3F77C959D09116C08400F292D77A60DFEFA20FE6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTryAttackLaserU3Ed__51__ctor_m48334155FF8E476D90CFDCB9B5D6F20D854B4366(L_0, 0, NULL);
		U3CTryAttackLaserU3Ed__51_t3F77C959D09116C08400F292D77A60DFEFA20FE6* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TowerWeapon::OnBuffAroundTower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_OnBuffAroundTower_m01E143F61D1328EFB375D5E8CDC7EFC217392586 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF_m344CABA096DE65B759CB2A378E21BAFF534A2FBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral952CAC206E30AA9CB06A5D717A4FD7CA2320B766);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* V_2 = NULL;
	{
		// GameObject[] towers = GameObject.FindGameObjectsWithTag("Tower");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(_stringLiteral952CAC206E30AA9CB06A5D717A4FD7CA2320B766, NULL);
		V_0 = L_0;
		// for (int i = 0; i < towers.Length; ++i)
		V_1 = 0;
		goto IL_00aa;
	}

IL_0012:
	{
		// TowerWeapon weapon = towers[i].GetComponent<TowerWeapon>();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_5;
		L_5 = GameObject_GetComponent_TisTowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF_m344CABA096DE65B759CB2A378E21BAFF534A2FBD(L_4, GameObject_GetComponent_TisTowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF_m344CABA096DE65B759CB2A378E21BAFF534A2FBD_RuntimeMethod_var);
		V_2 = L_5;
		// if (weapon.BuffLevel > Level)
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = TowerWeapon_get_BuffLevel_m67E3AFCFC2ADF31D95FAFB28225802105ED1102A_inline(L_6, NULL);
		int32_t L_8;
		L_8 = TowerWeapon_get_Level_m5D20E8711385F405C9A9AF7DA90EC76068279869(__this, NULL);
		if ((((int32_t)L_7) > ((int32_t)L_8)))
		{
			goto IL_00a6;
		}
	}
	{
		// if (Vector3.Distance(weapon.transform.position, transform.position) <= towerTemplate.weapon[level].range)
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_9 = V_2;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14;
		L_14 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_11, L_13, NULL);
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_15 = __this->___towerTemplate_4;
		NullCheck(L_15);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_16 = L_15->___weapon_6;
		int32_t L_17 = __this->___level_11;
		NullCheck(L_16);
		float L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___range_5;
		if ((!(((float)L_14) <= ((float)L_18))))
		{
			goto IL_00a6;
		}
	}
	{
		// if (weapon.WeaponType == WeaponType.Cannon || weapon.WeaponType == WeaponType.Laser)
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_19 = V_2;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = TowerWeapon_get_WeaponType_mD5D536AC6A1D64F64CB8E33F4773F7C5D7ED3639_inline(L_19, NULL);
		if (!L_20)
		{
			goto IL_0072;
		}
	}
	{
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = TowerWeapon_get_WeaponType_mD5D536AC6A1D64F64CB8E33F4773F7C5D7ED3639_inline(L_21, NULL);
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_00a6;
		}
	}

IL_0072:
	{
		// weapon.AddedDamage = weapon.Damage * (towerTemplate.weapon[level].buff);
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_23 = V_2;
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_24 = V_2;
		NullCheck(L_24);
		float L_25;
		L_25 = TowerWeapon_get_Damage_m5A24D65F4711BF635A2772DF85BC70CE7063A03E(L_24, NULL);
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_26 = __this->___towerTemplate_4;
		NullCheck(L_26);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_27 = L_26->___weapon_6;
		int32_t L_28 = __this->___level_11;
		NullCheck(L_27);
		float L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___buff_3;
		NullCheck(L_23);
		TowerWeapon_set_AddedDamage_m5BC8F8484398482C54B34DC4644E2692F398A4C4(L_23, ((float)il2cpp_codegen_multiply(L_25, L_29)), NULL);
		// weapon.BuffLevel = Level;
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_30 = V_2;
		int32_t L_31;
		L_31 = TowerWeapon_get_Level_m5D20E8711385F405C9A9AF7DA90EC76068279869(__this, NULL);
		NullCheck(L_30);
		TowerWeapon_set_BuffLevel_m8D7456C595A82235DDC8FEC94A3DFBC12DEF62A1(L_30, L_31, NULL);
	}

IL_00a6:
	{
		// for (int i = 0; i < towers.Length; ++i)
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00aa:
	{
		// for (int i = 0; i < towers.Length; ++i)
		int32_t L_33 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_34 = V_0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Transform TowerWeapon::FindClosestAttackTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TowerWeapon_FindClosestAttackTarget_mC8A9A1F02DBAEE1F41B13F9BB61740F249B7F6AB (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m06491E24E76E12248772D510B36BB496FE85048E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1B277B53168A4876E1F5CC6CE3F9A8C66F178962_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		// float closestDistSqr = Mathf.Infinity;
		V_0 = (std::numeric_limits<float>::infinity());
		// for (int i = 0; i < enemySpawner.EnemyList.Count; ++i)
		V_1 = 0;
		goto IL_007a;
	}

IL_000a:
	{
		// float distance = Vector3.Distance(enemySpawner.EnemyList[i].transform.position, transform.position);
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_0 = __this->___enemySpawner_16;
		NullCheck(L_0);
		List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* L_1;
		L_1 = EnemySpawner_get_EnemyList_m74765A74E069D289DF48986FCCC642B1FBA188E0_inline(L_0, NULL);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_3;
		L_3 = List_1_get_Item_m1B277B53168A4876E1F5CC6CE3F9A8C66F178962(L_1, L_2, List_1_get_Item_m1B277B53168A4876E1F5CC6CE3F9A8C66F178962_RuntimeMethod_var);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8;
		L_8 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_5, L_7, NULL);
		V_2 = L_8;
		// if (distance <= towerTemplate.weapon[level].range && distance <= closestDistSqr)
		float L_9 = V_2;
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_10 = __this->___towerTemplate_4;
		NullCheck(L_10);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_11 = L_10->___weapon_6;
		int32_t L_12 = __this->___level_11;
		NullCheck(L_11);
		float L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___range_5;
		if ((!(((float)L_9) <= ((float)L_13))))
		{
			goto IL_0076;
		}
	}
	{
		float L_14 = V_2;
		float L_15 = V_0;
		if ((!(((float)L_14) <= ((float)L_15))))
		{
			goto IL_0076;
		}
	}
	{
		// closestDistSqr = distance;
		float L_16 = V_2;
		V_0 = L_16;
		// attackTarget   = enemySpawner.EnemyList[i].transform;
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_17 = __this->___enemySpawner_16;
		NullCheck(L_17);
		List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* L_18;
		L_18 = EnemySpawner_get_EnemyList_m74765A74E069D289DF48986FCCC642B1FBA188E0_inline(L_17, NULL);
		int32_t L_19 = V_1;
		NullCheck(L_18);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_20;
		L_20 = List_1_get_Item_m1B277B53168A4876E1F5CC6CE3F9A8C66F178962(L_18, L_19, List_1_get_Item_m1B277B53168A4876E1F5CC6CE3F9A8C66F178962_RuntimeMethod_var);
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		__this->___attackTarget_13 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attackTarget_13), (void*)L_21);
	}

IL_0076:
	{
		// for (int i = 0; i < enemySpawner.EnemyList.Count; ++i)
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_007a:
	{
		// for (int i = 0; i < enemySpawner.EnemyList.Count; ++i)
		int32_t L_23 = V_1;
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_24 = __this->___enemySpawner_16;
		NullCheck(L_24);
		List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* L_25;
		L_25 = EnemySpawner_get_EnemyList_m74765A74E069D289DF48986FCCC642B1FBA188E0_inline(L_24, NULL);
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_m06491E24E76E12248772D510B36BB496FE85048E_inline(L_25, List_1_get_Count_m06491E24E76E12248772D510B36BB496FE85048E_RuntimeMethod_var);
		if ((((int32_t)L_23) < ((int32_t)L_26)))
		{
			goto IL_000a;
		}
	}
	{
		// return attackTarget;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___attackTarget_13;
		return L_27;
	}
}
// System.Boolean TowerWeapon::IsPossibleToAttackTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TowerWeapon_IsPossibleToAttackTarget_m5F45AFD1AF0CF73C0F612BB829D6DDDF04AF614D (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (attackTarget == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___attackTarget_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// float distance = Vector3.Distance(attackTarget.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___attackTarget_13;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_3, L_5, NULL);
		// if (distance > towerTemplate.weapon[level].range)
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_7 = __this->___towerTemplate_4;
		NullCheck(L_7);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_8 = L_7->___weapon_6;
		int32_t L_9 = __this->___level_11;
		NullCheck(L_8);
		float L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___range_5;
		if ((!(((float)L_6) > ((float)L_10))))
		{
			goto IL_0051;
		}
	}
	{
		// attackTarget = null;
		__this->___attackTarget_13 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attackTarget_13), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// return false;
		return (bool)0;
	}

IL_0051:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void TowerWeapon::SpawnProjectile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_SpawnProjectile_mC6B5B32263AD6B57E256D65A171833E827A93D16 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m13E535B8E623931B5A04462B85C02123CE2A6183_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// GameObject clone = Instantiate(projectilePrefab, spawnPoint.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___projectilePrefab_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___spawnPoint_5;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_0, L_2, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// float damage = towerTemplate.weapon[level].damage + AddedDamage;
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_5 = __this->___towerTemplate_4;
		NullCheck(L_5);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_6 = L_5->___weapon_6;
		int32_t L_7 = __this->___level_11;
		NullCheck(L_6);
		float L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___damage_1;
		float L_9;
		L_9 = TowerWeapon_get_AddedDamage_m05255BC33B6270A9B5990C00F67F647F04350ABD_inline(__this, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_8, L_9));
		// clone.GetComponent<Projectile>().Setup(attackTarget, damage);
		NullCheck(L_4);
		Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* L_10;
		L_10 = GameObject_GetComponent_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m13E535B8E623931B5A04462B85C02123CE2A6183(L_4, GameObject_GetComponent_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m13E535B8E623931B5A04462B85C02123CE2A6183_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___attackTarget_13;
		float L_12 = V_0;
		NullCheck(L_10);
		Projectile_Setup_m41B5BED9F4B5BA467C24BFCDE2180EE744F471F1(L_10, L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void TowerWeapon::EnableLaser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_EnableLaser_m7F1245B7F15DA5A3F8C0710FABE493813F2BD22D (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	{
		// lineRenderer.gameObject.SetActive(true);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___lineRenderer_8;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// hitEffect.gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___hitEffect_9;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void TowerWeapon::DisableLaser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_DisableLaser_m1F3A96E7329A5583A8ED1346B7560801F630B7D1 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	{
		// lineRenderer.gameObject.SetActive(false);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___lineRenderer_8;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// hitEffect.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___hitEffect_9;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TowerWeapon::SpawnLaser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_SpawnLaser_mBCA7AB4B946E3D8E83BCDF6193616BB74AA77CEC (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mA6F818C24BC65C9BF00BA6D5455FF93CDF093CCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* V_1 = NULL;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		// Vector3         direction = attackTarget.position - spawnPoint.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___attackTarget_13;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___spawnPoint_5;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_3, NULL);
		V_0 = L_4;
		// RaycastHit2D[]  hit       = Physics2D.RaycastAll(spawnPoint.position,
		//                                                  direction,
		//                                                  towerTemplate.weapon[level].range,
		//                                                  targetLayer);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___spawnPoint_5;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_8, NULL);
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_10 = __this->___towerTemplate_4;
		NullCheck(L_10);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_11 = L_10->___weapon_6;
		int32_t L_12 = __this->___level_11;
		NullCheck(L_11);
		float L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___range_5;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_14 = __this->___targetLayer_10;
		int32_t L_15;
		L_15 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_16;
		L_16 = Physics2D_RaycastAll_m0EBAB1266E23657A8F089323B7B71784AF6B3C7B(L_7, L_9, L_13, L_15, NULL);
		V_1 = L_16;
		// for (int i = 0; i < hit.Length; ++i)
		V_2 = 0;
		goto IL_0134;
	}

IL_0065:
	{
		// if (hit[i].transform == attackTarget)
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = RaycastHit2D_get_transform_mA5E3F8DC9914E79D3C9F6F3F2515B49EEBB4564A(((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___attackTarget_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_0130;
		}
	}
	{
		// lineRenderer.SetPosition(0, spawnPoint.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_22 = __this->___lineRenderer_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___spawnPoint_5;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		NullCheck(L_22);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_22, 0, L_24, NULL);
		// lineRenderer.SetPosition(1, new Vector3(hit[i].point.x, hit[i].point.y, 0) + Vector3.back);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_25 = __this->___lineRenderer_8;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_26 = V_1;
		int32_t L_27 = V_2;
		NullCheck(L_26);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = RaycastHit2D_get_point_mB35E988E9E04328EFE926228A18334326721A36B(((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), NULL);
		float L_29 = L_28.___x_0;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_30 = V_1;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = RaycastHit2D_get_point_mB35E988E9E04328EFE926228A18334326721A36B(((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31))), NULL);
		float L_33 = L_32.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_34), L_29, L_33, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_34, L_35, NULL);
		NullCheck(L_25);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_25, 1, L_36, NULL);
		// hitEffect.position = hit[i].point;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = __this->___hitEffect_9;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_38 = V_1;
		int32_t L_39 = V_2;
		NullCheck(L_38);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = RaycastHit2D_get_point_mB35E988E9E04328EFE926228A18334326721A36B(((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_40, NULL);
		NullCheck(L_37);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_37, L_41, NULL);
		// float damage = towerTemplate.weapon[level].damage + AddedDamage;
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_42 = __this->___towerTemplate_4;
		NullCheck(L_42);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_43 = L_42->___weapon_6;
		int32_t L_44 = __this->___level_11;
		NullCheck(L_43);
		float L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___damage_1;
		float L_46;
		L_46 = TowerWeapon_get_AddedDamage_m05255BC33B6270A9B5990C00F67F647F04350ABD_inline(__this, NULL);
		V_3 = ((float)il2cpp_codegen_add(L_45, L_46));
		// attackTarget.GetComponent<EnemyHP>().TakeDamage(damage * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = __this->___attackTarget_13;
		NullCheck(L_47);
		EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* L_48;
		L_48 = Component_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mA6F818C24BC65C9BF00BA6D5455FF93CDF093CCB(L_47, Component_GetComponent_TisEnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E_mA6F818C24BC65C9BF00BA6D5455FF93CDF093CCB_RuntimeMethod_var);
		float L_49 = V_3;
		float L_50;
		L_50 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_48);
		EnemyHP_TakeDamage_m319B5C9B2F8231DAD285D4F4E369CE9B13F22A63(L_48, ((float)il2cpp_codegen_multiply(L_49, L_50)), NULL);
	}

IL_0130:
	{
		// for (int i = 0; i < hit.Length; ++i)
		int32_t L_51 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0134:
	{
		// for (int i = 0; i < hit.Length; ++i)
		int32_t L_52 = V_2;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_53 = V_1;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))
		{
			goto IL_0065;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean TowerWeapon::Upgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TowerWeapon_Upgrade_m79D0AC0BA996D2721000A078266E182F76F067E8 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	{
		// if (playerGold.CurrentGold < towerTemplate.weapon[level+1].cost)
		PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* L_0 = __this->___playerGold_17;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PlayerGold_get_CurrentGold_mA17DB7136BE6396A2A166C49FC9AD39C22F471D7_inline(L_0, NULL);
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_2 = __this->___towerTemplate_4;
		NullCheck(L_2);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_3 = L_2->___weapon_6;
		int32_t L_4 = __this->___level_11;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1)))))->___cost_6;
		if ((((int32_t)L_1) >= ((int32_t)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002c:
	{
		// level++;
		int32_t L_6 = __this->___level_11;
		__this->___level_11 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// spriteRenderer.sprite = towerTemplate.weapon[level].sprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___spriteRenderer_14;
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_8 = __this->___towerTemplate_4;
		NullCheck(L_8);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_9 = L_8->___weapon_6;
		int32_t L_10 = __this->___level_11;
		NullCheck(L_9);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___sprite_0;
		NullCheck(L_7);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_7, L_11, NULL);
		// playerGold.CurrentGold -= towerTemplate.weapon[level].cost;
		PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* L_12 = __this->___playerGold_17;
		PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* L_13 = L_12;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = PlayerGold_get_CurrentGold_mA17DB7136BE6396A2A166C49FC9AD39C22F471D7_inline(L_13, NULL);
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_15 = __this->___towerTemplate_4;
		NullCheck(L_15);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_16 = L_15->___weapon_6;
		int32_t L_17 = __this->___level_11;
		NullCheck(L_16);
		int32_t L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___cost_6;
		NullCheck(L_13);
		PlayerGold_set_CurrentGold_m1137A37748EADE9FC54AA7580A472567A7E8B71C(L_13, ((int32_t)il2cpp_codegen_subtract(L_14, L_18)), NULL);
		// if (weaponType == WeaponType.Laser)
		int32_t L_19 = __this->___weaponType_6;
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_00c4;
		}
	}
	{
		// lineRenderer.startWidth = 0.05f + level * 0.05f;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_20 = __this->___lineRenderer_8;
		int32_t L_21 = __this->___level_11;
		NullCheck(L_20);
		LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A(L_20, ((float)il2cpp_codegen_add((0.0500000007f), ((float)il2cpp_codegen_multiply(((float)L_21), (0.0500000007f))))), NULL);
		// lineRenderer.endWidth   = 0.05f;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_22 = __this->___lineRenderer_8;
		NullCheck(L_22);
		LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D(L_22, (0.0500000007f), NULL);
	}

IL_00c4:
	{
		// towerSpawner.OnBuffAllBuffTowers();
		TowerSpawner_t0F1E87A71018B019CF29878863AC60C0C4F91CF0* L_23 = __this->___towerSpawner_15;
		NullCheck(L_23);
		TowerSpawner_OnBuffAllBuffTowers_mBF8896D0A9C7D2A1F32E911B52CA6AC7A3A81FB5(L_23, NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void TowerWeapon::Sell()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon_Sell_m9B816F59B3FAC76324771F3A7DC645062F5D4D66 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerGold.CurrentGold += towerTemplate.weapon[level].sell;
		PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* L_0 = __this->___playerGold_17;
		PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = PlayerGold_get_CurrentGold_mA17DB7136BE6396A2A166C49FC9AD39C22F471D7_inline(L_1, NULL);
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_3 = __this->___towerTemplate_4;
		NullCheck(L_3);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_4 = L_3->___weapon_6;
		int32_t L_5 = __this->___level_11;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___sell_7;
		NullCheck(L_1);
		PlayerGold_set_CurrentGold_m1137A37748EADE9FC54AA7580A472567A7E8B71C(L_1, ((int32_t)il2cpp_codegen_add(L_2, L_6)), NULL);
		// ownerTile.IsBuildTower = false;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_7 = __this->___ownerTile_18;
		NullCheck(L_7);
		Tile_set_IsBuildTower_m8AE0751713B4A2D8412FC8DFD6EFF4DCC5505566_inline(L_7, (bool)0, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_8, NULL);
		// }
		return;
	}
}
// System.Void TowerWeapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerWeapon__ctor_m4947BEBDAF1568279DBDF406D1987F88FF14F515 (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
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
// System.Void TowerWeapon/<SearchTarget>d__49::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSearchTargetU3Ed__49__ctor_mD6D8E7AD4EB998B99D26260F052C86E23DFC0607 (U3CSearchTargetU3Ed__49_t4E63CF5071EA0FD363D6C6F70E92C04BA4D160DC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TowerWeapon/<SearchTarget>d__49::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSearchTargetU3Ed__49_System_IDisposable_Dispose_mA3E401F8EE6C2F20F00E4BDFA0317CDFC795A98D (U3CSearchTargetU3Ed__49_t4E63CF5071EA0FD363D6C6F70E92C04BA4D160DC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TowerWeapon/<SearchTarget>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSearchTargetU3Ed__49_MoveNext_m2D0F0C3ECE192B9FA59E2382EADE620C91B2A4DF (U3CSearchTargetU3Ed__49_t4E63CF5071EA0FD363D6C6F70E92C04BA4D160DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0069;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// attackTarget = FindClosestAttackTarget();
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_4 = V_1;
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_5 = V_1;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = TowerWeapon_FindClosestAttackTarget_mC8A9A1F02DBAEE1F41B13F9BB61740F249B7F6AB(L_5, NULL);
		NullCheck(L_4);
		L_4->___attackTarget_13 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___attackTarget_13), (void*)L_6);
		// if (attackTarget != null)
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_7 = V_1;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7->___attackTarget_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		// if (weaponType == WeaponType.Cannon)
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->___weaponType_6;
		if (L_11)
		{
			goto IL_0049;
		}
	}
	{
		// ChangeState(WeaponState.TryAttackCannon);
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_12 = V_1;
		NullCheck(L_12);
		TowerWeapon_ChangeState_mEF8142876DA3E0F2C7AF02BC6B6E402002A07823(L_12, 1, NULL);
		goto IL_0059;
	}

IL_0049:
	{
		// else if (weaponType == WeaponType.Laser)
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14 = L_13->___weaponType_6;
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_0059;
		}
	}
	{
		// ChangeState(WeaponState.TryAttackLaser);
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_15 = V_1;
		NullCheck(L_15);
		TowerWeapon_ChangeState_mEF8142876DA3E0F2C7AF02BC6B6E402002A07823(L_15, 2, NULL);
	}

IL_0059:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0069:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while(true)
		goto IL_001e;
	}
}
// System.Object TowerWeapon/<SearchTarget>d__49::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSearchTargetU3Ed__49_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC6B8E8BA350C3D162838ED2B621F433CA7675043 (U3CSearchTargetU3Ed__49_t4E63CF5071EA0FD363D6C6F70E92C04BA4D160DC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TowerWeapon/<SearchTarget>d__49::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSearchTargetU3Ed__49_System_Collections_IEnumerator_Reset_m5878120AE2CF95E9D5CEB4672F77791AB7ADB7D8 (U3CSearchTargetU3Ed__49_t4E63CF5071EA0FD363D6C6F70E92C04BA4D160DC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSearchTargetU3Ed__49_System_Collections_IEnumerator_Reset_m5878120AE2CF95E9D5CEB4672F77791AB7ADB7D8_RuntimeMethod_var)));
	}
}
// System.Object TowerWeapon/<SearchTarget>d__49::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSearchTargetU3Ed__49_System_Collections_IEnumerator_get_Current_m9DE6B0BB7FBACF260E313EC298F57C30AF86BB17 (U3CSearchTargetU3Ed__49_t4E63CF5071EA0FD363D6C6F70E92C04BA4D160DC* __this, const RuntimeMethod* method) 
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
// System.Void TowerWeapon/<TryAttackCannon>d__50::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryAttackCannonU3Ed__50__ctor_m3F1ACABA90C67D2479B749513307DE3CB38920B6 (U3CTryAttackCannonU3Ed__50_t4E7E5AF42A01F290DA542C850F77DC5F324EAB1B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TowerWeapon/<TryAttackCannon>d__50::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryAttackCannonU3Ed__50_System_IDisposable_Dispose_m223F379699736E3D82330DF6AB5D97BA5C013FF4 (U3CTryAttackCannonU3Ed__50_t4E7E5AF42A01F290DA542C850F77DC5F324EAB1B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TowerWeapon/<TryAttackCannon>d__50::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTryAttackCannonU3Ed__50_MoveNext_m285C3FBA62C01A522CCB81662FE6458CD0E1995A (U3CTryAttackCannonU3Ed__50_t4E7E5AF42A01F290DA542C850F77DC5F324EAB1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_005e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// if (IsPossibleToAttackTarget() == false)
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = TowerWeapon_IsPossibleToAttackTarget_m5F45AFD1AF0CF73C0F612BB829D6DDDF04AF614D(L_4, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		// ChangeState(WeaponState.SearchTarget);
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_6 = V_1;
		NullCheck(L_6);
		TowerWeapon_ChangeState_mEF8142876DA3E0F2C7AF02BC6B6E402002A07823(L_6, 0, NULL);
		// break;
		goto IL_006d;
	}

IL_002f:
	{
		// yield return new WaitForSeconds(towerTemplate.weapon[level].rate);
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_7 = V_1;
		NullCheck(L_7);
		TowerTemplate_t4422067C082B8000C9C2B263918A7252A33CBA72* L_8 = L_7->___towerTemplate_4;
		NullCheck(L_8);
		WeaponU5BU5D_tD997623EA992386AD173A64AA4D816D44935939F* L_9 = L_8->___weapon_6;
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->___level_11;
		NullCheck(L_9);
		float L_12 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___rate_4;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_13 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_13, L_12, NULL);
		__this->___U3CU3E2__current_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SpawnProjectile();
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_14 = V_1;
		NullCheck(L_14);
		TowerWeapon_SpawnProjectile_mC6B5B32263AD6B57E256D65A171833E827A93D16(L_14, NULL);
		// while(true)
		goto IL_001e;
	}

IL_006d:
	{
		// }
		return (bool)0;
	}
}
// System.Object TowerWeapon/<TryAttackCannon>d__50::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTryAttackCannonU3Ed__50_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC12543A0411B52DBA5216828E99B02BFB7F1D7D0 (U3CTryAttackCannonU3Ed__50_t4E7E5AF42A01F290DA542C850F77DC5F324EAB1B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TowerWeapon/<TryAttackCannon>d__50::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryAttackCannonU3Ed__50_System_Collections_IEnumerator_Reset_mCF3CADA3D260B2E7BD3A0D9B96770E70AB1E4EE3 (U3CTryAttackCannonU3Ed__50_t4E7E5AF42A01F290DA542C850F77DC5F324EAB1B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTryAttackCannonU3Ed__50_System_Collections_IEnumerator_Reset_mCF3CADA3D260B2E7BD3A0D9B96770E70AB1E4EE3_RuntimeMethod_var)));
	}
}
// System.Object TowerWeapon/<TryAttackCannon>d__50::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTryAttackCannonU3Ed__50_System_Collections_IEnumerator_get_Current_mBFDFF6086162DBAE1F94EEC2335DAED0AEE6C54E (U3CTryAttackCannonU3Ed__50_t4E7E5AF42A01F290DA542C850F77DC5F324EAB1B* __this, const RuntimeMethod* method) 
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
// System.Void TowerWeapon/<TryAttackLaser>d__51::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryAttackLaserU3Ed__51__ctor_m48334155FF8E476D90CFDCB9B5D6F20D854B4366 (U3CTryAttackLaserU3Ed__51_t3F77C959D09116C08400F292D77A60DFEFA20FE6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TowerWeapon/<TryAttackLaser>d__51::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryAttackLaserU3Ed__51_System_IDisposable_Dispose_m2A9803DEEA55A43E8038D2E818481DEBAA838D65 (U3CTryAttackLaserU3Ed__51_t3F77C959D09116C08400F292D77A60DFEFA20FE6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TowerWeapon/<TryAttackLaser>d__51::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTryAttackLaserU3Ed__51_MoveNext_m7FF064847E4E3B929D7AB467E7BFECE77256A812 (U3CTryAttackLaserU3Ed__51_t3F77C959D09116C08400F292D77A60DFEFA20FE6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0051;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// EnableLaser();
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_4 = V_1;
		NullCheck(L_4);
		TowerWeapon_EnableLaser_m7F1245B7F15DA5A3F8C0710FABE493813F2BD22D(L_4, NULL);
	}

IL_0024:
	{
		// if (IsPossibleToAttackTarget() == false)
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_5 = V_1;
		NullCheck(L_5);
		bool L_6;
		L_6 = TowerWeapon_IsPossibleToAttackTarget_m5F45AFD1AF0CF73C0F612BB829D6DDDF04AF614D(L_5, NULL);
		if (L_6)
		{
			goto IL_003b;
		}
	}
	{
		// DisableLaser();
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_7 = V_1;
		NullCheck(L_7);
		TowerWeapon_DisableLaser_m1F3A96E7329A5583A8ED1346B7560801F630B7D1(L_7, NULL);
		// ChangeState(WeaponState.SearchTarget);
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_8 = V_1;
		NullCheck(L_8);
		TowerWeapon_ChangeState_mEF8142876DA3E0F2C7AF02BC6B6E402002A07823(L_8, 0, NULL);
		// break;
		goto IL_005a;
	}

IL_003b:
	{
		// SpawnLaser();
		TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* L_9 = V_1;
		NullCheck(L_9);
		TowerWeapon_SpawnLaser_mBCA7AB4B946E3D8E83BCDF6193616BB74AA77CEC(L_9, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0051:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_0024;
	}

IL_005a:
	{
		// }
		return (bool)0;
	}
}
// System.Object TowerWeapon/<TryAttackLaser>d__51::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTryAttackLaserU3Ed__51_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD143B11757DE16DA3120C1BB861B2EFD56273F07 (U3CTryAttackLaserU3Ed__51_t3F77C959D09116C08400F292D77A60DFEFA20FE6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TowerWeapon/<TryAttackLaser>d__51::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryAttackLaserU3Ed__51_System_Collections_IEnumerator_Reset_mB15F5BC3E99E10172EE056F2D9C1E411E1A98897 (U3CTryAttackLaserU3Ed__51_t3F77C959D09116C08400F292D77A60DFEFA20FE6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTryAttackLaserU3Ed__51_System_Collections_IEnumerator_Reset_mB15F5BC3E99E10172EE056F2D9C1E411E1A98897_RuntimeMethod_var)));
	}
}
// System.Object TowerWeapon/<TryAttackLaser>d__51::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTryAttackLaserU3Ed__51_System_Collections_IEnumerator_get_Current_mE6597A15FC510C391971BA32BC942342FEB0CC48 (U3CTryAttackLaserU3Ed__51_t3F77C959D09116C08400F292D77A60DFEFA20FE6* __this, const RuntimeMethod* method) 
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
// System.Int32 WaveSystem::get_CurrentWave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveSystem_get_CurrentWave_m01846639C9EBDF91ED403B4CD9EA5E384A2D0A52 (WaveSystem_t3DDD08CD57B79616F06A24D46C13436D1118F65A* __this, const RuntimeMethod* method) 
{
	{
		// public int           CurrentWave => currentWaveIndex+1;
		int32_t L_0 = __this->___currentWaveIndex_6;
		return ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
}
// System.Int32 WaveSystem::get_MaxWave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveSystem_get_MaxWave_m9F6515C205695064AD9646C80E5CA40CE1308CBB (WaveSystem_t3DDD08CD57B79616F06A24D46C13436D1118F65A* __this, const RuntimeMethod* method) 
{
	{
		// public int           MaxWave => waves.Length;
		WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826* L_0 = __this->___waves_4;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
// System.Void WaveSystem::StartWave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveSystem_StartWave_m9759326986CA1CFC0D70E52EA0799581436F744D (WaveSystem_t3DDD08CD57B79616F06A24D46C13436D1118F65A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m06491E24E76E12248772D510B36BB496FE85048E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (enemySpawner.EnemyList.Count == 0 && currentWaveIndex < waves.Length - 1)
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_0 = __this->___enemySpawner_5;
		NullCheck(L_0);
		List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* L_1;
		L_1 = EnemySpawner_get_EnemyList_m74765A74E069D289DF48986FCCC642B1FBA188E0_inline(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m06491E24E76E12248772D510B36BB496FE85048E_inline(L_1, List_1_get_Count_m06491E24E76E12248772D510B36BB496FE85048E_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_3 = __this->___currentWaveIndex_6;
		WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826* L_4 = __this->___waves_4;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), 1)))))
		{
			goto IL_004e;
		}
	}
	{
		// currentWaveIndex++;
		int32_t L_5 = __this->___currentWaveIndex_6;
		__this->___currentWaveIndex_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// enemySpawner.StartWave(waves[currentWaveIndex]);
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_6 = __this->___enemySpawner_5;
		WaveU5BU5D_t7CBEA006F8EF4DA503EB50F1CFE655038823E826* L_7 = __this->___waves_4;
		int32_t L_8 = __this->___currentWaveIndex_6;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Wave_t46A8424F3F35C64800660289794914462618636D L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		EnemySpawner_StartWave_m47DF7F2B66C8E09C7E01BDD2EAF9939A5EAB1CEE(L_6, L_10, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void WaveSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveSystem__ctor_mB6A02BD75CB2315B48A27BC438F2C8969AB401BB (WaveSystem_t3DDD08CD57B79616F06A24D46C13436D1118F65A* __this, const RuntimeMethod* method) 
{
	{
		// private int          currentWaveIndex = -1;  // ???? ????? ?????
		__this->___currentWaveIndex_6 = (-1);
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
// Conversion methods for marshalling of: Wave
IL2CPP_EXTERN_C void Wave_t46A8424F3F35C64800660289794914462618636D_marshal_pinvoke(const Wave_t46A8424F3F35C64800660289794914462618636D& unmarshaled, Wave_t46A8424F3F35C64800660289794914462618636D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___enemyPrefabs_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'enemyPrefabs' of type 'Wave': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___enemyPrefabs_2Exception, NULL);
}
IL2CPP_EXTERN_C void Wave_t46A8424F3F35C64800660289794914462618636D_marshal_pinvoke_back(const Wave_t46A8424F3F35C64800660289794914462618636D_marshaled_pinvoke& marshaled, Wave_t46A8424F3F35C64800660289794914462618636D& unmarshaled)
{
	Exception_t* ___enemyPrefabs_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'enemyPrefabs' of type 'Wave': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___enemyPrefabs_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Wave
IL2CPP_EXTERN_C void Wave_t46A8424F3F35C64800660289794914462618636D_marshal_pinvoke_cleanup(Wave_t46A8424F3F35C64800660289794914462618636D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Wave
IL2CPP_EXTERN_C void Wave_t46A8424F3F35C64800660289794914462618636D_marshal_com(const Wave_t46A8424F3F35C64800660289794914462618636D& unmarshaled, Wave_t46A8424F3F35C64800660289794914462618636D_marshaled_com& marshaled)
{
	Exception_t* ___enemyPrefabs_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'enemyPrefabs' of type 'Wave': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___enemyPrefabs_2Exception, NULL);
}
IL2CPP_EXTERN_C void Wave_t46A8424F3F35C64800660289794914462618636D_marshal_com_back(const Wave_t46A8424F3F35C64800660289794914462618636D_marshaled_com& marshaled, Wave_t46A8424F3F35C64800660289794914462618636D& unmarshaled)
{
	Exception_t* ___enemyPrefabs_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'enemyPrefabs' of type 'Wave': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___enemyPrefabs_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Wave
IL2CPP_EXTERN_C void Wave_t46A8424F3F35C64800660289794914462618636D_marshal_com_cleanup(Wave_t46A8424F3F35C64800660289794914462618636D_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameStartExit::GameStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStartExit_GameStart_m3E416BC7C6C2FC1B0CAD0005CB8154104E269EE7 (GameStartExit_t19A00811F7081CBA59025BE8D0912E60C41CCBA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BB86BA4FB6A20A4CB7E35A16FC7B10E647D9643);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LoadingSceneController.LoadScene("Stage01");
		LoadingSceneController_LoadScene_m82A8D94FFD6A7647AF2FE38F376CCF1C5A1920A4(_stringLiteral6BB86BA4FB6A20A4CB7E35A16FC7B10E647D9643, NULL);
		// }
		return;
	}
}
// System.Void GameStartExit::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStartExit_Exit_mC900B061F8C4BAF9300AA648F4E28EBBB79136EA (GameStartExit_t19A00811F7081CBA59025BE8D0912E60C41CCBA3* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void GameStartExit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameStartExit__ctor_mE09428DD81670F23FBBBB9C41C6C0B436E8348E4 (GameStartExit_t19A00811F7081CBA59025BE8D0912E60C41CCBA3* __this, const RuntimeMethod* method) 
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
// System.Void StartScreenTMPAlpha::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartScreenTMPAlpha_Awake_m57A1578EA7A8D08A0852F15694A3AC28C1AC6816 (StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textStartScreen = GetComponent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0;
		L_0 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___textStartScreen_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textStartScreen_5), (void*)L_0);
		// OnFade();
		StartScreenTMPAlpha_OnFade_m3B3E189703F50D443CC6BC1ECF5A9FFDB7D86550(__this, NULL);
		// }
		return;
	}
}
// System.Void StartScreenTMPAlpha::OnFade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartScreenTMPAlpha_OnFade_m3B3E189703F50D443CC6BC1ECF5A9FFDB7D86550 (StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(FadeInOut());
		RuntimeObject* L_0;
		L_0 = StartScreenTMPAlpha_FadeInOut_m379692F713EC81CCF2CD26D79C5B422E49E6B95D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator StartScreenTMPAlpha::FadeInOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartScreenTMPAlpha_FadeInOut_m379692F713EC81CCF2CD26D79C5B422E49E6B95D (StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeInOutU3Ed__4_t815F8ED12B8378B29EFC52EA9A155DE4042003DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeInOutU3Ed__4_t815F8ED12B8378B29EFC52EA9A155DE4042003DB* L_0 = (U3CFadeInOutU3Ed__4_t815F8ED12B8378B29EFC52EA9A155DE4042003DB*)il2cpp_codegen_object_new(U3CFadeInOutU3Ed__4_t815F8ED12B8378B29EFC52EA9A155DE4042003DB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeInOutU3Ed__4__ctor_m357F82B1DB53EAE6A4EC79F671E9B2881D36EB0B(L_0, 0, NULL);
		U3CFadeInOutU3Ed__4_t815F8ED12B8378B29EFC52EA9A155DE4042003DB* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator StartScreenTMPAlpha::Fade(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartScreenTMPAlpha_Fade_mB6285E87AD7DE020957AC2C3AA8096E612239EBC (StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B* __this, float ___start0, float ___end1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeU3Ed__5_tC4D6281E4F2A8BD628A459BF6D4BBC927F059070_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeU3Ed__5_tC4D6281E4F2A8BD628A459BF6D4BBC927F059070* L_0 = (U3CFadeU3Ed__5_tC4D6281E4F2A8BD628A459BF6D4BBC927F059070*)il2cpp_codegen_object_new(U3CFadeU3Ed__5_tC4D6281E4F2A8BD628A459BF6D4BBC927F059070_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeU3Ed__5__ctor_mD26358BE4CA0F3292CEAA15358D6BEEF8DAD7A51(L_0, 0, NULL);
		U3CFadeU3Ed__5_tC4D6281E4F2A8BD628A459BF6D4BBC927F059070* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFadeU3Ed__5_tC4D6281E4F2A8BD628A459BF6D4BBC927F059070* L_2 = L_1;
		float L_3 = ___start0;
		NullCheck(L_2);
		L_2->___start_3 = L_3;
		U3CFadeU3Ed__5_tC4D6281E4F2A8BD628A459BF6D4BBC927F059070* L_4 = L_2;
		float L_5 = ___end1;
		NullCheck(L_4);
		L_4->___end_4 = L_5;
		return L_4;
	}
}
// System.Void StartScreenTMPAlpha::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartScreenTMPAlpha__ctor_m63D59BD63602DD4D52FC6352FC83CD5163D28789 (StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B* __this, const RuntimeMethod* method) 
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
// System.Void StartScreenTMPAlpha/<FadeInOut>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInOutU3Ed__4__ctor_m357F82B1DB53EAE6A4EC79F671E9B2881D36EB0B (U3CFadeInOutU3Ed__4_t815F8ED12B8378B29EFC52EA9A155DE4042003DB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void StartScreenTMPAlpha/<FadeInOut>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInOutU3Ed__4_System_IDisposable_Dispose_m6B5C5FDEE65384092848AC9D6C802F09ADCBD3FD (U3CFadeInOutU3Ed__4_t815F8ED12B8378B29EFC52EA9A155DE4042003DB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean StartScreenTMPAlpha/<FadeInOut>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeInOutU3Ed__4_MoveNext_mD0289F04A522583D145E8E2A98AEFCC077BAA666 (U3CFadeInOutU3Ed__4_t815F8ED12B8378B29EFC52EA9A155DE4042003DB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B* L_1 = __this->___U3CU3E4__this_2;
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
				goto IL_004e;
			}
			case 2:
			{
				goto IL_007a;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0029:
	{
		// yield return StartCoroutine(Fade(1, 0));
		StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B* L_3 = V_1;
		StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = StartScreenTMPAlpha_Fade_mB6285E87AD7DE020957AC2C3AA8096E612239EBC(L_4, (1.0f), (0.0f), NULL);
		NullCheck(L_3);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_3, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return StartCoroutine(Fade(0, 1));
		StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B* L_7 = V_1;
		StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B* L_8 = V_1;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = StartScreenTMPAlpha_Fade_mB6285E87AD7DE020957AC2C3AA8096E612239EBC(L_8, (0.0f), (1.0f), NULL);
		NullCheck(L_7);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_7, L_9, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_007a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while(true)
		goto IL_0029;
	}
}
// System.Object StartScreenTMPAlpha/<FadeInOut>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInOutU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0CF05190801EFA6345EA4E18B25C095453DBFF6F (U3CFadeInOutU3Ed__4_t815F8ED12B8378B29EFC52EA9A155DE4042003DB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void StartScreenTMPAlpha/<FadeInOut>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInOutU3Ed__4_System_Collections_IEnumerator_Reset_m552769BEF05ADE75A6EEDBE6EEFC0D9575846E1F (U3CFadeInOutU3Ed__4_t815F8ED12B8378B29EFC52EA9A155DE4042003DB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeInOutU3Ed__4_System_Collections_IEnumerator_Reset_m552769BEF05ADE75A6EEDBE6EEFC0D9575846E1F_RuntimeMethod_var)));
	}
}
// System.Object StartScreenTMPAlpha/<FadeInOut>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInOutU3Ed__4_System_Collections_IEnumerator_get_Current_mCBF05EDE13A48766586DC1A4F19D4C4EE0DC9E74 (U3CFadeInOutU3Ed__4_t815F8ED12B8378B29EFC52EA9A155DE4042003DB* __this, const RuntimeMethod* method) 
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
// System.Void StartScreenTMPAlpha/<Fade>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__5__ctor_mD26358BE4CA0F3292CEAA15358D6BEEF8DAD7A51 (U3CFadeU3Ed__5_tC4D6281E4F2A8BD628A459BF6D4BBC927F059070* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void StartScreenTMPAlpha/<Fade>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__5_System_IDisposable_Dispose_mF35711BE27E0930F98434E4B79CA718345A29107 (U3CFadeU3Ed__5_tC4D6281E4F2A8BD628A459BF6D4BBC927F059070* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean StartScreenTMPAlpha/<Fade>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeU3Ed__5_MoveNext_m44B2672A886B39EE020F5757E7A59F5435283303 (U3CFadeU3Ed__5_tC4D6281E4F2A8BD628A459BF6D4BBC927F059070* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B* V_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float currentTime = 0.0f;
		__this->___U3CcurrentTimeU3E5__2_5 = (0.0f);
		// float percent     = 0.0f;
		__this->___U3CpercentU3E5__3_6 = (0.0f);
		goto IL_00ab;
	}

IL_0039:
	{
		// currentTime += Time.deltaTime;
		float L_4 = __this->___U3CcurrentTimeU3E5__2_5;
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CcurrentTimeU3E5__2_5 = ((float)il2cpp_codegen_add(L_4, L_5));
		// percent = currentTime / fadeTime;
		float L_6 = __this->___U3CcurrentTimeU3E5__2_5;
		StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B* L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->___fadeTime_4;
		__this->___U3CpercentU3E5__3_6 = ((float)(L_6/L_8));
		// Color color             = textStartScreen.color;
		StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B* L_9 = V_1;
		NullCheck(L_9);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_10 = L_9->___textStartScreen_5;
		NullCheck(L_10);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_10);
		V_2 = L_11;
		// color.a                 = Mathf.Lerp(start, end, percent);
		float L_12 = __this->___start_3;
		float L_13 = __this->___end_4;
		float L_14 = __this->___U3CpercentU3E5__3_6;
		float L_15;
		L_15 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_12, L_13, L_14, NULL);
		(&V_2)->___a_3 = L_15;
		// textStartScreen.color   = color;
		StartScreenTMPAlpha_t2F15BC149440F1D622070303A4F3E7DBC87EBB4B* L_16 = V_1;
		NullCheck(L_16);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = L_16->___textStartScreen_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = V_2;
		NullCheck(L_17);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_18);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a4:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00ab:
	{
		// while(percent < 1)
		float L_19 = __this->___U3CpercentU3E5__3_6;
		if ((((float)L_19) < ((float)(1.0f))))
		{
			goto IL_0039;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object StartScreenTMPAlpha/<Fade>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2CF1BC0A1D7AB963CD78E05BA1363A42CDFEDF98 (U3CFadeU3Ed__5_tC4D6281E4F2A8BD628A459BF6D4BBC927F059070* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void StartScreenTMPAlpha/<Fade>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__5_System_Collections_IEnumerator_Reset_m716A5A391D17D4FE6D26F2E7FB8E532106F5CEE4 (U3CFadeU3Ed__5_tC4D6281E4F2A8BD628A459BF6D4BBC927F059070* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeU3Ed__5_System_Collections_IEnumerator_Reset_m716A5A391D17D4FE6D26F2E7FB8E532106F5CEE4_RuntimeMethod_var)));
	}
}
// System.Object StartScreenTMPAlpha/<Fade>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeU3Ed__5_System_Collections_IEnumerator_get_Current_mE125B9560F8B87121681BCF749817577CE6FA0FD (U3CFadeU3Ed__5_tC4D6281E4F2A8BD628A459BF6D4BBC927F059070* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// public float fillAmount { get { return m_FillAmount; } set { if (SetPropertyUtility.SetStruct(ref m_FillAmount, Mathf.Clamp01(value))) SetVerticesDirty(); } }
		float L_0 = __this->___m_FillAmount_43;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Movement2D_MoveTo_mF1CB1E7E740D8CD33DB87DF41A6078E43A11CE08_inline (Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) 
{
	{
		// moveDirection = direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___direction0;
		__this->___moveDirection_5 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Movement2D_get_MoveSpeed_mD027A0B2C2DB291D9C10061D7E9980AC7BAF3CC7_inline (Movement2D_tB002A02C36ABE4ACEEDCF6153DEB59B9A7FD83C2* __this, const RuntimeMethod* method) 
{
	{
		// get => moveSpeed;
		float L_0 = __this->___moveSpeed_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EnemyHP_get_CurrentHP_m1AFCFF4BE6BC8821B29D08C4A03A9B199AAF0A47_inline (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, const RuntimeMethod* method) 
{
	{
		// public float            CurrentHP => currentHP;
		float L_0 = __this->___currentHP_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EnemyHP_get_MaxHP_m464A78A22573CE8C9B945AF5FC6C3DD9DAA4E843_inline (EnemyHP_t4325F0CE402CF433AABB25D2AA0A6945A27C9F3E* __this, const RuntimeMethod* method) 
{
	{
		// public float            MaxHP => maxHP;
		float L_0 = __this->___maxHP_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerGold_get_CurrentGold_mA17DB7136BE6396A2A166C49FC9AD39C22F471D7_inline (PlayerGold_t40988B4C59A611135DA0959FA7BF6C22095CA9B5* __this, const RuntimeMethod* method) 
{
	{
		// get => currentGold;
		int32_t L_0 = __this->___currentGold_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerHP_get_CurrentHP_m187C956F1BF80DC9AEF705935571087303834433_inline (PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* __this, const RuntimeMethod* method) 
{
	{
		// public float    CurrentHP => currentHP;
		float L_0 = __this->___currentHP_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerHP_get_MaxHP_m734A2C9EDFCF165FF1FCFBCBA17597A853B2C239_inline (PlayerHP_tAA5300E8B09DA6BBE0C6C9F75D5CC9BA3613C220* __this, const RuntimeMethod* method) 
{
	{
		// public float    MaxHP => maxHP;
		float L_0 = __this->___maxHP_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EnemySpawner_get_CurrentEnemyCount_m4173A42C959B2BE0535E263EF31FEE54010D9C07_inline (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	{
		// public int          CurrentEnemyCount => currentEnemyCount;
		int32_t L_0 = __this->___currentEnemyCount_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tile_set_IsBuildTower_m8AE0751713B4A2D8412FC8DFD6EFF4DCC5505566_inline (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsBuildTower { set; get; }
		bool L_0 = ___value0;
		__this->___U3CIsBuildTowerU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TowerWeapon_get_WeaponType_mD5D536AC6A1D64F64CB8E33F4773F7C5D7ED3639_inline (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	{
		// public WeaponType   WeaponType  => weaponType;
		int32_t L_0 = __this->___weaponType_6;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TowerWeapon_get_AddedDamage_m05255BC33B6270A9B5990C00F67F647F04350ABD_inline (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	{
		// get => addedDamage;
		float L_0 = __this->___addedDamage_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tile_get_IsBuildTower_m233F2108E499BF36313C767C696074461180B069_inline (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsBuildTower { set; get; }
		bool L_0 = __this->___U3CIsBuildTowerU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mBA6E23860A365E6F0F9A2AADC3D19E698687230A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TowerWeapon_get_BuffLevel_m67E3AFCFC2ADF31D95FAFB28225802105ED1102A_inline (TowerWeapon_tBB41CDC81D54E5747A940D9D5EB9CEC46BD769DF* __this, const RuntimeMethod* method) 
{
	{
		// get => buffLevel;
		int32_t L_0 = __this->___buffLevel_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* EnemySpawner_get_EnemyList_m74765A74E069D289DF48986FCCC642B1FBA188E0_inline (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	{
		// public List<Enemy>  EnemyList => enemyList;
		List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* L_0 = __this->___enemyList_11;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
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
		float L_2 = ___value0;
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
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
