#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC1 (0x331 - 0x270)
// WidgetBlueprintGeneratedClass dialogue.dialogue_C
class UDialogue_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      NextTalk;                                          // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Close;                                             // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Start;                                             // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Alt;                                               // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              butArea;                                           // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_44;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          TalkArea;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Ust;                                               // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_view_C*                             W_view;                                            // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM2data_C*                             Game;                                              // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNpcTalk                              Data;                                              // 0x2C8(0x40)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        Mobid;                                             // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Type;                                              // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                Talk;                                              // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         DataProc;                                          // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UDialogue_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTdialogue_0();
	void Langer();
	void Closer(class UM2data_C* CallFunc_game_game);
	void ProcData(const class FString& Text, class UDialogueButton_C* CallFunc_Create_ReturnValue, class UDialogueButton_C* CallFunc_Create_ReturnValue_1, class UDialogueButton_C* CallFunc_Create_ReturnValue_2, class UDialogueButton_C* CallFunc_Create_ReturnValue_3, class UDialogueText_C* CallFunc_Create_ReturnValue_4, class USlot_C* CallFunc_Create_ReturnValue_5, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, int32 Temp_int_Array_Index_Variable, class UPanelSlot* CallFunc_AddChild_ReturnValue, const class FString& CallFunc_gtext_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, const struct FItem& K2Node_MakeStruct_item, const class FString& CallFunc_gtext_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_3, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot_1, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_gtext_ReturnValue_2, class UDialogueButton_C* CallFunc_Create_ReturnValue_6, class UPanelSlot* CallFunc_AddChild_ReturnValue_4, const class FString& CallFunc_gtext_ReturnValue_3, class UPanelSlot* CallFunc_AddChild_ReturnValue_5, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot_2, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_makeQuestString_id, const class FString& CallFunc_makeQuestString_text, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_6, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void InitData(const struct FNpcTalk& Data, const class FString& CallFunc_qtext_ReturnValue, bool CallFunc_IsNumeric_ReturnValue, const class FString& CallFunc_Replace_ReturnValue);
	void NextData(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_dialogue(int32 EntryPoint, class UM2data_C* CallFunc_game_game, bool K2Node_Event_IsDesignTime, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UM2data_C* CallFunc_game_game_1);
};

}


