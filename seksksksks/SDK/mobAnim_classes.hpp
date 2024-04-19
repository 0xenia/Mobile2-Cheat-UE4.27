#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1650 (0x1990 - 0x340)
// AnimBlueprintGeneratedClass mobAnim.mobAnim_C
class UMobAnim_C : public UMobAnimer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x348(0x30)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_2;                       // 0x378(0xC8)(None)
	struct FAnimNode_TransitionPoseEvaluator     AnimGraphNode_TransitionPoseEvaluator_5;           // 0x440(0xF8)(None)
	struct FAnimNode_TransitionPoseEvaluator     AnimGraphNode_TransitionPoseEvaluator_4;           // 0x538(0xF8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_CustomTransitionResult_2;            // 0x630(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_29;                 // 0x660(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_28;                 // 0x688(0x28)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_1;                       // 0x6B0(0xC8)(None)
	struct FAnimNode_TransitionPoseEvaluator     AnimGraphNode_TransitionPoseEvaluator_3;           // 0x778(0xF8)(None)
	struct FAnimNode_TransitionPoseEvaluator     AnimGraphNode_TransitionPoseEvaluator_2;           // 0x870(0xF8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_CustomTransitionResult_1;            // 0x968(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0x998(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0x9C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0x9E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0xA10(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0xA38(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0xA60(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0xA88(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0xAB0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0xAD8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0xB00(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0xB28(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0xB50(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0xB78(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0xBA0(0x28)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0xBC8(0xC8)(None)
	struct FAnimNode_TransitionPoseEvaluator     AnimGraphNode_TransitionPoseEvaluator_1;           // 0xC90(0xF8)(None)
	struct FAnimNode_TransitionPoseEvaluator     AnimGraphNode_TransitionPoseEvaluator;             // 0xD88(0xF8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_CustomTransitionResult;              // 0xE80(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0xEB0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0xED8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0xF00(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0xF28(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0xF50(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0xF78(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0xFA0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0xFC8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0xFF0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x1018(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x1040(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x1068(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x1090(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x10B8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0x10E0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x1160(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x1190(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x1210(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x1240(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x12C0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x12F0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x1370(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x13A0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x1420(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x1450(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x14D0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x1500(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x1580(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x15B0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x1630(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x1660(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x16E0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1710(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x1790(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x17C0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x1840(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x1870(0xB0)(None)
	class UAnimSequence*                         _attack;                                           // 0x1920(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         _wait;                                             // 0x1928(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         _wait2;                                            // 0x1930(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         _wait3;                                            // 0x1938(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         _damge;                                            // 0x1940(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         _dead;                                             // 0x1948(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         _drop;                                             // 0x1950(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         _dropUp;                                           // 0x1958(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         _run;                                              // 0x1960(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         _walk;                                             // 0x1968(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         _spawnAnim;                                        // 0x1970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LastWait;                                          // 0x1978(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C43[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         _run2;                                             // 0x1980(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HaveSpawnAnim;                                     // 0x1988(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HaveWait;                                          // 0x1989(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HaveAttack;                                        // 0x198A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HaveRun2;                                          // 0x198B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HaveWait2;                                         // 0x198C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HaveWait3;                                         // 0x198D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HaveDamge;                                         // 0x198E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HaveDrop;                                          // 0x198F(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UMobAnim_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mobAnim_AnimGraphNode_TransitionResult_CD5D59DA4B05AFC0EE272C850F2C68F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mobAnim_AnimGraphNode_TransitionResult_0B4393954A4CE0C4E329579B1783F714();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mobAnim_AnimGraphNode_TransitionResult_0897A49840451B811FDFEB91D3818E66();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mobAnim_AnimGraphNode_TransitionResult_3977B7A7418B0FCB4CAC1081444602F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mobAnim_AnimGraphNode_TransitionResult_BB199168434B43065EC8CBB0D0357B47();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mobAnim_AnimGraphNode_TransitionResult_C4828247486A5A75633214A157634CDF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mobAnim_AnimGraphNode_TransitionResult_14AC18CB4228B8DE9BF2D7B6CF59E15F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mobAnim_AnimGraphNode_TransitionResult_1963327546BA52262799A59B0C39A9C0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mobAnim_AnimGraphNode_TwoWayBlend_96C03E6E41B1D5F7672A14A1921059B8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mobAnim_AnimGraphNode_TransitionResult_A4970B7B4B7CD94299BB17BD65F3D0D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mobAnim_AnimGraphNode_TransitionResult_F5BD01F34DD622EBFBDB1FBA2F004602();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mobAnim_AnimGraphNode_TransitionResult_D4445EE441E81A7A4CC3818D42817633();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mobAnim_AnimGraphNode_TransitionResult_0916B4AC42AC023FE7D1D3B896B60350();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mobAnim_AnimGraphNode_TransitionResult_034BB0AC48876B2B20A1528483787C10();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mobAnim_AnimGraphNode_TransitionResult_4ABBA5FB4D5008374756759636A13E15();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mobAnim_AnimGraphNode_TwoWayBlend_EED0FEFA4ADCC2CB01788B89E4E9938A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mobAnim_AnimGraphNode_TransitionResult_57C4FCC24DF63060626FAE85C1044DF3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mobAnim_AnimGraphNode_TwoWayBlend_E47AC8B940B2B1928D33A0BF9E90C064();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mobAnim_AnimGraphNode_TransitionResult_0CF66D674D4C0439A2AC9C8DD9D46A3A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_mobAnim_AnimGraphNode_TransitionResult_3AE8D1EC47113949886A14935F82EAD5();
	void AnimNotify_damged();
	void AnimNotify_dropped();
	void AnimNotify_dropup();
	void AnimNotify_dropping();
	void AnimNotify_wait();
	void AnimNotify_runStart();
	void AnimNotify_attackStart();
	void AnimNotify_attackEnd();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_makeAttak();
	void AnimNotify_wait1();
	void AnimNotify_wait2();
	void AnimNotify_arrower();
	void BlueprintInitializeAnimation();
	void AnimNotify_makeAttack();
	void ExecuteUbergraph_mobAnim(int32 EntryPoint, float CallFunc_GetRelevantAnimLength_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_2, float CallFunc_GetRelevantAnimLength_ReturnValue_1, bool CallFunc_EqualEqual_BoolBool_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_3, bool CallFunc_Less_FloatFloat_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_GetRelevantAnimLength_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_4, bool CallFunc_Less_FloatFloat_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, float CallFunc_GetInstanceTransitionTimeElapsed_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_5, float CallFunc_GetRelevantAnimLength_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_5, bool CallFunc_Less_FloatFloat_ReturnValue_5, bool CallFunc_EqualEqual_BoolBool_ReturnValue_1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_6, float CallFunc_GetInstanceTransitionTimeElapsed_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_GetInstanceTransitionTimeElapsed_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_7, bool CallFunc_Less_FloatFloat_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_EqualEqual_BoolBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_4, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_8, bool CallFunc_Less_FloatFloat_ReturnValue_8, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_7, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_9, bool CallFunc_Less_FloatFloat_ReturnValue_9, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_9, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue_11, bool CallFunc_BooleanAND_ReturnValue_12, bool CallFunc_EqualEqual_BoolBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_13, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_10, bool CallFunc_Less_FloatFloat_ReturnValue_10, bool CallFunc_EqualEqual_BoolBool_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_Less_FloatFloat_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_12, float K2Node_Event_DeltaTimeX, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AGo* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9);
};

}


