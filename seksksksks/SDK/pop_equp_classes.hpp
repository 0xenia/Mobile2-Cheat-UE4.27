#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x298 (0x508 - 0x270)
// WidgetBlueprintGeneratedClass pop_equp.pop_equp_C
class UPop_equp_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_Button_C*                           Ayir;                                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              butSizer;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_83;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           Depoal;                                            // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           GmItemShop;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           KullanBut;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     Mebox;                                             // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PopItemImage;                                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Popper;                                            // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              PopView;                                           // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           Sat;                                               // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           Satinal;                                           // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Sizer;                                             // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_7;                                       // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           TradeAl;                                           // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Vert;                                              // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ViewOverlay;                                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_view_C*                             W_view;                                            // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_window_C*                           W_window;                                          // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           Yeret;                                             // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FIitem                                RefItem;                                           // 0x318(0x148)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FItem                                 Item;                                              // 0x460(0x64)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_15A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         YereatB;                                           // 0x4C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RuhlarB;                                           // 0x4C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RenklerB;                                          // 0x4CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EfektlerB;                                         // 0x4CB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         YukseltB;                                          // 0x4CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Slotid;                                            // 0x4D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBox;                                             // 0x4D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        UsableTypes;                                       // 0x4D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UView_C*                               View;                                              // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USlot_C*                               TargetSlot;                                        // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CloseEvent;                                        // 0x4F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UPop_equp_C* GetDefaultObj();

	void CheckAnyButton(enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4);
	void Close();
	void Set_Skill(class USlot_C* Slot, const TArray<int32>& Items, const TArray<struct FPop_item>& Adds, int32 Row, int32 Col, int32 Counter, class UView_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_isMobile_isMobile, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess_1);
	enum class ESlateVisibility Get_satBox_Visibility_0(class UM2data_C* CallFunc_game_game, bool CallFunc_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void InitMobile();
	enum class ESlateVisibility Get_ayir_1_Visibility_0();
	class FText GetText_0(const class FString& CallFunc_qtext_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, TArray<int32>& K2Node_MakeArray_Array_1, const class FString& CallFunc_formatText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	enum class ESlateVisibility Get_box_Visibility_0();
	enum class ESlateVisibility Get_yukselt_Visibility_0(enum class ESlateVisibility CallFunc_Get_ruhlar_Visibility_1_ReturnValue, enum class ESlateVisibility CallFunc_Get_yereat_Visibility_0_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
	enum class ESlateVisibility Get_ruhlar_Visibility_1(bool K2Node_SwitchString_CmpSuccess);
	enum class ESlateVisibility GetVisibility_0(bool K2Node_SwitchString_CmpSuccess, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	enum class ESlateVisibility Get_yereat_Visibility_0(bool CallFunc_Less_IntInt_ReturnValue);
	void Setitem(class USlot_C* Slot, const struct FIitem& RefItem, const TArray<int32>& Items, const TArray<struct FPop_item>& Adds, int32 Row, int32 Col, int32 Counter, class USlot_C* CallFunc_Create_ReturnValue, class UUniformGridSlot* CallFunc_SlotAsUniformGridSlot_ReturnValue, class UView_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_isMobile_isMobile, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, const struct FPop_item& K2Node_MakeStruct_pop_item, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess_1, TArray<class FString>& CallFunc_getBox_boxContains, bool CallFunc_getBox_found, const struct FIitem& CallFunc_getItem_item, const class FString& CallFunc_Array_Get_Item_1, const struct FPop_item& K2Node_MakeStruct_pop_item_1, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1);
	void SetButtons(class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_get_Usable_usable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_get_dropable_dropable, bool K2Node_SwitchEnum_CmpSuccess);
	void SetDropButton(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_get_dropable_dropable, bool CallFunc_BooleanAND_ReturnValue);
	void Get_dropable(bool* Dropable, bool CallFunc_Contains_ReturnValue);
	enum class ESlateVisibility Get_Stackable(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Get_Usable(bool* Usable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetAyirButton(bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetImage(class UTexture2D* CallFunc_GetBrushResourceAsTexture2D_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__pop_equp_w_window_K2Node_ComponentBoundEvent_1__close__DelegateSignature();
	void Closer();
	void BndEvt__pop_equp_c_Button_K2Node_ComponentBoundEvent_3_click__DelegateSignature();
	void BndEvt__pop_equp_c_Button_1_K2Node_ComponentBoundEvent_5_click__DelegateSignature();
	void BndEvt__pop_equp_ayir_1_K2Node_ComponentBoundEvent_0_click__DelegateSignature();
	void BndEvt__pop_equp_sat_K2Node_ComponentBoundEvent_2_click__DelegateSignature();
	void BndEvt__pop_equp_satinal_K2Node_ComponentBoundEvent_4_click__DelegateSignature();
	void BndEvt__pop_equp_depoal_K2Node_ComponentBoundEvent_6_click__DelegateSignature();
	void BndEvt__pop_equp_gmItemShop_K2Node_ComponentBoundEvent_7_click__DelegateSignature();
	void BndEvt__pop_equp_tradeAl_K2Node_ComponentBoundEvent_8_click__DelegateSignature();
	void BndEvt__pop_equp_Button_83_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_pop_equp(int32 EntryPoint, class UItemShopAddItem_C* CallFunc_Create_ReturnValue, bool K2Node_Event_IsDesignTime, class UM2data_C* CallFunc_game_game, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, class USlot_C* K2Node_DynamicCast_AsSlot, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UM2data_C* K2Node_DynamicCast_AsM_2data_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_canChangeSlot_can, class USlot_C* CallFunc_getSlot_slotOut, bool CallFunc_getSlot_findo, class USlot_C* K2Node_DynamicCast_AsSlot_1, bool K2Node_DynamicCast_bSuccess_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UM2data_C* K2Node_DynamicCast_AsM_2data_2, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_canChangeSlot_can_1, class USlot_C* K2Node_DynamicCast_AsSlot_2, bool K2Node_DynamicCast_bSuccess_5, class UM2data_C* CallFunc_game_game_1, class USlot_C* CallFunc_getSlot_slotOut_1, bool CallFunc_getSlot_findo_1, class UM2data_C* CallFunc_game_game_2, class USlot_C* CallFunc_getSlot_slotOut_2, bool CallFunc_getSlot_findo_2, class UM2data_C* CallFunc_game_game_3);
	void CloseEvent__DelegateSignature();
};

}


