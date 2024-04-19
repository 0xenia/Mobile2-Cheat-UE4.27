#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x328 - 0x270)
// WidgetBlueprintGeneratedClass data.data_C
class UData_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UTexture2D*>                    PlayerFaces;                                       // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, class UTexture2D*>               CommonSkill;                                       // 0x288(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, class UTexture2D*>               Hairs;                                             // 0x2D8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UData_C* GetDefaultObj();

	void LoadAsset(TSoftObjectPtr<class UObject> Object, class UM2data_C* CallFunc_game_game, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_data(int32 EntryPoint, class UTexture2D* Temp_object_Variable, int32 Temp_int_Variable, class UTexture2D* Temp_object_Variable_1, int32 Temp_int_Variable_1, class UTexture2D* Temp_object_Variable_2, int32 Temp_int_Variable_2, class UTexture2D* Temp_object_Variable_3, int32 Temp_int_Variable_3, class UTexture2D* Temp_object_Variable_4, int32 Temp_int_Variable_4, class UTexture2D* Temp_object_Variable_5, int32 Temp_int_Variable_5, class UTexture2D* Temp_object_Variable_6, int32 Temp_int_Variable_6, class UTexture2D* Temp_object_Variable_7, int32 Temp_int_Variable_7, class UTexture2D* Temp_object_Variable_8, int32 Temp_int_Variable_8, class UTexture2D* Temp_object_Variable_9, int32 Temp_int_Variable_9, class UTexture2D* Temp_object_Variable_10, int32 Temp_int_Variable_10, class UTexture2D* Temp_object_Variable_11, int32 Temp_int_Variable_11, class UTexture2D* Temp_object_Variable_12, int32 Temp_int_Variable_12, class UTexture2D* Temp_object_Variable_13, int32 Temp_int_Variable_13, class UTexture2D* Temp_object_Variable_14, int32 Temp_int_Variable_14, class UTexture2D* Temp_object_Variable_15, int32 Temp_int_Variable_15, bool K2Node_Event_IsDesignTime);
};

}


