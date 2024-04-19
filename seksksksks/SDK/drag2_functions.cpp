#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass drag2.drag2_C
// (None)

class UClass* UDrag2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("drag2_C");

	return Clss;
}


// drag2_C drag2.Default__drag2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDrag2_C* UDrag2_C::GetDefaultObj()
{
	static class UDrag2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDrag2_C*>(UDrag2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function drag2.drag2_C.DragCancelled
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDrag2_C::DragCancelled(struct FPointerEvent& PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("drag2_C", "DragCancelled");

	Params::UDrag2_C_DragCancelled_Params Parms{};

	Parms.PointerEvent = PointerEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function drag2.drag2_C.Drop
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDrag2_C::Drop(struct FPointerEvent& PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("drag2_C", "Drop");

	Params::UDrag2_C_Drop_Params Parms{};

	Parms.PointerEvent = PointerEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function drag2.drag2_C.ExecuteUbergraph_drag2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_PointerEvent_1                                      (ConstParm)
// struct FPointerEvent               K2Node_Event_PointerEvent                                        (ConstParm)

void UDrag2_C::ExecuteUbergraph_drag2(int32 EntryPoint, const struct FPointerEvent& K2Node_Event_PointerEvent_1, const struct FPointerEvent& K2Node_Event_PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("drag2_C", "ExecuteUbergraph_drag2");

	Params::UDrag2_C_ExecuteUbergraph_drag2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PointerEvent_1 = K2Node_Event_PointerEvent_1;
	Parms.K2Node_Event_PointerEvent = K2Node_Event_PointerEvent;

	UObject::ProcessEvent(Func, &Parms);

}

}


