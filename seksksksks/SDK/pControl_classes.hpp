#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x638 - 0x578)
// BlueprintGeneratedClass pControl.pControl_C
class APControl_C : public APlayerController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x578(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ULightComponent*                       Light;                                             // 0x580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Cam;                                               // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExponentialHeightFog*                 Fog;                                               // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkyBP_C*                              Sky;                                               // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Ctrldown;                                          // 0x5A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E17[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ANpc*                                  DragNpc;                                           // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LightIntesty;                                      // 0x5B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FogColor;                                          // 0x5B4(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E1A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AAmbientSound*                         NowMapSound;                                       // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MapSounder;                                        // 0x5D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LockMouse;                                         // 0x5D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E1C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LockMousePosX;                                     // 0x5D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LockMousePosY;                                     // 0x5DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Enter;                                             // 0x5E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Left;                                              // 0x5F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Right;                                             // 0x600(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ULightComponent*                       LightMov;                                          // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Esc;                                               // 0x618(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLinearColor                          MapFogColor;                                       // 0x628(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class APControl_C* GetDefaultObj();

	void EscPrivShops(bool* Res, class UM2data_C* CallFunc_game_game, bool CallFunc_IsValid_ReturnValue);
	void EscIsClosed(class UUserWidget* Wid, bool* Res, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void Esc_UI(bool CallFunc_escPrivShops_res, class UM2data_C* CallFunc_game_game, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UM2data_C* CallFunc_game_game_1, bool CallFunc_BooleanOR_ReturnValue, class UM2data_C* CallFunc_game_game_2, class UM2data_C* CallFunc_game_game_3, bool CallFunc_escIsClosed_res, bool CallFunc_escIsClosed_res_1, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_escIsClosed_res_2, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, bool CallFunc_escIsClosed_res_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
	void DelayLogin();
	void QuickUse(int32 ID, class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void Map_Start(class ALoader* Loader, class AExponentialHeightFog* Fog, class ULightComponent* Light, class AAmbientSound* MapSound, float MapSounder, bool IsLoginMap, class ASkyBP_C* Sky, class ULightComponent* MovLight, class ULoadingScreen_C* CallFunc_Create_ReturnValue, class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, class UM2data_C* CallFunc_game_game_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AItemShopBack_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class USplashScreen_C* CallFunc_Create_ReturnValue_1);
	void DoLocalLogin(TArray<class FString>& K2Node_MakeArray_Array, class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, TArray<int32>& K2Node_MakeArray_Array_1, TArray<int32>& K2Node_MakeArray_Array_2, TArray<class FString>& K2Node_MakeArray_Array_3);
	void MapStart_MobileCheck(class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void MouseLocker(bool Lock, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void DragPoser(const struct FVector2D& N, bool Hit, const struct FVector2D& CallFunc_AbsoluteToViewport_PixelPosition, const struct FVector2D& CallFunc_AbsoluteToViewport_ViewportPosition, bool Temp_bool_True_if_break_was_hit_Variable, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_DeprojectScreenPositionToWorld_WorldLocation, const struct FVector& CallFunc_DeprojectScreenPositionToWorld_WorldDirection, bool CallFunc_DeprojectScreenPositionToWorld_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class AActor*>& Temp_object_Variable, TArray<struct FHitResult>& CallFunc_LineTraceMulti_OutHits, bool CallFunc_LineTraceMulti_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Less_IntInt_ReturnValue, class ANpc* K2Node_DynamicCast_AsNpc, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void ClearDrag(bool CallFunc_IsValid_ReturnValue);
	void CheckLock(int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1);
	void CheckPlatform(class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1);
	void InitM2save(class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, class UM2save_C* CallFunc_m2save_save, class UM2data_C* CallFunc_game_game_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UM2data_C* CallFunc_game_game_3, class UM2data_C* CallFunc_game_game_4, class USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, class UM2save_C* K2Node_DynamicCast_AsM_2save, bool K2Node_DynamicCast_bSuccess, class UM2data_C* CallFunc_game_game_5, class UM2save_C* CallFunc_CreateSaveGameObject_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue);
	void InpActEvt_F2_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void InpActEvt_F3_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_F4_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_F5_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_enter_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_I_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_C_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_binek_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpActEvt_Escape_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_F1_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Five_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Four_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Three_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_One_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_V_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Two_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void ExecuteUbergraph_pControl(int32 EntryPoint, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& K2Node_InputKeyEvent_Key_1, const struct FKey& K2Node_InputKeyEvent_Key_2, const struct FKey& K2Node_InputKeyEvent_Key_3, const struct FKey& K2Node_InputKeyEvent_Key_4, const struct FKey& K2Node_InputKeyEvent_Key_5, const struct FKey& K2Node_InputKeyEvent_Key_6, const struct FKey& K2Node_InputKeyEvent_Key_7, const class FString& CallFunc_gtext_ReturnValue, const class FString& CallFunc_gtext_ReturnValue_1, const class FString& CallFunc_gtext_ReturnValue_2, const class FString& CallFunc_Replace_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key, const struct FKey& K2Node_InputKeyEvent_Key_8, const struct FKey& K2Node_InputKeyEvent_Key_9, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputKeyEvent_Key_10, const struct FKey& K2Node_InputKeyEvent_Key_11, const struct FKey& K2Node_InputKeyEvent_Key_12, const struct FKey& K2Node_InputKeyEvent_Key_13, class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, bool CallFunc_IsValid_ReturnValue, class UM2data_C* CallFunc_game_game_2, class USlot_C* CallFunc_getPlayerItemSubType_slot, bool CallFunc_getPlayerItemSubType_found, bool CallFunc_getPlayerItemSubType_errLevel, class UM2data_C* CallFunc_game_game_3);
	void Esc__DelegateSignature();
	void Right__DelegateSignature();
	void Left__DelegateSignature();
	void Enter__DelegateSignature();
};

}


