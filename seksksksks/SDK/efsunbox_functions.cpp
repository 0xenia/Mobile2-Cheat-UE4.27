#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass efsunbox.efsunbox_C
// (None)

class UClass* UEfsunbox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("efsunbox_C");

	return Clss;
}


// efsunbox_C efsunbox.Default__efsunbox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEfsunbox_C* UEfsunbox_C::GetDefaultObj()
{
	static class UEfsunbox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEfsunbox_C*>(UEfsunbox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function efsunbox.efsunbox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UEfsunbox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("efsunbox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function efsunbox.efsunbox_C.ExecuteUbergraph_efsunbox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UEfsunbox_C::ExecuteUbergraph_efsunbox(int32 EntryPoint, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("efsunbox_C", "ExecuteUbergraph_efsunbox");

	Params::UEfsunbox_C_ExecuteUbergraph_efsunbox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


