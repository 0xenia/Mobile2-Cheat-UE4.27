#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass character.character_C
// (None)

class UClass* UCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("character_C");

	return Clss;
}


// character_C character.Default__character_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacter_C* UCharacter_C::GetDefaultObj()
{
	static class UCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacter_C*>(UCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function character.character_C.Get_buyugucuT_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FCharData                   CallFunc_getChar_char                                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UCharacter_C::Get_buyugucuT_Text_0(const struct FCharData& CallFunc_getChar_char, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "Get_buyugucuT_Text_0");

	Params::UCharacter_C_Get_buyugucuT_Text_0_Params Parms{};

	Parms.CallFunc_getChar_char = CallFunc_getChar_char;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function character.character_C.Get_buyusavT_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FCharData                   CallFunc_getChar_char                                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UCharacter_C::Get_buyusavT_Text_0(const struct FCharData& CallFunc_getChar_char, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "Get_buyusavT_Text_0");

	Params::UCharacter_C_Get_buyusavT_Text_0_Params Parms{};

	Parms.CallFunc_getChar_char = CallFunc_getChar_char;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function character.character_C.texter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIitem                      CallFunc_getItem_item                                            (None)
// class FString                      CallFunc_Gtext_text                                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FString                      CallFunc_Gtext_text_1                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FString                      CallFunc_Gtext_text_2                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// class FString                      CallFunc_Gtext_text_3                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (None)
// class FString                      CallFunc_Gtext_text_4                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_5                         (None)
// class FString                      CallFunc_Gtext_text_5                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_6                         (None)
// class FString                      CallFunc_Gtext_text_6                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_7                         (None)
// class FString                      CallFunc_Gtext_text_7                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_8                         (None)
// TArray<int32>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_Gtext_text_8                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Gtext_text_9                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Gtext_text_10                                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_9                         (None)
// class FString                      CallFunc_formatText_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_10                        (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_11                        (None)
// class FString                      CallFunc_Gtext_text_11                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Gtext_text_12                                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_12                        (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_13                        (None)
// class FString                      CallFunc_Gtext_text_13                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Gtext_text_14                                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_14                        (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_15                        (None)

void UCharacter_C::Texter(class UM2data_C* CallFunc_game_game, const struct FIitem& CallFunc_getItem_item, const class FString& CallFunc_Gtext_text, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Gtext_text_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Gtext_text_2, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_3, const class FString& CallFunc_Gtext_text_3, class FText CallFunc_Conv_StringToText_ReturnValue_4, const class FString& CallFunc_Gtext_text_4, class FText CallFunc_Conv_StringToText_ReturnValue_5, const class FString& CallFunc_Gtext_text_5, class FText CallFunc_Conv_StringToText_ReturnValue_6, const class FString& CallFunc_Gtext_text_6, class FText CallFunc_Conv_StringToText_ReturnValue_7, const class FString& CallFunc_Gtext_text_7, class FText CallFunc_Conv_StringToText_ReturnValue_8, TArray<int32>& K2Node_MakeArray_Array, const class FString& CallFunc_Gtext_text_8, const class FString& CallFunc_Gtext_text_9, const class FString& CallFunc_Gtext_text_10, TArray<class FString>& K2Node_MakeArray_Array_1, class FText CallFunc_Conv_StringToText_ReturnValue_9, const class FString& CallFunc_formatText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_10, class FText CallFunc_Conv_StringToText_ReturnValue_11, const class FString& CallFunc_Gtext_text_11, const class FString& CallFunc_Gtext_text_12, class FText CallFunc_Conv_StringToText_ReturnValue_12, class FText CallFunc_Conv_StringToText_ReturnValue_13, const class FString& CallFunc_Gtext_text_13, const class FString& CallFunc_Gtext_text_14, class FText CallFunc_Conv_StringToText_ReturnValue_14, class FText CallFunc_Conv_StringToText_ReturnValue_15)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "texter");

	Params::UCharacter_C_Texter_Params Parms{};

	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_getItem_item = CallFunc_getItem_item;
	Parms.CallFunc_Gtext_text = CallFunc_Gtext_text;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Gtext_text_1 = CallFunc_Gtext_text_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Gtext_text_2 = CallFunc_Gtext_text_2;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_Gtext_text_3 = CallFunc_Gtext_text_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;
	Parms.CallFunc_Gtext_text_4 = CallFunc_Gtext_text_4;
	Parms.CallFunc_Conv_StringToText_ReturnValue_5 = CallFunc_Conv_StringToText_ReturnValue_5;
	Parms.CallFunc_Gtext_text_5 = CallFunc_Gtext_text_5;
	Parms.CallFunc_Conv_StringToText_ReturnValue_6 = CallFunc_Conv_StringToText_ReturnValue_6;
	Parms.CallFunc_Gtext_text_6 = CallFunc_Gtext_text_6;
	Parms.CallFunc_Conv_StringToText_ReturnValue_7 = CallFunc_Conv_StringToText_ReturnValue_7;
	Parms.CallFunc_Gtext_text_7 = CallFunc_Gtext_text_7;
	Parms.CallFunc_Conv_StringToText_ReturnValue_8 = CallFunc_Conv_StringToText_ReturnValue_8;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Gtext_text_8 = CallFunc_Gtext_text_8;
	Parms.CallFunc_Gtext_text_9 = CallFunc_Gtext_text_9;
	Parms.CallFunc_Gtext_text_10 = CallFunc_Gtext_text_10;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_9 = CallFunc_Conv_StringToText_ReturnValue_9;
	Parms.CallFunc_formatText_ReturnValue = CallFunc_formatText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_10 = CallFunc_Conv_StringToText_ReturnValue_10;
	Parms.CallFunc_Conv_StringToText_ReturnValue_11 = CallFunc_Conv_StringToText_ReturnValue_11;
	Parms.CallFunc_Gtext_text_11 = CallFunc_Gtext_text_11;
	Parms.CallFunc_Gtext_text_12 = CallFunc_Gtext_text_12;
	Parms.CallFunc_Conv_StringToText_ReturnValue_12 = CallFunc_Conv_StringToText_ReturnValue_12;
	Parms.CallFunc_Conv_StringToText_ReturnValue_13 = CallFunc_Conv_StringToText_ReturnValue_13;
	Parms.CallFunc_Gtext_text_13 = CallFunc_Gtext_text_13;
	Parms.CallFunc_Gtext_text_14 = CallFunc_Gtext_text_14;
	Parms.CallFunc_Conv_StringToText_ReturnValue_14 = CallFunc_Conv_StringToText_ReturnValue_14;
	Parms.CallFunc_Conv_StringToText_ReturnValue_15 = CallFunc_Conv_StringToText_ReturnValue_15;

	UObject::ProcessEvent(Func, &Parms);

}


// Function character.character_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTip_C*                      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_gtext_ReturnValue                                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_getRankText_rankText                                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)

class UWidget* UCharacter_C::GetToolTipWidget_0(class UTip_C* CallFunc_Create_ReturnValue, const class FString& CallFunc_gtext_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_getRankText_rankText, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "GetToolTipWidget_0");

	Params::UCharacter_C_GetToolTipWidget_0_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_gtext_ReturnValue = CallFunc_gtext_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_getRankText_rankText = CallFunc_getRankText_rankText;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function character.character_C.check
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharData                   CallFunc_char_NewParam                                           (None)
// class FString                      CallFunc_gtext_ReturnValue                                       (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FSlateBrush                 CallFunc_getCharImage_NewParam1                                  (None)
// struct FCharData                   CallFunc_getChar_char                                            (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacter_C::Check(class UM2data_C* CallFunc_game_game, bool CallFunc_IsValid_ReturnValue, class UM2data_C* CallFunc_game_game_1, const struct FCharData& CallFunc_char_NewParam, const class FString& CallFunc_gtext_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FSlateBrush& CallFunc_getCharImage_NewParam1, const struct FCharData& CallFunc_getChar_char, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "check");

	Params::UCharacter_C_Check_Params Parms{};

	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.CallFunc_char_NewParam = CallFunc_char_NewParam;
	Parms.CallFunc_gtext_ReturnValue = CallFunc_gtext_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_getCharImage_NewParam1 = CallFunc_getCharImage_NewParam1;
	Parms.CallFunc_getChar_char = CallFunc_getChar_char;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function character.character_C.updateSkillStat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CheckNow                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacter_C::UpdateSkillStat(bool CheckNow, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "updateSkillStat");

	Params::UCharacter_C_UpdateSkillStat_Params Parms{};

	Parms.CheckNow = CheckNow;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function character.character_C.showSkillArti
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USlot_C*                     CallFunc_getSkillSlot_skill                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacter_C::ShowSkillArti(bool Show, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, class USlot_C* CallFunc_getSkillSlot_skill, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "showSkillArti");

	Params::UCharacter_C_ShowSkillArti_Params Parms{};

	Parms.Show = Show;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_getSkillSlot_skill = CallFunc_getSkillSlot_skill;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function character.character_C.setCanStatAdd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Can                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacter_C::SetCanStatAdd(bool Can)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "setCanStatAdd");

	Params::UCharacter_C_SetCanStatAdd_Params Parms{};

	Parms.Can = Can;

	UObject::ProcessEvent(Func, &Parms);

}


// Function character.character_C.sendStatUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<int32>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   K2Node_DynamicCast_AsM_2data                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacter_C::SendStatUpdate(int32 ID, TArray<class FString>& K2Node_MakeArray_Array, TArray<int32>& K2Node_MakeArray_Array_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "sendStatUpdate");

	Params::UCharacter_C_SendStatUpdate_Params Parms{};

	Parms.ID = ID;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsM_2data = K2Node_DynamicCast_AsM_2data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function character.character_C.Get_beklemesureT_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FCharData                   CallFunc_getChar_char                                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UCharacter_C::Get_beklemesureT_Text_0(const struct FCharData& CallFunc_getChar_char, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "Get_beklemesureT_Text_0");

	Params::UCharacter_C_Get_beklemesureT_Text_0_Params Parms{};

	Parms.CallFunc_getChar_char = CallFunc_getChar_char;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function character.character_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FCharData                   CallFunc_getChar_char                                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UCharacter_C::GetText_0(const struct FCharData& CallFunc_getChar_char, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "GetText_0");

	Params::UCharacter_C_GetText_0_Params Parms{};

	Parms.CallFunc_getChar_char = CallFunc_getChar_char;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function character.character_C.Get_savunmaT_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FCharData                   CallFunc_getChar_char                                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UCharacter_C::Get_savunmaT_Text_0(const struct FCharData& CallFunc_getChar_char, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "Get_savunmaT_Text_0");

	Params::UCharacter_C_Get_savunmaT_Text_0_Params Parms{};

	Parms.CallFunc_getChar_char = CallFunc_getChar_char;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function character.character_C.Get_savunmakozT_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FCharData                   CallFunc_getChar_char                                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UCharacter_C::Get_savunmakozT_Text_0(const struct FCharData& CallFunc_getChar_char, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "Get_savunmakozT_Text_0");

	Params::UCharacter_C_Get_savunmakozT_Text_0_Params Parms{};

	Parms.CallFunc_getChar_char = CallFunc_getChar_char;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function character.character_C.Get_saldirikozT_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FCharData                   CallFunc_getChar_char                                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UCharacter_C::Get_saldirikozT_Text_0(const struct FCharData& CallFunc_getChar_char, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "Get_saldirikozT_Text_0");

	Params::UCharacter_C_Get_saldirikozT_Text_0_Params Parms{};

	Parms.CallFunc_getChar_char = CallFunc_getChar_char;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function character.character_C.Get_manakozT_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FCharData                   CallFunc_getChar_char                                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UCharacter_C::Get_manakozT_Text_0(const struct FCharData& CallFunc_getChar_char, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "Get_manakozT_Text_0");

	Params::UCharacter_C_Get_manakozT_Text_0_Params Parms{};

	Parms.CallFunc_getChar_char = CallFunc_getChar_char;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function character.character_C.Get_cankozT_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FCharData                   CallFunc_getChar_char                                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UCharacter_C::Get_cankozT_Text_0(const struct FCharData& CallFunc_getChar_char, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "Get_cankozT_Text_0");

	Params::UCharacter_C_Get_cankozT_Text_0_Params Parms{};

	Parms.CallFunc_getChar_char = CallFunc_getChar_char;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function character.character_C.Get_saldirihizT_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FCharData                   CallFunc_getChar_char                                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UCharacter_C::Get_saldirihizT_Text_0(const struct FCharData& CallFunc_getChar_char, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "Get_saldirihizT_Text_0");

	Params::UCharacter_C_Get_saldirihizT_Text_0_Params Parms{};

	Parms.CallFunc_getChar_char = CallFunc_getChar_char;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function character.character_C.Get_harakethizT_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FCharData                   CallFunc_getChar_char                                            (None)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UCharacter_C::Get_harakethizT_Text_0(const struct FCharData& CallFunc_getChar_char, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "Get_harakethizT_Text_0");

	Params::UCharacter_C_Get_harakethizT_Text_0_Params Parms{};

	Parms.CallFunc_getChar_char = CallFunc_getChar_char;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function character.character_C.Get_saldiriT_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FCharData                   CallFunc_getChar_char                                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UCharacter_C::Get_saldiriT_Text_0(const struct FCharData& CallFunc_getChar_char, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "Get_saldiriT_Text_0");

	Params::UCharacter_C_Get_saldiriT_Text_0_Params Parms{};

	Parms.CallFunc_getChar_char = CallFunc_getChar_char;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function character.character_C.Get_manaT_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FCharData                   CallFunc_getChar_char                                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UCharacter_C::Get_manaT_Text_0(const struct FCharData& CallFunc_getChar_char, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "Get_manaT_Text_0");

	Params::UCharacter_C_Get_manaT_Text_0_Params Parms{};

	Parms.CallFunc_getChar_char = CallFunc_getChar_char;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function character.character_C.Get_canT_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FCharData                   CallFunc_getChar_char                                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UCharacter_C::Get_canT_Text_0(const struct FCharData& CallFunc_getChar_char, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "Get_canT_Text_0");

	Params::UCharacter_C_Get_canT_Text_0_Params Parms{};

	Parms.CallFunc_getChar_char = CallFunc_getChar_char;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function character.character_C.Get_needexpT_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FCharData                   CallFunc_getChar_char                                            (None)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)

class FText UCharacter_C::Get_needexpT_Text_0(const struct FCharData& CallFunc_getChar_char, class FText CallFunc_Conv_Int64ToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "Get_needexpT_Text_0");

	Params::UCharacter_C_Get_needexpT_Text_0_Params Parms{};

	Parms.CallFunc_getChar_char = CallFunc_getChar_char;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function character.character_C.Get_expT_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FCharData                   CallFunc_getChar_char                                            (None)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)

class FText UCharacter_C::Get_expT_Text_0(const struct FCharData& CallFunc_getChar_char, class FText CallFunc_Conv_Int64ToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "Get_expT_Text_0");

	Params::UCharacter_C_Get_expT_Text_0_Params Parms{};

	Parms.CallFunc_getChar_char = CallFunc_getChar_char;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function character.character_C.Get_seviyeT_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FCharData                   CallFunc_getChar_char                                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UCharacter_C::Get_seviyeT_Text_0(const struct FCharData& CallFunc_getChar_char, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "Get_seviyeT_Text_0");

	Params::UCharacter_C_Get_seviyeT_Text_0_Params Parms{};

	Parms.CallFunc_getChar_char = CallFunc_getChar_char;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function character.character_C.getChar
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharData                   Char                                                             (Parm, OutParm)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   K2Node_DynamicCast_AsM_2data                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacter_C::GetChar(struct FCharData* Char, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "getChar");

	Params::UCharacter_C_GetChar_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsM_2data = K2Node_DynamicCast_AsM_2data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Char != nullptr)
		*Char = std::move(Parms.Char);

}


// Function character.character_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacter_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "PreConstruct");

	Params::UCharacter_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function character.character_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCharacter_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function character.character_C.BndEvt__Button_140_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacter_C::BndEvt__Button_140_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "BndEvt__Button_140_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function character.character_C.BndEvt__character_w_window_K2Node_ComponentBoundEvent_7__close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacter_C::BndEvt__character_w_window_K2Node_ComponentBoundEvent_7__close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "BndEvt__character_w_window_K2Node_ComponentBoundEvent_7__close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function character.character_C.BndEvt__Button_155_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacter_C::BndEvt__Button_155_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "BndEvt__Button_155_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function character.character_C.BndEvt__arti2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacter_C::BndEvt__arti2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "BndEvt__arti2_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function character.character_C.BndEvt__arti3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacter_C::BndEvt__arti3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "BndEvt__arti3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function character.character_C.BndEvt__arti4_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacter_C::BndEvt__arti4_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "BndEvt__arti4_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function character.character_C.BndEvt__Button_143_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacter_C::BndEvt__Button_143_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "BndEvt__Button_143_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function character.character_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCharacter_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function character.character_C.ExecuteUbergraph_character
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   K2Node_DynamicCast_AsM_2data                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   K2Node_DynamicCast_AsM_2data_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   K2Node_DynamicCast_AsM_2data_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacter_C::ExecuteUbergraph_character(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UM2data_C* K2Node_DynamicCast_AsM_2data_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UM2data_C* K2Node_DynamicCast_AsM_2data_2, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("character_C", "ExecuteUbergraph_character");

	Params::UCharacter_C_ExecuteUbergraph_character_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsM_2data = K2Node_DynamicCast_AsM_2data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsM_2data_1 = K2Node_DynamicCast_AsM_2data_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsM_2data_2 = K2Node_DynamicCast_AsM_2data_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


