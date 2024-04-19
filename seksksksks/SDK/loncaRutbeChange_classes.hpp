#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2A8 - 0x270)
// WidgetBlueprintGeneratedClass loncaRutbeChange.loncaRutbeChange_C
class ULoncaRutbeChange_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_Button_C*                           C_Button;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button_1;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button_2;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button_9;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_window_C*                           W_window;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        PId;                                               // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Nowid;                                             // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULoncaRutbeChange_C* GetDefaultObj();

	void Clicker(class UC_Button_C* but, int32 ID, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1);
	void MakeData(class UC_Button_C* One, class UC_Button_C* Two, class UC_Button_C* Three, class FString* Dataa, const class FString& Data, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, bool CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue_1, bool CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void ProcButtonData(class UC_Button_C* One, class UC_Button_C* Two, class UC_Button_C* Three, const class FString& Data, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const class FString& CallFunc_Split_LeftS_1, const class FString& CallFunc_Split_RightS_1, bool CallFunc_Split_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2);
	void InitData();
	void BndEvt__loncaRutbe_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature();
	void BndEvt__loncaRutbe_c_Button_9_K2Node_ComponentBoundEvent_1_click__DelegateSignature();
	void BndEvt__loncaRutbe_c_Button_K2Node_ComponentBoundEvent_2_click__DelegateSignature();
	void BndEvt__loncaRutbe_c_Button_1_K2Node_ComponentBoundEvent_3_click__DelegateSignature();
	void BndEvt__loncaRutbe_c_Button_2_K2Node_ComponentBoundEvent_4_click__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_loncaRutbeChange(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, class UM2data_C* CallFunc_game_game, TArray<class FString>& K2Node_MakeArray_Array, TArray<int32>& K2Node_MakeArray_Array_1, TArray<class FString>& K2Node_MakeArray_Array_2, TArray<int32>& K2Node_MakeArray_Array_3, class UM2data_C* CallFunc_game_game_1, const struct FMob& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FMob& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FMob& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2);
};

}


