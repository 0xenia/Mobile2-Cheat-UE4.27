#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass popup.popup_C
// (None)

class UClass* UPopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("popup_C");

	return Clss;
}


// popup_C popup.Default__popup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPopup_C* UPopup_C::GetDefaultObj()
{
	static class UPopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPopup_C*>(UPopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function popup.popup_C.load
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimatedTexture2D*          Gif                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UPopup_C::Load(class UAnimatedTexture2D* Gif, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("popup_C", "load");

	Params::UPopup_C_Load_Params Parms{};

	Parms.Gif = Gif;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function popup.popup_C.BndEvt__popup_w_window_K2Node_ComponentBoundEvent_1__close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPopup_C::BndEvt__popup_w_window_K2Node_ComponentBoundEvent_1__close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("popup_C", "BndEvt__popup_w_window_K2Node_ComponentBoundEvent_1__close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function popup.popup_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPopup_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("popup_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function popup.popup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("popup_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function popup.popup_C.BndEvt__popup_Button_53_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPopup_C::BndEvt__popup_Button_53_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("popup_C", "BndEvt__popup_Button_53_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function popup.popup_C.ExecuteUbergraph_popup
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopup_C::ExecuteUbergraph_popup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("popup_C", "ExecuteUbergraph_popup");

	Params::UPopup_C_ExecuteUbergraph_popup_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function popup.popup_C.click__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPopup_C::Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("popup_C", "click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


