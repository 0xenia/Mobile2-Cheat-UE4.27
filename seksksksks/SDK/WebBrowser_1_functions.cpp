#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WebBrowser.WebBrowser_C
// (None)

class UClass* UWebBrowser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WebBrowser_C");

	return Clss;
}


// WebBrowser_C WebBrowser.Default__WebBrowser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWebBrowser_C* UWebBrowser_C::GetDefaultObj()
{
	static class UWebBrowser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWebBrowser_C*>(UWebBrowser_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WebBrowser.WebBrowser_C.ItemShopPayClear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWebBrowser_C::ItemShopPayClear(class UM2data_C* CallFunc_game_game, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser_C", "ItemShopPayClear");

	Params::UWebBrowser_C_ItemShopPayClear_Params Parms{};

	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WebBrowser.WebBrowser_C.col
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWebBrowser_C::Col()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser_C", "col");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WebBrowser.WebBrowser_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWebBrowser_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WebBrowser.WebBrowser_C.GetUrl
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      URL                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetUrl_ReturnValue                                      (ZeroConstructor, HasGetValueTypeHash)

void UWebBrowser_C::GetUrl(class FString* URL, const class FString& CallFunc_GetUrl_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser_C", "GetUrl");

	Params::UWebBrowser_C_GetUrl_Params Parms{};

	Parms.CallFunc_GetUrl_ReturnValue = CallFunc_GetUrl_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (URL != nullptr)
		*URL = std::move(Parms.URL);

}


// Function WebBrowser.WebBrowser_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWebBrowser_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser_C", "PreConstruct");

	Params::UWebBrowser_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WebBrowser.WebBrowser_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWebBrowser_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WebBrowser.WebBrowser_C.BndEvt__WebBrowser_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWebBrowser_C::BndEvt__WebBrowser_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser_C", "BndEvt__WebBrowser_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WebBrowser.WebBrowser_C.ExecuteUbergraph_WebBrowser
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWebBrowser_C::ExecuteUbergraph_WebBrowser(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WebBrowser_C", "ExecuteUbergraph_WebBrowser");

	Params::UWebBrowser_C_ExecuteUbergraph_WebBrowser_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


