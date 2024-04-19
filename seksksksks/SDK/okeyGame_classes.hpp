#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF9 (0x369 - 0x270)
// WidgetBlueprintGeneratedClass okeyGame.okeyGame_C
class UOkeyGame_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_Button_C*                           C_Button;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Text_C*                             C_Text;                                            // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CountText;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_107;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_228;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_356;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_462;                                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              K1;                                                // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              K2;                                                // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              K3;                                                // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              K4;                                                // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              K5;                                                // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              S1;                                                // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              S1_1;                                              // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              S2;                                                // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              S3;                                                // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ShowGot;                                           // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextPoint;                                         // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_window_C*                           W_window;                                          // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPacket                               Packet;                                            // 0x310(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<class UPaperSprite*>                  RedCards;                                          // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UPaperSprite*>                  blueCards;                                         // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UPaperSprite*>                  YellowCards;                                       // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Remove;                                            // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UOkeyGame_C* GetDefaultObj();

	void ResetNewPoint();
	void PointUpdate(int32 NewPuan, int32 Puan, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UOkeyCard_C* K2Node_DynamicCast_AsOkey_Card, bool K2Node_DynamicCast_bSuccess, class UOkeyCard_C* K2Node_DynamicCast_AsOkey_Card_1, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetChildAt_ReturnValue_2, class UOkeyCard_C* K2Node_DynamicCast_AsOkey_Card_2, bool K2Node_DynamicCast_bSuccess_2);
	void EndGame();
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, class UM2data_C* CallFunc_game_game, TArray<int32>& K2Node_MakeArray_Array, const struct FEventReply& CallFunc_Handled_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array_1);
	void RemoveCard();
	void GetEmptyUpSlot(int32* Empty, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_GetChildrenCount_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, int32 CallFunc_GetChildrenCount_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_4);
	void GetEmptySlot(int32* Empty, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2);
	void SetCardToUp(class USizeBox* Slot, int32 Color, int32 ID, class UPaperSprite* Sprite, class UOkeyCard_C* CallFunc_Create_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPaperSprite* CallFunc_Array_Get_Item, class UPaperSprite* CallFunc_Array_Get_Item_1, class UPaperSprite* CallFunc_Array_Get_Item_2);
	void SelectCard(int32 Target, class UOkeyCard_C* From, const class FString& Data, TArray<class FString>& K2Node_MakeArray_Array, bool K2Node_SwitchInteger_CmpSuccess, class UM2data_C* CallFunc_game_game, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UOkeyCard_C* K2Node_DynamicCast_AsOkey_Card, bool K2Node_DynamicCast_bSuccess, class UOkeyCard_C* K2Node_DynamicCast_AsOkey_Card_1, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetChildAt_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UOkeyCard_C* K2Node_DynamicCast_AsOkey_Card_2, bool K2Node_DynamicCast_bSuccess_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, TArray<int32>& K2Node_MakeArray_Array_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2);
	void AddCard(int32 Target, int32 Color, int32 ID, class USizeBox* Size, bool K2Node_SwitchInteger_CmpSuccess);
	void Construct();
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void BndEvt__okeyGame_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature();
	void Ender();
	void DoEnd();
	void BndEvt__okeyGame_c_Button_K2Node_ComponentBoundEvent_1_click__DelegateSignature();
	void ExecuteUbergraph_okeyGame(int32 EntryPoint, class UM2data_C* CallFunc_game_game, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPointerEvent& K2Node_Event_PointerEvent_1, class UDragDropOperation* K2Node_Event_Operation_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_PointerEvent, class UDragDropOperation* K2Node_Event_Operation, class UMsgbox_C* CallFunc_Create_ReturnValue, class UM2data_C* CallFunc_game_game_1, TArray<int32>& K2Node_MakeArray_Array, TArray<class FString>& K2Node_MakeArray_Array_1);
};

}


