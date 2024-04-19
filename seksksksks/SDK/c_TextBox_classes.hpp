#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11A (0x38A - 0x270)
// WidgetBlueprintGeneratedClass c_TextBox.c_TextBox_C
class UC_TextBox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_Border_C*                           C_Border;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_84;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      Textbox;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        FontSize;                                          // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsReadOnly;                                        // 0x294(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsPassword;                                        // 0x295(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_C85[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Placeholder;                                       // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class ETextJustify                      TextAlign;                                         // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_C86[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxLen;                                            // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  LastText;                                          // 0x2B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsNumber;                                          // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_C87[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTextCommit;                                      // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateColor                           BorderColor;                                       // 0x2E0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                        borderOpacity;                                     // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFocusType                        SelectStatus;                                      // 0x30C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C88[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           borderColorActive;                                 // 0x310(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FMargin                               BorderMargin;                                      // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	class FString                                LangText;                                          // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            NewEventDispatcher_0;                              // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, BlueprintAssignable, BlueprintCallable)
	int32                                        IsNumberMax;                                       // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_C89[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StartText;                                         // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FDateTime                             MakeDate;                                          // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         SetTexting;                                        // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EVirtualKeyboardType              KeyBoard;                                          // 0x389(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UC_TextBox_C* GetDefaultObj();

	void Check(bool CallFunc_HasKeyboardFocus_ReturnValue);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnRep_showText();
	void HasFocus(bool* Res, bool CallFunc_HasKeyboardFocus_ReturnValue);
	void Langer(const class FString& CallFunc_gtext_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void SetBorderOpacity(float Opa);
	void SetFontSize(int32 Size);
	void SetPlaceHolder(const class FString& Place, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetText(const class FString& NewText, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Focus();
	void Text(class FString* Text, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void BndEvt__c_TextBox_usernameBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__c_TextBox_usernameBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void BndEvt__c_TextBox_c_Border_K2Node_ComponentBoundEvent_2_click__DelegateSignature();
	void Destruct();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_c_TextBox(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class FText K2Node_ComponentBoundEvent_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UM2data_C* CallFunc_game_game, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FPointerEvent& K2Node_MakeStruct_PointerEvent, const struct FGeometry& K2Node_MakeStruct_Geometry, const struct FEventReply& CallFunc_OnMouseButtonDown_0_ReturnValue, class UM2data_C* CallFunc_game_game_1, const struct FDateTime& CallFunc_UtcNow_ReturnValue, bool CallFunc_onlyNumber_res, const struct FDateTime& CallFunc_UtcNow_ReturnValue_1, const struct FTimespan& CallFunc_dateDiff_diff, float CallFunc_GetTotalMilliseconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool K2Node_Event_IsDesignTime);
	void NewEventDispatcher_0__DelegateSignature();
	void OnTextCommit__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod);
};

}


