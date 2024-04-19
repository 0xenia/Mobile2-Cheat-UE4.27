#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass splashScreen.splashScreen_C
// (None)

class UClass* USplashScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("splashScreen_C");

	return Clss;
}


// splashScreen_C splashScreen.Default__splashScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USplashScreen_C* USplashScreen_C::GetDefaultObj()
{
	static class USplashScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USplashScreen_C*>(USplashScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function splashScreen.splashScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USplashScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("splashScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function splashScreen.splashScreen_C.ExecuteUbergraph_splashScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoginScreen_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USplashScreen_C::ExecuteUbergraph_splashScreen(int32 EntryPoint, class ULoginScreen_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("splashScreen_C", "ExecuteUbergraph_splashScreen");

	Params::USplashScreen_C_ExecuteUbergraph_splashScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


