#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass mobileUI.mobileUI_C
// (None)

class UClass* UMobileUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("mobileUI_C");

	return Clss;
}


// mobileUI_C mobileUI.Default__mobileUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMobileUI_C* UMobileUI_C::GetDefaultObj()
{
	static class UMobileUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMobileUI_C*>(UMobileUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function mobileUI.mobileUI_C.OnMouseButtonDown_1
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UMobileUI_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, class UM2data_C* CallFunc_game_game)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "OnMouseButtonDown_1");

	Params::UMobileUI_C_OnMouseButtonDown_1_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_game_game = CallFunc_game_game;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function mobileUI.mobileUI_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UMobileUI_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, class UM2data_C* CallFunc_game_game)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "OnMouseButtonDown_0");

	Params::UMobileUI_C_OnMouseButtonDown_0_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_game_game = CallFunc_game_game;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function mobileUI.mobileUI_C.toggleChar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMobileUI_C::ToggleChar(class UM2data_C* CallFunc_game_game, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "toggleChar");

	Params::UMobileUI_C_ToggleChar_Params Parms{};

	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function mobileUI.mobileUI_C.closePvpBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMobileUI_C::ClosePvpBox(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "closePvpBox");

	Params::UMobileUI_C_ClosePvpBox_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function mobileUI.mobileUI_C.check
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_3                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_4                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_5                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_6                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_7                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_8                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_9                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_10                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_11                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_12                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_13                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_14                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_15                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharData                   CallFunc_getCharData_chardata                                    (None)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Add_Int64Int64_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharData                   CallFunc_getCharData_chardata_1                                  (None)
// int64                              CallFunc_Multiply_Int64Int64_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Add_Int64Int64_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Subtract_Int64Int64_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Subtract_Int64Int64_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Multiply_Int64Int64_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Multiply_Int64Int64_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Multiply_Int64Int64_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Multiply_Int64Int64_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Subtract_Int64Int64_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_Int64Int64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int64                              CallFunc_Multiply_Int64Int64_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_Int64Int64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int64                              CallFunc_Multiply_Int64Int64_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_Int64Int64_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Multiply_Int64Int64_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Multiply_Int64Int64_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_Int64Int64_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)
// int64                              CallFunc_Multiply_Int64Int64_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int64                              CallFunc_Divide_Int64Int64_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_StringToFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_longToString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMobileUI_C::Check(class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_4, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_5, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_6, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_7, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_8, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_9, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_10, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_11, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_12, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_13, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_14, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_15, const class FString& CallFunc_MakeLiteralString_ReturnValue, class UM2data_C* CallFunc_game_game, const struct FCharData& CallFunc_getCharData_chardata, class UM2data_C* CallFunc_game_game_1, int64 CallFunc_Add_Int64Int64_ReturnValue, const struct FCharData& CallFunc_getCharData_chardata_1, int64 CallFunc_Multiply_Int64Int64_ReturnValue, int64 CallFunc_Divide_Int64Int64_ReturnValue, int64 CallFunc_Add_Int64Int64_ReturnValue_1, int64 CallFunc_Subtract_Int64Int64_ReturnValue, int64 CallFunc_Subtract_Int64Int64_ReturnValue_1, int64 CallFunc_Multiply_Int64Int64_ReturnValue_1, int64 CallFunc_Multiply_Int64Int64_ReturnValue_2, int64 CallFunc_Divide_Int64Int64_ReturnValue_1, int64 CallFunc_Divide_Int64Int64_ReturnValue_2, int64 CallFunc_Multiply_Int64Int64_ReturnValue_3, int64 CallFunc_Multiply_Int64Int64_ReturnValue_4, int64 CallFunc_Divide_Int64Int64_ReturnValue_3, int64 CallFunc_Divide_Int64Int64_ReturnValue_4, int32 CallFunc_Conv_Int64ToInt_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, int64 CallFunc_Subtract_Int64Int64_ReturnValue_2, bool CallFunc_Less_Int64Int64_ReturnValue, int64 CallFunc_Multiply_Int64Int64_ReturnValue_5, int64 CallFunc_Divide_Int64Int64_ReturnValue_5, bool CallFunc_Less_Int64Int64_ReturnValue_1, int64 CallFunc_Multiply_Int64Int64_ReturnValue_6, int64 CallFunc_Divide_Int64Int64_ReturnValue_6, bool CallFunc_Less_Int64Int64_ReturnValue_2, int32 CallFunc_Conv_Int64ToInt_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_2, int64 CallFunc_Multiply_Int64Int64_ReturnValue_7, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, int64 CallFunc_Divide_Int64Int64_ReturnValue_7, int64 CallFunc_Multiply_Int64Int64_ReturnValue_8, bool CallFunc_Less_Int64Int64_ReturnValue_3, int64 CallFunc_Divide_Int64Int64_ReturnValue_8, class FText CallFunc_Conv_Int64ToText_ReturnValue, int64 CallFunc_Multiply_Int64Int64_ReturnValue_9, const class FString& CallFunc_Conv_TextToString_ReturnValue, int64 CallFunc_Divide_Int64Int64_ReturnValue_9, float CallFunc_Conv_StringToFloat_ReturnValue, const class FString& CallFunc_longToString_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue_2, int32 CallFunc_Multiply_IntInt_ReturnValue_3, int32 CallFunc_Divide_IntInt_ReturnValue_2, int32 CallFunc_Divide_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "check");

	Params::UMobileUI_C_Check_Params Parms{};

	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_2 = CallFunc_SlotAsCanvasSlot_ReturnValue_2;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_3 = CallFunc_SlotAsCanvasSlot_ReturnValue_3;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_4 = CallFunc_SlotAsCanvasSlot_ReturnValue_4;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_5 = CallFunc_SlotAsCanvasSlot_ReturnValue_5;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_6 = CallFunc_SlotAsCanvasSlot_ReturnValue_6;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_7 = CallFunc_SlotAsCanvasSlot_ReturnValue_7;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_8 = CallFunc_SlotAsCanvasSlot_ReturnValue_8;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_9 = CallFunc_SlotAsCanvasSlot_ReturnValue_9;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_10 = CallFunc_SlotAsCanvasSlot_ReturnValue_10;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_11 = CallFunc_SlotAsCanvasSlot_ReturnValue_11;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_12 = CallFunc_SlotAsCanvasSlot_ReturnValue_12;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_13 = CallFunc_SlotAsCanvasSlot_ReturnValue_13;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_14 = CallFunc_SlotAsCanvasSlot_ReturnValue_14;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_15 = CallFunc_SlotAsCanvasSlot_ReturnValue_15;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_getCharData_chardata = CallFunc_getCharData_chardata;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.CallFunc_Add_Int64Int64_ReturnValue = CallFunc_Add_Int64Int64_ReturnValue;
	Parms.CallFunc_getCharData_chardata_1 = CallFunc_getCharData_chardata_1;
	Parms.CallFunc_Multiply_Int64Int64_ReturnValue = CallFunc_Multiply_Int64Int64_ReturnValue;
	Parms.CallFunc_Divide_Int64Int64_ReturnValue = CallFunc_Divide_Int64Int64_ReturnValue;
	Parms.CallFunc_Add_Int64Int64_ReturnValue_1 = CallFunc_Add_Int64Int64_ReturnValue_1;
	Parms.CallFunc_Subtract_Int64Int64_ReturnValue = CallFunc_Subtract_Int64Int64_ReturnValue;
	Parms.CallFunc_Subtract_Int64Int64_ReturnValue_1 = CallFunc_Subtract_Int64Int64_ReturnValue_1;
	Parms.CallFunc_Multiply_Int64Int64_ReturnValue_1 = CallFunc_Multiply_Int64Int64_ReturnValue_1;
	Parms.CallFunc_Multiply_Int64Int64_ReturnValue_2 = CallFunc_Multiply_Int64Int64_ReturnValue_2;
	Parms.CallFunc_Divide_Int64Int64_ReturnValue_1 = CallFunc_Divide_Int64Int64_ReturnValue_1;
	Parms.CallFunc_Divide_Int64Int64_ReturnValue_2 = CallFunc_Divide_Int64Int64_ReturnValue_2;
	Parms.CallFunc_Multiply_Int64Int64_ReturnValue_3 = CallFunc_Multiply_Int64Int64_ReturnValue_3;
	Parms.CallFunc_Multiply_Int64Int64_ReturnValue_4 = CallFunc_Multiply_Int64Int64_ReturnValue_4;
	Parms.CallFunc_Divide_Int64Int64_ReturnValue_3 = CallFunc_Divide_Int64Int64_ReturnValue_3;
	Parms.CallFunc_Divide_Int64Int64_ReturnValue_4 = CallFunc_Divide_Int64Int64_ReturnValue_4;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue_1 = CallFunc_Conv_Int64ToInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_Subtract_Int64Int64_ReturnValue_2 = CallFunc_Subtract_Int64Int64_ReturnValue_2;
	Parms.CallFunc_Less_Int64Int64_ReturnValue = CallFunc_Less_Int64Int64_ReturnValue;
	Parms.CallFunc_Multiply_Int64Int64_ReturnValue_5 = CallFunc_Multiply_Int64Int64_ReturnValue_5;
	Parms.CallFunc_Divide_Int64Int64_ReturnValue_5 = CallFunc_Divide_Int64Int64_ReturnValue_5;
	Parms.CallFunc_Less_Int64Int64_ReturnValue_1 = CallFunc_Less_Int64Int64_ReturnValue_1;
	Parms.CallFunc_Multiply_Int64Int64_ReturnValue_6 = CallFunc_Multiply_Int64Int64_ReturnValue_6;
	Parms.CallFunc_Divide_Int64Int64_ReturnValue_6 = CallFunc_Divide_Int64Int64_ReturnValue_6;
	Parms.CallFunc_Less_Int64Int64_ReturnValue_2 = CallFunc_Less_Int64Int64_ReturnValue_2;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue_2 = CallFunc_Conv_Int64ToInt_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_Int64Int64_ReturnValue_7 = CallFunc_Multiply_Int64Int64_ReturnValue_7;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.CallFunc_Divide_Int64Int64_ReturnValue_7 = CallFunc_Divide_Int64Int64_ReturnValue_7;
	Parms.CallFunc_Multiply_Int64Int64_ReturnValue_8 = CallFunc_Multiply_Int64Int64_ReturnValue_8;
	Parms.CallFunc_Less_Int64Int64_ReturnValue_3 = CallFunc_Less_Int64Int64_ReturnValue_3;
	Parms.CallFunc_Divide_Int64Int64_ReturnValue_8 = CallFunc_Divide_Int64Int64_ReturnValue_8;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.CallFunc_Multiply_Int64Int64_ReturnValue_9 = CallFunc_Multiply_Int64Int64_ReturnValue_9;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Divide_Int64Int64_ReturnValue_9 = CallFunc_Divide_Int64Int64_ReturnValue_9;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue = CallFunc_Conv_StringToFloat_ReturnValue;
	Parms.CallFunc_longToString_ReturnValue = CallFunc_longToString_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_3 = CallFunc_MakeVector2D_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_1 = CallFunc_Multiply_IntInt_ReturnValue_1;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_2 = CallFunc_Multiply_IntInt_ReturnValue_2;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_3 = CallFunc_Multiply_IntInt_ReturnValue_3;
	Parms.CallFunc_Divide_IntInt_ReturnValue_2 = CallFunc_Divide_IntInt_ReturnValue_2;
	Parms.CallFunc_Divide_IntInt_ReturnValue_3 = CallFunc_Divide_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function mobileUI.mobileUI_C.setPvp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPvpBox_C*                   K2Node_DynamicCast_AsPvp_Box                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMobileUI_C::SetPvp(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UM2data_C* CallFunc_game_game, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UPvpBox_C* K2Node_DynamicCast_AsPvp_Box, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "setPvp");

	Params::UMobileUI_C_SetPvp_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsPvp_Box = K2Node_DynamicCast_AsPvp_Box;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function mobileUI.mobileUI_C.playClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMobileUI_C::PlayClick(class UM2data_C* CallFunc_game_game)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "playClick");

	Params::UMobileUI_C_PlayClick_Params Parms{};

	Parms.CallFunc_game_game = CallFunc_game_game;

	UObject::ProcessEvent(Func, &Parms);

}


// Function mobileUI.mobileUI_C.toggleInv
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   K2Node_DynamicCast_AsM_2data                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMobileUI_C::ToggleInv(class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, class UM2data_C* CallFunc_game_game_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "toggleInv");

	Params::UMobileUI_C_ToggleInv_Params Parms{};

	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.CallFunc_game_game_2 = CallFunc_game_game_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsM_2data = K2Node_DynamicCast_AsM_2data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function mobileUI.mobileUI_C.transButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsTransed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMobileUI_C::TransButtons(bool IsTransed, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "transButtons");

	Params::UMobileUI_C_TransButtons_Params Parms{};

	Parms.IsTransed = IsTransed;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function mobileUI.mobileUI_C.getTouchCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TCount                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Cc                                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerControllerFromID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputTouchState_LocationX                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputTouchState_LocationY                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInputTouchState_bIsCurrentlyPressed                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInputTouchState_LocationX_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputTouchState_LocationY_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInputTouchState_bIsCurrentlyPressed_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInputTouchState_LocationX_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputTouchState_LocationY_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInputTouchState_bIsCurrentlyPressed_2                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMobileUI_C::GetTouchCount(int32* TCount, int32 Cc, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, float CallFunc_GetInputTouchState_LocationX, float CallFunc_GetInputTouchState_LocationY, bool CallFunc_GetInputTouchState_bIsCurrentlyPressed, float CallFunc_GetInputTouchState_LocationX_1, float CallFunc_GetInputTouchState_LocationY_1, bool CallFunc_GetInputTouchState_bIsCurrentlyPressed_1, float CallFunc_GetInputTouchState_LocationX_2, float CallFunc_GetInputTouchState_LocationY_2, bool CallFunc_GetInputTouchState_bIsCurrentlyPressed_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "getTouchCount");

	Params::UMobileUI_C_GetTouchCount_Params Parms{};

	Parms.Cc = Cc;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetPlayerControllerFromID_ReturnValue = CallFunc_GetPlayerControllerFromID_ReturnValue;
	Parms.CallFunc_GetInputTouchState_LocationX = CallFunc_GetInputTouchState_LocationX;
	Parms.CallFunc_GetInputTouchState_LocationY = CallFunc_GetInputTouchState_LocationY;
	Parms.CallFunc_GetInputTouchState_bIsCurrentlyPressed = CallFunc_GetInputTouchState_bIsCurrentlyPressed;
	Parms.CallFunc_GetInputTouchState_LocationX_1 = CallFunc_GetInputTouchState_LocationX_1;
	Parms.CallFunc_GetInputTouchState_LocationY_1 = CallFunc_GetInputTouchState_LocationY_1;
	Parms.CallFunc_GetInputTouchState_bIsCurrentlyPressed_1 = CallFunc_GetInputTouchState_bIsCurrentlyPressed_1;
	Parms.CallFunc_GetInputTouchState_LocationX_2 = CallFunc_GetInputTouchState_LocationX_2;
	Parms.CallFunc_GetInputTouchState_LocationY_2 = CallFunc_GetInputTouchState_LocationY_2;
	Parms.CallFunc_GetInputTouchState_bIsCurrentlyPressed_2 = CallFunc_GetInputTouchState_bIsCurrentlyPressed_2;

	UObject::ProcessEvent(Func, &Parms);

	if (TCount != nullptr)
		*TCount = Parms.TCount;

}


// Function mobileUI.mobileUI_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMobileUI_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "PreConstruct");

	Params::UMobileUI_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function mobileUI.mobileUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMobileUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function mobileUI.mobileUI_C.BndEvt__mobileUI_mobileButton_K2Node_ComponentBoundEvent_0_down__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMobileUI_C::BndEvt__mobileUI_mobileButton_K2Node_ComponentBoundEvent_0_down__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "BndEvt__mobileUI_mobileButton_K2Node_ComponentBoundEvent_0_down__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function mobileUI.mobileUI_C.BndEvt__mobileUI_mobileButton_K2Node_ComponentBoundEvent_3_up__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMobileUI_C::BndEvt__mobileUI_mobileButton_K2Node_ComponentBoundEvent_3_up__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "BndEvt__mobileUI_mobileButton_K2Node_ComponentBoundEvent_3_up__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function mobileUI.mobileUI_C.BndEvt__mobileUI_Button_164_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMobileUI_C::BndEvt__mobileUI_Button_164_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "BndEvt__mobileUI_Button_164_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function mobileUI.mobileUI_C.BndEvt__mobileUI_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMobileUI_C::BndEvt__mobileUI_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "BndEvt__mobileUI_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function mobileUI.mobileUI_C.BndEvt__mobileUI_Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMobileUI_C::BndEvt__mobileUI_Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "BndEvt__mobileUI_Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function mobileUI.mobileUI_C.BndEvt__mobileUI_Button_4_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMobileUI_C::BndEvt__mobileUI_Button_4_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "BndEvt__mobileUI_Button_4_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function mobileUI.mobileUI_C.BndEvt__mobileUI_Button_3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMobileUI_C::BndEvt__mobileUI_Button_3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "BndEvt__mobileUI_Button_3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function mobileUI.mobileUI_C.BndEvt__mobileUI_Button_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMobileUI_C::BndEvt__mobileUI_Button_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "BndEvt__mobileUI_Button_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function mobileUI.mobileUI_C.BndEvt__mobileUI_Button_6_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMobileUI_C::BndEvt__mobileUI_Button_6_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "BndEvt__mobileUI_Button_6_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function mobileUI.mobileUI_C.BndEvt__mobileUI_mobileButton_1_K2Node_ComponentBoundEvent_10_down__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMobileUI_C::BndEvt__mobileUI_mobileButton_1_K2Node_ComponentBoundEvent_10_down__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "BndEvt__mobileUI_mobileButton_1_K2Node_ComponentBoundEvent_10_down__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function mobileUI.mobileUI_C.ExecuteUbergraph_mobileUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   K2Node_DynamicCast_AsM_2data                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMobileUI_C::ExecuteUbergraph_mobileUI(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, class UM2data_C* CallFunc_game_game_2, class UM2data_C* CallFunc_game_game_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("mobileUI_C", "ExecuteUbergraph_mobileUI");

	Params::UMobileUI_C_ExecuteUbergraph_mobileUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsM_2data = K2Node_DynamicCast_AsM_2data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.CallFunc_game_game_2 = CallFunc_game_game_2;
	Parms.CallFunc_game_game_3 = CallFunc_game_game_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


