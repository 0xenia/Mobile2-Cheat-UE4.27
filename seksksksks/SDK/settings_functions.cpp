#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass settings.settings_C
// (None)

class UClass* USettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("settings_C");

	return Clss;
}


// settings_C settings.Default__settings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USettings_C* USettings_C::GetDefaultObj()
{
	static class USettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USettings_C*>(USettings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function settings.settings_C.setRainSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettings_C::SetRainSound(float Val, class UM2data_C* CallFunc_game_game, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "setRainSound");

	Params::USettings_C_SetRainSound_Params Parms{};

	Parms.Val = Val;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.sendBlockChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<int32>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettings_C::SendBlockChange(int32 Type, TArray<class FString>& K2Node_MakeArray_Array, TArray<int32>& K2Node_MakeArray_Array_1, class UM2data_C* CallFunc_game_game)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "sendBlockChange");

	Params::USettings_C_SendBlockChange_Params Parms{};

	Parms.Type = Type;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_game_game = CallFunc_game_game;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.setBlocked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               B                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UC_Button_C*                 but                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)

void USettings_C::SetBlocked(bool B, class UC_Button_C* but, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "setBlocked");

	Params::USettings_C_SetBlocked_Params Parms{};

	Parms.B = B;
	Parms.but = but;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.updateBlocks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerSetting              Set                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void USettings_C::UpdateBlocks(const struct FPlayerSetting& Set)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "updateBlocks");

	Params::USettings_C_UpdateBlocks_Params Parms{};

	Parms.Set = Set;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.Get_text_camspeed_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_FTrunc64_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)

class FText USettings_C::Get_text_camspeed_Text_0(float CallFunc_GetValue_ReturnValue, int64 CallFunc_FTrunc64_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "Get_text_camspeed_Text_0");

	Params::USettings_C_Get_text_camspeed_Text_0_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_FTrunc64_ReturnValue = CallFunc_FTrunc64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function settings.settings_C.Get_muzText_2_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_FTrunc64_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)

class FText USettings_C::Get_muzText_2_Text_0(float CallFunc_GetValue_ReturnValue, int64 CallFunc_FTrunc64_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "Get_muzText_2_Text_0");

	Params::USettings_C_Get_muzText_2_Text_0_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_FTrunc64_ReturnValue = CallFunc_FTrunc64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function settings.settings_C.Get_muzText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_FTrunc64_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)

class FText USettings_C::Get_muzText_Text_0(float CallFunc_GetValue_ReturnValue, int64 CallFunc_FTrunc64_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "Get_muzText_Text_0");

	Params::USettings_C_Get_muzText_Text_0_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_FTrunc64_ReturnValue = CallFunc_FTrunc64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function settings.settings_C.Get_muzText_1_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_FTrunc64_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)

class FText USettings_C::Get_muzText_1_Text_0(float CallFunc_GetValue_ReturnValue, int64 CallFunc_FTrunc64_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "Get_muzText_1_Text_0");

	Params::USettings_C_Get_muzText_1_Text_0_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_FTrunc64_ReturnValue = CallFunc_FTrunc64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function settings.settings_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_isMobile_isMobile                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2save_C*                   CallFunc_m2save_save                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettings_C::Start(bool CallFunc_isMobile_isMobile, class UM2data_C* CallFunc_game_game, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UM2save_C* CallFunc_m2save_save)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "Start");

	Params::USettings_C_Start_Params Parms{};

	Parms.CallFunc_isMobile_isMobile = CallFunc_isMobile_isMobile;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_m2save_save = CallFunc_m2save_save;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.checkLowFps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USettings_C::CheckLowFps()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "checkLowFps");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.firstInit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_isMobile_isMobile                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void USettings_C::FirstInit(bool CallFunc_isMobile_isMobile, class UM2data_C* CallFunc_game_game, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "firstInit");

	Params::USettings_C_FirstInit_Params Parms{};

	Parms.CallFunc_isMobile_isMobile = CallFunc_isMobile_isMobile;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.doResLow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM2save_C*                   CallFunc_m2save_save                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettings_C::DoResLow(class UM2save_C* CallFunc_m2save_save)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "doResLow");

	Params::USettings_C_DoResLow_Params Parms{};

	Parms.CallFunc_m2save_save = CallFunc_m2save_save;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.doResMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM2save_C*                   CallFunc_m2save_save                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettings_C::DoResMax(class UM2save_C* CallFunc_m2save_save)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "doResMax");

	Params::USettings_C_DoResMax_Params Parms{};

	Parms.CallFunc_m2save_save = CallFunc_m2save_save;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.setQualityLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2save_C*                   CallFunc_m2save_save                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2save_C*                   CallFunc_m2save_save_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2save_C*                   CallFunc_m2save_save_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2save_C*                   CallFunc_m2save_save_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettings_C::SetQualityLevel(int32 Level, bool K2Node_SwitchInteger_CmpSuccess, class UM2save_C* CallFunc_m2save_save, class UM2save_C* CallFunc_m2save_save_1, class UM2save_C* CallFunc_m2save_save_2, class UM2save_C* CallFunc_m2save_save_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "setQualityLevel");

	Params::USettings_C_SetQualityLevel_Params Parms{};

	Parms.Level = Level;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_m2save_save = CallFunc_m2save_save;
	Parms.CallFunc_m2save_save_1 = CallFunc_m2save_save_1;
	Parms.CallFunc_m2save_save_2 = CallFunc_m2save_save_2;
	Parms.CallFunc_m2save_save_3 = CallFunc_m2save_save_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// bool                               CallFunc_isMobile_isMobile                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2save_C*                   CallFunc_m2save_save                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_FTrunc64_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)
// class UM2save_C*                   CallFunc_m2save_save_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettings_C::Init(const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_isMobile_isMobile, float CallFunc_GetValue_ReturnValue, class UM2save_C* CallFunc_m2save_save, float CallFunc_Multiply_IntFloat_ReturnValue, int64 CallFunc_FTrunc64_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue, class UM2save_C* CallFunc_m2save_save_1, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "Init");

	Params::USettings_C_Init_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_isMobile_isMobile = CallFunc_isMobile_isMobile;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_m2save_save = CallFunc_m2save_save;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FTrunc64_ReturnValue = CallFunc_FTrunc64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.CallFunc_m2save_save_1 = CallFunc_m2save_save_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.setRes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Res                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UC_Button_C*                 but                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// class UM2save_C*                   CallFunc_m2save_save                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2save_C*                   CallFunc_m2save_save_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void USettings_C::SetRes(float Res, class UC_Button_C* but, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class UM2save_C* CallFunc_m2save_save, class UM2save_C* CallFunc_m2save_save_1, const class FString& CallFunc_MakeLiteralString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "setRes");

	Params::USettings_C_SetRes_Params Parms{};

	Parms.Res = Res;
	Parms.but = but;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_m2save_save = CallFunc_m2save_save;
	Parms.CallFunc_m2save_save_1 = CallFunc_m2save_save_1;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.setHava
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHide                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2save_C*                   CallFunc_m2save_save                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)

void USettings_C::SetHava(bool IsHide, class UM2save_C* CallFunc_m2save_save, class UM2data_C* CallFunc_game_game, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "setHava");

	Params::USettings_C_SetHava_Params Parms{};

	Parms.IsHide = IsHide;
	Parms.CallFunc_m2save_save = CallFunc_m2save_save;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.setFps
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FPS                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UM2save_C*                   CallFunc_m2save_save                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)

void USettings_C::SetFps(int32 FPS, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UM2save_C* CallFunc_m2save_save, const class FString& CallFunc_MakeLiteralString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "setFps");

	Params::USettings_C_SetFps_Params Parms{};

	Parms.FPS = FPS;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_m2save_save = CallFunc_m2save_save;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.setPercentage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UC_Button_C*                 but                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// class UM2save_C*                   CallFunc_m2save_save                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2save_C*                   CallFunc_m2save_save_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void USettings_C::SetPercentage(int32 Val, class UC_Button_C* but, bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class UM2save_C* CallFunc_m2save_save, class UM2save_C* CallFunc_m2save_save_1, const class FString& CallFunc_MakeLiteralString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "setPercentage");

	Params::USettings_C_SetPercentage_Params Parms{};

	Parms.Val = Val;
	Parms.but = but;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_m2save_save = CallFunc_m2save_save;
	Parms.CallFunc_m2save_save_1 = CallFunc_m2save_save_1;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.updateMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2save_C*                   CallFunc_m2save_save                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APControl_C*                 K2Node_DynamicCast_AsP_Control                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettings_C::UpdateMusic(int32 Percent, class UM2save_C* CallFunc_m2save_save, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APControl_C* K2Node_DynamicCast_AsP_Control, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "updateMusic");

	Params::USettings_C_UpdateMusic_Params Parms{};

	Parms.Percent = Percent;
	Parms.CallFunc_m2save_save = CallFunc_m2save_save;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsP_Control = K2Node_DynamicCast_AsP_Control;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.setTextureStream
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Res                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void USettings_C::SetTextureStream(float Res, const class FString& CallFunc_MakeLiteralString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "setTextureStream");

	Params::USettings_C_SetTextureStream_Params Parms{};

	Parms.Res = Res;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.SetTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Res                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void USettings_C::SetTexture(float Res, const class FString& CallFunc_MakeLiteralString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "SetTexture");

	Params::USettings_C_SetTexture_Params Parms{};

	Parms.Res = Res;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.BndEvt__settings_SliderMusic_K2Node_ComponentBoundEvent_11_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_SliderMusic_K2Node_ComponentBoundEvent_11_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_SliderMusic_K2Node_ComponentBoundEvent_11_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_c_Button_K2Node_ComponentBoundEvent_12_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_c_Button_K2Node_ComponentBoundEvent_12_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_c_Button_K2Node_ComponentBoundEvent_12_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_c_Button_1_K2Node_ComponentBoundEvent_13_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_c_Button_1_K2Node_ComponentBoundEvent_13_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_c_Button_1_K2Node_ComponentBoundEvent_13_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_c_Button_2_K2Node_ComponentBoundEvent_14_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_c_Button_2_K2Node_ComponentBoundEvent_14_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_c_Button_2_K2Node_ComponentBoundEvent_14_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_c_Button_3_K2Node_ComponentBoundEvent_15_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_c_Button_3_K2Node_ComponentBoundEvent_15_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_c_Button_3_K2Node_ComponentBoundEvent_15_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_c_Button_4_K2Node_ComponentBoundEvent_16_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_c_Button_4_K2Node_ComponentBoundEvent_16_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_c_Button_4_K2Node_ComponentBoundEvent_16_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_percantageMid_K2Node_ComponentBoundEvent_17_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_percantageMid_K2Node_ComponentBoundEvent_17_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_percantageMid_K2Node_ComponentBoundEvent_17_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_percantageHigh_K2Node_ComponentBoundEvent_18_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_percantageHigh_K2Node_ComponentBoundEvent_18_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_percantageHigh_K2Node_ComponentBoundEvent_18_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_percantageMax_K2Node_ComponentBoundEvent_19_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_percantageMax_K2Node_ComponentBoundEvent_19_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_percantageMax_K2Node_ComponentBoundEvent_19_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_SliderMain_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_SliderMain_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_SliderMain_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_SliderEffect_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_SliderEffect_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_SliderEffect_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_30fps_K2Node_ComponentBoundEvent_0_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_30fps_K2Node_ComponentBoundEvent_0_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_30fps_K2Node_ComponentBoundEvent_0_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_60fps_K2Node_ComponentBoundEvent_1_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_60fps_K2Node_ComponentBoundEvent_1_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_60fps_K2Node_ComponentBoundEvent_1_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_havaClose_K2Node_ComponentBoundEvent_3_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_havaClose_K2Node_ComponentBoundEvent_3_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_havaClose_K2Node_ComponentBoundEvent_3_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_havaOpen_K2Node_ComponentBoundEvent_7_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_havaOpen_K2Node_ComponentBoundEvent_7_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_havaOpen_K2Node_ComponentBoundEvent_7_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_w_window_K2Node_ComponentBoundEvent_2__close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_w_window_K2Node_ComponentBoundEvent_2__close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_w_window_K2Node_ComponentBoundEvent_2__close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USettings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettings_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "Tick");

	Params::USettings_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.BndEvt__settings_blockPm_K2Node_ComponentBoundEvent_2_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_blockPm_K2Node_ComponentBoundEvent_2_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_blockPm_K2Node_ComponentBoundEvent_2_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_blockFriend_K2Node_ComponentBoundEvent_8_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_blockFriend_K2Node_ComponentBoundEvent_8_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_blockFriend_K2Node_ComponentBoundEvent_8_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_blockGroup_K2Node_ComponentBoundEvent_9_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_blockGroup_K2Node_ComponentBoundEvent_9_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_blockGroup_K2Node_ComponentBoundEvent_9_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_blockWs_K2Node_ComponentBoundEvent_10_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_blockWs_K2Node_ComponentBoundEvent_10_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_blockWs_K2Node_ComponentBoundEvent_10_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_blockTrade_K2Node_ComponentBoundEvent_20_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_blockTrade_K2Node_ComponentBoundEvent_20_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_blockTrade_K2Node_ComponentBoundEvent_20_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_blockGuild_K2Node_ComponentBoundEvent_21_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_blockGuild_K2Node_ComponentBoundEvent_21_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_blockGuild_K2Node_ComponentBoundEvent_21_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_sliderCamSpeed_K2Node_ComponentBoundEvent_22_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettings_C::BndEvt__settings_sliderCamSpeed_K2Node_ComponentBoundEvent_22_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_sliderCamSpeed_K2Node_ComponentBoundEvent_22_OnFloatValueChangedEvent__DelegateSignature");

	Params::USettings_C_BndEvt__settings_sliderCamSpeed_K2Node_ComponentBoundEvent_22_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.BndEvt__settings_sliderCamSpeed_K2Node_ComponentBoundEvent_24_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_sliderCamSpeed_K2Node_ComponentBoundEvent_24_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_sliderCamSpeed_K2Node_ComponentBoundEvent_24_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_60fps_1_K2Node_ComponentBoundEvent_23_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_60fps_1_K2Node_ComponentBoundEvent_23_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_60fps_1_K2Node_ComponentBoundEvent_23_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_SliderEffect_K2Node_ComponentBoundEvent_25_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettings_C::BndEvt__settings_SliderEffect_K2Node_ComponentBoundEvent_25_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_SliderEffect_K2Node_ComponentBoundEvent_25_OnFloatValueChangedEvent__DelegateSignature");

	Params::USettings_C_BndEvt__settings_SliderEffect_K2Node_ComponentBoundEvent_25_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.BndEvt__settings_sliderMobileUI_K2Node_ComponentBoundEvent_26_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_sliderMobileUI_K2Node_ComponentBoundEvent_26_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_sliderMobileUI_K2Node_ComponentBoundEvent_26_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_sliderMobileUI_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettings_C::BndEvt__settings_sliderMobileUI_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_sliderMobileUI_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature");

	Params::USettings_C_BndEvt__settings_sliderMobileUI_K2Node_ComponentBoundEvent_27_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.sliderUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettings_C::SliderUI(float Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "sliderUI");

	Params::USettings_C_SliderUI_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function settings.settings_C.BndEvt__settings_fpsLow_K2Node_ComponentBoundEvent_28_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_fpsLow_K2Node_ComponentBoundEvent_28_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_fpsLow_K2Node_ComponentBoundEvent_28_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_fpsMid_K2Node_ComponentBoundEvent_29_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_fpsMid_K2Node_ComponentBoundEvent_29_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_fpsMid_K2Node_ComponentBoundEvent_29_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_fpsHigh_K2Node_ComponentBoundEvent_30_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_fpsHigh_K2Node_ComponentBoundEvent_30_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_fpsHigh_K2Node_ComponentBoundEvent_30_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.BndEvt__settings_w_window_114_K2Node_ComponentBoundEvent_31__close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USettings_C::BndEvt__settings_w_window_114_K2Node_ComponentBoundEvent_31__close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "BndEvt__settings_w_window_114_K2Node_ComponentBoundEvent_31__close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function settings.settings_C.ExecuteUbergraph_settings
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2save_C*                   CallFunc_m2save_save                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2save_C*                   CallFunc_m2save_save_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2save_C*                   CallFunc_m2save_save_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2save_C*                   CallFunc_m2save_save_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2save_C*                   CallFunc_m2save_save_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2save_C*                   CallFunc_m2save_save_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2save_C*                   CallFunc_m2save_save_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_FTrunc64_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2save_C*                   CallFunc_m2save_save_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_FTrunc64_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_1                          (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   K2Node_DynamicCast_AsM_2data                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_Value_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_FTrunc64_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue_2                          (None)
// class UM2data_C*                   CallFunc_game_game_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_Value_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_val                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_isTr_tr_                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_isTr_tr__1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void USettings_C::ExecuteUbergraph_settings(int32 EntryPoint, class UM2save_C* CallFunc_m2save_save, class UM2save_C* CallFunc_m2save_save_1, float CallFunc_GetValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class UM2save_C* CallFunc_m2save_save_2, class UM2save_C* CallFunc_m2save_save_3, float CallFunc_GetValue_ReturnValue_1, class UM2save_C* CallFunc_m2save_save_4, int32 CallFunc_FTrunc_ReturnValue_1, class UM2save_C* CallFunc_m2save_save_5, class UM2save_C* CallFunc_m2save_save_6, float CallFunc_GetValue_ReturnValue_2, int64 CallFunc_FTrunc64_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_2, class UM2save_C* CallFunc_m2save_save_7, float CallFunc_GetValue_ReturnValue_3, int64 CallFunc_FTrunc64_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_3, class FText CallFunc_Conv_Int64ToText_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, float K2Node_ComponentBoundEvent_Value_2, float CallFunc_Divide_FloatFloat_ReturnValue_1, int64 CallFunc_FTrunc64_ReturnValue_2, class FText CallFunc_Conv_Int64ToText_ReturnValue_2, class UM2data_C* CallFunc_game_game_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_ComponentBoundEvent_Value_1, float K2Node_ComponentBoundEvent_Value, class UM2data_C* CallFunc_game_game_3, float K2Node_CustomEvent_val, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_4, class UM2data_C* CallFunc_game_game_4, int32 CallFunc_MakeLiteralInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, int32 CallFunc_Multiply_IntInt_ReturnValue_3, int32 CallFunc_Divide_IntInt_ReturnValue_3, float CallFunc_GetValue_ReturnValue_4, float CallFunc_Conv_IntToFloat_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue_5, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, bool CallFunc_isTr_tr_, bool CallFunc_isTr_tr__1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("settings_C", "ExecuteUbergraph_settings");

	Params::USettings_C_ExecuteUbergraph_settings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_m2save_save = CallFunc_m2save_save;
	Parms.CallFunc_m2save_save_1 = CallFunc_m2save_save_1;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_m2save_save_2 = CallFunc_m2save_save_2;
	Parms.CallFunc_m2save_save_3 = CallFunc_m2save_save_3;
	Parms.CallFunc_GetValue_ReturnValue_1 = CallFunc_GetValue_ReturnValue_1;
	Parms.CallFunc_m2save_save_4 = CallFunc_m2save_save_4;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_m2save_save_5 = CallFunc_m2save_save_5;
	Parms.CallFunc_m2save_save_6 = CallFunc_m2save_save_6;
	Parms.CallFunc_GetValue_ReturnValue_2 = CallFunc_GetValue_ReturnValue_2;
	Parms.CallFunc_FTrunc64_ReturnValue = CallFunc_FTrunc64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.CallFunc_m2save_save_7 = CallFunc_m2save_save_7;
	Parms.CallFunc_GetValue_ReturnValue_3 = CallFunc_GetValue_ReturnValue_3;
	Parms.CallFunc_FTrunc64_ReturnValue_1 = CallFunc_FTrunc64_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue_3 = CallFunc_FTrunc_ReturnValue_3;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue_1 = CallFunc_Conv_Int64ToText_ReturnValue_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsM_2data = K2Node_DynamicCast_AsM_2data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value_2 = K2Node_ComponentBoundEvent_Value_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FTrunc64_ReturnValue_2 = CallFunc_FTrunc64_ReturnValue_2;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue_2 = CallFunc_Conv_Int64ToText_ReturnValue_2;
	Parms.CallFunc_game_game_2 = CallFunc_game_game_2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_game_game_3 = CallFunc_game_game_3;
	Parms.K2Node_CustomEvent_val = K2Node_CustomEvent_val;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_4 = CallFunc_FTrunc_ReturnValue_4;
	Parms.CallFunc_game_game_4 = CallFunc_game_game_4;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_1 = CallFunc_Multiply_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_2 = CallFunc_Multiply_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_IntInt_ReturnValue_2 = CallFunc_Divide_IntInt_ReturnValue_2;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_3 = CallFunc_Multiply_IntInt_ReturnValue_3;
	Parms.CallFunc_Divide_IntInt_ReturnValue_3 = CallFunc_Divide_IntInt_ReturnValue_3;
	Parms.CallFunc_GetValue_ReturnValue_4 = CallFunc_GetValue_ReturnValue_4;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_FTrunc_ReturnValue_5 = CallFunc_FTrunc_ReturnValue_5;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_isTr_tr_ = CallFunc_isTr_tr_;
	Parms.CallFunc_isTr_tr__1 = CallFunc_isTr_tr__1;

	UObject::ProcessEvent(Func, &Parms);

}

}


