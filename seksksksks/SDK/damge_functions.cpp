#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass damge.damge_C
// (None)

class UClass* UDamge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("damge_C");

	return Clss;
}


// damge_C damge.Default__damge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamge_C* UDamge_C::GetDefaultObj()
{
	static class UDamge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamge_C*>(UDamge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function damge.damge_C.SequenceEvent__ENTRYPOINTdamge_3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDamge_C::SequenceEvent__ENTRYPOINTdamge_3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("damge_C", "SequenceEvent__ENTRYPOINTdamge_3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function damge.damge_C.SequenceEvent__ENTRYPOINTdamge_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDamge_C::SequenceEvent__ENTRYPOINTdamge_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("damge_C", "SequenceEvent__ENTRYPOINTdamge_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function damge.damge_C.SequenceEvent__ENTRYPOINTdamge_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamge_C*                    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamge_C::SequenceEvent__ENTRYPOINTdamge_1(class UDamge_C* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("damge_C", "SequenceEvent__ENTRYPOINTdamge_1");

	Params::UDamge_C_SequenceEvent__ENTRYPOINTdamge_1_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function damge.damge_C.SequenceEvent__ENTRYPOINTdamge_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamge_C*                    Damge_C_107                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamge_C::SequenceEvent__ENTRYPOINTdamge_0(class UDamge_C* Damge_C_107)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("damge_C", "SequenceEvent__ENTRYPOINTdamge_0");

	Params::UDamge_C_SequenceEvent__ENTRYPOINTdamge_0_Params Parms{};

	Parms.Damge_C_107 = Damge_C_107;

	UObject::ProcessEvent(Func, &Parms);

}


// Function damge.damge_C.Remove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDamge_C::Remove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("damge_C", "Remove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function damge.damge_C.SequenceEvent_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamge_C*                    Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamge_C::SequenceEvent_0(class UDamge_C* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("damge_C", "SequenceEvent_0");

	Params::UDamge_C_SequenceEvent_0_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function damge.damge_C.damge_C_107_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamge_C*                    Damge_C_107                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamge_C::Damge_C_107_Event_0(class UDamge_C* Damge_C_107)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("damge_C", "damge_C_107_Event_0");

	Params::UDamge_C_Damge_C_107_Event_0_Params Parms{};

	Parms.Damge_C_107 = Damge_C_107;

	UObject::ProcessEvent(Func, &Parms);

}


// Function damge.damge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDamge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("damge_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function damge.damge_C.ExecuteUbergraph_damge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamge_C*                    K2Node_CustomEvent_damge_C_107                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UDamge_C::ExecuteUbergraph_damge(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UDamge_C* K2Node_CustomEvent_damge_C_107, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("damge_C", "ExecuteUbergraph_damge");

	Params::UDamge_C_ExecuteUbergraph_damge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_damge_C_107 = K2Node_CustomEvent_damge_C_107;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


