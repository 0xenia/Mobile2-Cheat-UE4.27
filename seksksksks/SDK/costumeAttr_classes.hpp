#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2C0 - 0x270)
// WidgetBlueprintGeneratedClass costumeAttr.costumeAttr_C
class UCostumeAttr_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_Button_C*                           C_Button;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_97;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_318;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Red;                                               // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlot_C*                               Slot_1;                                            // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlot_C*                               Slot_2;                                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              View1;                                             // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              View1_1;                                           // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_window_C*                           W_window;                                          // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCostumeAttr_C* GetDefaultObj();

	void SetViews(class UView_C* CallFunc_Create_ReturnValue, class UView_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FIitem& CallFunc_getItem_ob, bool CallFunc_getItem_found, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FIitem& CallFunc_getItem_ob_1, bool CallFunc_getItem_found_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1);
	void Construct();
	void BndEvt__costumeAttr_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature();
	void BndEvt__costumeAttr_c_Button_K2Node_ComponentBoundEvent_1_click__DelegateSignature();
	void Destruct();
	void ExecuteUbergraph_costumeAttr(int32 EntryPoint, class UM2data_C* CallFunc_game_game, const struct FIitem& CallFunc_getItem_ob, bool CallFunc_getItem_found, class FText CallFunc_Conv_StringToText_ReturnValue, class UM2data_C* CallFunc_game_game_1, class UM2data_C* CallFunc_game_game_2, TArray<class FString>& K2Node_MakeArray_Array, TArray<int32>& K2Node_MakeArray_Array_1);
};

}


