#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9E (0x30E - 0x270)
// WidgetBlueprintGeneratedClass charBox.charBox_C
class UCharBox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_54;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_434;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            LevelText;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            NameText;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PuanText;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SiraText;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlot_C*                               Slot_1;                                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlot_C*                               Slot_2;                                            // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlot_C*                               Slot_3;                                            // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_0;                                     // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                Sira;                                              // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                Name;                                              // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                Exp;                                               // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                Level;                                             // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Type;                                              // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsPrizerMob;                                       // 0x30C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsPrizerMetin;                                     // 0x30D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UCharBox_C* GetDefaultObj();

	void Init(const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FItem& K2Node_MakeStruct_item, const struct FItem& K2Node_MakeStruct_item_1, const struct FItem& K2Node_MakeStruct_item_2, const struct FItem& K2Node_MakeStruct_item_3, const struct FItem& K2Node_MakeStruct_item_4, const struct FItem& K2Node_MakeStruct_item_5, const struct FItem& K2Node_MakeStruct_item_6, const struct FItem& K2Node_MakeStruct_item_7, const struct FItem& K2Node_MakeStruct_item_8, int32 CallFunc_Conv_StringToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, const struct FItem& K2Node_MakeStruct_item_9, const struct FItem& K2Node_MakeStruct_item_10, const struct FItem& K2Node_MakeStruct_item_11, const struct FItem& K2Node_MakeStruct_item_12, const struct FItem& K2Node_MakeStruct_item_13, const struct FItem& K2Node_MakeStruct_item_14, const struct FItem& K2Node_MakeStruct_item_15, const struct FItem& K2Node_MakeStruct_item_16, const struct FItem& K2Node_MakeStruct_item_17, int32 CallFunc_Conv_StringToInt_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Construct();
	void ExecuteUbergraph_charBox(int32 EntryPoint, class UM2data_C* CallFunc_game_game, const struct FSlateBrush& CallFunc_getCharImage_NewParam1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const class FString& CallFunc_dotNumberS_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}


