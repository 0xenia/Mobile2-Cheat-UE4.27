#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x2B9 - 0x270)
// WidgetBlueprintGeneratedClass langButton.langButton_C
class ULangButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_Border_C*                           C_Border;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_57;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                            Texture;                                           // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                LangCode;                                          // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsCustom;                                          // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_14A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            Click;                                             // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsSms;                                             // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ULangButton_C* GetDefaultObj();

	void Smser(class UM2data_C* CallFunc_game_game);
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, class UM2data_C* CallFunc_game_game, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, class UM2data_C* CallFunc_game_game_1);
	void Init(class UM2data_C* CallFunc_game_game, bool CallFunc_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void CheckSelected(const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void Load();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_langButton(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, class UM2save_C* CallFunc_m2save_save, class UM2data_C* CallFunc_game_game, bool K2Node_Event_IsDesignTime, class UM2data_C* CallFunc_game_game_1, class USplashScreen_C* CallFunc_Create_ReturnValue, class UM2data_C* CallFunc_game_game_2, bool CallFunc_Contains_ReturnValue);
	void Click__DelegateSignature();
};

}


