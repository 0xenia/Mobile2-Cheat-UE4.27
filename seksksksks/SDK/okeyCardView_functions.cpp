#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass okeyCardView.okeyCardView_C
// (None)

class UClass* UOkeyCardView_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("okeyCardView_C");

	return Clss;
}


// okeyCardView_C okeyCardView.Default__okeyCardView_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOkeyCardView_C* UOkeyCardView_C::GetDefaultObj()
{
	static class UOkeyCardView_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOkeyCardView_C*>(UOkeyCardView_C::StaticClass()->DefaultObject);

	return Default;
}


// Function okeyCardView.okeyCardView_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOkeyCardView_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("okeyCardView_C", "PreConstruct");

	Params::UOkeyCardView_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function okeyCardView.okeyCardView_C.ExecuteUbergraph_okeyCardView
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOkeyCardView_C::ExecuteUbergraph_okeyCardView(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("okeyCardView_C", "ExecuteUbergraph_okeyCardView");

	Params::UOkeyCardView_C_ExecuteUbergraph_okeyCardView_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


