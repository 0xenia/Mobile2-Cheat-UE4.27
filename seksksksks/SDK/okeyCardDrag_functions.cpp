#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass okeyCardDrag.okeyCardDrag_C
// (None)

class UClass* UOkeyCardDrag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("okeyCardDrag_C");

	return Clss;
}


// okeyCardDrag_C okeyCardDrag.Default__okeyCardDrag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOkeyCardDrag_C* UOkeyCardDrag_C::GetDefaultObj()
{
	static class UOkeyCardDrag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOkeyCardDrag_C*>(UOkeyCardDrag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function okeyCardDrag.okeyCardDrag_C.Drop
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOkeyCardDrag_C::Drop(struct FPointerEvent& PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("okeyCardDrag_C", "Drop");

	Params::UOkeyCardDrag_C_Drop_Params Parms{};

	Parms.PointerEvent = PointerEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function okeyCardDrag.okeyCardDrag_C.DragCancelled
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOkeyCardDrag_C::DragCancelled(struct FPointerEvent& PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("okeyCardDrag_C", "DragCancelled");

	Params::UOkeyCardDrag_C_DragCancelled_Params Parms{};

	Parms.PointerEvent = PointerEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function okeyCardDrag.okeyCardDrag_C.ExecuteUbergraph_okeyCardDrag
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_PointerEvent_1                                      (ConstParm)
// struct FPointerEvent               K2Node_Event_PointerEvent                                        (ConstParm)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// class UOkeyCard_C*                 K2Node_DynamicCast_AsOkey_Card                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)

void UOkeyCardDrag_C::ExecuteUbergraph_okeyCardDrag(int32 EntryPoint, const struct FPointerEvent& K2Node_Event_PointerEvent_1, const struct FPointerEvent& K2Node_Event_PointerEvent, TArray<class FString>& K2Node_MakeArray_Array, class UOkeyCard_C* K2Node_DynamicCast_AsOkey_Card, bool K2Node_DynamicCast_bSuccess, TArray<int32>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("okeyCardDrag_C", "ExecuteUbergraph_okeyCardDrag");

	Params::UOkeyCardDrag_C_ExecuteUbergraph_okeyCardDrag_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PointerEvent_1 = K2Node_Event_PointerEvent_1;
	Parms.K2Node_Event_PointerEvent = K2Node_Event_PointerEvent;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsOkey_Card = K2Node_DynamicCast_AsOkey_Card;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


