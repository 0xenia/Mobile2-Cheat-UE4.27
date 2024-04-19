#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemShopBanner.ItemShopBanner_C
// (None)

class UClass* UItemShopBanner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemShopBanner_C");

	return Clss;
}


// ItemShopBanner_C ItemShopBanner.Default__ItemShopBanner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemShopBanner_C* UItemShopBanner_C::GetDefaultObj()
{
	static class UItemShopBanner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemShopBanner_C*>(UItemShopBanner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemShopBanner.ItemShopBanner_C.AddChild
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemShopProduct_C*          NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemShopBanner_C::AddChild(class UItemShopProduct_C* NewParam, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopBanner_C", "AddChild");

	Params::UItemShopBanner_C_AddChild_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopBanner.ItemShopBanner_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemShopBanner_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopBanner_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemShopBanner.ItemShopBanner_C.ExecuteUbergraph_ItemShopBanner
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemShopBanner_C::ExecuteUbergraph_ItemShopBanner(int32 EntryPoint, class UM2data_C* CallFunc_game_game, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopBanner_C", "ExecuteUbergraph_ItemShopBanner");

	Params::UItemShopBanner_C_ExecuteUbergraph_ItemShopBanner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

}

}


