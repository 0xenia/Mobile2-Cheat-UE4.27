#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass camZoom.camZoom_C
// (None)

class UClass* UCamZoom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("camZoom_C");

	return Clss;
}


// camZoom_C camZoom.Default__camZoom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamZoom_C* UCamZoom_C::GetDefaultObj()
{
	static class UCamZoom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamZoom_C*>(UCamZoom_C::StaticClass()->DefaultObject);

	return Default;
}


// Function camZoom.camZoom_C.ff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCamZoom_C::Ff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("camZoom_C", "ff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function camZoom.camZoom_C.DragCancelled
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCamZoom_C::DragCancelled(struct FPointerEvent& PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("camZoom_C", "DragCancelled");

	Params::UCamZoom_C_DragCancelled_Params Parms{};

	Parms.PointerEvent = PointerEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function camZoom.camZoom_C.Dragged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCamZoom_C::Dragged(struct FPointerEvent& PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("camZoom_C", "Dragged");

	Params::UCamZoom_C_Dragged_Params Parms{};

	Parms.PointerEvent = PointerEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function camZoom.camZoom_C.ExecuteUbergraph_camZoom
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_PointerEvent_1                                      (ConstParm)
// struct FPointerEvent               K2Node_Event_PointerEvent                                        (ConstParm)
// struct FVector2D                   CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCamZoom_C::ExecuteUbergraph_camZoom(int32 EntryPoint, const struct FPointerEvent& K2Node_Event_PointerEvent_1, const struct FPointerEvent& K2Node_Event_PointerEvent, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("camZoom_C", "ExecuteUbergraph_camZoom");

	Params::UCamZoom_C_ExecuteUbergraph_camZoom_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PointerEvent_1 = K2Node_Event_PointerEvent_1;
	Parms.K2Node_Event_PointerEvent = K2Node_Event_PointerEvent;
	Parms.CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue = CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


