#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B0 (0x420 - 0x270)
// WidgetBlueprintGeneratedClass taskbar.taskbar_C
class UTaskbar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Coin;                                              // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HidePvpBox;                                        // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowPvpBox;                                        // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_100;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_164;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Char;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Com;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Inv;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Set;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Community_Notify;                                  // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              Exper1;                                            // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              Exper2;                                            // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              Exper3;                                            // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              Exper4;                                            // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HpBar;                                             // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_3;                                           // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_4;                                           // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_5;                                           // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_41;                                          // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_65;                                          // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_77;                                          // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_86;                                          // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_102;                                         // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_321;                                         // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_0;                                         // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PotHP;                                             // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PotSP;                                             // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              PvpBox;                                            // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPvpBox_C*                             PvpBox_1;                                          // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPvpBox_C*                             PvpBox_2;                                          // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPvpBox_C*                             PvpBox_3;                                          // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPvpBox_C*                             PvpBox_4;                                          // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PvpVert;                                           // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             Quicks;                                            // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlot_C*                               Slot_1;                                            // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlot_C*                               Slot_2;                                            // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlot_C*                               Slot_3;                                            // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlot_C*                               Slot_4;                                            // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlot_C*                               Slot_5;                                            // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlot_C*                               Slot_6;                                            // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlot_C*                               Slot_7;                                            // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlot_C*                               Slot_8;                                            // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlot_C*                               Slot_9;                                            // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlot_C*                               Slote;                                             // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpBar;                                             // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_view_C*                             W_view;                                            // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTip_C*                                Tip;                                               // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         QLoaded;                                           // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_995[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UM2data_C*                             M2data;                                            // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Time;                                              // 0x408(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_996[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PvpNow;                                            // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTaskbar_C* GetDefaultObj();

	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, class UM2data_C* CallFunc_game_game);
	void Toggle_Inv(class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess);
	void Check(class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_4, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_5, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_6, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_7, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_8, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_9, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_10, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_11, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_12, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_13, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_14, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_15, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FCharData& CallFunc_getCharData_chardata, const struct FCharData& CallFunc_getCharData_chardata_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, int64 CallFunc_Add_Int64Int64_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int64 CallFunc_Multiply_Int64Int64_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, int64 CallFunc_Divide_Int64Int64_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, bool CallFunc_Less_Int64Int64_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, int64 CallFunc_Subtract_Int64Int64_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, int64 CallFunc_Multiply_Int64Int64_ReturnValue_1, int64 CallFunc_Subtract_Int64Int64_ReturnValue_1, int64 CallFunc_Divide_Int64Int64_ReturnValue_1, int64 CallFunc_Multiply_Int64Int64_ReturnValue_2, int64 CallFunc_Multiply_Int64Int64_ReturnValue_3, int64 CallFunc_Divide_Int64Int64_ReturnValue_2, int64 CallFunc_Divide_Int64Int64_ReturnValue_3, int64 CallFunc_Multiply_Int64Int64_ReturnValue_4, int32 CallFunc_Conv_Int64ToInt_ReturnValue, int64 CallFunc_Divide_Int64Int64_ReturnValue_4, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, bool CallFunc_Less_Int64Int64_ReturnValue_1, bool CallFunc_Less_Int64Int64_ReturnValue_2, int64 CallFunc_Subtract_Int64Int64_ReturnValue_2, int64 CallFunc_Multiply_Int64Int64_ReturnValue_5, int64 CallFunc_Multiply_Int64Int64_ReturnValue_6, int64 CallFunc_Divide_Int64Int64_ReturnValue_5, int64 CallFunc_Divide_Int64Int64_ReturnValue_6, int64 CallFunc_Multiply_Int64Int64_ReturnValue_7, int64 CallFunc_Multiply_Int64Int64_ReturnValue_8, int64 CallFunc_Divide_Int64Int64_ReturnValue_7, int64 CallFunc_Divide_Int64Int64_ReturnValue_8, int32 CallFunc_Conv_Int64ToInt_ReturnValue_2, int32 CallFunc_Conv_Int64ToInt_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_4, bool CallFunc_Less_Int64Int64_ReturnValue_3, int32 CallFunc_Multiply_IntInt_ReturnValue_2, int32 CallFunc_Divide_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Multiply_IntInt_ReturnValue_3, int32 CallFunc_Multiply_IntInt_ReturnValue_4, int32 CallFunc_Divide_IntInt_ReturnValue_3, int32 CallFunc_Divide_IntInt_ReturnValue_4, float CallFunc_Conv_IntToFloat_ReturnValue_5, int32 CallFunc_Multiply_IntInt_ReturnValue_5, float CallFunc_FClamp_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue_5, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_5, float CallFunc_Conv_IntToFloat_ReturnValue_6, int32 CallFunc_Multiply_IntInt_ReturnValue_6, float CallFunc_FClamp_ReturnValue_2, int32 CallFunc_Divide_IntInt_ReturnValue_6, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_6, int32 CallFunc_Multiply_IntInt_ReturnValue_7, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Divide_IntInt_ReturnValue_7, const struct FQuickSlot& CallFunc_Array_Get_Item, float CallFunc_Conv_IntToFloat_ReturnValue_7, float CallFunc_FClamp_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_7, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_16, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_17, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_18, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_19);
	void ToggleChar(enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ClosePvpBox(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetPvp(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UM2data_C* CallFunc_game_game, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPvpBox_C* K2Node_DynamicCast_AsPvp_Box, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue);
	class UWidget* GetToolTipWidget_1(class UTip_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_gtext_ReturnValue);
	class FText GetToolTipText_0();
	void InitMobile();
	void InitToolTips(class UTip_C* CallFunc_Create_ReturnValue, class UTip_C* CallFunc_Create_ReturnValue_1, const class FString& CallFunc_gtext_ReturnValue, const class FString& CallFunc_gtext_ReturnValue_1, const class FString& CallFunc_gtext_ReturnValue_2, const class FString& CallFunc_gtext_ReturnValue_3, class UTip_C* CallFunc_Create_ReturnValue_2, class UTip_C* CallFunc_Create_ReturnValue_3);
	void TimeEditer(class UObject* Self2, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	class UWidget* Get_potSP_ToolTipWidget_0(class UTip_C* CallFunc_Create_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, const struct FCharData& CallFunc_getCharData_chardata, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	class UWidget* Get_potHP_ToolTipWidget_0(class UTip_C* CallFunc_Create_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, const struct FCharData& CallFunc_getCharData_chardata, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	class UWidget* GetToolTipWidget_0(class UTip_C* CallFunc_Create_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, const struct FCharData& CallFunc_getCharData_chardata, const class FString& CallFunc_gameString_text, const class FString& CallFunc_Concat_StrStr_ReturnValue, int64 CallFunc_Add_Int64Int64_ReturnValue, int64 CallFunc_Multiply_Int64Int64_ReturnValue, int64 CallFunc_Divide_Int64Int64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void Construct();
	void Destruct();
	void BndEvt__Button_96_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_95_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void QSlotMake();
	void BndEvt__Button_172_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Set_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Char_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__taskbar_Button_164_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__taskbar_Button_100_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_taskbar(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, class UM2data_C* CallFunc_game_game, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UM2data_C* K2Node_DynamicCast_AsM_2data_1, bool K2Node_DynamicCast_bSuccess_1, const struct FQuickSlot& CallFunc_getQuickSlot_q, TArray<int32>& CallFunc_getQSlots_qslotse, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class USlot_C* CallFunc_getSlot_slotOut, bool CallFunc_getSlot_findo, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_GetSubstring_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FSkill& CallFunc_getClientSkill_Skill, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2);
};

}


