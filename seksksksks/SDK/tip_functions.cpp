#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass tip.tip_C
// (None)

class UClass* UTip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("tip_C");

	return Clss;
}


// tip_C tip.Default__tip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTip_C* UTip_C::GetDefaultObj()
{
	static class UTip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTip_C*>(UTip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function tip.tip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("tip_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function tip.tip_C.ExecuteUbergraph_tip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UTip_C::ExecuteUbergraph_tip(int32 EntryPoint, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("tip_C", "ExecuteUbergraph_tip");

	Params::UTip_C_ExecuteUbergraph_tip_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}


