#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass friendRequests.friendRequests_C
// (None)

class UClass* UFriendRequests_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("friendRequests_C");

	return Clss;
}


// friendRequests_C friendRequests.Default__friendRequests_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFriendRequests_C* UFriendRequests_C::GetDefaultObj()
{
	static class UFriendRequests_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFriendRequests_C*>(UFriendRequests_C::StaticClass()->DefaultObject);

	return Default;
}


// Function friendRequests.friendRequests_C.BndEvt__friendRequests_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UFriendRequests_C::BndEvt__friendRequests_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("friendRequests_C", "BndEvt__friendRequests_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function friendRequests.friendRequests_C.ExecuteUbergraph_friendRequests
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFriendRequests_C::ExecuteUbergraph_friendRequests(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("friendRequests_C", "ExecuteUbergraph_friendRequests");

	Params::UFriendRequests_C_ExecuteUbergraph_friendRequests_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


