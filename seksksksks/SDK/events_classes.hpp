#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x298 - 0x270)
// WidgetBlueprintGeneratedClass events.events_C
class UEvents_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          Content;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_window_C*                           W_window;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                EventNamer;                                        // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEvents_C* GetDefaultObj();

	void Check(class UEventBox_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, class UM2data_C* CallFunc_game_game_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UM2data_C* CallFunc_game_game_3, const struct FEventData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_dateToString_str, const class FString& CallFunc_dateToString_str_1, const struct FIitem& CallFunc_getItem_ob, bool CallFunc_getItem_found, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Construct();
	void Destruct();
	void BndEvt__events_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature();
	void ExecuteUbergraph_events(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const class FString& CallFunc_gtext_ReturnValue);
};

}


