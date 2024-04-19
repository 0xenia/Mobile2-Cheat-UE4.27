#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x300 - 0x270)
// WidgetBlueprintGeneratedClass gorevs.gorevs_C
class UGorevs_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hide;                                              // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Show;                                              // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_61;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Data;                                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            GorevList;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_board_C*                            W_board;                                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsOpen;                                            // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, class UGorevBox_C*>              Boxes;                                             // 0x2B0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UGorevs_C* GetDefaultObj();

	void Clear();
	enum class ESlateVisibility GetVisibility_0();
	void GetBox(int32 ID, class UGorevBox_C** W, class UGorevBox_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void AddBox(int32 ID, class UGorevBox_C* U, const struct FGorevBoxS& K2Node_MakeStruct_gorevBoxS, bool CallFunc_Map_Remove_ReturnValue, class UGorevBox_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void Hider(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Shower(class UM2data_C* CallFunc_game_game, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Construct();
	void BndEvt__Button_61_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_gorevs(int32 EntryPoint, const struct FFocusEvent& K2Node_Event_InFocusEvent);
};

}


