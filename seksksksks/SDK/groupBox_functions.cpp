#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass groupBox.groupBox_C
// (None)

class UClass* UGroupBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("groupBox_C");

	return Clss;
}


// groupBox_C groupBox.Default__groupBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGroupBox_C* UGroupBox_C::GetDefaultObj()
{
	static class UGroupBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGroupBox_C*>(UGroupBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function groupBox.groupBox_C.langer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Gtext_text                                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<int32>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FString                      CallFunc_Gtext_text_1                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_formatText_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Gtext_text_2                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)

void UGroupBox_C::Langer(const class FString& CallFunc_Gtext_text, class FText CallFunc_Conv_StringToText_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, TArray<int32>& K2Node_MakeArray_Array_1, const class FString& CallFunc_Gtext_text_1, const class FString& CallFunc_formatText_ReturnValue, const class FString& CallFunc_Gtext_text_2, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "langer");

	Params::UGroupBox_C_Langer_Params Parms{};

	Parms.CallFunc_Gtext_text = CallFunc_Gtext_text;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Gtext_text_1 = CallFunc_Gtext_text_1;
	Parms.CallFunc_formatText_ReturnValue = CallFunc_formatText_ReturnValue;
	Parms.CallFunc_Gtext_text_2 = CallFunc_Gtext_text_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function groupBox.groupBox_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGroupBox_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function groupBox.groupBox_C.setSp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Yuzde                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGroupBox_C::SetSp(int32 Yuzde, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Max_ReturnValue_1, int32 CallFunc_Min_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "setSp");

	Params::UGroupBox_C_SetSp_Params Parms{};

	Parms.Yuzde = Yuzde;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Max_ReturnValue_1 = CallFunc_Max_ReturnValue_1;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function groupBox.groupBox_C.setHp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Yuzde                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGroupBox_C::SetHp(int32 Yuzde, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Min_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "setHp");

	Params::UGroupBox_C_SetHp_Params Parms{};

	Parms.Yuzde = Yuzde;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function groupBox.groupBox_C.Up
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGroupBox_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function groupBox.groupBox_C.getG
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGroupData                  NewParam                                                         (Parm, OutParm)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   K2Node_DynamicCast_AsM_2data                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGroupBox_C::GetG(struct FGroupData* NewParam, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "getG");

	Params::UGroupBox_C_GetG_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsM_2data = K2Node_DynamicCast_AsM_2data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);

}


// Function groupBox.groupBox_C.hidem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGroupBox_C::Hidem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "hidem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function groupBox.groupBox_C.click
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   K2Node_DynamicCast_AsM_2data                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharData                   CallFunc_getCharData_chardata                                    (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGroupBox_C::Click(class UM2data_C* CallFunc_game_game, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, const struct FCharData& CallFunc_getCharData_chardata, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "click");

	Params::UGroupBox_C_Click_Params Parms{};

	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsM_2data = K2Node_DynamicCast_AsM_2data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_getCharData_chardata = CallFunc_getCharData_chardata;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function groupBox.groupBox_C.setOnline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOnl                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGroupBox_C::SetOnline(bool IsOnl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "setOnline");

	Params::UGroupBox_C_SetOnline_Params Parms{};

	Parms.IsOnl = IsOnl;

	UObject::ProcessEvent(Func, &Parms);

}


// Function groupBox.groupBox_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Status                                                           (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UTip_C*                      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UGroupBox_C::GetToolTipWidget_0(const class FString& Status, class UTip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "GetToolTipWidget_0");

	Params::UGroupBox_C_GetToolTipWidget_0_Params Parms{};

	Parms.Status = Status;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function groupBox.groupBox_C.BndEvt__Button_102_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UGroupBox_C::BndEvt__Button_102_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "BndEvt__Button_102_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function groupBox.groupBox_C.BndEvt__gruptanAt_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UGroupBox_C::BndEvt__gruptanAt_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "BndEvt__gruptanAt_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function groupBox.groupBox_C.BndEvt__liderYap_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UGroupBox_C::BndEvt__liderYap_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "BndEvt__liderYap_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function groupBox.groupBox_C.sen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGroupBox_C::Sen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "sen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function groupBox.groupBox_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UGroupBox_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "OnFocusLost");

	Params::UGroupBox_C_OnFocusLost_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function groupBox.groupBox_C.BndEvt__mesajGoner_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UGroupBox_C::BndEvt__mesajGoner_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "BndEvt__mesajGoner_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function groupBox.groupBox_C.BndEvt__groupBox_gruptanAt_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UGroupBox_C::BndEvt__groupBox_gruptanAt_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "BndEvt__groupBox_gruptanAt_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function groupBox.groupBox_C.yes1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGroupBox_C::Yes1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "yes1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function groupBox.groupBox_C.no1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGroupBox_C::No1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "no1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function groupBox.groupBox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UGroupBox_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function groupBox.groupBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UGroupBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function groupBox.groupBox_C.ExecuteUbergraph_groupBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UMsgbox_C*                   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UMsgbox_C*                   CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   K2Node_DynamicCast_AsM_2data                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FNewDm>              K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<class FString>              K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FDmData                     K2Node_MakeStruct_dmData                                         (None)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array_2                                         (ReferenceParm)
// TArray<int32>                      K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_getCharImage_NewParam1                                  (None)
// class UM2data_C*                   CallFunc_game_game_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FXmob                       CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGroupBox_C::ExecuteUbergraph_groupBox(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMsgbox_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UMsgbox_C* CallFunc_Create_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, TArray<struct FNewDm>& K2Node_MakeArray_Array, TArray<class FString>& K2Node_MakeArray_Array_1, const struct FDmData& K2Node_MakeStruct_dmData, class UM2data_C* CallFunc_game_game, TArray<class FString>& K2Node_MakeArray_Array_2, TArray<int32>& K2Node_MakeArray_Array_3, class UM2data_C* CallFunc_game_game_1, const struct FSlateBrush& CallFunc_getCharImage_NewParam1, class UM2data_C* CallFunc_game_game_2, const struct FXmob& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("groupBox_C", "ExecuteUbergraph_groupBox");

	Params::UGroupBox_C_ExecuteUbergraph_groupBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsM_2data = K2Node_DynamicCast_AsM_2data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_dmData = K2Node_MakeStruct_dmData;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.CallFunc_getCharImage_NewParam1 = CallFunc_getCharImage_NewParam1;
	Parms.CallFunc_game_game_2 = CallFunc_game_game_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


