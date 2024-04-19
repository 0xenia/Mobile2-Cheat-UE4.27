#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x71 (0x2E1 - 0x270)
// WidgetBlueprintGeneratedClass ustDataObj.ustDataObj_C
class UUstDataObj_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Close;                                             // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Start;                                             // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_52;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              TipBox;                                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                Text;                                              // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UTexture2D*                            Img;                                               // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Time;                                              // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Active;                                            // 0x2C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_94D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUstData_C*                            UstData;                                           // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        ID;                                                // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Remove;                                            // 0x2D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_94F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UM2data_C*                             Game;                                              // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMobile;                                          // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUstDataObj_C* GetDefaultObj();

	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void InitFirst(const class FString& CallFunc_gtext_ReturnValue, const class FString& CallFunc_gtext_ReturnValue_1, const class FString& CallFunc_gtext_ReturnValue_2, const class FString& CallFunc_gtext_ReturnValue_3, const class FString& CallFunc_gtext_ReturnValue_4, int32 CallFunc_Array_Get_Item, const class FString& CallFunc_gtext_ReturnValue_5, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, class UM2data_C* CallFunc_game_game, const class FString& CallFunc_getDes_itemDes, int32 CallFunc_Array_Get_Item_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_gtext_ReturnValue_6, const class FString& CallFunc_Replace_ReturnValue_1, class UM2data_C* CallFunc_game_game_1, const class FString& CallFunc_getDes_itemDes_1, int32 CallFunc_Array_Get_Item_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, class UM2data_C* CallFunc_game_game_2, const class FString& CallFunc_Replace_ReturnValue_2, const class FString& CallFunc_getDes_itemDes_2, class UM2data_C* CallFunc_game_game_3, const struct FIitem& CallFunc_getItem_ob, bool CallFunc_getItem_found, const class FString& CallFunc_getDes_itemDes_3, const class FString& CallFunc_gtext_ReturnValue_7, const class FString& CallFunc_Replace_ReturnValue_3, const class FString& CallFunc_gtext_ReturnValue_8, const class FString& CallFunc_gtext_ReturnValue_9, const class FString& CallFunc_gtext_ReturnValue_10, const class FString& CallFunc_gtext_ReturnValue_11, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_gtext_ReturnValue_12, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1);
	void InitLast(class UTip_C* CallFunc_Create_ReturnValue, class UTip_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess);
	void Closer(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void Construct();
	void ExecuteUbergraph_ustDataObj(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, bool K2Node_Event_IsDesignTime, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, bool CallFunc_isMobile_isMobile, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
};

}


