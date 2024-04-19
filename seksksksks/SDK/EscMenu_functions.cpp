#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EscMenu.EscMenu_C
// (None)

class UClass* UEscMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EscMenu_C");

	return Clss;
}


// EscMenu_C EscMenu.Default__EscMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEscMenu_C* UEscMenu_C::GetDefaultObj()
{
	static class UEscMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEscMenu_C*>(UEscMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EscMenu.EscMenu_C.langer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_lang_lang                                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_lang_lang_1                                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEscMenu_C::Langer(const class FString& CallFunc_lang_lang, const class FString& CallFunc_lang_lang_1, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "langer");

	Params::UEscMenu_C_Langer_Params Parms{};

	Parms.CallFunc_lang_lang = CallFunc_lang_lang;
	Parms.CallFunc_lang_lang_1 = CallFunc_lang_lang_1;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue_1 = CallFunc_Contains_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscMenu.EscMenu_C.doCharSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_gtext_ReturnValue                                       (ZeroConstructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void UEscMenu_C::DoCharSelect(const class FString& CallFunc_gtext_ReturnValue, class UM2data_C* CallFunc_game_game, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "doCharSelect");

	Params::UEscMenu_C_DoCharSelect_Params Parms{};

	Parms.CallFunc_gtext_ReturnValue = CallFunc_gtext_ReturnValue;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscMenu.EscMenu_C.logouter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_gtext_ReturnValue                                       (ZeroConstructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<int32>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEscMenu_C::Logouter(const class FString& CallFunc_gtext_ReturnValue, class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, TArray<class FString>& K2Node_MakeArray_Array, TArray<int32>& K2Node_MakeArray_Array_1, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "logouter");

	Params::UEscMenu_C_Logouter_Params Parms{};

	Parms.CallFunc_gtext_ReturnValue = CallFunc_gtext_ReturnValue;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscMenu.EscMenu_C.doLogout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_gtext_ReturnValue                                       (ZeroConstructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void UEscMenu_C::DoLogout(const class FString& CallFunc_gtext_ReturnValue, class UM2data_C* CallFunc_game_game, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "doLogout");

	Params::UEscMenu_C_DoLogout_Params Parms{};

	Parms.CallFunc_gtext_ReturnValue = CallFunc_gtext_ReturnValue;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscMenu.EscMenu_C.charselecter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_gtext_ReturnValue                                       (ZeroConstructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<int32>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEscMenu_C::Charselecter(const class FString& CallFunc_gtext_ReturnValue, class UM2data_C* CallFunc_game_game, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, TArray<int32>& K2Node_MakeArray_Array_1, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "charselecter");

	Params::UEscMenu_C_Charselecter_Params Parms{};

	Parms.CallFunc_gtext_ReturnValue = CallFunc_gtext_ReturnValue;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscMenu.EscMenu_C.quit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEscMenu_C::Quit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "quit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscMenu.EscMenu_C.bLock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEscMenu_C::bLock(class UM2data_C* CallFunc_game_game)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "bLock");

	Params::UEscMenu_C_bLock_Params Parms{};

	Parms.CallFunc_game_game = CallFunc_game_game;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EscMenu.EscMenu_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)

struct FEventReply UEscMenu_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "OnMouseButtonDown_0");

	Params::UEscMenu_C_OnMouseButtonDown_0_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EscMenu.EscMenu_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEscMenu_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscMenu.EscMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UEscMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscMenu.EscMenu_C.BndEvt__EscMenu_c_Button_6_K2Node_ComponentBoundEvent_0_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscMenu_C::BndEvt__EscMenu_c_Button_6_K2Node_ComponentBoundEvent_0_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "BndEvt__EscMenu_c_Button_6_K2Node_ComponentBoundEvent_0_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscMenu.EscMenu_C.BndEvt__EscMenu_c_Button_1_K2Node_ComponentBoundEvent_1_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscMenu_C::BndEvt__EscMenu_c_Button_1_K2Node_ComponentBoundEvent_1_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "BndEvt__EscMenu_c_Button_1_K2Node_ComponentBoundEvent_1_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscMenu.EscMenu_C.BndEvt__EscMenu_c_Button_3_K2Node_ComponentBoundEvent_2_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscMenu_C::BndEvt__EscMenu_c_Button_3_K2Node_ComponentBoundEvent_2_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "BndEvt__EscMenu_c_Button_3_K2Node_ComponentBoundEvent_2_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscMenu.EscMenu_C.BndEvt__EscMenu_c_Button_2_K2Node_ComponentBoundEvent_3_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscMenu_C::BndEvt__EscMenu_c_Button_2_K2Node_ComponentBoundEvent_3_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "BndEvt__EscMenu_c_Button_2_K2Node_ComponentBoundEvent_3_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscMenu.EscMenu_C.BndEvt__EscMenu_c_Button_7_K2Node_ComponentBoundEvent_4_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscMenu_C::BndEvt__EscMenu_c_Button_7_K2Node_ComponentBoundEvent_4_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "BndEvt__EscMenu_c_Button_7_K2Node_ComponentBoundEvent_4_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscMenu.EscMenu_C.BndEvt__EscMenu_c_Button_8_K2Node_ComponentBoundEvent_5_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscMenu_C::BndEvt__EscMenu_c_Button_8_K2Node_ComponentBoundEvent_5_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "BndEvt__EscMenu_c_Button_8_K2Node_ComponentBoundEvent_5_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscMenu.EscMenu_C.BndEvt__EscMenu_c_Button_5_K2Node_ComponentBoundEvent_6_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscMenu_C::BndEvt__EscMenu_c_Button_5_K2Node_ComponentBoundEvent_6_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "BndEvt__EscMenu_c_Button_5_K2Node_ComponentBoundEvent_6_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscMenu.EscMenu_C.BndEvt__EscMenu_c_Button_K2Node_ComponentBoundEvent_7_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscMenu_C::BndEvt__EscMenu_c_Button_K2Node_ComponentBoundEvent_7_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "BndEvt__EscMenu_c_Button_K2Node_ComponentBoundEvent_7_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscMenu.EscMenu_C.tog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEscMenu_C::Tog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "tog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscMenu.EscMenu_C.BndEvt__EscMenu_gmChatban_K2Node_ComponentBoundEvent_8_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscMenu_C::BndEvt__EscMenu_gmChatban_K2Node_ComponentBoundEvent_8_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "BndEvt__EscMenu_gmChatban_K2Node_ComponentBoundEvent_8_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscMenu.EscMenu_C.BndEvt__EscMenu_gmPlayerban_K2Node_ComponentBoundEvent_9_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscMenu_C::BndEvt__EscMenu_gmPlayerban_K2Node_ComponentBoundEvent_9_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "BndEvt__EscMenu_gmPlayerban_K2Node_ComponentBoundEvent_9_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscMenu.EscMenu_C.BndEvt__EscMenu_c_Button_4_K2Node_ComponentBoundEvent_10_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscMenu_C::BndEvt__EscMenu_c_Button_4_K2Node_ComponentBoundEvent_10_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "BndEvt__EscMenu_c_Button_4_K2Node_ComponentBoundEvent_10_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscMenu.EscMenu_C.BndEvt__EscMenu_gmCinema_K2Node_ComponentBoundEvent_11_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UEscMenu_C::BndEvt__EscMenu_gmCinema_K2Node_ComponentBoundEvent_11_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "BndEvt__EscMenu_gmCinema_K2Node_ComponentBoundEvent_11_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EscMenu.EscMenu_C.ExecuteUbergraph_EscMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubanner_C*                   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubanner_C*                   CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_isMobile_isMobile                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2data_C*                   CallFunc_game_game_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APControl_C*                 CallFunc_pControl_pc                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrivs_C*                    CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAddEvent_C*                 CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_isTr_tr_                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2data_C*                   CallFunc_game_game_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEscMenu_C::ExecuteUbergraph_EscMenu(int32 EntryPoint, class Ubanner_C* CallFunc_Create_ReturnValue, class Ubanner_C* CallFunc_Create_ReturnValue_1, class UM2data_C* CallFunc_game_game, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UM2data_C* CallFunc_game_game_1, bool CallFunc_isMobile_isMobile, class UM2data_C* CallFunc_game_game_2, class APControl_C* CallFunc_pControl_pc, class UM2data_C* CallFunc_game_game_3, class UPrivs_C* CallFunc_Create_ReturnValue_2, class UAddEvent_C* CallFunc_Create_ReturnValue_3, class UM2data_C* CallFunc_game_game_4, class UM2data_C* CallFunc_game_game_5, bool CallFunc_isTr_tr_, class UM2data_C* CallFunc_game_game_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EscMenu_C", "ExecuteUbergraph_EscMenu");

	Params::UEscMenu_C_ExecuteUbergraph_EscMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.CallFunc_isMobile_isMobile = CallFunc_isMobile_isMobile;
	Parms.CallFunc_game_game_2 = CallFunc_game_game_2;
	Parms.CallFunc_pControl_pc = CallFunc_pControl_pc;
	Parms.CallFunc_game_game_3 = CallFunc_game_game_3;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_game_game_4 = CallFunc_game_game_4;
	Parms.CallFunc_game_game_5 = CallFunc_game_game_5;
	Parms.CallFunc_isTr_tr_ = CallFunc_isTr_tr_;
	Parms.CallFunc_game_game_6 = CallFunc_game_game_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


