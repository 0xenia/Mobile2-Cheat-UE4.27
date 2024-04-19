#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wsPanelMessage.wsPanelMessage_C
// (None)

class UClass* UWsPanelMessage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wsPanelMessage_C");

	return Clss;
}


// wsPanelMessage_C wsPanelMessage.Default__wsPanelMessage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWsPanelMessage_C* UWsPanelMessage_C::GetDefaultObj()
{
	static class UWsPanelMessage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWsPanelMessage_C*>(UWsPanelMessage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wsPanelMessage.wsPanelMessage_C.checkPanels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWsPanelMessage_C::CheckPanels(class UM2data_C* CallFunc_game_game, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wsPanelMessage_C", "checkPanels");

	Params::UWsPanelMessage_C_CheckPanels_Params Parms{};

	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wsPanelMessage.wsPanelMessage_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Ss                                                               (Edit, BlueprintVisible)
// class FString                      CallFunc_gtext_ReturnValue                                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_formatText_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWsPanelMessage_C::Init(const TArray<class FString>& Ss, const class FString& CallFunc_gtext_ReturnValue, const class FString& CallFunc_formatText_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wsPanelMessage_C", "Init");

	Params::UWsPanelMessage_C_Init_Params Parms{};

	Parms.Ss = Ss;
	Parms.CallFunc_gtext_ReturnValue = CallFunc_gtext_ReturnValue;
	Parms.CallFunc_formatText_ReturnValue = CallFunc_formatText_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wsPanelMessage.wsPanelMessage_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWsPanelMessage_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wsPanelMessage_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wsPanelMessage.wsPanelMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWsPanelMessage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wsPanelMessage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wsPanelMessage.wsPanelMessage_C.ExecuteUbergraph_wsPanelMessage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWsPanelMessage_C::ExecuteUbergraph_wsPanelMessage(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wsPanelMessage_C", "ExecuteUbergraph_wsPanelMessage");

	Params::UWsPanelMessage_C_ExecuteUbergraph_wsPanelMessage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


