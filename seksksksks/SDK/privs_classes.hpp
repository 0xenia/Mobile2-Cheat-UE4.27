#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2B0 - 0x270)
// WidgetBlueprintGeneratedClass privs.privs_C
class UPrivs_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_Button_C*                           C_Button;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button_1;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button_2;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button_3;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button_4;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button_5;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_window_C*                           W_window;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPrivs_C* GetDefaultObj();

	void OpenAddWindow(int32 PrivId, class UAddPriv_C* CallFunc_Create_ReturnValue);
	void ClosePriv(int32 PrivId, TArray<class FString>& K2Node_MakeArray_Array, TArray<int32>& K2Node_MakeArray_Array_1, class UM2data_C* CallFunc_game_game);
	void BndEvt__privs_c_Button_K2Node_ComponentBoundEvent_0_click__DelegateSignature();
	void BndEvt__privs_c_Button_2_K2Node_ComponentBoundEvent_1_click__DelegateSignature();
	void BndEvt__privs_c_Button_4_K2Node_ComponentBoundEvent_2_click__DelegateSignature();
	void BndEvt__privs_c_Button_1_K2Node_ComponentBoundEvent_3_click__DelegateSignature();
	void BndEvt__privs_c_Button_3_K2Node_ComponentBoundEvent_4_click__DelegateSignature();
	void BndEvt__privs_c_Button_5_K2Node_ComponentBoundEvent_5_click__DelegateSignature();
	void BndEvt__privs_w_window_K2Node_ComponentBoundEvent_6__close__DelegateSignature();
	void ExecuteUbergraph_privs(int32 EntryPoint);
};

}


