#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x298 - 0x270)
// WidgetBlueprintGeneratedClass makeLonca.makeLonca_C
class UMakeLonca_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_Button_C*                           C_Button;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Text_C*                             C_Text;                                            // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_TextBox_C*                          C_TextBox;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_window_C*                           W_window;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMakeLonca_C* GetDefaultObj();

	void BndEvt__makeLonca_c_Button_K2Node_ComponentBoundEvent_0_click__DelegateSignature();
	void BndEvt__makeLonca_w_window_K2Node_ComponentBoundEvent_1__close__DelegateSignature();
	void ExecuteUbergraph_makeLonca(int32 EntryPoint, class UM2data_C* CallFunc_game_game, TArray<int32>& K2Node_MakeArray_Array, const class FString& CallFunc_text_text, const class FString& CallFunc_text_text_1, TArray<class FString>& K2Node_MakeArray_Array_1, bool CallFunc_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_Gtext_text);
};

}


