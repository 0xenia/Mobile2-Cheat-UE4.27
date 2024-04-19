#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass m2lib.m2lib_C
// (None)

class UClass* UM2lib_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("m2lib_C");

	return Clss;
}


// m2lib_C m2lib.Default__m2lib_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM2lib_C* UM2lib_C::GetDefaultObj()
{
	static class UM2lib_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM2lib_C*>(UM2lib_C::StaticClass()->DefaultObject);

	return Default;
}


// Function m2lib.m2lib_C.setFontSize
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewSize                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UM2lib_C::SetFontSize(class UTextBlock* NewParam, int32 NewSize, class UObject* __WorldContext, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("m2lib_C", "setFontSize");

	Params::UM2lib_C_SetFontSize_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.NewSize = NewSize;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function m2lib.m2lib_C.isTr
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Tr_                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_lang_lang                                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UM2lib_C::IsTr(class UObject* __WorldContext, bool* Tr_, const class FString& CallFunc_lang_lang, bool CallFunc_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("m2lib_C", "isTr");

	Params::UM2lib_C_IsTr_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_lang_lang = CallFunc_lang_lang;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Tr_ != nullptr)
		*Tr_ = Parms.Tr_;

}


// Function m2lib.m2lib_C.lang
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Lang                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UM2save_C*                   CallFunc_m2save_save                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM2lib_C::Lang(class UObject* __WorldContext, class FString* Lang, class UM2save_C* CallFunc_m2save_save)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("m2lib_C", "lang");

	Params::UM2lib_C_Lang_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_m2save_save = CallFunc_m2save_save;

	UObject::ProcessEvent(Func, &Parms);

	if (Lang != nullptr)
		*Lang = std::move(Parms.Lang);

}


// Function m2lib.m2lib_C.removeFirstIntFromPacket
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPacket                     Packet                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPacket                     Pack                                                             (Parm, OutParm)
// TArray<int32>                      Temp                                                             (Edit, BlueprintVisible)
// struct FPacket                     K2Node_MakeStruct_packet                                         (None)

void UM2lib_C::RemoveFirstIntFromPacket(const struct FPacket& Packet, class UObject* __WorldContext, struct FPacket* Pack, const TArray<int32>& Temp, const struct FPacket& K2Node_MakeStruct_packet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("m2lib_C", "removeFirstIntFromPacket");

	Params::UM2lib_C_RemoveFirstIntFromPacket_Params Parms{};

	Parms.Packet = Packet;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp = Temp;
	Parms.K2Node_MakeStruct_packet = K2Node_MakeStruct_packet;

	UObject::ProcessEvent(Func, &Parms);

	if (Pack != nullptr)
		*Pack = std::move(Parms.Pack);

}


// Function m2lib.m2lib_C.gtext
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Text                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_gtext_ReturnValue                                       (ZeroConstructor, HasGetValueTypeHash)

void UM2lib_C::Gtext(const class FString& Name, class UObject* __WorldContext, class FString* Text, const class FString& CallFunc_gtext_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("m2lib_C", "gtext");

	Params::UM2lib_C_Gtext_Params Parms{};

	Parms.Name = Name;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_gtext_ReturnValue = CallFunc_gtext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);

}


// Function m2lib.m2lib_C.GtextParam
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              Strs                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                      Ints                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Text                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_gtext_ReturnValue                                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_formatText_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)

void UM2lib_C::GtextParam(const class FString& Name, TArray<class FString>& Strs, TArray<int32>& Ints, class UObject* __WorldContext, class FString* Text, const class FString& CallFunc_gtext_ReturnValue, const class FString& CallFunc_formatText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("m2lib_C", "GtextParam");

	Params::UM2lib_C_GtextParam_Params Parms{};

	Parms.Name = Name;
	Parms.Strs = Strs;
	Parms.Ints = Ints;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_gtext_ReturnValue = CallFunc_gtext_ReturnValue;
	Parms.CallFunc_formatText_ReturnValue = CallFunc_formatText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);

}


// Function m2lib.m2lib_C.toNpc
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc*                        Npc                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc*                        K2Node_DynamicCast_AsNpc                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UM2lib_C::ToNpc(class AActor* NewParam, class UObject* __WorldContext, class ANpc** Npc, class ANpc* K2Node_DynamicCast_AsNpc, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("m2lib_C", "toNpc");

	Params::UM2lib_C_ToNpc_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsNpc = K2Node_DynamicCast_AsNpc;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Npc != nullptr)
		*Npc = Parms.Npc;

}


// Function m2lib.m2lib_C.char
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharData                   NewParam                                                         (Parm, OutParm)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM2lib_C::Char(class UObject* __WorldContext, struct FCharData* NewParam, class UM2data_C* CallFunc_game_game)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("m2lib_C", "char");

	Params::UM2lib_C_Char_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_game_game = CallFunc_game_game;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);

}


// Function m2lib.m2lib_C.pControl
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APControl_C*                 PC                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM2lib_C::PControl(class UObject* __WorldContext, class APControl_C** PC, class UM2data_C* CallFunc_game_game)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("m2lib_C", "pControl");

	Params::UM2lib_C_PControl_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_game_game = CallFunc_game_game;

	UObject::ProcessEvent(Func, &Parms);

	if (PC != nullptr)
		*PC = Parms.PC;

}


// Function m2lib.m2lib_C.Set Wheather
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      WName                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               UpdateData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsReset                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerControllerFromID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APControl_C*                 K2Node_DynamicCast_AsP_Control                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerControllerFromID_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerControllerFromID_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APControl_C*                 K2Node_DynamicCast_AsP_Control_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APControl_C*                 K2Node_DynamicCast_AsP_Control_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APControl_C*                 CallFunc_pControl_pc                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerControllerFromID_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APControl_C*                 K2Node_DynamicCast_AsP_Control_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2save_C*                   CallFunc_m2save_save                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2data_C*                   CallFunc_game_game_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerControllerFromID_ReturnValue_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APControl_C*                 K2Node_DynamicCast_AsP_Control_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UM2lib_C::Set_Wheather(const class FString& WName, bool UpdateData, bool IsReset, class UObject* __WorldContext, class UM2data_C* CallFunc_game_game, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, class APControl_C* K2Node_DynamicCast_AsP_Control, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue_1, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue_2, class APControl_C* K2Node_DynamicCast_AsP_Control_1, bool K2Node_DynamicCast_bSuccess_1, class APControl_C* K2Node_DynamicCast_AsP_Control_2, bool K2Node_DynamicCast_bSuccess_2, class UM2data_C* CallFunc_game_game_1, class UParticleSystemComponent* CallFunc_AddComponentByClass_ReturnValue, class APControl_C* CallFunc_pControl_pc, int32 CallFunc_Array_Add_ReturnValue, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue_3, class APControl_C* K2Node_DynamicCast_AsP_Control_3, bool K2Node_DynamicCast_bSuccess_3, class UM2save_C* CallFunc_m2save_save, bool CallFunc_IsValid_ReturnValue, class UM2data_C* CallFunc_game_game_2, class UM2data_C* CallFunc_game_game_3, bool K2Node_SwitchString_CmpSuccess, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue_4, class APControl_C* K2Node_DynamicCast_AsP_Control_4, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("m2lib_C", "Set Wheather");

	Params::UM2lib_C_Set_Wheather_Params Parms{};

	Parms.WName = WName;
	Parms.UpdateData = UpdateData;
	Parms.IsReset = IsReset;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_GetPlayerControllerFromID_ReturnValue = CallFunc_GetPlayerControllerFromID_ReturnValue;
	Parms.K2Node_DynamicCast_AsP_Control = K2Node_DynamicCast_AsP_Control;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerControllerFromID_ReturnValue_1 = CallFunc_GetPlayerControllerFromID_ReturnValue_1;
	Parms.CallFunc_GetPlayerControllerFromID_ReturnValue_2 = CallFunc_GetPlayerControllerFromID_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsP_Control_1 = K2Node_DynamicCast_AsP_Control_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsP_Control_2 = K2Node_DynamicCast_AsP_Control_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;
	Parms.CallFunc_pControl_pc = CallFunc_pControl_pc;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetPlayerControllerFromID_ReturnValue_3 = CallFunc_GetPlayerControllerFromID_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsP_Control_3 = K2Node_DynamicCast_AsP_Control_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_m2save_save = CallFunc_m2save_save;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_game_game_2 = CallFunc_game_game_2;
	Parms.CallFunc_game_game_3 = CallFunc_game_game_3;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetPlayerControllerFromID_ReturnValue_4 = CallFunc_GetPlayerControllerFromID_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsP_Control_4 = K2Node_DynamicCast_AsP_Control_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function m2lib.m2lib_C.msgbox
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsgbox_C*                   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM2lib_C::Msgbox(const class FString& Text, class UObject* __WorldContext, class UMsgbox_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("m2lib_C", "msgbox");

	Params::UM2lib_C_Msgbox_Params Parms{};

	Parms.Text = Text;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function m2lib.m2lib_C.checkArabic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_isArabic_is                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UM2lib_C::CheckArabic(class UTextBlock* Text, class UObject* __WorldContext, bool CallFunc_isArabic_is, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("m2lib_C", "checkArabic");

	Params::UM2lib_C_CheckArabic_Params Parms{};

	Parms.Text = Text;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_isArabic_is = CallFunc_isArabic_is;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function m2lib.m2lib_C.isArabic
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Is                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UM2lib_C::IsArabic(class UObject* __WorldContext, bool* Is, class UM2data_C* CallFunc_game_game, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("m2lib_C", "isArabic");

	Params::UM2lib_C_IsArabic_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is != nullptr)
		*Is = Parms.Is;

}


// Function m2lib.m2lib_C.canvasAdd
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM2lib_C::CanvasAdd(class UUserWidget* Widget, class UObject* __WorldContext, class UM2data_C* CallFunc_game_game)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("m2lib_C", "canvasAdd");

	Params::UM2lib_C_CanvasAdd_Params Parms{};

	Parms.Widget = Widget;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_game_game = CallFunc_game_game;

	UObject::ProcessEvent(Func, &Parms);

}


// Function m2lib.m2lib_C.isMobile
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMobile                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   K2Node_DynamicCast_AsM_2data                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UM2lib_C::IsMobile(class UObject* __WorldContext, bool* IsMobile, class UM2data_C* CallFunc_game_game, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("m2lib_C", "isMobile");

	Params::UM2lib_C_IsMobile_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.K2Node_DynamicCast_AsM_2data = K2Node_DynamicCast_AsM_2data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsMobile != nullptr)
		*IsMobile = Parms.IsMobile;

}


// Function m2lib.m2lib_C.m2save
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2save_C*                   Save                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   K2Node_DynamicCast_AsM_2data                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UM2lib_C::M2save(class UObject* __WorldContext, class UM2save_C** Save, class UM2data_C* CallFunc_game_game, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("m2lib_C", "m2save");

	Params::UM2lib_C_M2save_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.K2Node_DynamicCast_AsM_2data = K2Node_DynamicCast_AsM_2data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Save != nullptr)
		*Save = Parms.Save;

}


// Function m2lib.m2lib_C.Game
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   Game                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   K2Node_DynamicCast_AsM_2data                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UM2lib_C::Game(class UObject* __WorldContext, class UM2data_C** Game, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("m2lib_C", "Game");

	Params::UM2lib_C_Game_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsM_2data = K2Node_DynamicCast_AsM_2data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Game != nullptr)
		*Game = Parms.Game;

}

}


