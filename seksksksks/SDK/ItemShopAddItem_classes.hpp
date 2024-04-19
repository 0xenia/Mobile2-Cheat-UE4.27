#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x2BC - 0x270)
// WidgetBlueprintGeneratedClass ItemShopAddItem.ItemShopAddItem_C
class UItemShopAddItem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_Button_C*                           C_Button;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_TextBox_C*                          C_TextBox;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_TextBox_C*                          C_TextBox_1;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_TextBox_C*                          C_TextBox_2;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_TextBox_C*                          C_TextBox_3;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_TextBox_C*                          C_TextBox_4;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_TextBox_C*                          C_TextBox_5;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_window_C*                           W_window;                                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ItemId;                                            // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UItemShopAddItem_C* GetDefaultObj();

	void Construct();
	void BndEvt__ItemShopAddItem_c_Button_K2Node_ComponentBoundEvent_0_click__DelegateSignature();
	void BndEvt__ItemShopAddItem_w_window_K2Node_ComponentBoundEvent_1__close__DelegateSignature();
	void ExecuteUbergraph_ItemShopAddItem(int32 EntryPoint, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UM2data_C* CallFunc_game_game, TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_text_text, const class FString& CallFunc_text_text_1, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, const class FString& CallFunc_text_text_2, const class FString& CallFunc_text_text_3, int32 CallFunc_Conv_StringToInt_ReturnValue_2, int32 CallFunc_Conv_StringToInt_ReturnValue_3, const class FString& CallFunc_text_text_4, const class FString& CallFunc_text_text_5, int32 CallFunc_Conv_StringToInt_ReturnValue_4, int32 CallFunc_Conv_StringToInt_ReturnValue_5, TArray<int32>& K2Node_MakeArray_Array_1);
};

}


