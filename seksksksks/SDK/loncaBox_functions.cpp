#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass loncaBox.loncaBox_C
// (None)

class UClass* ULoncaBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("loncaBox_C");

	return Clss;
}


// loncaBox_C loncaBox.Default__loncaBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoncaBox_C* ULoncaBox_C::GetDefaultObj()
{
	static class ULoncaBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoncaBox_C*>(ULoncaBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function loncaBox.loncaBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULoncaBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("loncaBox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function loncaBox.loncaBox_C.ExecuteUbergraph_loncaBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_dotNumberS_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void ULoncaBox_C::ExecuteUbergraph_loncaBox(int32 EntryPoint, const class FString& CallFunc_dotNumberS_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("loncaBox_C", "ExecuteUbergraph_loncaBox");

	Params::ULoncaBox_C_ExecuteUbergraph_loncaBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_dotNumberS_ReturnValue = CallFunc_dotNumberS_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


