#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x200 (0x470 - 0x270)
// WidgetBlueprintGeneratedClass ItemShopBuy.ItemShopBuy_C
class UItemShopBuy_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_Button_C*                           C_Button;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              CancelBox;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Hori;                                              // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_3;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_33;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Price;                                             // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Tt;                                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_board_C*                            W_board;                                           // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlot_C*                               Slotref;                                           // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FItem                                 Item;                                              // 0x2C0(0x64)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_127D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIitem                                Iitem;                                             // 0x328(0x148)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UItemShopBuy_C* GetDefaultObj();

	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Construct();
	void BndEvt__ItemShopBuy_c_Button_K2Node_ComponentBoundEvent_0_click__DelegateSignature();
	void ExecuteUbergraph_ItemShopBuy(int32 EntryPoint, class UView_C* CallFunc_Create_ReturnValue, class UItemShopProduct_C* CallFunc_Create_ReturnValue_1, const class FString& CallFunc_gtext_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, TArray<int32>& K2Node_MakeArray_Array, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, const struct FCharData& CallFunc_getCharData_chardata, const class FString& CallFunc_Gtext_text, int32 CallFunc_Conv_StringToInt_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<int32>& K2Node_MakeArray_Array_2, const class FString& CallFunc_formatText_ReturnValue, class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, TArray<class FString>& K2Node_MakeArray_Array_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


