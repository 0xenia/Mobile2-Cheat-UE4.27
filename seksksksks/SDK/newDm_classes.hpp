#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x290 - 0x270)
// WidgetBlueprintGeneratedClass newDm.newDm_C
class UNewDm_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_Button_C*                           C_Button;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_TextBox_C*                          C_TextBox;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_window_C*                           W_window;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNewDm_C* GetDefaultObj();

	void Construct();
	void BndEvt__newDm_c_Button_K2Node_ComponentBoundEvent_0_click__DelegateSignature();
	void BndEvt__newDm_w_window_K2Node_ComponentBoundEvent_1__close__DelegateSignature();
	void BndEvt__newDm_c_TextBox_K2Node_ComponentBoundEvent_2_onTextCommit__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod);
	void ExecuteUbergraph_newDm(int32 EntryPoint, const class FString& CallFunc_Gtext_text, class UM2data_C* CallFunc_game_game, TArray<int32>& K2Node_MakeArray_Array, const class FString& CallFunc_text_text, TArray<class FString>& K2Node_MakeArray_Array_1, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess);
};

}


