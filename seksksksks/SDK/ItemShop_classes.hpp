#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B1 (0x421 - 0x270)
// WidgetBlueprintGeneratedClass ItemShop.ItemShop_C
class UItemShop_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FocusCoin;                                         // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Close;                                             // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Start;                                             // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                bg;                                                // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_87;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_98;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button_1;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_TextBox_C*                          C_TextBox;                                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_TextBox_C*                          C_yangText_1;                                      // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCatButton_C*                          CatButton;                                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCatButton_C*                          CatButton_1;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCatButton_C*                          CatButton_2;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCatButton_C*                          CatButton_3;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCatButton_C*                          CatButton_4;                                       // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCatButton_C*                          CatButton_5;                                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCatButton_C*                          CatButton_6;                                       // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              CoinBox;                                           // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Coiner;                                            // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CoinT;                                             // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              Content;                                           // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              FCardContent;                                      // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_72;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_88;                                          // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_152;                                         // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_169;                                         // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_221;                                         // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_233;                                         // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MobileBack;                                        // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_1;                                         // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_0;                                       // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_1;                                       // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_277;                                     // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Viewer;                                            // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_board_C*                            W_board;                                           // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_view_C*                             W_view;                                            // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_window_C*                           W_window;                                          // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemShopProduct_C*                    SelectedProduct;                                   // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPacket                               Packet;                                            // 0x3D0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FItem>                         Items;                                             // 0x3F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UItemShopBanner_C*                     banner;                                            // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                LocTemp;                                           // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         NoBuy;                                             // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UItemShop_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTItemShop_0(class UImage* bg);
	void Hacker(class UM2data_C* CallFunc_game_game, const struct FCharData& CallFunc_getCharData_chardata, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void Langer(class UM2data_C* CallFunc_game_game, bool CallFunc_Contains_ReturnValue);
	void ResetCam(class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	class FText Get_coinT_Text_0(const struct FCharData& CallFunc_getCharData_chardata, class FText CallFunc_Conv_StringToText_ReturnValue);
	void ShowCategory(int32 ID, class UItemShopBanner_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UItemShopProduct_C* CallFunc_Create_ReturnValue_1, class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UItemShopProduct_C* CallFunc_Create_ReturnValue_2, const struct FItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UWrapBoxSlot* K2Node_DynamicCast_AsWrap_Box_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FIitem& CallFunc_getItem_item, bool CallFunc_itemCanUse_isCanUse, const class FString& CallFunc_itemCanUse_message, const class FString& CallFunc_itemCanUse_whoUse, bool CallFunc_BooleanOR_ReturnValue);
	void Init(int32 Temp_int_Variable, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Multiply_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Multiply_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Multiply_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_8, int32 CallFunc_Add_IntInt_ReturnValue_9, int32 CallFunc_Multiply_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_10, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_11, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_12, int32 CallFunc_Multiply_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_13, int32 CallFunc_Add_IntInt_ReturnValue_14, int32 CallFunc_Add_IntInt_ReturnValue_15, int32 CallFunc_Add_IntInt_ReturnValue_16, const struct FItem& K2Node_MakeStruct_item, int32 CallFunc_Array_Add_ReturnValue);
	void ShowView(const struct FIitem& Item, class USlot_C* Slotref, class UView_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UM2data_C* CallFunc_game_game, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess);
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, class UM2data_C* CallFunc_game_game, bool CallFunc_IsValid_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Closer();
	void Open(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnFailure_C63B359648C3C7BB4764E2B110E71DCB(enum class EInAppPurchaseStatus PurchaseStatus, TArray<struct FInAppPurchaseReceiptInfo2>& InAppPurchaseReceipts);
	void OnSuccess_C63B359648C3C7BB4764E2B110E71DCB(enum class EInAppPurchaseStatus PurchaseStatus, TArray<struct FInAppPurchaseReceiptInfo2>& InAppPurchaseReceipts);
	void OnFailure_EC0A00FB424F5C7AA57AC2A6901AFBA0(enum class EInAppPurchaseStatus PurchaseStatus, TArray<struct FInAppPurchaseRestoreInfo2>& InAppPurchaseRestoreInfo);
	void OnSuccess_EC0A00FB424F5C7AA57AC2A6901AFBA0(enum class EInAppPurchaseStatus PurchaseStatus, TArray<struct FInAppPurchaseRestoreInfo2>& InAppPurchaseRestoreInfo);
	void BndEvt__ItemShop_Button_87_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__ItemShop_Button_98_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ItemShop_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature();
	void BndEvt__ItemShop_c_Button_1_K2Node_ComponentBoundEvent_1_click__DelegateSignature();
	void BndEvt__ItemShop_c_Button_K2Node_ComponentBoundEvent_2_click__DelegateSignature();
	void BndEvt__ItemShop_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void bg_Event_0(class UImage* bg);
	void ExecuteUbergraph_ItemShop(int32 EntryPoint, enum class EInAppPurchaseStatus K2Node_CustomEvent_PurchaseStatus_3, TArray<struct FInAppPurchaseReceiptInfo2>& K2Node_CustomEvent_InAppPurchaseReceipts_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EInAppPurchaseStatus K2Node_CustomEvent_PurchaseStatus_2, TArray<struct FInAppPurchaseReceiptInfo2>& K2Node_CustomEvent_InAppPurchaseReceipts, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<struct FInAppPurchaseReceiptInfo2>& Temp_struct_Variable, enum class EInAppPurchaseStatus Temp_byte_Variable, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, enum class EInAppPurchaseStatus K2Node_CustomEvent_PurchaseStatus_1, TArray<struct FInAppPurchaseRestoreInfo2>& K2Node_CustomEvent_InAppPurchaseRestoreInfo_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, enum class EInAppPurchaseStatus K2Node_CustomEvent_PurchaseStatus, TArray<struct FInAppPurchaseRestoreInfo2>& K2Node_CustomEvent_InAppPurchaseRestoreInfo, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, TArray<struct FInAppPurchaseRestoreInfo2>& Temp_struct_Variable_1, TArray<class FString>& K2Node_MakeArray_Array, enum class EInAppPurchaseStatus Temp_byte_Variable_1, class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, class UM2save_C* CallFunc_m2save_save, TArray<class FString>& K2Node_MakeArray_Array_1, const class FString& CallFunc_GetDefaultLanguage_ReturnValue, TArray<int32>& K2Node_MakeArray_Array_2, class UM2data_C* CallFunc_game_game_2, bool K2Node_Event_IsDesignTime, class UM2data_C* CallFunc_game_game_3, const class FString& CallFunc_Gtext_text, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, const struct FInAppPurchaseProductRequest2& K2Node_MakeStruct_InAppPurchaseProductRequest2, class UInAppPurchaseCallbackProxy2* CallFunc_CreateProxyObjectForInAppPurchase_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UImage* K2Node_CustomEvent_bg, class UM2data_C* CallFunc_game_game_4, TArray<int32>& K2Node_MakeArray_Array_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct FInAppPurchaseProductRequest2& K2Node_MakeStruct_InAppPurchaseProductRequest2_1, TArray<struct FInAppPurchaseProductRequest2>& K2Node_MakeArray_Array_4, const class FString& CallFunc_Gtext_text_1, class UInAppPurchaseRestoreCallbackProxy2* CallFunc_CreateProxyObjectForInAppPurchaseRestore_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}

