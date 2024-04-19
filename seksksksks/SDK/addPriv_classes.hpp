#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x29C - 0x270)
// WidgetBlueprintGeneratedClass addPriv.addPriv_C
class UAddPriv_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_Button_C*                           C_Button;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_TextBox_C*                          C_TextBox;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_TextBox_C*                          C_TextBox_1;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_window_C*                           W_window;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        PrivId;                                            // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAddPriv_C* GetDefaultObj();

	void BndEvt__addEvent_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature();
	void BndEvt__addEvent_c_Button_K2Node_ComponentBoundEvent_1_click__DelegateSignature();
	void ExecuteUbergraph_addPriv(int32 EntryPoint, const class FString& CallFunc_text_text, int32 CallFunc_Conv_StringToInt_ReturnValue, class UM2data_C* CallFunc_game_game, TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_text_text_1, int32 CallFunc_Conv_StringToInt_ReturnValue_1, TArray<int32>& K2Node_MakeArray_Array_1);
};

}


