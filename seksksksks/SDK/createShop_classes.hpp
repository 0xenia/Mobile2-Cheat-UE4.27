#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2DC (0x54C - 0x270)
// WidgetBlueprintGeneratedClass createShop.createShop_C
class UCreateShop_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              AddBox;                                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             C1;                                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             C2;                                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button_1;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button_2;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button_3;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button_4;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button_71;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      MesajText;                                         // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Over;                                              // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Pri;                                               // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PriText;                                           // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_0;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Shopbox;                                           // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ShopnameTxt;                                       // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Sizer1;                                            // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Sizer2;                                            // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              Slots1;                                            // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              Slots2;                                            // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlot_C*                               Slotshow;                                          // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          StartBox;                                          // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_56;                                      // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      Textbox;                                           // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_window_C*                           W_window;                                          // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_window_C*                           W_window_44;                                       // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      YangText;                                          // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                ShopText;                                          // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<int32, struct FItem>                    Items;                                             // 0x360(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<int32, class USlot_C*>                  Slots;                                             // 0x3B0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<int32, class USlot_C*>                  WaitAdd;                                           // 0x400(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UM2data_C*                             Game;                                              // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, int32>                           AddedSlots;                                        // 0x458(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsPriemium;                                        // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1439[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, struct FShopAdd>                 Datas;                                             // 0x4B0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<int32>                                SendData;                                          // 0x500(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPrivShopData                         Data;                                              // 0x510(0x38)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        RemoveSlotIdCounter;                               // 0x548(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCreateShop_C* GetDefaultObj();

	void AddItem(class USlot_C* Slotref, int32 TargetPriv, bool CallFunc_checkUst_res, bool CallFunc_checkAlt_can, bool CallFunc_BooleanAND_ReturnValue);
	void InitMobile(class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, bool CallFunc_isMobile_isMobile);
	void InitData(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FInvItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, int32 CallFunc_FTrunc_ReturnValue, const struct FItem& K2Node_MakeStruct_item, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
	void RemoveItem(int32 PrivId, bool CallFunc_Map_Remove_ReturnValue, class USlot_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue_1);
	void Close(TArray<int32>& K2Node_MakeArray_Array, TArray<class FString>& K2Node_MakeArray_Array_1);
	class FText GetText_0(const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_dotNumberS_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1);
	void AddItem2(int32& Key, const struct FItem& Item, int32 Slotid, int32 Price, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class USlot_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FShopAdd& K2Node_MakeStruct_shopAdd);
	void HideAddBox();
	void CheckUst(int32 ShopSlotId, int32 ItemId, bool* Res, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, class USlot_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void CheckAlt(int32 ShopSlotId, int32 ItemId, bool* Can, const struct FIitem& CallFunc_getItem_ob, bool CallFunc_getItem_found, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, class USlot_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void BndEvt__createShop_w_window_K2Node_ComponentBoundEvent_11__close__DelegateSignature();
	void BndEvt__createShop_c_Button_71_K2Node_ComponentBoundEvent_16_click__DelegateSignature();
	void BndEvt__createShop_c_Button_3_K2Node_ComponentBoundEvent_20_click__DelegateSignature();
	void BndEvt__c1_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__mesajText_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__textbox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__c2_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__createShop_c_Button_4_K2Node_ComponentBoundEvent_22_click__DelegateSignature();
	void BndEvt__mesajText_1_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__yangText_K2Node_ComponentBoundEvent_12_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__createShop_c_Button_1_K2Node_ComponentBoundEvent_14_click__DelegateSignature();
	void BndEvt__createShop_c_Button_2_K2Node_ComponentBoundEvent_18_click__DelegateSignature();
	void BndEvt__createShop_c_Button_K2Node_ComponentBoundEvent_13_click__DelegateSignature();
	void BndEvt__createShop_w_window_44_K2Node_ComponentBoundEvent_24__close__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_createShop(int32 EntryPoint, class USlot_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable, class USlot_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 Temp_int_Variable_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool K2Node_ComponentBoundEvent_bIsChecked_1, class FText K2Node_ComponentBoundEvent_Text_3, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText K2Node_ComponentBoundEvent_Text_2, const class FString& CallFunc_GetSubstring_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Len_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool K2Node_ComponentBoundEvent_bIsChecked, int32 Temp_int_Array_Index_Variable, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, class FText K2Node_ComponentBoundEvent_Text_1, bool CallFunc_onlyNumber_res, TArray<int32>& CallFunc_Map_Keys_Keys, class USlot_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<int32>& CallFunc_Map_Values_Values, bool CallFunc_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, TArray<struct FShopAdd>& CallFunc_Map_Values_Values_1, int32 CallFunc_Array_Add_ReturnValue, const struct FShopAdd& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_GetText_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_gtext_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_gtext_ReturnValue_1, const class FString& CallFunc_gtext_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_3, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, const struct FAnchors& K2Node_MakeStruct_Anchors, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool K2Node_Event_IsDesignTime, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue_1, bool CallFunc_isMobile_isMobile, const class FString& CallFunc_qtext_ReturnValue, TArray<int32>& K2Node_MakeArray_Array_1, TArray<class FString>& K2Node_MakeArray_Array_2, const class FString& CallFunc_formatText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_4);
};

}


