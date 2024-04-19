#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass loncaRutbeChange.loncaRutbeChange_C
// (None)

class UClass* ULoncaRutbeChange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("loncaRutbeChange_C");

	return Clss;
}


// loncaRutbeChange_C loncaRutbeChange.Default__loncaRutbeChange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoncaRutbeChange_C* ULoncaRutbeChange_C::GetDefaultObj()
{
	static class ULoncaRutbeChange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoncaRutbeChange_C*>(ULoncaRutbeChange_C::StaticClass()->DefaultObject);

	return Default;
}


// Function loncaRutbeChange.loncaRutbeChange_C.clicker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UC_Button_C*                 but                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)

void ULoncaRutbeChange_C::Clicker(class UC_Button_C* but, int32 ID, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("loncaRutbeChange_C", "clicker");

	Params::ULoncaRutbeChange_C_Clicker_Params Parms{};

	Parms.but = but;
	Parms.ID = ID;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function loncaRutbeChange.loncaRutbeChange_C.makeData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UC_Button_C*                 One                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UC_Button_C*                 Two                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UC_Button_C*                 Three                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Dataa                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Data                                                             (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue_1         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue_2         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void ULoncaRutbeChange_C::MakeData(class UC_Button_C* One, class UC_Button_C* Two, class UC_Button_C* Three, class FString* Dataa, const class FString& Data, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, bool CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue_1, bool CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("loncaRutbeChange_C", "makeData");

	Params::ULoncaRutbeChange_C_MakeData_Params Parms{};

	Parms.One = One;
	Parms.Two = Two;
	Parms.Three = Three;
	Parms.Data = Data;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue = CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue_1 = CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue_1;
	Parms.CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue_2 = CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Dataa != nullptr)
		*Dataa = std::move(Parms.Dataa);

}


// Function loncaRutbeChange.loncaRutbeChange_C.procButtonData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UC_Button_C*                 One                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UC_Button_C*                 Two                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UC_Button_C*                 Three                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Split_LeftS_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS_1                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)

void ULoncaRutbeChange_C::ProcButtonData(class UC_Button_C* One, class UC_Button_C* Two, class UC_Button_C* Three, const class FString& Data, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, const class FString& CallFunc_Split_LeftS_1, const class FString& CallFunc_Split_RightS_1, bool CallFunc_Split_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("loncaRutbeChange_C", "procButtonData");

	Params::ULoncaRutbeChange_C_ProcButtonData_Params Parms{};

	Parms.One = One;
	Parms.Two = Two;
	Parms.Three = Three;
	Parms.Data = Data;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Split_LeftS_1 = CallFunc_Split_LeftS_1;
	Parms.CallFunc_Split_RightS_1 = CallFunc_Split_RightS_1;
	Parms.CallFunc_Split_ReturnValue_1 = CallFunc_Split_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function loncaRutbeChange.loncaRutbeChange_C.initData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoncaRutbeChange_C::InitData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("loncaRutbeChange_C", "initData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function loncaRutbeChange.loncaRutbeChange_C.BndEvt__loncaRutbe_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULoncaRutbeChange_C::BndEvt__loncaRutbe_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("loncaRutbeChange_C", "BndEvt__loncaRutbe_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function loncaRutbeChange.loncaRutbeChange_C.BndEvt__loncaRutbe_c_Button_9_K2Node_ComponentBoundEvent_1_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULoncaRutbeChange_C::BndEvt__loncaRutbe_c_Button_9_K2Node_ComponentBoundEvent_1_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("loncaRutbeChange_C", "BndEvt__loncaRutbe_c_Button_9_K2Node_ComponentBoundEvent_1_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function loncaRutbeChange.loncaRutbeChange_C.BndEvt__loncaRutbe_c_Button_K2Node_ComponentBoundEvent_2_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULoncaRutbeChange_C::BndEvt__loncaRutbe_c_Button_K2Node_ComponentBoundEvent_2_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("loncaRutbeChange_C", "BndEvt__loncaRutbe_c_Button_K2Node_ComponentBoundEvent_2_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function loncaRutbeChange.loncaRutbeChange_C.BndEvt__loncaRutbe_c_Button_1_K2Node_ComponentBoundEvent_3_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULoncaRutbeChange_C::BndEvt__loncaRutbe_c_Button_1_K2Node_ComponentBoundEvent_3_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("loncaRutbeChange_C", "BndEvt__loncaRutbe_c_Button_1_K2Node_ComponentBoundEvent_3_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function loncaRutbeChange.loncaRutbeChange_C.BndEvt__loncaRutbe_c_Button_2_K2Node_ComponentBoundEvent_4_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULoncaRutbeChange_C::BndEvt__loncaRutbe_c_Button_2_K2Node_ComponentBoundEvent_4_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("loncaRutbeChange_C", "BndEvt__loncaRutbe_c_Button_2_K2Node_ComponentBoundEvent_4_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function loncaRutbeChange.loncaRutbeChange_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULoncaRutbeChange_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("loncaRutbeChange_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function loncaRutbeChange.loncaRutbeChange_C.ExecuteUbergraph_loncaRutbeChange
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<int32>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<class FString>              K2Node_MakeArray_Array_2                                         (ReferenceParm)
// TArray<int32>                      K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMob                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMob                        CallFunc_Map_Find_Value_1                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMob                        CallFunc_Map_Find_Value_2                                        (None)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoncaRutbeChange_C::ExecuteUbergraph_loncaRutbeChange(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, class UM2data_C* CallFunc_game_game, TArray<class FString>& K2Node_MakeArray_Array, TArray<int32>& K2Node_MakeArray_Array_1, TArray<class FString>& K2Node_MakeArray_Array_2, TArray<int32>& K2Node_MakeArray_Array_3, class UM2data_C* CallFunc_game_game_1, const struct FMob& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FMob& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FMob& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("loncaRutbeChange_C", "ExecuteUbergraph_loncaRutbeChange");

	Params::ULoncaRutbeChange_C_ExecuteUbergraph_loncaRutbeChange_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


