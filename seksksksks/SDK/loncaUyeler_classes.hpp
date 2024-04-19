#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2B0 - 0x270)
// WidgetBlueprintGeneratedClass loncaUyeler.loncaUyeler_C
class ULoncaUyeler_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                            ScrollBox_162;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_window_C*                           W_window;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPacket                               Packet;                                            // 0x288(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ULoncaUyeler_C* GetDefaultObj();

	void LoadProfiles(TArray<struct FPlayerProfile>& List, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FPlayerProfile& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UCharBoxLonca_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void GenProfiles(TArray<struct FPlayerProfile>* Players, const TArray<int32>& NewDat, const TArray<struct FPlayerProfile>& Ps, int32 Temp_int_Variable, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue_2, int32 CallFunc_Multiply_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Multiply_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Get_Item_4, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_5, bool CallFunc_LessEqual_IntInt_ReturnValue_1, const struct FPlayerProfile& K2Node_MakeStruct_playerProfile, int32 CallFunc_Array_Add_ReturnValue_1);
	void Construct();
	void BndEvt__loncaUyeler_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature();
	void ExecuteUbergraph_loncaUyeler(int32 EntryPoint, class UM2data_C* CallFunc_game_game, TArray<struct FPlayerProfile>& CallFunc_genProfiles_players, class UM2data_C* CallFunc_game_game_1);
};

}


