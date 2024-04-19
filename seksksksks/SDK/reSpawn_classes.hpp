#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2A8 - 0x270)
// WidgetBlueprintGeneratedClass reSpawn.reSpawn_C
class UReSpawn_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                NowSpawnBar;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           SpawnBut;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           SpawnBut_1;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_40;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_board_C*                            W_board;                                           // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        Timer;                                             // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Wait;                                              // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UReSpawn_C* GetDefaultObj();

	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__reSpawn_spawnBut_K2Node_ComponentBoundEvent_2_click__DelegateSignature();
	void BndEvt__reSpawn_spawnBut_1_K2Node_ComponentBoundEvent_3_click__DelegateSignature();
	void ExecuteUbergraph_reSpawn(int32 EntryPoint, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Subtract_FloatFloat_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, const struct FCharData& CallFunc_getCharData_chardata, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UM2data_C* K2Node_DynamicCast_AsM_2data_1, bool K2Node_DynamicCast_bSuccess_1, TArray<int32>& K2Node_MakeArray_Array, TArray<class FString>& K2Node_MakeArray_Array_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UM2data_C* K2Node_DynamicCast_AsM_2data_2, bool K2Node_DynamicCast_bSuccess_2, TArray<int32>& K2Node_MakeArray_Array_2, TArray<class FString>& K2Node_MakeArray_Array_3);
};

}


