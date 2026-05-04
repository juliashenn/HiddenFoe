#include "pch-cpp.hpp"





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

struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
struct Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A;
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
struct IEqualityComparer_1_t958EAC5D5BD188327B4736D6F82A08EA1476A4C8;
struct IReadOnlyDictionary_2_t5FDAB12D770C592AB2BDBE4D603F6C9046115824;
struct KeyCollection_t241D824CC3960CF32263F0451F55AE376CAE533A;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t3A076A19AF26E22A128C32B5C19804DDD2877607;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF;
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
struct ValueCollection_t6F8DC66213393965F9E7A6CDC7289FA9714A511B;
struct EntryU5BU5D_t76665C21070EE609476C97C0E78E5D2EC2E2E8C3;
struct NativeArray_1U5BU5D_t495E50C84E09FD9543D64DFF017C2FA53D91C475;
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct SourceProcessorContainerU5BU5D_tB96692E0E93CE748C3228F1A11B6BCB386DC9E3D;
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
struct TargetProcessorContainerU5BU5D_t28BDB198AFB97DDAD08ADB09E781E906662DE841;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
struct JointPairU5BU5D_t497D50D5A83F1CF02B5650B119ED2977C0131C9E;
struct ShapePoseDataU5BU5D_t8A41073F3465AA0DABA17D6E5DAB52575AB5F014;
struct TextProcessingElementU5BU5D_tC3E97D1672C8DB6E1F91DB2C0987D0ED9A2E7113;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
struct CharacterRetargeter_t1C941359922B316027DE38BC0BCC4C0249F53533;
struct CharacterRetargeterConfig_tD8FF2B4F325BC140BE821B1083EA466B12F72877;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459;
struct ISourceDataProvider_tE4EE67FEF00E67F376A1ABA6CB8A8F655309AE32;
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884;
struct NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088;
struct NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
struct SkeletonData_t020F9688821723F3D7B0FEF129449FF8B2133B45;
struct SkeletonDraw_tAF9D0523E0DEEA27947AE061C23B239055D0BC0D;
struct SkeletonRetargeter_t915EB48FEFE3A7B5774FBCB7A1F4FFC853FAFF5A;
struct String_t;
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t3C91A090698AB4DFB4BF34F81176DDA58B277AA1;
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
struct MissingCharacterEventCallback_t955241181324E0FEF9A9BDBA400E8780F8979DE6;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t864BC8AACD3B44F46B86B4E945881FF371B4FA5D____49BA01B62156F7E85D6E45FE772A5F9510D71D26FE45759296FFCECC476D436F_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t864BC8AACD3B44F46B86B4E945881FF371B4FA5D____ED7876FF908F3C4172E17996F854DDCB806655DED1EFFFB6C01D6E4CE23BEB8A_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04538C68DF20238E40231C9243A35004CC365362;
IL2CPP_EXTERN_C String_t* _stringLiteral5798C25B34CB46CF74189C82D0019F931F1C8DA7;
IL2CPP_EXTERN_C String_t* _stringLiteral5E00C3B58F1400152936415B53C708BBDA7B4592;
IL2CPP_EXTERN_C String_t* _stringLiteral5F517074141F617F10CC57E4A69DCC1E3039DEEF;
IL2CPP_EXTERN_C String_t* _stringLiteral603B315A3E689D8AADCEA98C4F4507E5B12F6462;
IL2CPP_EXTERN_C String_t* _stringLiteral9275ABFFD7C52F583335B4964B8209021608C56F;
IL2CPP_EXTERN_C String_t* _stringLiteralB43CA88F3B50BFB16E3FED66F47B6E84F078BB50;
IL2CPP_EXTERN_C String_t* _stringLiteralB90B4454D14B36CF9247674FE65EC87E09D06A9C;
IL2CPP_EXTERN_C String_t* _stringLiteralF8C3930829CE1B7FB2BDDD26DE7D57E92C522DD8;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionExtensions_GetValueOrDefault_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m33DBF46EE1198A476DD015B1FE54C993A673A1A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisNetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF_mA5512CDEFD4A71A5E00B84AA5D256701342133BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisINetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_mC9539BC692176C78B1100D0FDDDE3E73E2A045B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088_m1969FBD3F98675FA29C2CBFE751C4CF11D94A72C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m2F434390DA905493131BC0D1B4FADE83322FF47D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m193A33669C79EC9ABF1A6F0E0B33D3EC2AC38351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m36E53A7AC4543BC2C475600A8F4074D6311580C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisNetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF_mDA2B40953415CB0E23760570A498C31874BCC97B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_CopyFrom_mA833BCBDF37D94BF60950C40CD5C281B113BA999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_CopyFrom_mC2DECA91F8EECD68FEC74EAEB85DFF1AEA89C271_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_CopyTo_mA26E7EBCA9AE98B7D07D716D51C772B4112BE6E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mC07280A768D065A052D995F3E6175A27CD62E1F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mD96DC3E4C47005AB224CA46590B336EF17DEF032_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m018651076DF9934BB5F9C88A179C94132F8CAD72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_m318928FA479173AFA6DEB47FF3B9D54868151D87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mC7634553E8E6D340596899DFEA3ABFC230F7E992_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m35ADE4B5120B6BDC3318EF8318FEAF40A02DE27E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m9B7CDD16CB4697B3A2923CD447F6EB8C826135A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m871CCE28579E8FA2F3D181BF5AAAEB6FA27A0AEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m4DB40FDBC4B99D5CA77C191551B95300C9AE772A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tEE2243D922E36AF0329FAADFC8F9D9CC239E91BF 
{
};
struct Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t76665C21070EE609476C97C0E78E5D2EC2E2E8C3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t241D824CC3960CF32263F0451F55AE376CAE533A* ____keys;
	ValueCollection_t6F8DC66213393965F9E7A6CDC7289FA9714A511B* ____values;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF  : public RuntimeObject
{
	NativeArray_1U5BU5D_t495E50C84E09FD9543D64DFF017C2FA53D91C475* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_t864BC8AACD3B44F46B86B4E945881FF371B4FA5D  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t3C91A090698AB4DFB4BF34F81176DDA58B277AA1  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack;
	int32_t ___index;
	float ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack;
	int32_t ___index;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	bool ___isDefaultMaterial;
	bool ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	uint8_t ___bold;
	uint8_t ___italic;
	uint8_t ___underline;
	uint8_t ___strikethrough;
	uint8_t ___highlight;
	uint8_t ___superscript;
	uint8_t ___subscript;
	uint8_t ___uppercase;
	uint8_t ___lowercase;
	uint8_t ___smallcaps;
};
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	float ___m_Left;
	float ___m_Right;
	float ___m_Top;
	float ___m_Bottom;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D357_tB405E37262A3C97F2EA9B9EE2A94FEEADC6DBB78 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D357_tB405E37262A3C97F2EA9B9EE2A94FEEADC6DBB78__padding[357];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D783_tB6474C757C053A668C62D3425F947289C38EAA21 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D783_tB6474C757C053A668C62D3425F947289C38EAA21__padding[783];
	};
};
#pragma pack(pop, tp)
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialIndex;
};
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialIndex;
};
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialIndex;
};
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array;
	int32_t ___m_Index;
};
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray* ___m_Array;
	int32_t ___m_Index;
};
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray* ___m_Array;
	int32_t ___m_Index;
};
struct MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	intptr_t ____value;
};
struct Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25 
{
	bool ___hasValue;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value;
};
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	bool ___hasValue;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value;
};
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack;
	int32_t ___index;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack;
	int32_t ___index;
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct ColorMode_tA7A815AAB9F175EFBA0AE0814E55728432A880BF 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max;
};
struct FontStyles_t9E611EE6BBE6E192A73EAFF7872596517C527FF5 
{
	int32_t ___value__;
};
struct FontWeight_tA2585C0A73B70D31CE71E7843149098A5E16BC80 
{
	int32_t ___value__;
};
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding;
};
struct HorizontalAlignmentOptions_tCC21260E9FBEC656BA7783643ED5F44AFF7955A1 
{
	int32_t ___value__;
};
struct JointType_tD3C903B98130A204B03A9C6068FC6DAF002095E1 
{
	int32_t ___value__;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct TMP_TextElementType_t51EE6662436732F22C6B599F5757B7F35F706342 
{
	int32_t ___value__;
};
struct TextAlignmentOptions_tF3FA9020F7E2AF1A48660044540254009A22EF01 
{
	int32_t ___value__;
};
struct TextOverflowModes_t7DCCD00C16E3223CE50CDDCC53F785C0405BE203 
{
	int32_t ___value__;
};
struct TextRenderFlags_tE023FF398ECFE57A1DBC6FD2A1AF4AE9620F6E1C 
{
	int32_t ___value__;
};
struct TextWrappingModes_t982BC65D6DA703E73C04B99286285ECD3DDF207E 
{
	int32_t ___value__;
};
struct TextureMappingOptions_t0E1A47C529DEB45A875486256E7026E97C940DAE 
{
	int32_t ___value__;
};
struct TransformAccessArray_t104EDE5BB3DC7E294332BB1D2AA508CAEDEE83D4 
{
	intptr_t ___m_TransformArray;
};
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight;
};
struct VertexSortingOrder_t95B7AEDBDCAACC3459B6476E5CCC594A6422FFA8 
{
	int32_t ___value__;
};
struct VerticalAlignmentOptions_tCEF70AF60282B71AEEE14D51253CE6A61E72D855 
{
	int32_t ___value__;
};
struct CoordinateSpace_t1BEA09FF296F8605370BFC70BA623F47B7CFDADF 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Up;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Forward;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Right;
	float ___MetersToUnitScale;
};
struct NativeTransform_tC40A742C839E792BE0B39C11C60B3060191C8618 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Orientation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Scale;
};
struct RetargetingBehavior_t8C74ED982CD58F1041B226BA0187CD8A684AD382 
{
	uint32_t ___value__;
};
struct SerializationCompressionType_tD03B7B89FCE177927E3BA175A86C421BC59AD9E6 
{
	uint32_t ___value__;
};
struct SkeletonType_tF9BB117A008E0E2A5877E70EA15A0774FE4C5C34 
{
	uint32_t ___value__;
};
struct Ownership_t9C44ADA4AC167B41C9AD8EE6903CDF3B7D9F5215 
{
	int32_t ___value__;
};
struct TextInputSources_t41387D6C9CB16E60390F47A15AEB8185BE966D26 
{
	int32_t ___value__;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack;
	int32_t ___index;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	int32_t ___controlCharacterCount;
	int32_t ___characterCount;
	int32_t ___visibleCharacterCount;
	int32_t ___spaceCount;
	int32_t ___visibleSpaceCount;
	int32_t ___wordCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharacterIndex;
	float ___length;
	float ___lineHeight;
	float ___ascender;
	float ___baseline;
	float ___descender;
	float ___maxAdvance;
	float ___width;
	float ___marginLeft;
	float ___marginRight;
	int32_t ___alignment;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents;
};
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct FrameData_tCCA8030951A5D33FA0121E7062B0BEC4ACE81E10 
{
	uint8_t ___BodyTrackingFidelity;
	double ___Timestamp;
	bool ___IsValid;
	float ___Confidence;
	uint8_t ___JointSet;
	uint8_t ___CalibrationState;
	bool ___IsUsingHandsLeft;
	bool ___IsUsingHandsRight;
	uint32_t ___SkeletonChangeCount;
	NativeTransform_tC40A742C839E792BE0B39C11C60B3060191C8618 ___LeftInput;
	NativeTransform_tC40A742C839E792BE0B39C11C60B3060191C8618 ___RightInput;
	NativeTransform_tC40A742C839E792BE0B39C11C60B3060191C8618 ___CenterEye;
};
struct SerializationSettings_tFA9932068AF9C4903D829F5DF7E0E267772E14B5 
{
	uint32_t ___CompressionType;
	float ___PositionThreshold;
	float ___RotationAngleThresholdDegrees;
	float ___ShapeThreshold;
	int32_t ___NumberOfSnapshots;
};
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct SkeletonRetargeter_t915EB48FEFE3A7B5774FBCB7A1F4FFC853FAFF5A  : public RuntimeObject
{
	bool ___U3CIsInitializedU3Ek__BackingField;
	bool ___U3CAppliedPoseU3Ek__BackingField;
	SkeletonData_t020F9688821723F3D7B0FEF129449FF8B2133B45* ___U3CSourceSkeletonDataU3Ek__BackingField;
	SkeletonData_t020F9688821723F3D7B0FEF129449FF8B2133B45* ___U3CTargetSkeletonDataU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___HipsScale;
	NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 ___RetargetedPose;
	NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 ___RetargetedPoseLocal;
	NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 ___TargetReferencePoseLocal;
	NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 ___SourcePose;
	NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 ___SourceReferencePose;
	NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 ___SourceMinTPose;
	NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 ___SourceMaxTPose;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___SourceParentIndices;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___TargetParentIndices;
	uint32_t ____retargetingBehavior;
	bool ____hideLowerBodyWhenUpperBodyTracking;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____hideLegScale;
	bool ____applyRootScale;
	bool ____applyHeadScale;
	float ____currentScale;
	float ____headScaleFactor;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____scaleRange;
	SkeletonDraw_tAF9D0523E0DEEA27947AE061C23B239055D0BC0D* ____sourceSkeletonDraw;
	SkeletonDraw_tAF9D0523E0DEEA27947AE061C23B239055D0BC0D* ____targetSkeletonDraw;
	SkeletonDraw_tAF9D0523E0DEEA27947AE061C23B239055D0BC0D* ____sourceTPoseSkeletonDraw;
	SkeletonDraw_tAF9D0523E0DEEA27947AE061C23B239055D0BC0D* ____targetTPoseSkeletonDraw;
	uint64_t ____nativeHandle;
	NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 ____targetReferencePose;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ____targetFingerIndices;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ____mappedJointMask;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ____applyPoseJobHandle;
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___renderedWidth;
	float ___renderedHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	bool ___isDrivenLineSpacing;
	int32_t ___lastBaseGlyphIndex;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	bool ___tagNoParsing;
	bool ___isNonBreakingSpace;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___renderedWidth;
	float ___renderedHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	int32_t ___isDrivenLineSpacing;
	int32_t ___lastBaseGlyphIndex;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___renderedWidth;
	float ___renderedHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	int32_t ___isDrivenLineSpacing;
	int32_t ___lastBaseGlyphIndex;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
};
struct DeserializedSnapshotData_t9231AD93BF7AE12D4D460BA81FF803915929FDE9 
{
	double ___DataVersion;
	NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 ___TargetSkeletonPose;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___FacePose;
	NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 ___SourceSkeletonPose;
	NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 ___BindPose;
	double ___Timestamp;
	uint32_t ___CompressionType;
	int32_t ___Ack;
	FrameData_tCCA8030951A5D33FA0121E7062B0BEC4ACE81E10 ___FrameData;
	int32_t ___NumBindPoseJoints;
	CoordinateSpace_t1BEA09FF296F8605370BFC70BA623F47B7CFDADF ___CoordinateSpaceSource;
};
struct SnapshotData_tC4810AE9979A3341F72956EA03A757D5900A32E5 
{
	int32_t ___BaselineAck;
	double ___Timestamp;
	NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 ___TargetSkeletonPose;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___TargetSkeletonIndices;
	NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 ___SourceSkeletonPose;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___SourceSkeletonIndices;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___FacePose;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___FaceIndices;
	bool ___SerializeFrameData;
	FrameData_tCCA8030951A5D33FA0121E7062B0BEC4ACE81E10 ___FrameData;
	NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 ___BindPose;
	int32_t ___NumBindPoseJoints;
	CoordinateSpace_t1BEA09FF296F8605370BFC70BA623F47B7CFDADF ___RecordingCoordinateSpaceSource;
};
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack;
	int32_t ___index;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct CharacterRetargeterConfig_tD8FF2B4F325BC140BE821B1083EA466B12F72877  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CValidationErrorsU3Ek__BackingField;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ____config;
	JointPairU5BU5D_t497D50D5A83F1CF02B5650B119ED2977C0131C9E* ____jointPairs;
	ShapePoseDataU5BU5D_t8A41073F3465AA0DABA17D6E5DAB52575AB5F014* ____shapePoseData;
	float ____maxFaceshapeValue;
	TransformAccessArray_t104EDE5BB3DC7E294332BB1D2AA508CAEDEE83D4 ____joints;
};
struct NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___U3CClientIdsU3Ek__BackingField;
	uint64_t ___U3CLocalClientIdU3Ek__BackingField;
	NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* ____self;
	NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* ____target;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ____debugDataText;
	float ____receivedScale;
	float ____debugDataTimer;
	int32_t ____debugExpectedSizeInBytes;
};
struct NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___BytesReceived;
	NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* ____networkCharacterRetargeter;
	bool ____applyData;
	float ____spawnDelay;
	RuntimeObject* ____characterBehaviour;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____character;
	Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* ____clientsLastAck;
	Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* ____streamedData;
	NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 ____bodyPose;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ____facePose;
	bool ____dataIsValid;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ____serializedData;
	float ____elapsedSendTime;
	float ____elapsedSyncTime;
	bool ____createdHandle;
	int32_t ____dataReadCount;
};
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct CharacterRetargeter_t1C941359922B316027DE38BC0BCC4C0249F53533  : public CharacterRetargeterConfig_tD8FF2B4F325BC140BE821B1083EA466B12F72877
{
	bool ____debugDrawSourceSkeleton;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____debugDrawSourceSkeletonColor;
	bool ____debugDrawTargetSkeleton;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____debugDrawTargetSkeletonColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____debugDrawInvalidTargetSkeletonColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____debugDrawInvalidSourceSkeletonColor;
	bool ____debugDrawSourceTPose;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____debugDrawSourceTPoseColor;
	bool ____debugDrawTargetTPose;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____debugDrawTargetTPoseColor;
	SkeletonRetargeter_t915EB48FEFE3A7B5774FBCB7A1F4FFC853FAFF5A* ____skeletonRetargeter;
	SourceProcessorContainerU5BU5D_tB96692E0E93CE748C3228F1A11B6BCB386DC9E3D* ____sourceProcessorContainers;
	TargetProcessorContainerU5BU5D_t28BDB198AFB97DDAD08ADB09E781E906662DE841* ____targetProcessorContainers;
	RuntimeObject* ____dataProvider;
	String_t* ____currentManifestation;
	bool ____isValid;
	bool ____isCalibrated;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____debugDrawTransform;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ____convertPoseJobHandle;
};
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	bool ___m_SkipLayoutUpdate;
	bool ___m_SkipMaterialUpdate;
	bool ___m_RaycastTarget;
	bool ___m_RaycastTargetCache;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform;
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas;
	bool ___m_VertsDirty;
	bool ___m_MaterialDirty;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs;
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner;
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField;
};
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	bool ___m_ShouldRecalculateStencil;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial;
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask;
	bool ___m_Maskable;
	bool ___m_IsMaskingGraphic;
	bool ___m_IncludeForMasking;
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged;
	bool ___m_ShouldRecalculate;
	int32_t ___m_StencilValue;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners;
};
struct NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF  : public CharacterRetargeter_t1C941359922B316027DE38BC0BCC4C0249F53533
{
	int32_t ____ownership;
	uint32_t ____compressionType;
	bool ____useDeltaCompression;
	bool ____useSyncInterval;
	float ____intervalToSendData;
	float ____intervalToSyncData;
	float ____positionThreshold;
	float ____rotationAngleThreshold;
	float ____shapeThreshold;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bodyIndicesToSync;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bodyIndicesToSend;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____faceIndicesToSend;
	bool ____useInterpolation;
	int32_t ____maxBufferSize;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____objectsToHideUntilValid;
	bool ____hasValidDebugPose;
	bool ____hasLoggedOwnershipWarning;
};
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	String_t* ___m_text;
	bool ___m_IsTextBackingStringDirty;
	RuntimeObject* ___m_TextPreprocessor;
	bool ___m_isRightToLeft;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset;
	bool ___m_isSDFShader;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial;
	int32_t ___m_currentMaterialIndex;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials;
	bool ___m_isMaterialDirty;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_HighlightState;
	bool ___m_ConvertToLinearSpace;
	bool ___m_enableVertexGradient;
	int32_t ___m_colorMode;
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset;
	bool ___m_tintAllSprites;
	bool ___m_tintSprite;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor;
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet;
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle;
	int32_t ___m_TextStyleHashCode;
	bool ___m_overrideHtmlColors;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor;
	float ___m_outlineWidth;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_currentEnvMapRotation;
	bool ___m_hasEnvMapProperty;
	float ___m_fontSize;
	float ___m_currentFontSize;
	float ___m_fontSizeBase;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack;
	int32_t ___m_fontWeight;
	int32_t ___m_FontWeightInternal;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack;
	bool ___m_enableAutoSizing;
	float ___m_maxFontSize;
	float ___m_minFontSize;
	int32_t ___m_AutoSizeIterationCount;
	int32_t ___m_AutoSizeMaxIterationCount;
	bool ___m_IsAutoSizePointSizeSet;
	float ___m_fontSizeMin;
	float ___m_fontSizeMax;
	int32_t ___m_fontStyle;
	int32_t ___m_FontStyleInternal;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack;
	bool ___m_isUsingBold;
	int32_t ___m_HorizontalAlignment;
	int32_t ___m_VerticalAlignment;
	int32_t ___m_textAlignment;
	int32_t ___m_lineJustification;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners;
	float ___m_characterSpacing;
	float ___m_cSpacing;
	float ___m_monoSpacing;
	bool ___m_duoSpace;
	float ___m_characterHorizontalScale;
	float ___m_wordSpacing;
	float ___m_lineSpacing;
	float ___m_lineSpacingDelta;
	float ___m_lineHeight;
	bool ___m_IsDrivenLineSpacing;
	float ___m_lineSpacingMax;
	float ___m_paragraphSpacing;
	float ___m_charWidthMaxAdj;
	float ___m_charWidthAdjDelta;
	int32_t ___m_TextWrappingMode;
	bool ___m_isCharacterWrappingEnabled;
	bool ___m_isNonBreakingSpace;
	bool ___m_isIgnoringAlignment;
	float ___m_wordWrappingRatios;
	int32_t ___m_overflowMode;
	int32_t ___m_firstOverflowCharacterIndex;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent;
	bool ___m_isTextTruncated;
	bool ___m_enableKerning;
	int32_t ___m_LastBaseGlyphIndex;
	List_1_t3A076A19AF26E22A128C32B5C19804DDD2877607* ___m_ActiveFontFeatures;
	bool ___m_enableExtraPadding;
	bool ___checkPaddingRequired;
	bool ___m_isRichText;
	bool ___m_EmojiFallbackSupport;
	bool ___m_parseCtrlCharacters;
	bool ___m_isOverlay;
	bool ___m_isOrthographic;
	bool ___m_isCullingEnabled;
	bool ___m_isMaskingEnabled;
	bool ___isMaskUpdateRequired;
	bool ___m_ignoreCulling;
	int32_t ___m_horizontalMapping;
	int32_t ___m_verticalMapping;
	float ___m_uvLineOffset;
	int32_t ___m_renderMode;
	int32_t ___m_geometrySortingOrder;
	bool ___m_IsTextObjectScaleStatic;
	bool ___m_VertexBufferAutoSizeReduction;
	int32_t ___m_firstVisibleCharacter;
	int32_t ___m_maxVisibleCharacters;
	int32_t ___m_maxVisibleWords;
	int32_t ___m_maxVisibleLines;
	bool ___m_useMaxVisibleDescender;
	int32_t ___m_pageToDisplay;
	bool ___m_isNewPage;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin;
	float ___m_marginLeft;
	float ___m_marginRight;
	float ___m_marginWidth;
	float ___m_marginHeight;
	float ___m_width;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo;
	bool ___m_havePropertiesChanged;
	bool ___m_isUsingLegacyAnimationComponent;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition;
	bool ___U3CautoSizeTextContainerU3Ek__BackingField;
	bool ___m_autoSizeTextContainer;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh;
	bool ___m_isVolumetricText;
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText;
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator;
	float ___m_flexibleHeight;
	float ___m_flexibleWidth;
	float ___m_minWidth;
	float ___m_minHeight;
	float ___m_maxWidth;
	float ___m_maxHeight;
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement;
	float ___m_preferredWidth;
	float ___m_RenderedWidth;
	bool ___m_isPreferredWidthDirty;
	float ___m_preferredHeight;
	float ___m_RenderedHeight;
	bool ___m_isPreferredHeightDirty;
	bool ___m_isCalculatingPreferredValues;
	int32_t ___m_layoutPriority;
	bool ___m_isLayoutDirty;
	bool ___m_isAwake;
	bool ___m_isWaitingOnResourceLoad;
	int32_t ___m_inputSource;
	float ___m_fontScaleMultiplier;
	float ___tag_LineIndent;
	float ___tag_Indent;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack;
	bool ___tag_NoParsing;
	bool ___m_isTextLayoutPhase;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_FXRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_FXScale;
	TextProcessingElementU5BU5D_tC3E97D1672C8DB6E1F91DB2C0987D0ED9A2E7113* ___m_TextProcessingArray;
	int32_t ___m_InternalTextProcessingArraySize;
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo;
	int32_t ___m_totalCharacterCount;
	int32_t ___m_characterCount;
	int32_t ___m_firstCharacterOfLine;
	int32_t ___m_firstVisibleCharacterOfLine;
	int32_t ___m_lastCharacterOfLine;
	int32_t ___m_lastVisibleCharacterOfLine;
	int32_t ___m_lineNumber;
	int32_t ___m_lineVisibleCharacterCount;
	int32_t ___m_lineVisibleSpaceCount;
	int32_t ___m_pageNumber;
	float ___m_PageAscender;
	float ___m_maxTextAscender;
	float ___m_maxCapHeight;
	float ___m_ElementAscender;
	float ___m_ElementDescender;
	float ___m_maxLineAscender;
	float ___m_maxLineDescender;
	float ___m_startOfLineAscender;
	float ___m_startOfLineDescender;
	float ___m_lineOffset;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack;
	bool ___m_colorGradientPresetIsTinted;
	float ___m_tabSpacing;
	float ___m_spacing;
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks;
	int32_t ___m_TextStyleStackDepth;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack;
	int32_t ___m_ItalicAngle;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack;
	float ___m_padding;
	float ___m_baselineOffset;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack;
	float ___m_xAdvance;
	int32_t ___m_textElementType;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement;
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis;
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset;
	int32_t ___m_spriteCount;
	int32_t ___m_spriteIndex;
	int32_t ___m_spriteAnimationID;
	bool ___m_ignoreActiveState;
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray;
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power;
};
struct U3CPrivateImplementationDetailsU3E_t864BC8AACD3B44F46B86B4E945881FF371B4FA5D_StaticFields
{
	__StaticArrayInitTypeSizeU3D783_tB6474C757C053A668C62D3425F947289C38EAA21 ___49BA01B62156F7E85D6E45FE772A5F9510D71D26FE45759296FFCECC476D436F;
	__StaticArrayInitTypeSizeU3D357_tB405E37262A3C97F2EA9B9EE2A94FEEADC6DBB78 ___ED7876FF908F3C4172E17996F854DDCB806655DED1EFFFB6C01D6E4CE23BEB8A;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct SkeletonRetargeter_t915EB48FEFE3A7B5774FBCB7A1F4FFC853FAFF5A_StaticFields
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____sourceJointsToIgnore;
};
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite;
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest;
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest;
	MissingCharacterEventCallback_t955241181324E0FEF9A9BDBA400E8780F8979DE6* ___OnMissingCharacter;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag;
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState;
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2;
	float ___k_LargePositiveFloat;
	float ___k_LargeNegativeFloat;
	int32_t ___k_LargePositiveInt;
	int32_t ___k_LargeNegativeInt;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_m831BC1785A9E9CB99F8D66BDFCF6D606622B5ADB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m2F434390DA905493131BC0D1B4FADE83322FF47D_gshared (Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mC7634553E8E6D340596899DFEA3ABFC230F7E992_gshared_inline (NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m018651076DF9934BB5F9C88A179C94132F8CAD72_gshared (NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m318928FA479173AFA6DEB47FF3B9D54868151D87_gshared_inline (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004_gshared (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionExtensions_GetValueOrDefault_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m33DBF46EE1198A476DD015B1FE54C993A673A1A0_gshared (RuntimeObject* ___0_dictionary, uint64_t ___1_key, int32_t ___2_defaultValue, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m871CCE28579E8FA2F3D181BF5AAAEB6FA27A0AEC_gshared (Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF Queue_1_Dequeue_m35ADE4B5120B6BDC3318EF8318FEAF40A02DE27E_gshared (Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m4DB40FDBC4B99D5CA77C191551B95300C9AE772A_gshared_inline (Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_CopyTo_mA26E7EBCA9AE98B7D07D716D51C772B4112BE6E4_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m9B7CDD16CB4697B3A2923CD447F6EB8C826135A9_gshared (Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m36E53A7AC4543BC2C475600A8F4074D6311580C2_gshared (Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* __this, uint64_t ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mD96DC3E4C47005AB224CA46590B336EF17DEF032_gshared (NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mC07280A768D065A052D995F3E6175A27CD62E1F6_gshared (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mDC5AD8BD13FE50E98B67B956C048367F4E8C6F94_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, bool ___2_worldPositionStays, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_CopyFrom_mA833BCBDF37D94BF60950C40CD5C281B113BA999_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m193A33669C79EC9ABF1A6F0E0B33D3EC2AC38351_gshared (Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_CopyFrom_mC2DECA91F8EECD68FEC74EAEB85DFF1AEA89C271_gshared (NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4* __this, NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkCharacterRetargeter_get_Owner_mA51C56F7CA62205111F2C0F7AA9B6402339A9A1C_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkCharacterHandler_get__shouldSyncData_mAB61A52C0C10B634CCDA7163EB1A282F5BA9BC9F (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NetworkCharacterRetargeter_get_IntervalToSendData_m3230055235BE0AADE878097B4177C275CBEB7B82_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkCharacterRetargeter_get_UseSyncInterval_m303CAAE066213B4304184D803629F9B97F94FD6F_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NetworkCharacterRetargeter_get_IntervalToSyncData_m112863BBC84150107DB2F6687712C10406E78E8B_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) ;
inline RuntimeObject* Component_GetComponent_TisINetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_mC9539BC692176C78B1100D0FDDDE3E73E2A045B2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
inline NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* Component_GetComponentInChildren_TisNetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF_mA5512CDEFD4A71A5E00B84AA5D256701342133BF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m831BC1785A9E9CB99F8D66BDFCF6D606622B5ADB_gshared)(__this, ___0_includeInactive, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkCharacterHandler_get__initialized_m9F96A8B3BBBC308EA6B9DEFFA7FB50D58886944F (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_TryReceiveData_m6ABFDCD7451B9F354C491C8BB7E1C64C0D16BE44 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, float ___0_networkTime, float ___1_renderTime, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_TrySendData_mA636EB25A8A0EFBECF199BF232013D43D28F6BEE (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, float ___0_networkTime, const RuntimeMethod* method) ;
inline void Dictionary_2_Clear_m2F434390DA905493131BC0D1B4FADE83322FF47D (Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A*, const RuntimeMethod*))Dictionary_2_Clear_m2F434390DA905493131BC0D1B4FADE83322FF47D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_DisposeNativeArrays_m8B1BCC697DC7D04B2DA193F3D3D0C6DDCF53E202 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_UpdateSerializationSettings_mFE994935FA5DBECB736FE29E67A18AF976A932F6 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_InstantiateCharacter_mB79FAB3AEC5AE2BCCC2F1FD390D0444570D61AFE (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
inline NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* GameObject_GetComponentInChildren_TisNetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF_mDA2B40953415CB0E23760570A498C31874BCC97B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_set_Owner_m3567480B30AFE92608C37387330F1A4A924C4ED4_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_EnsureRetargetingInitialized_mCD745A97F7E395DB83D7342B50839B7FCE181FDD (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_UpdateSerializationSettings_mECB8A3C1E39DCE3C850372E207485F3610311FF7 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterRetargeterConfig_get_NumberOfJoints_m1FEAAC708409F540EBDB3342F59A29E7BA7B0BF8 (CharacterRetargeterConfig_tD8FF2B4F325BC140BE821B1083EA466B12F72877* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterRetargeterConfig_get_NumberOfShapes_mF53EB829414F83DF5909C05E8D0663BE31A35A19 (CharacterRetargeterConfig_tD8FF2B4F325BC140BE821B1083EA466B12F72877* __this, const RuntimeMethod* method) ;
inline bool NativeArray_1_get_IsCreated_mC7634553E8E6D340596899DFEA3ABFC230F7E992_inline (NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mC7634553E8E6D340596899DFEA3ABFC230F7E992_gshared_inline)(__this, method);
}
inline void NativeArray_1__ctor_m018651076DF9934BB5F9C88A179C94132F8CAD72 (NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m018651076DF9934BB5F9C88A179C94132F8CAD72_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline bool NativeArray_1_get_IsCreated_m318928FA479173AFA6DEB47FF3B9D54868151D87_inline (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m318928FA479173AFA6DEB47FF3B9D54868151D87_gshared_inline)(__this, method);
}
inline void NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004 (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CharacterRetargeter_get_IsValid_m5756208AA746F2E6E621AB8DB09227E0EF9EEDBB_inline (CharacterRetargeter_t1C941359922B316027DE38BC0BCC4C0249F53533* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SkeletonRetargeter_t915EB48FEFE3A7B5774FBCB7A1F4FFC853FAFF5A* CharacterRetargeter_get_SkeletonRetargeter_m12D09B9CC54C0875B336144AE3BD4EC2DC3D0EC5_inline (CharacterRetargeter_t1C941359922B316027DE38BC0BCC4C0249F53533* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SkeletonRetargeter_get_IsInitialized_m021B68D40327EDEB9F7F923AB283A9523A44D11E_inline (SkeletonRetargeter_t915EB48FEFE3A7B5774FBCB7A1F4FFC853FAFF5A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SkeletonRetargeter_get_AppliedPose_m2E6B140B499B29D089FF6DE283C998328A4A3A0A_inline (SkeletonRetargeter_t915EB48FEFE3A7B5774FBCB7A1F4FFC853FAFF5A* __this, const RuntimeMethod* method) ;
inline int32_t CollectionExtensions_GetValueOrDefault_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m33DBF46EE1198A476DD015B1FE54C993A673A1A0 (RuntimeObject* ___0_dictionary, uint64_t ___1_key, int32_t ___2_defaultValue, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, uint64_t, int32_t, const RuntimeMethod*))CollectionExtensions_GetValueOrDefault_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m33DBF46EE1198A476DD015B1FE54C993A673A1A0_gshared)(___0_dictionary, ___1_key, ___2_defaultValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_SerializeData_mF202BD75AC1509FAA6E99782F72D7014E8CEE7A2 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, int32_t ___0_lastAck, float ___1_networkTime, const RuntimeMethod* method) ;
inline bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_ResetSendTimers_mFB2963CF84F7E54F39C30583AEED70A19E424178 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkCharacterRetargeter_get_MaxBufferSize_m134754A05B523D238B55F31265C95535F13D42BA_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) ;
inline void Queue_1__ctor_m871CCE28579E8FA2F3D181BF5AAAEB6FA27A0AEC (Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF*, int32_t, const RuntimeMethod*))Queue_1__ctor_m871CCE28579E8FA2F3D181BF5AAAEB6FA27A0AEC_gshared)(__this, ___0_capacity, method);
}
inline NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF Queue_1_Dequeue_m35ADE4B5120B6BDC3318EF8318FEAF40A02DE27E (Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF*, const RuntimeMethod*))Queue_1_Dequeue_m35ADE4B5120B6BDC3318EF8318FEAF40A02DE27E_gshared)(__this, method);
}
inline void NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, const RuntimeMethod*))NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_gshared)(__this, method);
}
inline int32_t Queue_1_get_Count_m4DB40FDBC4B99D5CA77C191551B95300C9AE772A_inline (Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF*, const RuntimeMethod*))Queue_1_get_Count_m4DB40FDBC4B99D5CA77C191551B95300C9AE772A_gshared_inline)(__this, method);
}
inline void NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArray_1_CopyTo_mA26E7EBCA9AE98B7D07D716D51C772B4112BE6E4 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_array, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeArray_1_CopyTo_mA26E7EBCA9AE98B7D07D716D51C772B4112BE6E4_gshared)(__this, ___0_array, method);
}
inline void Queue_1_Enqueue_m9B7CDD16CB4697B3A2923CD447F6EB8C826135A9 (Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF*, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))Queue_1_Enqueue_m9B7CDD16CB4697B3A2923CD447F6EB8C826135A9_gshared)(__this, ___0_item, method);
}
inline void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*, int32_t, const RuntimeMethod*))Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_ToggleObjects_mC588DB04634695273D167754888DA749ED975304 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, bool ___0_isActive, const RuntimeMethod* method) ;
inline void Dictionary_2_set_Item_m36E53A7AC4543BC2C475600A8F4074D6311580C2 (Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* __this, uint64_t ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A*, uint64_t, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m36E53A7AC4543BC2C475600A8F4074D6311580C2_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t CharacterRetargeter_get_RetargetingHandle_mEEE86C51359EC442E2947FC308BFF5A0E7E19FCB (CharacterRetargeter_t1C941359922B316027DE38BC0BCC4C0249F53533* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_DeserializeData_m305A68042BE3FB4486F239EBB421C5151073E52D (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkCharacterHandler_get_ApplyData_m28424182FA2CE1931DDBEA82D9173CC05C46A301_inline (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkCharacterHandler_ReadBodyData_m9F651B27C85458C32C9D92828B9DC19F6DC5C9F5 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, float ___0_renderTime, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterRetargeterConfig_ApplyBodyPose_mF118DE98A7799924097492E0D80AE95224F166D8 (CharacterRetargeterConfig_tD8FF2B4F325BC140BE821B1083EA466B12F72877* __this, NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 ___0_bodyPose, int32_t ___1_jointType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_SetDebugPose_m66BFCE7721A2525D94029739858CA2AA27AF3898 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 ___0_bodyPose, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkCharacterHandler_ReadFaceData_mBCC539FDC8D9CEDDE71F0E9E4C04FD3306039D5E (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, float ___0_renderTime, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterRetargeterConfig_ApplyFacePose_m3B44C743369FC416EFE1D4C3A46D958B83D52B46 (CharacterRetargeterConfig_tD8FF2B4F325BC140BE821B1083EA466B12F72877* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___0_facePose, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkCharacterHandler_get__shouldSendData_m20732A7C31A5978530D65E04D91D63F2EAB05D73 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_SendData_m0FACB879AF6628886D3E11BB7B06B519BB206E21 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, float ___0_networkTime, const RuntimeMethod* method) ;
inline void NativeArray_1_Dispose_mD96DC3E4C47005AB224CA46590B336EF17DEF032 (NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4*, const RuntimeMethod*))NativeArray_1_Dispose_mD96DC3E4C47005AB224CA46590B336EF17DEF032_gshared)(__this, method);
}
inline void NativeArray_1_Dispose_mC07280A768D065A052D995F3E6175A27CD62E1F6 (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*, const RuntimeMethod*))NativeArray_1_Dispose_mC07280A768D065A052D995F3E6175A27CD62E1F6_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, bool ___2_worldPositionStays, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mDC5AD8BD13FE50E98B67B956C048367F4E8C6F94_gshared)(___0_original, ___1_parent, ___2_worldPositionStays, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkCharacterRetargeter_get_UseDeltaCompression_m212A4EB54A59C75C993503D698D3B71BF19455D1_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 CharacterRetargeterConfig_GetCurrentBodyPose_mEF6A851C4F65D63D567F31A1B2BAAE28373925A4 (CharacterRetargeterConfig_tD8FF2B4F325BC140BE821B1083EA466B12F72877* __this, int32_t ___0_jointType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeTransform__ctor_mDA63D7AB12228914E5B4AA3DA4F92390277D1347 (NativeTransform_tC40A742C839E792BE0B39C11C60B3060191C8618* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_orientation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_scale, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF CharacterRetargeterConfig_GetCurrentFacePose_mA6CC8067E4B81462F3EB39A8A348AA7ADD1BC2EA (CharacterRetargeterConfig_tD8FF2B4F325BC140BE821B1083EA466B12F72877* __this, bool ___0_normalized, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NetworkCharacterRetargeter_get_BodyIndicesToSend_m9EBB87E9D2DA9CF5A900A01095D218EB3C1A9441_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NetworkCharacterRetargeter_get_BodyIndicesToSync_m2F3FEF33EB7BB2EEE4D3758E851D48A0D1861E58_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NetworkCharacterRetargeter_get_FaceIndicesToSync_m43ED9E2F78F485FC7F45BB4D2DE34079E5DC43EC_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArray_1_CopyFrom_mA833BCBDF37D94BF60950C40CD5C281B113BA999 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))NativeArray_1_CopyFrom_mA833BCBDF37D94BF60950C40CD5C281B113BA999_gshared)(__this, ___0_array, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoordinateSpace__ctor_mAA4D91570FC2B7697EE540E6FBA5281467004307 (CoordinateSpace_t1BEA09FF296F8605370BFC70BA623F47B7CFDADF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_up, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_forward, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_right, float ___3_metersToUnitScale, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MSDKUtility_SerializeSkeletonAndFace_m5C2E1764ED61924A456814AD7F40E2ACAD3DC0C2 (uint64_t ___0_handle, SnapshotData_tC4810AE9979A3341F72956EA03A757D5900A32E5 ___1_snapshotData, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___2_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MSDKUtility_DeserializeSkeletonAndFace_m2CEDE444428EFDE3418C91CEE9FC1BF476F9D7F5 (uint64_t ___0_handle, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___1_data, DeserializedSnapshotData_t9231AD93BF7AE12D4D460BA81FF803915929FDE9* ___2_deserializedSnapshotData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterRetargeterConfig_DeNormalizeFaceValues_mFB9D7B9362E95726CE7DE6F5A72D2EF87B38D575 (CharacterRetargeterConfig_tD8FF2B4F325BC140BE821B1083EA466B12F72877* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___0_facePose, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_SendAck_m9B96B7E586DC7EBEDF8CDC654068370A9856CED8 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, int32_t ___0_ack, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkCharacterRetargeter_get_UseInterpolation_mBEBF3664101D6569571780DF3A1713DA67448B8A_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MSDKUtility_GetInterpolatedSkeleton_m7BAA696859976CC749EFC4C267537A8346E15BAC (uint64_t ___0_handle, uint32_t ___1_skeletonType, NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4* ___2_interpolatedBodyPose, double ___3_time, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MSDKUtility_GetInterpolatedFace_mAE656910F8A70FBF88DF687CEDAB3DCDCC758E88 (uint64_t ___0_handle, uint32_t ___1_skeletonType, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___2_interpolatedFacePose, double ___3_time, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* CharacterRetargeterConfig_get_ConfigAsset_m29D9359F1D5E850FA77C26FDF81788BEB6FC470D_inline (CharacterRetargeterConfig_tD8FF2B4F325BC140BE821B1083EA466B12F72877* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CharacterRetargeterConfig_get_Config_m6AD768F7ACB25118E295B7D9CC339C1F73571723 (CharacterRetargeterConfig_tD8FF2B4F325BC140BE821B1083EA466B12F72877* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterRetargeter_Setup_m563B9F7F1A3CF047BE06D9F06547C7F6F80B5F61 (CharacterRetargeter_t1C941359922B316027DE38BC0BCC4C0249F53533* __this, String_t* ___0_config, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m193A33669C79EC9ABF1A6F0E0B33D3EC2AC38351 (Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A*, const RuntimeMethod*))Dictionary_2__ctor_m193A33669C79EC9ABF1A6F0E0B33D3EC2AC38351_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterRetargeter_Awake_m85DC98444CCC949D09BD52E6ED140B6C30AC7F7A (CharacterRetargeter_t1C941359922B316027DE38BC0BCC4C0249F53533* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterRetargeter_Start_m70F1C7576596AEE7E0E442FC30D6D5AA82E7C8B6 (CharacterRetargeter_t1C941359922B316027DE38BC0BCC4C0249F53533* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_InitializeIndicesToSendIfEmpty_mBF5E46FDDFEEEF194AC0CAC3275C54073917BAD6 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_InitializeIndexArrayIfEmpty_mF303DE7239F259231F3E9E212B03C2631E08E653 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___0_array, int32_t ___1_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterRetargeter_Update_m33B0E843687265633B8189D24734160E75795F7F (CharacterRetargeter_t1C941359922B316027DE38BC0BCC4C0249F53533* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterRetargeter_LateUpdate_m3847F39869E05369FD96C906D10CA11A24A672AB (CharacterRetargeter_t1C941359922B316027DE38BC0BCC4C0249F53533* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonRetargeter_DrawDebugTargetPose_mD288EE78A21F59F818AD25FDBB6830E4959D2CAC (SkeletonRetargeter_t915EB48FEFE3A7B5774FBCB7A1F4FFC853FAFF5A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_offset, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, bool ___2_useWorldPose, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 SkeletonRetargeter_GetWorldPoseFromLocalPose_mDA4ACB6C384D3B1B26A8FC3E71C2ED8CFB2D4634 (SkeletonRetargeter_t915EB48FEFE3A7B5774FBCB7A1F4FFC853FAFF5A* __this, NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 ___0_localPose, Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___1_rootPosition, Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25 ___2_rootRotation, const RuntimeMethod* method) ;
inline void NativeArray_1_CopyFrom_mC2DECA91F8EECD68FEC74EAEB85DFF1AEA89C271 (NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4* __this, NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 ___0_array, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4*, NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4, const RuntimeMethod*))NativeArray_1_CopyFrom_mC2DECA91F8EECD68FEC74EAEB85DFF1AEA89C271_gshared)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterRetargeterConfig_OnValidate_mF12700A374CB8DA8C890D89863B41C57C1A01958 (CharacterRetargeterConfig_tD8FF2B4F325BC140BE821B1083EA466B12F72877* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MSDKUtility_GetSerializationSettings_m87C1FF487B7AB79510DFE76AC3317EE65CF7544F (uint64_t ___0_handle, SerializationSettings_tFA9932068AF9C4903D829F5DF7E0E267772E14B5* ___1_outSerializationSettings, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MSDKUtility_SetSerializationSettings_m1A4D0248DF5CFCA8C8F95F13D1B0D7B9371666AB (uint64_t ___0_handle, SerializationSettings_tFA9932068AF9C4903D829F5DF7E0E267772E14B5 ___1_inMutableSettings, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterRetargeter__ctor_mFB2CF72E98E8D3F2AB97DC11739297AFF47F689F (CharacterRetargeter_t1C941359922B316027DE38BC0BCC4C0249F53533* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkCharacterHandler_get_Owner_m89F2F00D3BD95463AC279A1A855595CD3BAB881F (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
inline NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* Component_GetComponent_TisNetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088_m1969FBD3F98675FA29C2CBFE751C4CF11D94A72C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9 (Guid_t* __this, const RuntimeMethod* method) ;
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_gshared)(___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t BitConverter_ToUInt64_m0D282A37594B47FDB58C5C20FA01464921F21AE7 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkCharacterBehaviourLocal_set_LocalClientId_m6D994C084AE5A2A101187EC5142DE44F702323F7_inline (NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NetworkCharacterHandler_get_CharacterBehaviour_m4CFDB0E50F9E3DE6B7FEBC65F018CBC647EC8D78_inline (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkCharacterBehaviourLocal_set_ClientIds_m3EB54601ECA69EA511C7869B76A3A565DF607150_inline (NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_Setup_m8594C3465E9C39EA8EFA99C7C0FDCABDEB3DD85A (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, bool ___0_instantiateCharacter, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_ReceiveData_m9E7FB5BFCF5342C5F21705D795EB36E8AF3E3166 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_ReceiveAck_mD80D8965C23537262BD8D12D28F74AB568A1B826 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, uint64_t ___0_id, int32_t ___1_ack, const RuntimeMethod* method) ;
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
// Method Definition Index: 148390
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187 UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_m87721312F5277B96F03847F9D1A8050201F2CE82 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t864BC8AACD3B44F46B86B4E945881FF371B4FA5D____49BA01B62156F7E85D6E45FE772A5F9510D71D26FE45759296FFCECC476D436F_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t864BC8AACD3B44F46B86B4E945881FF371B4FA5D____ED7876FF908F3C4172E17996F854DDCB806655DED1EFFFB6C01D6E4CE23BEB8A_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)783));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t864BC8AACD3B44F46B86B4E945881FF371B4FA5D____49BA01B62156F7E85D6E45FE772A5F9510D71D26FE45759296FFCECC476D436F_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)357));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t864BC8AACD3B44F46B86B4E945881FF371B4FA5D____ED7876FF908F3C4172E17996F854DDCB806655DED1EFFFB6C01D6E4CE23BEB8A_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = 6;
		(&V_0)->___TotalTypes = 6;
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187 L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 148391
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_m08E00A9BA6180907509244CB11B6DC45AAAE5BAA (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t3C91A090698AB4DFB4BF34F81176DDA58B277AA1* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C void MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187_marshal_pinvoke(const MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187& unmarshaled, MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187_marshal_pinvoke_back(const MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187_marshaled_pinvoke& marshaled, MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187_marshal_pinvoke_cleanup(MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187_marshal_com(const MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187& unmarshaled, MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187_marshal_com_back(const MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187_marshaled_com& marshaled, MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187_marshal_com_cleanup(MonoScriptData_t1DDD74EA3D648D55D24260D867F50D62843D7187_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 148415
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkCharacterHandler_get_CharacterBehaviour_m4CFDB0E50F9E3DE6B7FEBC65F018CBC647EC8D78 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:26>
		RuntimeObject* L_0 = __this->____characterBehaviour;
		return L_0;
	}
}
// Method Definition Index: 148416
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* NetworkCharacterHandler_get_Character_mEDE4CB985347FC2B6A751B1BF3F397000AEB7A84 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:31>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____character;
		return L_0;
	}
}
// Method Definition Index: 148417
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkCharacterHandler_get_Owner_m89F2F00D3BD95463AC279A1A855595CD3BAB881F (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:36>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_0 = __this->____networkCharacterRetargeter;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = NetworkCharacterRetargeter_get_Owner_mA51C56F7CA62205111F2C0F7AA9B6402339A9A1C_inline(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 148418
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* NetworkCharacterHandler_get_NetworkCharacterRetargeter_m763BCEE125364B8B6610566224F011E065E542E5 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:41>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_0 = __this->____networkCharacterRetargeter;
		return L_0;
	}
}
// Method Definition Index: 148419
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkCharacterHandler_get_ApplyData_m28424182FA2CE1931DDBEA82D9173CC05C46A301 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:48>
		bool L_0 = __this->____applyData;
		return L_0;
	}
}
// Method Definition Index: 148420
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_set_ApplyData_m7A8B406E36950A4CC6B54BBF977B6209F41B06A4 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:49>
		bool L_0 = ___0_value;
		__this->____applyData = L_0;
		return;
	}
}
// Method Definition Index: 148421
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkCharacterHandler_get__initialized_m9F96A8B3BBBC308EA6B9DEFFA7FB50D58886944F (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:76>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____character;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_1;
	}
}
// Method Definition Index: 148422
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkCharacterHandler_get__shouldSendData_m20732A7C31A5978530D65E04D91D63F2EAB05D73 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:79>
		bool L_0;
		L_0 = NetworkCharacterHandler_get__shouldSyncData_mAB61A52C0C10B634CCDA7163EB1A282F5BA9BC9F(__this, NULL);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		float L_1 = __this->____elapsedSendTime;
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_2 = __this->____networkCharacterRetargeter;
		NullCheck(L_2);
		float L_3;
		L_3 = NetworkCharacterRetargeter_get_IntervalToSendData_m3230055235BE0AADE878097B4177C275CBEB7B82_inline(L_2, NULL);
		return (bool)((((int32_t)((!(((float)L_1) >= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 148423
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkCharacterHandler_get__shouldSyncData_mAB61A52C0C10B634CCDA7163EB1A282F5BA9BC9F (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:82>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:83>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_0 = __this->____networkCharacterRetargeter;
		NullCheck(L_0);
		bool L_1;
		L_1 = NetworkCharacterRetargeter_get_UseSyncInterval_m303CAAE066213B4304184D803629F9B97F94FD6F_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		float L_2 = __this->____elapsedSyncTime;
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_3 = __this->____networkCharacterRetargeter;
		NullCheck(L_3);
		float L_4;
		L_4 = NetworkCharacterRetargeter_get_IntervalToSyncData_m112863BBC84150107DB2F6687712C10406E78E8B_inline(L_3, NULL);
		return (bool)((((int32_t)((!(((float)L_2) >= ((float)L_4)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}
}
// Method Definition Index: 148424
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_Awake_m19E86EFBB5D30C9B0934FCFCABB9CAD15B761505 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisNetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF_mA5512CDEFD4A71A5E00B84AA5D256701342133BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisINetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_mC9539BC692176C78B1100D0FDDDE3E73E2A045B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:111>
		RuntimeObject* L_0;
		L_0 = Component_GetComponent_TisINetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_mC9539BC692176C78B1100D0FDDDE3E73E2A045B2(__this, Component_GetComponent_TisINetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_mC9539BC692176C78B1100D0FDDDE3E73E2A045B2_RuntimeMethod_var);
		__this->____characterBehaviour = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____characterBehaviour), (void*)L_0);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:112>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_1 = __this->____networkCharacterRetargeter;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:114>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_3;
		L_3 = Component_GetComponentInChildren_TisNetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF_mA5512CDEFD4A71A5E00B84AA5D256701342133BF(__this, (bool)1, Component_GetComponentInChildren_TisNetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF_mA5512CDEFD4A71A5E00B84AA5D256701342133BF_RuntimeMethod_var);
		__this->____networkCharacterRetargeter = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networkCharacterRetargeter), (void*)L_3);
	}

IL_0027:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:116>
		return;
	}
}
// Method Definition Index: 148425
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_Start_m11B649DFF5216BB7DEC60286A622F05F086BB3BC (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:121>
		return;
	}
}
// Method Definition Index: 148426
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_Update_m704642FFA481515C4CC3CC7DEEE9A082FA865139 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:125>
		bool L_0;
		L_0 = NetworkCharacterHandler_get__initialized_m9F96A8B3BBBC308EA6B9DEFFA7FB50D58886944F(__this, NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->____characterBehaviour;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(0, INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:127>
		return;
	}

IL_0016:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:130>
		RuntimeObject* L_3 = __this->____characterBehaviour;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker0< float >::Invoke(4, INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_5 = __this->____characterBehaviour;
		NullCheck(L_5);
		float L_6;
		L_6 = InterfaceFuncInvoker0< float >::Invoke(5, INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var, L_5);
		NetworkCharacterHandler_TryReceiveData_m6ABFDCD7451B9F354C491C8BB7E1C64C0D16BE44(__this, L_4, L_6, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:131>
		return;
	}
}
// Method Definition Index: 148427
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_LateUpdate_m9167E53F8F801768AF08A163408A795358EAA880 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:135>
		bool L_0;
		L_0 = NetworkCharacterHandler_get__initialized_m9F96A8B3BBBC308EA6B9DEFFA7FB50D58886944F(__this, NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->____characterBehaviour;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(0, INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:137>
		return;
	}

IL_0016:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:140>
		RuntimeObject* L_3 = __this->____characterBehaviour;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker0< float >::Invoke(4, INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var, L_3);
		NetworkCharacterHandler_TrySendData_mA636EB25A8A0EFBECF199BF232013D43D28F6BEE(__this, L_4, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:141>
		return;
	}
}
// Method Definition Index: 148428
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_OnDestroy_m055AC8A3D56FF6CC7444F0395C217BF5A6683063 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m2F434390DA905493131BC0D1B4FADE83322FF47D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:145>
		Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_0 = __this->____clientsLastAck;
		NullCheck(L_0);
		Dictionary_2_Clear_m2F434390DA905493131BC0D1B4FADE83322FF47D(L_0, Dictionary_2_Clear_m2F434390DA905493131BC0D1B4FADE83322FF47D_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:146>
		NetworkCharacterHandler_DisposeNativeArrays_m8B1BCC697DC7D04B2DA193F3D3D0C6DDCF53E202(__this, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:147>
		return;
	}
}
// Method Definition Index: 148429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_OnValidate_mC1D81FD365D7038B9758B947C1258E1E14BCF7AE (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:151>
		NetworkCharacterHandler_UpdateSerializationSettings_mFE994935FA5DBECB736FE29E67A18AF976A932F6(__this, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:152>
		return;
	}
}
// Method Definition Index: 148430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_Setup_m8594C3465E9C39EA8EFA99C7C0FDCABDEB3DD85A (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, bool ___0_instantiateCharacter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisNetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF_mDA2B40953415CB0E23760570A498C31874BCC97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m018651076DF9934BB5F9C88A179C94132F8CAD72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_m318928FA479173AFA6DEB47FF3B9D54868151D87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mC7634553E8E6D340596899DFEA3ABFC230F7E992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5798C25B34CB46CF74189C82D0019F931F1C8DA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E00C3B58F1400152936415B53C708BBDA7B4592);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB90B4454D14B36CF9247674FE65EC87E09D06A9C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:163>
		bool L_0 = ___0_instantiateCharacter;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:167>
		NetworkCharacterHandler_InstantiateCharacter_mB79FAB3AEC5AE2BCCC2F1FD390D0444570D61AFE(__this, NULL);
		goto IL_008a;
	}

IL_000b:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:171>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		__this->____character = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____character), (void*)L_1);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:172>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_2 = __this->____networkCharacterRetargeter;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:174>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->____character;
		NullCheck(L_4);
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_5;
		L_5 = GameObject_GetComponentInChildren_TisNetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF_mDA2B40953415CB0E23760570A498C31874BCC97B(L_4, GameObject_GetComponentInChildren_TisNetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF_mDA2B40953415CB0E23760570A498C31874BCC97B_RuntimeMethod_var);
		__this->____networkCharacterRetargeter = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networkCharacterRetargeter), (void*)L_5);
	}

IL_0036:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:178>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_6 = __this->____networkCharacterRetargeter;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = NetworkCharacterRetargeter_get_Owner_mA51C56F7CA62205111F2C0F7AA9B6402339A9A1C_inline(L_6, NULL);
		if (L_7)
		{
			goto IL_008a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:180>
		RuntimeObject* L_8 = __this->____characterBehaviour;
		NullCheck(L_8);
		bool L_9;
		L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var, L_8);
		if (!L_9)
		{
			goto IL_006e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:182>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_10 = __this->____networkCharacterRetargeter;
		NullCheck(L_10);
		NetworkCharacterRetargeter_set_Owner_m3567480B30AFE92608C37387330F1A4A924C4ED4_inline(L_10, 1, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:183>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_11);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_11, _stringLiteral5798C25B34CB46CF74189C82D0019F931F1C8DA7, NULL);
		goto IL_008a;
	}

IL_006e:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:187>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_12 = __this->____networkCharacterRetargeter;
		NullCheck(L_12);
		NetworkCharacterRetargeter_set_Owner_m3567480B30AFE92608C37387330F1A4A924C4ED4_inline(L_12, 2, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:188>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_13);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_13, _stringLiteralB90B4454D14B36CF9247674FE65EC87E09D06A9C, NULL);
	}

IL_008a:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:194>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_14 = __this->____networkCharacterRetargeter;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = NetworkCharacterRetargeter_get_Owner_mA51C56F7CA62205111F2C0F7AA9B6402339A9A1C_inline(L_14, NULL);
		if (L_15)
		{
			goto IL_00a1;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:196>
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral5E00C3B58F1400152936415B53C708BBDA7B4592, NULL);
	}

IL_00a1:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:201>
		NetworkCharacterHandler_EnsureRetargetingInitialized_mCD745A97F7E395DB83D7342B50839B7FCE181FDD(__this, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:204>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_16 = __this->____networkCharacterRetargeter;
		NullCheck(L_16);
		NetworkCharacterRetargeter_UpdateSerializationSettings_mECB8A3C1E39DCE3C850372E207485F3610311FF7(L_16, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:206>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_17 = __this->____networkCharacterRetargeter;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = CharacterRetargeterConfig_get_NumberOfJoints_m1FEAAC708409F540EBDB3342F59A29E7BA7B0BF8(L_17, NULL);
		V_0 = L_18;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:207>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_19 = __this->____networkCharacterRetargeter;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = CharacterRetargeterConfig_get_NumberOfShapes_mF53EB829414F83DF5909C05E8D0663BE31A35A19(L_19, NULL);
		V_1 = L_20;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:209>
		NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4* L_21 = (NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4*)(&__this->____bodyPose);
		bool L_22;
		L_22 = NativeArray_1_get_IsCreated_mC7634553E8E6D340596899DFEA3ABFC230F7E992_inline(L_21, NativeArray_1_get_IsCreated_mC7634553E8E6D340596899DFEA3ABFC230F7E992_RuntimeMethod_var);
		if (L_22)
		{
			goto IL_00e5;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:211>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:212>
		int32_t L_23 = V_0;
		NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 L_24;
		memset((&L_24), 0, sizeof(L_24));
		NativeArray_1__ctor_m018651076DF9934BB5F9C88A179C94132F8CAD72((&L_24), L_23, 4, 0, NativeArray_1__ctor_m018651076DF9934BB5F9C88A179C94132F8CAD72_RuntimeMethod_var);
		__this->____bodyPose = L_24;
	}

IL_00e5:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:215>
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_25 = (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)(&__this->____facePose);
		bool L_26;
		L_26 = NativeArray_1_get_IsCreated_m318928FA479173AFA6DEB47FF3B9D54868151D87_inline(L_25, NativeArray_1_get_IsCreated_m318928FA479173AFA6DEB47FF3B9D54868151D87_RuntimeMethod_var);
		if (L_26)
		{
			goto IL_0100;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:217>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:218>
		int32_t L_27 = V_1;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_28;
		memset((&L_28), 0, sizeof(L_28));
		NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004((&L_28), L_27, 4, 0, NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004_RuntimeMethod_var);
		__this->____facePose = L_28;
	}

IL_0100:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:221>
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:222>
		return;
	}
}
// Method Definition Index: 148431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_SendData_m0FACB879AF6628886D3E11BB7B06B519BB206E21 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, float ___0_networkTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionExtensions_GetValueOrDefault_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m33DBF46EE1198A476DD015B1FE54C993A673A1A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	int32_t V_2 = 0;
	uint64_t V_3 = 0;
	int32_t V_4 = 0;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:234>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:235>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:236>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_0 = __this->____networkCharacterRetargeter;
		NullCheck(L_0);
		bool L_1;
		L_1 = CharacterRetargeter_get_IsValid_m5756208AA746F2E6E621AB8DB09227E0EF9EEDBB_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_2 = __this->____networkCharacterRetargeter;
		NullCheck(L_2);
		SkeletonRetargeter_t915EB48FEFE3A7B5774FBCB7A1F4FFC853FAFF5A* L_3;
		L_3 = CharacterRetargeter_get_SkeletonRetargeter_m12D09B9CC54C0875B336144AE3BD4EC2DC3D0EC5_inline(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = SkeletonRetargeter_get_IsInitialized_m021B68D40327EDEB9F7F923AB283A9523A44D11E_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_5 = __this->____networkCharacterRetargeter;
		NullCheck(L_5);
		SkeletonRetargeter_t915EB48FEFE3A7B5774FBCB7A1F4FFC853FAFF5A* L_6;
		L_6 = CharacterRetargeter_get_SkeletonRetargeter_m12D09B9CC54C0875B336144AE3BD4EC2DC3D0EC5_inline(L_5, NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = SkeletonRetargeter_get_AppliedPose_m2E6B140B499B29D089FF6DE283C998328A4A3A0A_inline(L_6, NULL);
		if (L_7)
		{
			goto IL_0032;
		}
	}

IL_0031:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:238>
		return;
	}

IL_0032:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:241>
		RuntimeObject* L_8 = __this->____characterBehaviour;
		NullCheck(L_8);
		uint64_t L_9;
		L_9 = InterfaceFuncInvoker0< uint64_t >::Invoke(8, INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var, L_8);
		V_0 = L_9;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:242>
		RuntimeObject* L_10 = __this->____characterBehaviour;
		NullCheck(L_10);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11;
		L_11 = InterfaceFuncInvoker0< UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* >::Invoke(7, INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var, L_10);
		V_1 = L_11;
		V_2 = 0;
		goto IL_00a0;
	}

IL_004e:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:242>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int64_t L_15 = (int64_t)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = L_15;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:244>
		uint64_t L_16 = V_3;
		uint64_t L_17 = V_0;
		if ((((int64_t)L_16) == ((int64_t)L_17)))
		{
			goto IL_009c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:249>
		Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_18 = __this->____clientsLastAck;
		uint64_t L_19 = V_3;
		int32_t L_20;
		L_20 = CollectionExtensions_GetValueOrDefault_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m33DBF46EE1198A476DD015B1FE54C993A673A1A0(L_18, L_19, (-1), CollectionExtensions_GetValueOrDefault_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m33DBF46EE1198A476DD015B1FE54C993A673A1A0_RuntimeMethod_var);
		V_4 = L_20;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:251>
		int32_t L_21 = V_4;
		float L_22 = ___0_networkTime;
		NetworkCharacterHandler_SerializeData_mF202BD75AC1509FAA6E99782F72D7014E8CEE7A2(__this, L_21, L_22, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:253>
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_23 = (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*)(&__this->____serializedData);
		bool L_24;
		L_24 = NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_inline(L_23, NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		if (!L_24)
		{
			goto IL_009c;
		}
	}
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_25 = (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*)(&__this->____serializedData);
		int32_t L_26;
		L_26 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_25)->___m_Length);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:255>
		RuntimeObject* L_27 = __this->____characterBehaviour;
		uint64_t L_28 = V_3;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_29 = __this->____serializedData;
		NullCheck(L_27);
		InterfaceActionInvoker3< uint64_t, bool, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF >::Invoke(9, INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var, L_27, L_28, (bool)0, L_29);
	}

IL_009c:
	{
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00a0:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:242>
		int32_t L_31 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = V_1;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_004e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:259>
		NetworkCharacterHandler_ResetSendTimers_mFB2963CF84F7E54F39C30583AEED70A19E424178(__this, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:260>
		return;
	}
}
// Method Definition Index: 148432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_ReceiveData_m9E7FB5BFCF5342C5F21705D795EB36E8AF3E3166 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_CopyTo_mA26E7EBCA9AE98B7D07D716D51C772B4112BE6E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m35ADE4B5120B6BDC3318EF8318FEAF40A02DE27E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m9B7CDD16CB4697B3A2923CD447F6EB8C826135A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m871CCE28579E8FA2F3D181BF5AAAEB6FA27A0AEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m4DB40FDBC4B99D5CA77C191551B95300C9AE772A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_2;
	memset((&V_2), 0, sizeof(V_2));
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B6_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B5_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:269>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_0 = __this->____networkCharacterRetargeter;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = NetworkCharacterRetargeter_get_MaxBufferSize_m134754A05B523D238B55F31265C95535F13D42BA_inline(L_0, NULL);
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:270>
		Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* L_2 = __this->____streamedData;
		if (L_2)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_3 = V_0;
		Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* L_4 = (Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF*)il2cpp_codegen_object_new(Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF_il2cpp_TypeInfo_var);
		Queue_1__ctor_m871CCE28579E8FA2F3D181BF5AAAEB6FA27A0AEC(L_4, L_3, Queue_1__ctor_m871CCE28579E8FA2F3D181BF5AAAEB6FA27A0AEC_RuntimeMethod_var);
		__this->____streamedData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____streamedData), (void*)L_4);
		goto IL_0035;
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:274>
		Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* L_5 = __this->____streamedData;
		NullCheck(L_5);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_6;
		L_6 = Queue_1_Dequeue_m35ADE4B5120B6BDC3318EF8318FEAF40A02DE27E(L_5, Queue_1_Dequeue_m35ADE4B5120B6BDC3318EF8318FEAF40A02DE27E_RuntimeMethod_var);
		V_2 = L_6;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:275>
		NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA((&V_2), NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var);
	}

IL_0035:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:272>
		Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* L_7 = __this->____streamedData;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Queue_1_get_Count_m4DB40FDBC4B99D5CA77C191551B95300C9AE772A_inline(L_7, Queue_1_get_Count_m4DB40FDBC4B99D5CA77C191551B95300C9AE772A_RuntimeMethod_var);
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:278>
		int32_t L_10;
		L_10 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_data))->___m_Length);
		NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F((&V_1), L_10, 4, 0, NativeArray_1__ctor_m981CC7E27B6C9946024877F2696920951443B04F_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:279>
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_11 = V_1;
		NativeArray_1_CopyTo_mA26E7EBCA9AE98B7D07D716D51C772B4112BE6E4((&___0_data), L_11, NativeArray_1_CopyTo_mA26E7EBCA9AE98B7D07D716D51C772B4112BE6E4_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:280>
		Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* L_12 = __this->____streamedData;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_13 = V_1;
		NullCheck(L_12);
		Queue_1_Enqueue_m9B7CDD16CB4697B3A2923CD447F6EB8C826135A9(L_12, L_13, Queue_1_Enqueue_m9B7CDD16CB4697B3A2923CD447F6EB8C826135A9_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:281>
		int32_t L_14 = __this->____dataReadCount;
		__this->____dataReadCount = ((int32_t)il2cpp_codegen_add(L_14, 1));
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:283>
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_15 = __this->___BytesReceived;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_16 = L_15;
		if (L_16)
		{
			G_B6_0 = L_16;
			goto IL_0081;
		}
		G_B5_0 = L_16;
	}
	{
		goto IL_008d;
	}

IL_0081:
	{
		int32_t L_17;
		L_17 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___0_data))->___m_Length);
		NullCheck(G_B6_0);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(G_B6_0, L_17, NULL);
	}

IL_008d:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:285>
		int32_t L_18 = __this->____dataReadCount;
		float L_19 = __this->____spawnDelay;
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_20 = __this->____networkCharacterRetargeter;
		NullCheck(L_20);
		float L_21;
		L_21 = NetworkCharacterRetargeter_get_IntervalToSendData_m3230055235BE0AADE878097B4177C275CBEB7B82_inline(L_20, NULL);
		if ((!(((float)((float)L_18)) >= ((float)((float)(L_19/L_21))))))
		{
			goto IL_00b4;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:287>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_22 = __this->____networkCharacterRetargeter;
		NullCheck(L_22);
		NetworkCharacterRetargeter_ToggleObjects_mC588DB04634695273D167754888DA749ED975304(L_22, (bool)1, NULL);
	}

IL_00b4:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:289>
		return;
	}
}
// Method Definition Index: 148433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_SendAck_m9B96B7E586DC7EBEDF8CDC654068370A9856CED8 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, int32_t ___0_ack, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:299>
		RuntimeObject* L_0 = __this->____characterBehaviour;
		RuntimeObject* L_1 = __this->____characterBehaviour;
		NullCheck(L_1);
		uint64_t L_2;
		L_2 = InterfaceFuncInvoker0< uint64_t >::Invoke(8, INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = ___0_ack;
		NullCheck(L_0);
		InterfaceActionInvoker2< uint64_t, int32_t >::Invoke(10, INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var, L_0, L_2, L_3);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:300>
		return;
	}
}
// Method Definition Index: 148434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_ReceiveAck_mD80D8965C23537262BD8D12D28F74AB568A1B826 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, uint64_t ___0_id, int32_t ___1_ack, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m36E53A7AC4543BC2C475600A8F4074D6311580C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:310>
		Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_0 = __this->____clientsLastAck;
		uint64_t L_1 = ___0_id;
		int32_t L_2 = ___1_ack;
		NullCheck(L_0);
		Dictionary_2_set_Item_m36E53A7AC4543BC2C475600A8F4074D6311580C2(L_0, L_1, L_2, Dictionary_2_set_Item_m36E53A7AC4543BC2C475600A8F4074D6311580C2_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:311>
		return;
	}
}
// Method Definition Index: 148435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_TryReceiveData_m6ABFDCD7451B9F354C491C8BB7E1C64C0D16BE44 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, float ___0_networkTime, float ___1_renderTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m4DB40FDBC4B99D5CA77C191551B95300C9AE772A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:321>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_0 = __this->____networkCharacterRetargeter;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = CharacterRetargeter_get_RetargetingHandle_mEEE86C51359EC442E2947FC308BFF5A0E7E19FCB(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:323>
		return;
	}

IL_000e:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:326>
		Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* L_2 = __this->____streamedData;
		V_0 = L_2;
		Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Queue_1_get_Count_m4DB40FDBC4B99D5CA77C191551B95300C9AE772A_inline(L_4, Queue_1_get_Count_m4DB40FDBC4B99D5CA77C191551B95300C9AE772A_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:328>
		NetworkCharacterHandler_DeserializeData_m305A68042BE3FB4486F239EBB421C5151073E52D(__this, NULL);
	}

IL_0027:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:331>
		bool L_6;
		L_6 = NetworkCharacterHandler_get_ApplyData_m28424182FA2CE1931DDBEA82D9173CC05C46A301_inline(__this, NULL);
		if (L_6)
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:333>
		return;
	}

IL_0030:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:337>
		bool L_7 = __this->____dataIsValid;
		if (L_7)
		{
			goto IL_0039;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:339>
		return;
	}

IL_0039:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:342>
		float L_8 = ___1_renderTime;
		bool L_9;
		L_9 = NetworkCharacterHandler_ReadBodyData_m9F651B27C85458C32C9D92828B9DC19F6DC5C9F5(__this, L_8, NULL);
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:344>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_10 = __this->____networkCharacterRetargeter;
		NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 L_11 = __this->____bodyPose;
		NullCheck(L_10);
		CharacterRetargeterConfig_ApplyBodyPose_mF118DE98A7799924097492E0D80AE95224F166D8(L_10, L_11, 0, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:345>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_12 = __this->____networkCharacterRetargeter;
		NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 L_13 = __this->____bodyPose;
		NullCheck(L_12);
		NetworkCharacterRetargeter_SetDebugPose_m66BFCE7721A2525D94029739858CA2AA27AF3898(L_12, L_13, NULL);
	}

IL_0065:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:348>
		float L_14 = ___1_renderTime;
		bool L_15;
		L_15 = NetworkCharacterHandler_ReadFaceData_mBCC539FDC8D9CEDDE71F0E9E4C04FD3306039D5E(__this, L_14, NULL);
		if (!L_15)
		{
			goto IL_007f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:350>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_16 = __this->____networkCharacterRetargeter;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_17 = __this->____facePose;
		NullCheck(L_16);
		CharacterRetargeterConfig_ApplyFacePose_m3B44C743369FC416EFE1D4C3A46D958B83D52B46(L_16, L_17, NULL);
	}

IL_007f:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:352>
		return;
	}
}
// Method Definition Index: 148436
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_TrySendData_mA636EB25A8A0EFBECF199BF232013D43D28F6BEE (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, float ___0_networkTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:360>
		float L_0 = __this->____elapsedSendTime;
		RuntimeObject* L_1 = __this->____characterBehaviour;
		NullCheck(L_1);
		float L_2;
		L_2 = InterfaceFuncInvoker0< float >::Invoke(6, INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var, L_1);
		__this->____elapsedSendTime = ((float)il2cpp_codegen_add(L_0, L_2));
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:361>
		float L_3 = __this->____elapsedSyncTime;
		RuntimeObject* L_4 = __this->____characterBehaviour;
		NullCheck(L_4);
		float L_5;
		L_5 = InterfaceFuncInvoker0< float >::Invoke(6, INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var, L_4);
		__this->____elapsedSyncTime = ((float)il2cpp_codegen_add(L_3, L_5));
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:363>
		bool L_6;
		L_6 = NetworkCharacterHandler_get__shouldSendData_m20732A7C31A5978530D65E04D91D63F2EAB05D73(__this, NULL);
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:365>
		float L_7 = ___0_networkTime;
		NetworkCharacterHandler_SendData_m0FACB879AF6628886D3E11BB7B06B519BB206E21(__this, L_7, NULL);
	}

IL_003f:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:367>
		return;
	}
}
// Method Definition Index: 148437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_DisposeNativeArrays_m8B1BCC697DC7D04B2DA193F3D3D0C6DDCF53E202 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mC07280A768D065A052D995F3E6175A27CD62E1F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mD96DC3E4C47005AB224CA46590B336EF17DEF032_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_m318928FA479173AFA6DEB47FF3B9D54868151D87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mC7634553E8E6D340596899DFEA3ABFC230F7E992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m35ADE4B5120B6BDC3318EF8318FEAF40A02DE27E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m4DB40FDBC4B99D5CA77C191551B95300C9AE772A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:371>
		Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* L_0 = __this->____streamedData;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_001d;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:375>
		Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* L_1 = __this->____streamedData;
		NullCheck(L_1);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_2;
		L_2 = Queue_1_Dequeue_m35ADE4B5120B6BDC3318EF8318FEAF40A02DE27E(L_1, Queue_1_Dequeue_m35ADE4B5120B6BDC3318EF8318FEAF40A02DE27E_RuntimeMethod_var);
		V_0 = L_2;
		NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA((&V_0), NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var);
	}

IL_001d:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:373>
		Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* L_3 = __this->____streamedData;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Queue_1_get_Count_m4DB40FDBC4B99D5CA77C191551B95300C9AE772A_inline(L_3, Queue_1_get_Count_m4DB40FDBC4B99D5CA77C191551B95300C9AE772A_RuntimeMethod_var);
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:377>
		__this->____streamedData = (Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____streamedData), (void*)(Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF*)NULL);
	}

IL_0032:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:380>
		NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4* L_5 = (NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4*)(&__this->____bodyPose);
		bool L_6;
		L_6 = NativeArray_1_get_IsCreated_mC7634553E8E6D340596899DFEA3ABFC230F7E992_inline(L_5, NativeArray_1_get_IsCreated_mC7634553E8E6D340596899DFEA3ABFC230F7E992_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:382>
		NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4* L_7 = (NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4*)(&__this->____bodyPose);
		NativeArray_1_Dispose_mD96DC3E4C47005AB224CA46590B336EF17DEF032(L_7, NativeArray_1_Dispose_mD96DC3E4C47005AB224CA46590B336EF17DEF032_RuntimeMethod_var);
	}

IL_004a:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:385>
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_8 = (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)(&__this->____facePose);
		bool L_9;
		L_9 = NativeArray_1_get_IsCreated_m318928FA479173AFA6DEB47FF3B9D54868151D87_inline(L_8, NativeArray_1_get_IsCreated_m318928FA479173AFA6DEB47FF3B9D54868151D87_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:387>
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_10 = (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)(&__this->____facePose);
		NativeArray_1_Dispose_mC07280A768D065A052D995F3E6175A27CD62E1F6(L_10, NativeArray_1_Dispose_mC07280A768D065A052D995F3E6175A27CD62E1F6_RuntimeMethod_var);
	}

IL_0062:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:389>
		return;
	}
}
// Method Definition Index: 148438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_UpdateSerializationSettings_mFE994935FA5DBECB736FE29E67A18AF976A932F6 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:393>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:394>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_0 = __this->____networkCharacterRetargeter;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_2 = __this->____networkCharacterRetargeter;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = NetworkCharacterRetargeter_get_Owner_mA51C56F7CA62205111F2C0F7AA9B6402339A9A1C_inline(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:396>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_4 = __this->____networkCharacterRetargeter;
		NullCheck(L_4);
		NetworkCharacterRetargeter_UpdateSerializationSettings_mECB8A3C1E39DCE3C850372E207485F3610311FF7(L_4, NULL);
	}

IL_0027:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:398>
		return;
	}
}
// Method Definition Index: 148439
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_InstantiateCharacter_mB79FAB3AEC5AE2BCCC2F1FD390D0444570D61AFE (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisNetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF_mDA2B40953415CB0E23760570A498C31874BCC97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5798C25B34CB46CF74189C82D0019F931F1C8DA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB90B4454D14B36CF9247674FE65EC87E09D06A9C);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:402>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____character;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:404>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____character;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:407>
		RuntimeObject* L_3 = __this->____characterBehaviour;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = InterfaceFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(1, INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var, L_3);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:408>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6(L_4, L_5, (bool)0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6_RuntimeMethod_var);
		V_0 = L_6;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:409>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		__this->____character = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____character), (void*)L_7);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:410>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_8 = __this->____networkCharacterRetargeter;
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:412>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->____character;
		NullCheck(L_10);
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_11;
		L_11 = GameObject_GetComponentInChildren_TisNetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF_mDA2B40953415CB0E23760570A498C31874BCC97B(L_10, GameObject_GetComponentInChildren_TisNetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF_mDA2B40953415CB0E23760570A498C31874BCC97B_RuntimeMethod_var);
		__this->____networkCharacterRetargeter = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____networkCharacterRetargeter), (void*)L_11);
	}

IL_0057:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:415>
		RuntimeObject* L_12 = __this->____characterBehaviour;
		NullCheck(L_12);
		bool L_13;
		L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var, L_12);
		if (!L_13)
		{
			goto IL_008d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:417>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_14 = __this->____networkCharacterRetargeter;
		NullCheck(L_14);
		NetworkCharacterRetargeter_set_Owner_m3567480B30AFE92608C37387330F1A4A924C4ED4_inline(L_14, 1, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:418>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_15);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_15, _stringLiteral5798C25B34CB46CF74189C82D0019F931F1C8DA7, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:419>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_16 = __this->____networkCharacterRetargeter;
		NullCheck(L_16);
		NetworkCharacterRetargeter_ToggleObjects_mC588DB04634695273D167754888DA749ED975304(L_16, (bool)1, NULL);
		return;
	}

IL_008d:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:423>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_17 = __this->____networkCharacterRetargeter;
		NullCheck(L_17);
		NetworkCharacterRetargeter_set_Owner_m3567480B30AFE92608C37387330F1A4A924C4ED4_inline(L_17, 2, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:424>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_18);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_18, _stringLiteralB90B4454D14B36CF9247674FE65EC87E09D06A9C, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:426>
		return;
	}
}
// Method Definition Index: 148440
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_SerializeData_mF202BD75AC1509FAA6E99782F72D7014E8CEE7A2 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, int32_t ___0_lastAck, float ___1_networkTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_CopyFrom_mA833BCBDF37D94BF60950C40CD5C281B113BA999_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mC07280A768D065A052D995F3E6175A27CD62E1F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mD96DC3E4C47005AB224CA46590B336EF17DEF032_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_m318928FA479173AFA6DEB47FF3B9D54868151D87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mC7634553E8E6D340596899DFEA3ABFC230F7E992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_1;
	memset((&V_1), 0, sizeof(V_1));
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_5;
	memset((&V_5), 0, sizeof(V_5));
	SnapshotData_tC4810AE9979A3341F72956EA03A757D5900A32E5 V_6;
	memset((&V_6), 0, sizeof(V_6));
	SnapshotData_tC4810AE9979A3341F72956EA03A757D5900A32E5 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B8_0 = NULL;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:430>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_0 = __this->____networkCharacterRetargeter;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = CharacterRetargeter_get_RetargetingHandle_mEEE86C51359EC442E2947FC308BFF5A0E7E19FCB(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:432>
		return;
	}

IL_000e:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:435>
		bool L_2;
		L_2 = NetworkCharacterHandler_get__shouldSyncData_mAB61A52C0C10B634CCDA7163EB1A282F5BA9BC9F(__this, NULL);
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_3 = __this->____networkCharacterRetargeter;
		NullCheck(L_3);
		bool L_4;
		L_4 = NetworkCharacterRetargeter_get_UseDeltaCompression_m212A4EB54A59C75C993503D698D3B71BF19455D1_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0026;
		}
	}

IL_0023:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:437>
		___0_lastAck = (-1);
	}

IL_0026:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:440>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_5 = __this->____networkCharacterRetargeter;
		NullCheck(L_5);
		NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 L_6;
		L_6 = CharacterRetargeterConfig_GetCurrentBodyPose_mEF6A851C4F65D63D567F31A1B2BAAE28373925A4(L_5, 0, NULL);
		V_0 = L_6;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:441>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:442>
		NativeTransform_tC40A742C839E792BE0B39C11C60B3060191C8618 L_7;
		L_7 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeTransform_tC40A742C839E792BE0B39C11C60B3060191C8618, ((&V_0))->___m_Buffer, 0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = L_7.___Orientation;
		NativeTransform_tC40A742C839E792BE0B39C11C60B3060191C8618 L_9;
		L_9 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeTransform_tC40A742C839E792BE0B39C11C60B3060191C8618, ((&V_0))->___m_Buffer, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9.___Position;
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_11 = __this->____networkCharacterRetargeter;
		NullCheck(L_11);
		SkeletonRetargeter_t915EB48FEFE3A7B5774FBCB7A1F4FFC853FAFF5A* L_12;
		L_12 = CharacterRetargeter_get_SkeletonRetargeter_m12D09B9CC54C0875B336144AE3BD4EC2DC3D0EC5_inline(L_11, NULL);
		NullCheck(L_12);
		NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4* L_13 = (NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4*)(&L_12->___RetargetedPose);
		NativeTransform_tC40A742C839E792BE0B39C11C60B3060191C8618 L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeTransform_tC40A742C839E792BE0B39C11C60B3060191C8618, (L_13)->___m_Buffer, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14.___Scale;
		NativeTransform_tC40A742C839E792BE0B39C11C60B3060191C8618 L_16;
		memset((&L_16), 0, sizeof(L_16));
		NativeTransform__ctor_mDA63D7AB12228914E5B4AA3DA4F92390277D1347((&L_16), L_8, L_10, L_15, NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(NativeTransform_tC40A742C839E792BE0B39C11C60B3060191C8618, ((&V_0))->___m_Buffer, 0, (L_16));
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:443>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_17 = __this->____networkCharacterRetargeter;
		NullCheck(L_17);
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_18;
		L_18 = CharacterRetargeterConfig_GetCurrentFacePose_mA6CC8067E4B81462F3EB39A8A348AA7ADD1BC2EA(L_17, (bool)1, NULL);
		V_1 = L_18;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:445>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:446>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:447>
		int32_t L_19 = ___0_lastAck;
		if ((((int32_t)L_19) == ((int32_t)(-1))))
		{
			goto IL_0093;
		}
	}
	{
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_20 = __this->____networkCharacterRetargeter;
		NullCheck(L_20);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21;
		L_21 = NetworkCharacterRetargeter_get_BodyIndicesToSend_m9EBB87E9D2DA9CF5A900A01095D218EB3C1A9441_inline(L_20, NULL);
		G_B8_0 = L_21;
		goto IL_009e;
	}

IL_0093:
	{
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_22 = __this->____networkCharacterRetargeter;
		NullCheck(L_22);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23;
		L_23 = NetworkCharacterRetargeter_get_BodyIndicesToSync_m2F3FEF33EB7BB2EEE4D3758E851D48A0D1861E58_inline(L_22, NULL);
		G_B8_0 = L_23;
	}

IL_009e:
	{
		V_2 = G_B8_0;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:448>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_24 = __this->____networkCharacterRetargeter;
		NullCheck(L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25;
		L_25 = NetworkCharacterRetargeter_get_FaceIndicesToSync_m43ED9E2F78F485FC7F45BB4D2DE34079E5DC43EC_inline(L_24, NULL);
		V_3 = L_25;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:450>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:451>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_2;
		NullCheck(L_26);
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_4), ((int32_t)(((RuntimeArray*)L_26)->max_length)), 2, 0, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:452>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:453>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_3;
		NullCheck(L_27);
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_5), ((int32_t)(((RuntimeArray*)L_27)->max_length)), 2, 0, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:454>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_2;
		NativeArray_1_CopyFrom_mA833BCBDF37D94BF60950C40CD5C281B113BA999((&V_4), L_28, NativeArray_1_CopyFrom_mA833BCBDF37D94BF60950C40CD5C281B113BA999_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:455>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_3;
		NativeArray_1_CopyFrom_mA833BCBDF37D94BF60950C40CD5C281B113BA999((&V_5), L_29, NativeArray_1_CopyFrom_mA833BCBDF37D94BF60950C40CD5C281B113BA999_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:457>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:458>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:459>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:460>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:461>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:462>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:463>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:464>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:465>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:466>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:467>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:468>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:469>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:470>
		il2cpp_codegen_initobj((&V_7), sizeof(SnapshotData_tC4810AE9979A3341F72956EA03A757D5900A32E5));
		int32_t L_30 = ___0_lastAck;
		(&V_7)->___BaselineAck = L_30;
		float L_31 = ___1_networkTime;
		(&V_7)->___Timestamp = ((double)L_31);
		NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 L_32 = V_0;
		(&V_7)->___TargetSkeletonPose = L_32;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_33 = V_4;
		(&V_7)->___TargetSkeletonIndices = L_33;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_34 = V_1;
		(&V_7)->___FacePose = L_34;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_35 = V_5;
		(&V_7)->___FaceIndices = L_35;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), (0.0f), (1.0f), (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_37), (0.0f), (0.0f), (1.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_38), (1.0f), (0.0f), (0.0f), NULL);
		CoordinateSpace_t1BEA09FF296F8605370BFC70BA623F47B7CFDADF L_39;
		memset((&L_39), 0, sizeof(L_39));
		CoordinateSpace__ctor_mAA4D91570FC2B7697EE540E6FBA5281467004307((&L_39), L_36, L_37, L_38, (1.0f), NULL);
		(&V_7)->___RecordingCoordinateSpaceSource = L_39;
		SnapshotData_tC4810AE9979A3341F72956EA03A757D5900A32E5 L_40 = V_7;
		V_6 = L_40;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:472>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:473>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:474>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:475>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_41 = __this->____networkCharacterRetargeter;
		NullCheck(L_41);
		uint64_t L_42;
		L_42 = CharacterRetargeter_get_RetargetingHandle_mEEE86C51359EC442E2947FC308BFF5A0E7E19FCB(L_41, NULL);
		SnapshotData_tC4810AE9979A3341F72956EA03A757D5900A32E5 L_43 = V_6;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_44 = (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*)(&__this->____serializedData);
		bool L_45;
		L_45 = MSDKUtility_SerializeSkeletonAndFace_m5C2E1764ED61924A456814AD7F40E2ACAD3DC0C2(L_42, L_43, L_44, NULL);
		__this->____dataIsValid = L_45;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:477>
		bool L_46;
		L_46 = NativeArray_1_get_IsCreated_mC7634553E8E6D340596899DFEA3ABFC230F7E992_inline((&V_0), NativeArray_1_get_IsCreated_mC7634553E8E6D340596899DFEA3ABFC230F7E992_RuntimeMethod_var);
		if (!L_46)
		{
			goto IL_018d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:479>
		NativeArray_1_Dispose_mD96DC3E4C47005AB224CA46590B336EF17DEF032((&V_0), NativeArray_1_Dispose_mD96DC3E4C47005AB224CA46590B336EF17DEF032_RuntimeMethod_var);
	}

IL_018d:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:482>
		bool L_47;
		L_47 = NativeArray_1_get_IsCreated_m318928FA479173AFA6DEB47FF3B9D54868151D87_inline((&V_1), NativeArray_1_get_IsCreated_m318928FA479173AFA6DEB47FF3B9D54868151D87_RuntimeMethod_var);
		if (!L_47)
		{
			goto IL_019d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:484>
		NativeArray_1_Dispose_mC07280A768D065A052D995F3E6175A27CD62E1F6((&V_1), NativeArray_1_Dispose_mC07280A768D065A052D995F3E6175A27CD62E1F6_RuntimeMethod_var);
	}

IL_019d:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:486>
		return;
	}
}
// Method Definition Index: 148441
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_DeserializeData_m305A68042BE3FB4486F239EBB421C5151073E52D (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m35ADE4B5120B6BDC3318EF8318FEAF40A02DE27E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	DeserializedSnapshotData_t9231AD93BF7AE12D4D460BA81FF803915929FDE9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DeserializedSnapshotData_t9231AD93BF7AE12D4D460BA81FF803915929FDE9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:490>
		Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* L_0 = __this->____streamedData;
		NullCheck(L_0);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_1;
		L_1 = Queue_1_Dequeue_m35ADE4B5120B6BDC3318EF8318FEAF40A02DE27E(L_0, Queue_1_Dequeue_m35ADE4B5120B6BDC3318EF8318FEAF40A02DE27E_RuntimeMethod_var);
		V_0 = L_1;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:492>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:493>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:494>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:495>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:496>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:497>
		il2cpp_codegen_initobj((&V_2), sizeof(DeserializedSnapshotData_t9231AD93BF7AE12D4D460BA81FF803915929FDE9));
		(&V_2)->___DataVersion = (0.040000000000000001);
		NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 L_2 = __this->____bodyPose;
		(&V_2)->___TargetSkeletonPose = L_2;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_3 = __this->____facePose;
		(&V_2)->___FacePose = L_3;
		DeserializedSnapshotData_t9231AD93BF7AE12D4D460BA81FF803915929FDE9 L_4 = V_2;
		V_1 = L_4;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:499>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:500>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:501>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:502>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_5 = __this->____networkCharacterRetargeter;
		NullCheck(L_5);
		uint64_t L_6;
		L_6 = CharacterRetargeter_get_RetargetingHandle_mEEE86C51359EC442E2947FC308BFF5A0E7E19FCB(L_5, NULL);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_7 = V_0;
		bool L_8;
		L_8 = MSDKUtility_DeserializeSkeletonAndFace_m2CEDE444428EFDE3418C91CEE9FC1BF476F9D7F5(L_6, L_7, (&V_1), NULL);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:504>
		__this->____dataIsValid = (bool)0;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:505>
		NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA((&V_0), NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:506>
		return;
	}

IL_0064:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:508>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_9 = __this->____networkCharacterRetargeter;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4* L_11 = (NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4*)(&(&V_1)->___TargetSkeletonPose);
		NativeTransform_tC40A742C839E792BE0B39C11C60B3060191C8618 L_12;
		L_12 = IL2CPP_NATIVEARRAY_GET_ITEM(NativeTransform_tC40A742C839E792BE0B39C11C60B3060191C8618, (L_11)->___m_Buffer, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12.___Scale;
		NullCheck(L_10);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_10, L_13, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:509>
		NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA((&V_0), NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:510>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_14 = __this->____networkCharacterRetargeter;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_15 = (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)(&__this->____facePose);
		NullCheck(L_14);
		CharacterRetargeterConfig_DeNormalizeFaceValues_mFB9D7B9362E95726CE7DE6F5A72D2EF87B38D575(L_14, L_15, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:511>
		__this->____dataIsValid = (bool)1;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:512>
		DeserializedSnapshotData_t9231AD93BF7AE12D4D460BA81FF803915929FDE9 L_16 = V_1;
		int32_t L_17 = L_16.___Ack;
		NetworkCharacterHandler_SendAck_m9B96B7E586DC7EBEDF8CDC654068370A9856CED8(__this, L_17, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:513>
		return;
	}
}
// Method Definition Index: 148442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkCharacterHandler_ReadBodyData_m9F651B27C85458C32C9D92828B9DC19F6DC5C9F5 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, float ___0_renderTime, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:517>
		bool L_0 = __this->____dataIsValid;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:519>
		return (bool)0;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:522>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_1 = __this->____networkCharacterRetargeter;
		NullCheck(L_1);
		bool L_2;
		L_2 = NetworkCharacterRetargeter_get_UseInterpolation_mBEBF3664101D6569571780DF3A1713DA67448B8A_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:524>
		return (bool)1;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:527>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:528>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:529>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:530>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:531>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_3 = __this->____networkCharacterRetargeter;
		NullCheck(L_3);
		uint64_t L_4;
		L_4 = CharacterRetargeter_get_RetargetingHandle_mEEE86C51359EC442E2947FC308BFF5A0E7E19FCB(L_3, NULL);
		NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4* L_5 = (NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4*)(&__this->____bodyPose);
		float L_6 = ___0_renderTime;
		bool L_7;
		L_7 = MSDKUtility_GetInterpolatedSkeleton_m7BAA696859976CC749EFC4C267537A8346E15BAC(L_4, 1, L_5, ((double)L_6), NULL);
		return L_7;
	}
}
// Method Definition Index: 148443
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkCharacterHandler_ReadFaceData_mBCC539FDC8D9CEDDE71F0E9E4C04FD3306039D5E (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, float ___0_renderTime, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:536>
		bool L_0 = __this->____dataIsValid;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:538>
		return (bool)0;
	}

IL_000a:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:541>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_1 = __this->____networkCharacterRetargeter;
		NullCheck(L_1);
		bool L_2;
		L_2 = NetworkCharacterRetargeter_get_UseInterpolation_mBEBF3664101D6569571780DF3A1713DA67448B8A_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:543>
		return (bool)1;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:546>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:547>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:548>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:549>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:550>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_3 = __this->____networkCharacterRetargeter;
		NullCheck(L_3);
		uint64_t L_4;
		L_4 = CharacterRetargeter_get_RetargetingHandle_mEEE86C51359EC442E2947FC308BFF5A0E7E19FCB(L_3, NULL);
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_5 = (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)(&__this->____facePose);
		float L_6 = ___0_renderTime;
		bool L_7;
		L_7 = MSDKUtility_GetInterpolatedFace_mAE656910F8A70FBF88DF687CEDAB3DCDCC758E88(L_4, 1, L_5, ((double)L_6), NULL);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:552>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_8 = __this->____networkCharacterRetargeter;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_9 = (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)(&__this->____facePose);
		NullCheck(L_8);
		CharacterRetargeterConfig_DeNormalizeFaceValues_mFB9D7B9362E95726CE7DE6F5A72D2EF87B38D575(L_8, L_9, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:553>
		return (bool)1;
	}

IL_0047:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:556>
		return (bool)0;
	}
}
// Method Definition Index: 148444
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_ResetSendTimers_mFB2963CF84F7E54F39C30583AEED70A19E424178 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:561>
		bool L_0;
		L_0 = NetworkCharacterHandler_get__shouldSyncData_mAB61A52C0C10B634CCDA7163EB1A282F5BA9BC9F(__this, NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:563>
		float L_1 = __this->____elapsedSyncTime;
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_2 = __this->____networkCharacterRetargeter;
		NullCheck(L_2);
		float L_3;
		L_3 = NetworkCharacterRetargeter_get_IntervalToSyncData_m112863BBC84150107DB2F6687712C10406E78E8B_inline(L_2, NULL);
		__this->____elapsedSyncTime = ((float)il2cpp_codegen_subtract(L_1, L_3));
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:564>
		__this->____elapsedSendTime = (0.0f);
		return;
	}

IL_002c:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:566>
		bool L_4;
		L_4 = NetworkCharacterHandler_get__shouldSendData_m20732A7C31A5978530D65E04D91D63F2EAB05D73(__this, NULL);
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:568>
		float L_5 = __this->____elapsedSendTime;
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_6 = __this->____networkCharacterRetargeter;
		NullCheck(L_6);
		float L_7;
		L_7 = NetworkCharacterRetargeter_get_IntervalToSendData_m3230055235BE0AADE878097B4177C275CBEB7B82_inline(L_6, NULL);
		__this->____elapsedSendTime = ((float)il2cpp_codegen_subtract(L_5, L_7));
	}

IL_004c:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:570>
		return;
	}
}
// Method Definition Index: 148445
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler_EnsureRetargetingInitialized_mCD745A97F7E395DB83D7342B50839B7FCE181FDD (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04538C68DF20238E40231C9243A35004CC365362);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral603B315A3E689D8AADCEA98C4F4507E5B12F6462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB43CA88F3B50BFB16E3FED66F47B6E84F078BB50);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:579>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_0 = __this->____networkCharacterRetargeter;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = CharacterRetargeter_get_RetargetingHandle_mEEE86C51359EC442E2947FC308BFF5A0E7E19FCB(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:581>
		return;
	}

IL_000e:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:585>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_2 = __this->____networkCharacterRetargeter;
		NullCheck(L_2);
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_3;
		L_3 = CharacterRetargeterConfig_get_ConfigAsset_m29D9359F1D5E850FA77C26FDF81788BEB6FC470D_inline(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:587>
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralB43CA88F3B50BFB16E3FED66F47B6E84F078BB50, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:588>
		return;
	}

IL_002c:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:591>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_5 = __this->____networkCharacterRetargeter;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = CharacterRetargeterConfig_get_Config_m6AD768F7ACB25118E295B7D9CC339C1F73571723(L_5, NULL);
		bool L_7;
		L_7 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_6, NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:593>
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral603B315A3E689D8AADCEA98C4F4507E5B12F6462, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:594>
		return;
	}

IL_0049:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:599>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_8 = __this->____networkCharacterRetargeter;
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_9 = __this->____networkCharacterRetargeter;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = CharacterRetargeterConfig_get_Config_m6AD768F7ACB25118E295B7D9CC339C1F73571723(L_9, NULL);
		NullCheck(L_8);
		CharacterRetargeter_Setup_m563B9F7F1A3CF047BE06D9F06547C7F6F80B5F61(L_8, L_10, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:602>
		NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* L_11 = __this->____networkCharacterRetargeter;
		NullCheck(L_11);
		uint64_t L_12;
		L_12 = CharacterRetargeter_get_RetargetingHandle_mEEE86C51359EC442E2947FC308BFF5A0E7E19FCB(L_11, NULL);
		if (L_12)
		{
			goto IL_0076;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:604>
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral04538C68DF20238E40231C9243A35004CC365362, NULL);
	}

IL_0076:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:606>
		return;
	}
}
// Method Definition Index: 148446
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterHandler__ctor_m5EBC976D13482D5E4B9B023112186F9766C26C04 (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m193A33669C79EC9ABF1A6F0E0B33D3EC2AC38351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:67>
		__this->____applyData = (bool)1;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:73>
		__this->____spawnDelay = (0.5f);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:90>
		Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A* L_0 = (Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A*)il2cpp_codegen_object_new(Dictionary_2_tAC84F565B305F33E7066B98F6CD6CC5A96A1416A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m193A33669C79EC9ABF1A6F0E0B33D3EC2AC38351(L_0, Dictionary_2__ctor_m193A33669C79EC9ABF1A6F0E0B33D3EC2AC38351_RuntimeMethod_var);
		__this->____clientsLastAck = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____clientsLastAck), (void*)L_0);
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
// Method Definition Index: 148447
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkCharacterRetargeter_get_Owner_mA51C56F7CA62205111F2C0F7AA9B6402339A9A1C (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:28>
		int32_t L_0 = __this->____ownership;
		return L_0;
	}
}
// Method Definition Index: 148448
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_set_Owner_m3567480B30AFE92608C37387330F1A4A924C4ED4 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:29>
		int32_t L_0 = ___0_value;
		__this->____ownership = L_0;
		return;
	}
}
// Method Definition Index: 148449
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkCharacterRetargeter_get_CompressionType_m26EA99410915225516B600A591C175D51B798543 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:34>
		uint32_t L_0 = __this->____compressionType;
		return L_0;
	}
}
// Method Definition Index: 148450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_set_CompressionType_mD6D288FF738870C727794FFB0DED9214F989310B (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:37>
		uint32_t L_0 = ___0_value;
		__this->____compressionType = L_0;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:38>
		NetworkCharacterRetargeter_UpdateSerializationSettings_mECB8A3C1E39DCE3C850372E207485F3610311FF7(__this, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:39>
		return;
	}
}
// Method Definition Index: 148451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkCharacterRetargeter_get_PositionThreshold_m8EADA7C9E087789D7632F87651C7A62AC728860D (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:44>
		float L_0 = __this->____positionThreshold;
		return L_0;
	}
}
// Method Definition Index: 148452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_set_PositionThreshold_m2FD2C629B366FF740E2EE31AA97493AABAECB4B6 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:47>
		float L_0 = ___0_value;
		__this->____positionThreshold = L_0;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:48>
		NetworkCharacterRetargeter_UpdateSerializationSettings_mECB8A3C1E39DCE3C850372E207485F3610311FF7(__this, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:49>
		return;
	}
}
// Method Definition Index: 148453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkCharacterRetargeter_get_RotationAngleThreshold_m564EC0B2271ABFFDF0E3448C5B37074CF11A4FE6 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:54>
		float L_0 = __this->____rotationAngleThreshold;
		return L_0;
	}
}
// Method Definition Index: 148454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_set_RotationAngleThreshold_mB01275F667A42B0E420A13EEBAB4C45BF1115965 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:57>
		float L_0 = ___0_value;
		__this->____rotationAngleThreshold = L_0;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:58>
		NetworkCharacterRetargeter_UpdateSerializationSettings_mECB8A3C1E39DCE3C850372E207485F3610311FF7(__this, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:59>
		return;
	}
}
// Method Definition Index: 148455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkCharacterRetargeter_get_ShapeThreshold_m45FA838F1E34490143FBF771D5BAEE03079219E9 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:64>
		float L_0 = __this->____shapeThreshold;
		return L_0;
	}
}
// Method Definition Index: 148456
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_set_ShapeThreshold_m4C11B4EACE91E2018280EB47A01B430B2329EA63 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:67>
		float L_0 = ___0_value;
		__this->____shapeThreshold = L_0;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:68>
		NetworkCharacterRetargeter_UpdateSerializationSettings_mECB8A3C1E39DCE3C850372E207485F3610311FF7(__this, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:69>
		return;
	}
}
// Method Definition Index: 148457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NetworkCharacterRetargeter_get_BodyIndicesToSync_m2F3FEF33EB7BB2EEE4D3758E851D48A0D1861E58 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:74>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____bodyIndicesToSync;
		return L_0;
	}
}
// Method Definition Index: 148458
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_set_BodyIndicesToSync_m3D35432B97FC8BFC98F73B3DD14B3F253C480B06 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:75>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_value;
		__this->____bodyIndicesToSync = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bodyIndicesToSync), (void*)L_0);
		return;
	}
}
// Method Definition Index: 148459
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NetworkCharacterRetargeter_get_BodyIndicesToSend_m9EBB87E9D2DA9CF5A900A01095D218EB3C1A9441 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:80>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____bodyIndicesToSend;
		return L_0;
	}
}
// Method Definition Index: 148460
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_set_BodyIndicesToSend_mBF3502032DEC7F1DB4A62254438517D95B2227A8 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:81>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_value;
		__this->____bodyIndicesToSend = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bodyIndicesToSend), (void*)L_0);
		return;
	}
}
// Method Definition Index: 148461
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NetworkCharacterRetargeter_get_FaceIndicesToSync_m43ED9E2F78F485FC7F45BB4D2DE34079E5DC43EC (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:86>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____faceIndicesToSend;
		return L_0;
	}
}
// Method Definition Index: 148462
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_set_FaceIndicesToSync_mC9FCB38ACEC629F7FAA9E4AC12B831BBA388B677 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:87>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_value;
		__this->____faceIndicesToSend = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____faceIndicesToSend), (void*)L_0);
		return;
	}
}
// Method Definition Index: 148463
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkCharacterRetargeter_get_IntervalToSendData_m3230055235BE0AADE878097B4177C275CBEB7B82 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:90>
		float L_0 = __this->____intervalToSendData;
		return L_0;
	}
}
// Method Definition Index: 148464
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkCharacterRetargeter_get_IntervalToSyncData_m112863BBC84150107DB2F6687712C10406E78E8B (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:92>
		float L_0 = __this->____intervalToSyncData;
		return L_0;
	}
}
// Method Definition Index: 148465
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkCharacterRetargeter_get_UseSyncInterval_m303CAAE066213B4304184D803629F9B97F94FD6F (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:94>
		bool L_0 = __this->____useSyncInterval;
		return L_0;
	}
}
// Method Definition Index: 148466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkCharacterRetargeter_get_MaxBufferSize_m134754A05B523D238B55F31265C95535F13D42BA (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:96>
		int32_t L_0 = __this->____maxBufferSize;
		return L_0;
	}
}
// Method Definition Index: 148467
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkCharacterRetargeter_get_UseDeltaCompression_m212A4EB54A59C75C993503D698D3B71BF19455D1 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:98>
		bool L_0 = __this->____useDeltaCompression;
		return L_0;
	}
}
// Method Definition Index: 148468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkCharacterRetargeter_get_UseInterpolation_mBEBF3664101D6569571780DF3A1713DA67448B8A (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:102>
		bool L_0 = __this->____useInterpolation;
		return L_0;
	}
}
// Method Definition Index: 148469
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_set_UseInterpolation_mD20BC19CC32DE309EFA99208C35942DBDBAD042E (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:103>
		bool L_0 = ___0_value;
		__this->____useInterpolation = L_0;
		return;
	}
}
// Method Definition Index: 148470
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_Awake_m56135C0CDF5A68BC1C55A18117C306FA9CB93513 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:201>
		CharacterRetargeter_Awake_m85DC98444CCC949D09BD52E6ED140B6C30AC7F7A(__this, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:202>
		NetworkCharacterRetargeter_ToggleObjects_mC588DB04634695273D167754888DA749ED975304(__this, (bool)0, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:203>
		return;
	}
}
// Method Definition Index: 148471
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_Start_m56C732ADF357A8B796FD7766439561B56C04BCC3 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:207>
		CharacterRetargeter_Start_m70F1C7576596AEE7E0E442FC30D6D5AA82E7C8B6(__this, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:208>
		NetworkCharacterRetargeter_InitializeIndicesToSendIfEmpty_mBF5E46FDDFEEEF194AC0CAC3275C54073917BAD6(__this, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:209>
		NetworkCharacterRetargeter_UpdateSerializationSettings_mECB8A3C1E39DCE3C850372E207485F3610311FF7(__this, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:210>
		return;
	}
}
// Method Definition Index: 148472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_InitializeIndicesToSendIfEmpty_mBF5E46FDDFEEEF194AC0CAC3275C54073917BAD6 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:219>
		int32_t L_0;
		L_0 = CharacterRetargeterConfig_get_NumberOfJoints_m1FEAAC708409F540EBDB3342F59A29E7BA7B0BF8(__this, NULL);
		V_0 = L_0;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:220>
		int32_t L_1;
		L_1 = CharacterRetargeterConfig_get_NumberOfShapes_mF53EB829414F83DF5909C05E8D0663BE31A35A19(__this, NULL);
		V_1 = L_1;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:222>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)(&__this->____bodyIndicesToSync);
		int32_t L_3 = V_0;
		NetworkCharacterRetargeter_InitializeIndexArrayIfEmpty_mF303DE7239F259231F3E9E212B03C2631E08E653(L_2, L_3, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:223>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)(&__this->____bodyIndicesToSend);
		int32_t L_5 = V_0;
		NetworkCharacterRetargeter_InitializeIndexArrayIfEmpty_mF303DE7239F259231F3E9E212B03C2631E08E653(L_4, L_5, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:224>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)(&__this->____faceIndicesToSend);
		int32_t L_7 = V_1;
		NetworkCharacterRetargeter_InitializeIndexArrayIfEmpty_mF303DE7239F259231F3E9E212B03C2631E08E653(L_6, L_7, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:225>
		return;
	}
}
// Method Definition Index: 148473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_InitializeIndexArrayIfEmpty_mF303DE7239F259231F3E9E212B03C2631E08E653 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___0_array, int32_t ___1_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:229>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_0 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = *((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)L_0);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_2 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = *((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)L_2);
		NullCheck(L_3);
		if ((((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0026;
		}
	}

IL_0009:
	{
		int32_t L_4 = ___1_size;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:231>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_5 = ___0_array;
		int32_t L_6 = ___1_size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_7);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:232>
		V_0 = 0;
		goto IL_0022;
	}

IL_0019:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:234>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_8 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = *((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)L_8);
		int32_t L_10 = V_0;
		int32_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (int32_t)L_11);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:232>
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0022:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:232>
		int32_t L_13 = V_0;
		int32_t L_14 = ___1_size;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0019;
		}
	}

IL_0026:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:237>
		return;
	}
}
// Method Definition Index: 148474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_Update_mD313484B241134B59CF0B62FDA441B8C87E24B9F (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F517074141F617F10CC57E4A69DCC1E3039DEEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8C3930829CE1B7FB2BDDD26DE7D57E92C522DD8);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:241>
		int32_t L_0 = __this->____ownership;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:243>
		uint64_t L_1;
		L_1 = CharacterRetargeter_get_RetargetingHandle_mEEE86C51359EC442E2947FC308BFF5A0E7E19FCB(__this, NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:245>
		bool L_2 = __this->____hasLoggedOwnershipWarning;
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:247>
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralF8C3930829CE1B7FB2BDDD26DE7D57E92C522DD8, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:248>
		__this->____hasLoggedOwnershipWarning = (bool)1;
	}

IL_002a:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:250>
		return;
	}

IL_002b:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:252>
		CharacterRetargeter_Update_m33B0E843687265633B8189D24734160E75795F7F(__this, NULL);
		return;
	}

IL_0032:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:254>
		int32_t L_3 = __this->____ownership;
		if (L_3)
		{
			goto IL_0053;
		}
	}
	{
		bool L_4 = __this->____hasLoggedOwnershipWarning;
		if (L_4)
		{
			goto IL_0053;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:256>
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral5F517074141F617F10CC57E4A69DCC1E3039DEEF, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:257>
		__this->____hasLoggedOwnershipWarning = (bool)1;
	}

IL_0053:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:259>
		return;
	}
}
// Method Definition Index: 148475
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_LateUpdate_m143B83642CE157C0C94782B27AD9BE2785A23A4F (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:263>
		int32_t L_0 = __this->____ownership;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0010;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:265>
		CharacterRetargeter_LateUpdate_m3847F39869E05369FD96C906D10CA11A24A672AB(__this, NULL);
		return;
	}

IL_0010:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:267>
		int32_t L_1 = __this->____ownership;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0041;
		}
	}
	{
		bool L_2 = ((CharacterRetargeter_t1C941359922B316027DE38BC0BCC4C0249F53533*)__this)->____debugDrawTargetSkeleton;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		bool L_3 = __this->____hasValidDebugPose;
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:269>
		SkeletonRetargeter_t915EB48FEFE3A7B5774FBCB7A1F4FFC853FAFF5A* L_4 = ((CharacterRetargeter_t1C941359922B316027DE38BC0BCC4C0249F53533*)__this)->____skeletonRetargeter;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ((CharacterRetargeter_t1C941359922B316027DE38BC0BCC4C0249F53533*)__this)->____debugDrawTransform;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ((CharacterRetargeter_t1C941359922B316027DE38BC0BCC4C0249F53533*)__this)->____debugDrawTargetSkeletonColor;
		NullCheck(L_4);
		SkeletonRetargeter_DrawDebugTargetPose_mD288EE78A21F59F818AD25FDBB6830E4959D2CAC(L_4, L_5, L_6, (bool)1, NULL);
	}

IL_0041:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:271>
		return;
	}
}
// Method Definition Index: 148476
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_SetDebugPose_m66BFCE7721A2525D94029739858CA2AA27AF3898 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 ___0_bodyPose, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_CopyFrom_mC2DECA91F8EECD68FEC74EAEB85DFF1AEA89C271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mD96DC3E4C47005AB224CA46590B336EF17DEF032_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:275>
		bool L_0 = ((CharacterRetargeter_t1C941359922B316027DE38BC0BCC4C0249F53533*)__this)->____debugDrawTargetSkeleton;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:277>
		return;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:279>
		__this->____hasValidDebugPose = (bool)1;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:280>
		SkeletonRetargeter_t915EB48FEFE3A7B5774FBCB7A1F4FFC853FAFF5A* L_1 = ((CharacterRetargeter_t1C941359922B316027DE38BC0BCC4C0249F53533*)__this)->____skeletonRetargeter;
		NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 L_2 = ___0_bodyPose;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE));
		Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE L_3 = V_1;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25));
		Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25 L_4 = V_2;
		NullCheck(L_1);
		NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 L_5;
		L_5 = SkeletonRetargeter_GetWorldPoseFromLocalPose_mDA4ACB6C384D3B1B26A8FC3E71C2ED8CFB2D4634(L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:281>
		SkeletonRetargeter_t915EB48FEFE3A7B5774FBCB7A1F4FFC853FAFF5A* L_6 = ((CharacterRetargeter_t1C941359922B316027DE38BC0BCC4C0249F53533*)__this)->____skeletonRetargeter;
		NullCheck(L_6);
		NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4* L_7 = (NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4*)(&L_6->___RetargetedPose);
		NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4 L_8 = V_0;
		NativeArray_1_CopyFrom_mC2DECA91F8EECD68FEC74EAEB85DFF1AEA89C271(L_7, L_8, NativeArray_1_CopyFrom_mC2DECA91F8EECD68FEC74EAEB85DFF1AEA89C271_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:282>
		NativeArray_1_Dispose_mD96DC3E4C47005AB224CA46590B336EF17DEF032((&V_0), NativeArray_1_Dispose_mD96DC3E4C47005AB224CA46590B336EF17DEF032_RuntimeMethod_var);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:283>
		return;
	}
}
// Method Definition Index: 148477
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_OnValidate_mB0426C0110047D27ED14FCE43714AA3F5B891F25 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:290>
		CharacterRetargeterConfig_OnValidate_mF12700A374CB8DA8C890D89863B41C57C1A01958(__this, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:291>
		NetworkCharacterRetargeter_UpdateSerializationSettings_mECB8A3C1E39DCE3C850372E207485F3610311FF7(__this, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:292>
		return;
	}
}
// Method Definition Index: 148478
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_UpdateSerializationSettings_mECB8A3C1E39DCE3C850372E207485F3610311FF7 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	SerializationSettings_tFA9932068AF9C4903D829F5DF7E0E267772E14B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:299>
		uint64_t L_0;
		L_0 = CharacterRetargeter_get_RetargetingHandle_mEEE86C51359EC442E2947FC308BFF5A0E7E19FCB(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:301>
		return;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:304>
		uint64_t L_1;
		L_1 = CharacterRetargeter_get_RetargetingHandle_mEEE86C51359EC442E2947FC308BFF5A0E7E19FCB(__this, NULL);
		bool L_2;
		L_2 = MSDKUtility_GetSerializationSettings_m87C1FF487B7AB79510DFE76AC3317EE65CF7544F(L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0059;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:306>
		uint32_t L_3 = __this->____compressionType;
		(&V_0)->___CompressionType = L_3;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:307>
		float L_4 = __this->____positionThreshold;
		(&V_0)->___PositionThreshold = L_4;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:308>
		float L_5 = __this->____rotationAngleThreshold;
		(&V_0)->___RotationAngleThresholdDegrees = L_5;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:309>
		float L_6 = __this->____shapeThreshold;
		(&V_0)->___ShapeThreshold = L_6;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:310>
		uint64_t L_7;
		L_7 = CharacterRetargeter_get_RetargetingHandle_mEEE86C51359EC442E2947FC308BFF5A0E7E19FCB(__this, NULL);
		SerializationSettings_tFA9932068AF9C4903D829F5DF7E0E267772E14B5 L_8 = V_0;
		bool L_9;
		L_9 = MSDKUtility_SetSerializationSettings_m1A4D0248DF5CFCA8C8F95F13D1B0D7B9371666AB(L_7, L_8, NULL);
	}

IL_0059:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:312>
		return;
	}
}
// Method Definition Index: 148479
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_ToggleObjects_mC588DB04634695273D167754888DA749ED975304 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, bool ___0_isActive, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:320>
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->____objectsToHideUntilValid;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:322>
		return;
	}

IL_0009:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:325>
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->____objectsToHideUntilValid;
		V_0 = L_1;
		V_1 = 0;
		goto IL_002c;
	}

IL_0014:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:325>
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:327>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:329>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_2;
		bool L_9 = ___0_isActive;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, L_9, NULL);
	}

IL_0028:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:325>
		int32_t L_11 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:332>
		return;
	}
}
// Method Definition Index: 148480
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter__ctor_mCD9C1161201CA17624854483E10EA6B6A5015B49 (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:122>
		__this->____useDeltaCompression = (bool)1;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:128>
		__this->____useSyncInterval = (bool)1;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:134>
		__this->____intervalToSendData = (0.0833330005f);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:140>
		__this->____intervalToSyncData = (1.0f);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:146>
		__this->____positionThreshold = (0.00999999978f);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:152>
		__this->____rotationAngleThreshold = (0.5f);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:158>
		__this->____shapeThreshold = (0.00999999978f);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:182>
		__this->____useInterpolation = (bool)1;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:188>
		__this->____maxBufferSize = 5;
		CharacterRetargeter__ctor_mFB2CF72E98E8D3F2AB97DC11739297AFF47F689F(__this, NULL);
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
// Method Definition Index: 148481
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkCharacterBehaviourLocal_get_HasInputAuthority_m409D3417E647B4B0962DE5E0B855ECD6A31C1646 (NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:17>
		NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* L_0 = __this->____self;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = NetworkCharacterHandler_get_Owner_m89F2F00D3BD95463AC279A1A855595CD3BAB881F(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
// Method Definition Index: 148482
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* NetworkCharacterBehaviourLocal_get_CharacterPrefab_m4C96C396340931E85BA4E1DB6302BEDDA1DC820E (NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:20>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		return L_0;
	}
}
// Method Definition Index: 148483
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetworkCharacterBehaviourLocal_get_MetaId_m33C838FA9E22EDA8043373079B3A89ADC7F6D360 (NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:23>
		return ((int64_t)0);
	}
}
// Method Definition Index: 148484
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkCharacterBehaviourLocal_get_CharacterId_m4A938101D535C4F610EF7D536F8913478149C1F7 (NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:26>
		return 0;
	}
}
// Method Definition Index: 148485
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkCharacterBehaviourLocal_get_NetworkTime_m72EA83E717B8E94F664C47EF87424B23603F10AA (NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:29>
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		return L_0;
	}
}
// Method Definition Index: 148486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkCharacterBehaviourLocal_get_RenderTime_m7FA383EF8F1B843D57B793BA19CBDDF0286600D3 (NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:32>
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		return L_0;
	}
}
// Method Definition Index: 148487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkCharacterBehaviourLocal_get_DeltaTime_mE1888C000E8F36B90B248D789169DAAF74E26A3E (NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:35>
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		return L_0;
	}
}
// Method Definition Index: 148488
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* NetworkCharacterBehaviourLocal_get_ClientIds_mB12A72BAAED8E8F81837AB3050E440FC79620E57 (NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:38>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->___U3CClientIdsU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 148489
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterBehaviourLocal_set_ClientIds_m3EB54601ECA69EA511C7869B76A3A565DF607150 (NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:38>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_value;
		__this->___U3CClientIdsU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientIdsU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 148490
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetworkCharacterBehaviourLocal_get_LocalClientId_m2670850E6BFA81DEC196F927E9983F39E63886A9 (NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:41>
		uint64_t L_0 = __this->___U3CLocalClientIdU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 148491
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterBehaviourLocal_set_LocalClientId_m6D994C084AE5A2A101187EC5142DE44F702323F7 (NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:41>
		uint64_t L_0 = ___0_value;
		__this->___U3CLocalClientIdU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 148492
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterBehaviourLocal_Awake_mF5F48A4AB70F1AA95EAEA804A79A86DF3BAFE913 (NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088_m1969FBD3F98675FA29C2CBFE751C4CF11D94A72C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:70>
		NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* L_0;
		L_0 = Component_GetComponent_TisNetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088_m1969FBD3F98675FA29C2CBFE751C4CF11D94A72C(__this, Component_GetComponent_TisNetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088_m1969FBD3F98675FA29C2CBFE751C4CF11D94A72C_RuntimeMethod_var);
		__this->____self = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____self), (void*)L_0);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:71>
		Guid_t L_1;
		L_1 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Guid_ToByteArray_m6EBFB2F42D3760D9143050A3A8ED03F085F3AFE9((&V_0), NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_3;
		L_3 = ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644(L_2, ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
		uint64_t L_4;
		L_4 = BitConverter_ToUInt64_m0D282A37594B47FDB58C5C20FA01464921F21AE7(L_3, NULL);
		NetworkCharacterBehaviourLocal_set_LocalClientId_m6D994C084AE5A2A101187EC5142DE44F702323F7_inline(__this, L_4, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:72>
		return;
	}
}
// Method Definition Index: 148493
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterBehaviourLocal_Start_m37F86FC3B45BBF5F971670EE5235F3397C656B41 (NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:76>
		NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* L_0 = __this->____self;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = NetworkCharacterHandler_get_Owner_m89F2F00D3BD95463AC279A1A855595CD3BAB881F(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_002d;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:78>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:79>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:80>
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:81>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = L_2;
		NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* L_4 = __this->____target;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = NetworkCharacterHandler_get_CharacterBehaviour_m4CFDB0E50F9E3DE6B7FEBC65F018CBC647EC8D78_inline(L_4, NULL);
		NullCheck(L_5);
		uint64_t L_6;
		L_6 = InterfaceFuncInvoker0< uint64_t >::Invoke(8, INetworkCharacterBehaviour_tD40AAD9E0BD7DC37AA4D01D0F6433E30EB135459_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_6);
		NetworkCharacterBehaviourLocal_set_ClientIds_m3EB54601ECA69EA511C7869B76A3A565DF607150_inline(__this, L_3, NULL);
	}

IL_002d:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:83>
		NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* L_7 = __this->____self;
		NullCheck(L_7);
		NetworkCharacterHandler_Setup_m8594C3465E9C39EA8EFA99C7C0FDCABDEB3DD85A(L_7, (bool)0, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:84>
		return;
	}
}
// Method Definition Index: 148494
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterBehaviourLocal_Update_m9CD18747301B6BF886BF1A19FC29CC3D49F0DE37 (NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9275ABFFD7C52F583335B4964B8209021608C56F);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:91>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->____debugDataText;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:93>
		return;
	}

IL_000f:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:96>
		float L_2 = __this->____debugDataTimer;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____debugDataTimer = ((float)il2cpp_codegen_add(L_2, L_3));
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:97>
		float L_4 = __this->____debugDataTimer;
		if ((!(((float)L_4) < ((float)(1.0f)))))
		{
			goto IL_002f;
		}
	}
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:99>
		return;
	}

IL_002f:
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:102>
		int32_t L_5 = __this->____debugExpectedSizeInBytes;
		V_0 = ((float)il2cpp_codegen_multiply(((float)L_5), (0.00800000038f)));
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:103>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = __this->____debugDataText;
		float L_7 = V_0;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.single_class, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral9275ABFFD7C52F583335B4964B8209021608C56F, L_9, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66, L_6, L_10);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:104>
		__this->____debugExpectedSizeInBytes = 0;
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:105>
		float L_11 = __this->____debugDataTimer;
		__this->____debugDataTimer = ((float)il2cpp_codegen_subtract(L_11, (1.0f)));
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:106>
		return;
	}
}
// Method Definition Index: 148495
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterBehaviourLocal_ReceiveStreamData_m443D83FE92C760E9ACCCD15BDBD5AE6C42E1FA06 (NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884* __this, uint64_t ___0_clientId, bool ___1_isReliable, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___2_bytes, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:112>
		NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* L_0 = __this->____target;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_1 = ___2_bytes;
		NullCheck(L_0);
		NetworkCharacterHandler_ReceiveData_m9E7FB5BFCF5342C5F21705D795EB36E8AF3E3166(L_0, L_1, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:113>
		int32_t L_2 = __this->____debugExpectedSizeInBytes;
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___2_bytes))->___m_Length);
		__this->____debugExpectedSizeInBytes = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:114>
		return;
	}
}
// Method Definition Index: 148496
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterBehaviourLocal_ReceiveStreamAck_m48BC2C68966C94720087626C6B9D67BA83D47EA6 (NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884* __this, uint64_t ___0_clientId, int32_t ___1_ack, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:119>
		NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* L_0 = __this->____target;
		uint64_t L_1 = ___0_clientId;
		int32_t L_2 = ___1_ack;
		NullCheck(L_0);
		NetworkCharacterHandler_ReceiveAck_mD80D8965C23537262BD8D12D28F74AB568A1B826(L_0, L_1, L_2, NULL);
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:120>
		return;
	}
}
// Method Definition Index: 148497
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkCharacterBehaviourLocal__ctor_mAA2377D7879FE691B898B15C318C241401E32ABE (NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 148447
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkCharacterRetargeter_get_Owner_mA51C56F7CA62205111F2C0F7AA9B6402339A9A1C_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:28>
		int32_t L_0 = __this->____ownership;
		return L_0;
	}
}
// Method Definition Index: 148463
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NetworkCharacterRetargeter_get_IntervalToSendData_m3230055235BE0AADE878097B4177C275CBEB7B82_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:90>
		float L_0 = __this->____intervalToSendData;
		return L_0;
	}
}
// Method Definition Index: 148465
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkCharacterRetargeter_get_UseSyncInterval_m303CAAE066213B4304184D803629F9B97F94FD6F_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:94>
		bool L_0 = __this->____useSyncInterval;
		return L_0;
	}
}
// Method Definition Index: 148464
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NetworkCharacterRetargeter_get_IntervalToSyncData_m112863BBC84150107DB2F6687712C10406E78E8B_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:92>
		float L_0 = __this->____intervalToSyncData;
		return L_0;
	}
}
// Method Definition Index: 148448
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkCharacterRetargeter_set_Owner_m3567480B30AFE92608C37387330F1A4A924C4ED4_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:29>
		int32_t L_0 = ___0_value;
		__this->____ownership = L_0;
		return;
	}
}
// Method Definition Index: 128919
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CharacterRetargeter_get_IsValid_m5756208AA746F2E6E621AB8DB09227E0EF9EEDBB_inline (CharacterRetargeter_t1C941359922B316027DE38BC0BCC4C0249F53533* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Retargeting/CharacterRetargeter.cs:22>
		bool L_0 = __this->____isValid;
		return L_0;
	}
}
// Method Definition Index: 128925
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SkeletonRetargeter_t915EB48FEFE3A7B5774FBCB7A1F4FFC853FAFF5A* CharacterRetargeter_get_SkeletonRetargeter_m12D09B9CC54C0875B336144AE3BD4EC2DC3D0EC5_inline (CharacterRetargeter_t1C941359922B316027DE38BC0BCC4C0249F53533* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Retargeting/CharacterRetargeter.cs:51>
		SkeletonRetargeter_t915EB48FEFE3A7B5774FBCB7A1F4FFC853FAFF5A* L_0 = __this->____skeletonRetargeter;
		return L_0;
	}
}
// Method Definition Index: 129115
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SkeletonRetargeter_get_IsInitialized_m021B68D40327EDEB9F7F923AB283A9523A44D11E_inline (SkeletonRetargeter_t915EB48FEFE3A7B5774FBCB7A1F4FFC853FAFF5A* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Retargeting/SkeletonRetargeter.cs:24>
		bool L_0 = __this->___U3CIsInitializedU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 129117
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SkeletonRetargeter_get_AppliedPose_m2E6B140B499B29D089FF6DE283C998328A4A3A0A_inline (SkeletonRetargeter_t915EB48FEFE3A7B5774FBCB7A1F4FFC853FAFF5A* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Retargeting/SkeletonRetargeter.cs:29>
		bool L_0 = __this->___U3CAppliedPoseU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 148466
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkCharacterRetargeter_get_MaxBufferSize_m134754A05B523D238B55F31265C95535F13D42BA_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:96>
		int32_t L_0 = __this->____maxBufferSize;
		return L_0;
	}
}
// Method Definition Index: 148419
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkCharacterHandler_get_ApplyData_m28424182FA2CE1931DDBEA82D9173CC05C46A301_inline (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:48>
		bool L_0 = __this->____applyData;
		return L_0;
	}
}
// Method Definition Index: 148467
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkCharacterRetargeter_get_UseDeltaCompression_m212A4EB54A59C75C993503D698D3B71BF19455D1_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:98>
		bool L_0 = __this->____useDeltaCompression;
		return L_0;
	}
}
// Method Definition Index: 148459
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NetworkCharacterRetargeter_get_BodyIndicesToSend_m9EBB87E9D2DA9CF5A900A01095D218EB3C1A9441_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:80>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____bodyIndicesToSend;
		return L_0;
	}
}
// Method Definition Index: 148457
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NetworkCharacterRetargeter_get_BodyIndicesToSync_m2F3FEF33EB7BB2EEE4D3758E851D48A0D1861E58_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:74>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____bodyIndicesToSync;
		return L_0;
	}
}
// Method Definition Index: 148461
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* NetworkCharacterRetargeter_get_FaceIndicesToSync_m43ED9E2F78F485FC7F45BB4D2DE34079E5DC43EC_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:86>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____faceIndicesToSend;
		return L_0;
	}
}
// Method Definition Index: 67456
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		return;
	}
}
// Method Definition Index: 148468
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkCharacterRetargeter_get_UseInterpolation_mBEBF3664101D6569571780DF3A1713DA67448B8A_inline (NetworkCharacterRetargeter_t2A42BB84E0D24DBEADD677F92C42A6CE4A8DAFEF* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterRetargeter.cs:102>
		bool L_0 = __this->____useInterpolation;
		return L_0;
	}
}
// Method Definition Index: 128961
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* CharacterRetargeterConfig_get_ConfigAsset_m29D9359F1D5E850FA77C26FDF81788BEB6FC470D_inline (CharacterRetargeterConfig_tD8FF2B4F325BC140BE821B1083EA466B12F72877* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Retargeting/CharacterRetargeterConfig.cs:159>
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_0 = __this->____config;
		return L_0;
	}
}
// Method Definition Index: 148491
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkCharacterBehaviourLocal_set_LocalClientId_m6D994C084AE5A2A101187EC5142DE44F702323F7_inline (NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:41>
		uint64_t L_0 = ___0_value;
		__this->___U3CLocalClientIdU3Ek__BackingField = L_0;
		return;
	}
}
// Method Definition Index: 148415
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NetworkCharacterHandler_get_CharacterBehaviour_m4CFDB0E50F9E3DE6B7FEBC65F018CBC647EC8D78_inline (NetworkCharacterHandler_t6C30E905E3A2298A65094B22CDF1139496B07088* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterHandler.cs:26>
		RuntimeObject* L_0 = __this->____characterBehaviour;
		return L_0;
	}
}
// Method Definition Index: 148489
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkCharacterBehaviourLocal_set_ClientIds_m3EB54601ECA69EA511C7869B76A3A565DF607150_inline (NetworkCharacterBehaviourLocal_t5A7A231C9D17ABA597C67D6AD083A69845BE5884* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.movement@2d2fe7d8ce45/Runtime/Native/Scripts/Networking/NetworkCharacterBehaviourLocal.cs:38>
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_value;
		__this->___U3CClientIdsU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientIdsU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 64925
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mC7634553E8E6D340596899DFEA3ABFC230F7E992_gshared_inline (NativeArray_1_t7AEE1C5DD121C5B4F51A445C7D5AF75D38483EA4* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 64925
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m318928FA479173AFA6DEB47FF3B9D54868151D87_gshared_inline (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 64925
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_gshared_inline (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 11744
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m4DB40FDBC4B99D5CA77C191551B95300C9AE772A_gshared_inline (Queue_1_t9C7B202419AD43F3ECCC0C2293835ADDCAAC60DF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 888
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_gshared_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
