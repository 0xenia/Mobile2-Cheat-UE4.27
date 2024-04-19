#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemShopPay.ItemShopPay_C
// (None)

class UClass* UItemShopPay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemShopPay_C");

	return Clss;
}


// ItemShopPay_C ItemShopPay.Default__ItemShopPay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemShopPay_C* UItemShopPay_C::GetDefaultObj()
{
	static class UItemShopPay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemShopPay_C*>(UItemShopPay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemShopPay.ItemShopPay_C.openBrowser
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      URL                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWebBrowser_C*               CallFunc_openWebBrowser_browser                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemShopPay_C::OpenBrowser(const class FString& URL, class UM2data_C* CallFunc_game_game, class UWebBrowser_C* CallFunc_openWebBrowser_browser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopPay_C", "openBrowser");

	Params::UItemShopPay_C_OpenBrowser_Params Parms{};

	Parms.URL = URL;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_openWebBrowser_browser = CallFunc_openWebBrowser_browser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopPay.ItemShopPay_C.payOk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Gtext_text                                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Gtext_text_1                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UItemShopPay_C::PayOk(const class FString& CallFunc_Gtext_text, const class FString& CallFunc_Gtext_text_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopPay_C", "payOk");

	Params::UItemShopPay_C_PayOk_Params Parms{};

	Parms.CallFunc_Gtext_text = CallFunc_Gtext_text;
	Parms.CallFunc_Gtext_text_1 = CallFunc_Gtext_text_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopPay.ItemShopPay_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UItemShopPay_C::GetVisibility_0(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopPay_C", "GetVisibility_0");

	Params::UItemShopPay_C_GetVisibility_0_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemShopPay.ItemShopPay_C.closeWeb
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemShopPay_C::CloseWeb()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopPay_C", "closeWeb");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemShopPay.ItemShopPay_C.checkWeb
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetUrl_url                                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemShopPay_C::CheckWeb(bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetUrl_url, bool CallFunc_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopPay_C", "checkWeb");

	Params::UItemShopPay_C_CheckWeb_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUrl_url = CallFunc_GetUrl_url;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopPay.ItemShopPay_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPayBox_C*                   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2data_C*                   CallFunc_game_game_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2data_C*                   CallFunc_game_game_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPacket                     CallFunc_removeFirstIntFromPacket_pack                           (None)
// struct FPacket                     CallFunc_removeFirstIntFromPacket_pack_1                         (None)
// struct FPacket                     CallFunc_removeFirstIntFromPacket_pack_2                         (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemShopPay_C::Init(class UPayBox_C* CallFunc_Create_ReturnValue, class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UM2data_C* CallFunc_game_game_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue_1, class UM2data_C* CallFunc_game_game_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_Conv_IntToBool_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, int32 Temp_int_Variable, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, const struct FPacket& CallFunc_removeFirstIntFromPacket_pack, const struct FPacket& CallFunc_removeFirstIntFromPacket_pack_1, const struct FPacket& CallFunc_removeFirstIntFromPacket_pack_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopPay_C", "Init");

	Params::UItemShopPay_C_Init_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_game_game_2 = CallFunc_game_game_2;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_1 = CallFunc_Conv_IntToBool_ReturnValue_1;
	Parms.CallFunc_game_game_3 = CallFunc_game_game_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_2 = CallFunc_Conv_IntToBool_ReturnValue_2;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_1 = CallFunc_Multiply_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_removeFirstIntFromPacket_pack = CallFunc_removeFirstIntFromPacket_pack;
	Parms.CallFunc_removeFirstIntFromPacket_pack_1 = CallFunc_removeFirstIntFromPacket_pack_1;
	Parms.CallFunc_removeFirstIntFromPacket_pack_2 = CallFunc_removeFirstIntFromPacket_pack_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopPay.ItemShopPay_C.OnFailure_7AA6B45744E2E2A564B463A8880238B8
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInAppPurchaseState     CompletionStatus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInAppPurchaseRestoreInfo>InAppRestorePurchaseInformation                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemShopPay_C::OnFailure_7AA6B45744E2E2A564B463A8880238B8(enum class EInAppPurchaseState CompletionStatus, TArray<struct FInAppPurchaseRestoreInfo>& InAppRestorePurchaseInformation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopPay_C", "OnFailure_7AA6B45744E2E2A564B463A8880238B8");

	Params::UItemShopPay_C_OnFailure_7AA6B45744E2E2A564B463A8880238B8_Params Parms{};

	Parms.CompletionStatus = CompletionStatus;
	Parms.InAppRestorePurchaseInformation = InAppRestorePurchaseInformation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopPay.ItemShopPay_C.OnSuccess_7AA6B45744E2E2A564B463A8880238B8
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInAppPurchaseState     CompletionStatus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInAppPurchaseRestoreInfo>InAppRestorePurchaseInformation                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemShopPay_C::OnSuccess_7AA6B45744E2E2A564B463A8880238B8(enum class EInAppPurchaseState CompletionStatus, TArray<struct FInAppPurchaseRestoreInfo>& InAppRestorePurchaseInformation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopPay_C", "OnSuccess_7AA6B45744E2E2A564B463A8880238B8");

	Params::UItemShopPay_C_OnSuccess_7AA6B45744E2E2A564B463A8880238B8_Params Parms{};

	Parms.CompletionStatus = CompletionStatus;
	Parms.InAppRestorePurchaseInformation = InAppRestorePurchaseInformation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopPay.ItemShopPay_C.OnFailure_9B24A8254958F248A017F8B13B72B62D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInAppPurchaseState     PurchaseStatus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInAppPurchaseProductInfo   InAppPurchaseReceipts                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemShopPay_C::OnFailure_9B24A8254958F248A017F8B13B72B62D(enum class EInAppPurchaseState PurchaseStatus, struct FInAppPurchaseProductInfo& InAppPurchaseReceipts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopPay_C", "OnFailure_9B24A8254958F248A017F8B13B72B62D");

	Params::UItemShopPay_C_OnFailure_9B24A8254958F248A017F8B13B72B62D_Params Parms{};

	Parms.PurchaseStatus = PurchaseStatus;
	Parms.InAppPurchaseReceipts = InAppPurchaseReceipts;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopPay.ItemShopPay_C.OnSuccess_9B24A8254958F248A017F8B13B72B62D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInAppPurchaseState     PurchaseStatus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInAppPurchaseProductInfo   InAppPurchaseReceipts                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemShopPay_C::OnSuccess_9B24A8254958F248A017F8B13B72B62D(enum class EInAppPurchaseState PurchaseStatus, struct FInAppPurchaseProductInfo& InAppPurchaseReceipts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopPay_C", "OnSuccess_9B24A8254958F248A017F8B13B72B62D");

	Params::UItemShopPay_C_OnSuccess_9B24A8254958F248A017F8B13B72B62D_Params Parms{};

	Parms.PurchaseStatus = PurchaseStatus;
	Parms.InAppPurchaseReceipts = InAppPurchaseReceipts;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopPay.ItemShopPay_C.OnFailure_FDC88BAB48FB60ABFB12B8A897F910BE
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInAppPurchaseStatus    PurchaseStatus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInAppPurchaseReceiptInfo2>InAppPurchaseReceipts                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemShopPay_C::OnFailure_FDC88BAB48FB60ABFB12B8A897F910BE(enum class EInAppPurchaseStatus PurchaseStatus, TArray<struct FInAppPurchaseReceiptInfo2>& InAppPurchaseReceipts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopPay_C", "OnFailure_FDC88BAB48FB60ABFB12B8A897F910BE");

	Params::UItemShopPay_C_OnFailure_FDC88BAB48FB60ABFB12B8A897F910BE_Params Parms{};

	Parms.PurchaseStatus = PurchaseStatus;
	Parms.InAppPurchaseReceipts = InAppPurchaseReceipts;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopPay.ItemShopPay_C.OnSuccess_FDC88BAB48FB60ABFB12B8A897F910BE
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInAppPurchaseStatus    PurchaseStatus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInAppPurchaseReceiptInfo2>InAppPurchaseReceipts                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemShopPay_C::OnSuccess_FDC88BAB48FB60ABFB12B8A897F910BE(enum class EInAppPurchaseStatus PurchaseStatus, TArray<struct FInAppPurchaseReceiptInfo2>& InAppPurchaseReceipts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopPay_C", "OnSuccess_FDC88BAB48FB60ABFB12B8A897F910BE");

	Params::UItemShopPay_C_OnSuccess_FDC88BAB48FB60ABFB12B8A897F910BE_Params Parms{};

	Parms.PurchaseStatus = PurchaseStatus;
	Parms.InAppPurchaseReceipts = InAppPurchaseReceipts;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopPay.ItemShopPay_C.BndEvt__ItemShopPay_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemShopPay_C::BndEvt__ItemShopPay_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopPay_C", "BndEvt__ItemShopPay_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemShopPay.ItemShopPay_C.procOk
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemShopPay_C::ProcOk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopPay_C", "procOk");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemShopPay.ItemShopPay_C.closeWeber
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemShopPay_C::CloseWeber()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopPay_C", "closeWeber");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemShopPay.ItemShopPay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemShopPay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopPay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemShopPay.ItemShopPay_C.BndEvt__ItemShopPay_c_Button_K2Node_ComponentBoundEvent_1_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemShopPay_C::BndEvt__ItemShopPay_c_Button_K2Node_ComponentBoundEvent_1_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopPay_C", "BndEvt__ItemShopPay_c_Button_K2Node_ComponentBoundEvent_1_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemShopPay.ItemShopPay_C.ExecuteUbergraph_ItemShopPay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EInAppPurchaseState     K2Node_CustomEvent_CompletionStatus                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInAppPurchaseRestoreInfo>K2Node_CustomEvent_InAppRestorePurchaseInformation               (ConstParm, ReferenceParm)
// TArray<struct FInAppPurchaseRestoreInfo>Temp_struct_Variable                                             (ReferenceParm)
// enum class EInAppPurchaseState     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInAppPurchaseState     K2Node_CustomEvent_PurchaseStatus_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInAppPurchaseProductInfo   K2Node_CustomEvent_InAppPurchaseReceipts_3                       (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// enum class EInAppPurchaseState     K2Node_CustomEvent_PurchaseStatus_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInAppPurchaseProductInfo   K2Node_CustomEvent_InAppPurchaseReceipts_2                       (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FInAppPurchaseProductInfo   Temp_struct_Variable_1                                           (None)
// enum class EInAppPurchaseState     Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// enum class EInAppPurchaseStatus    K2Node_CustomEvent_PurchaseStatus_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInAppPurchaseReceiptInfo2>K2Node_CustomEvent_InAppPurchaseReceipts_1                       (ConstParm, ReferenceParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// enum class EInAppPurchaseStatus    K2Node_CustomEvent_PurchaseStatus                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInAppPurchaseReceiptInfo2>K2Node_CustomEvent_InAppPurchaseReceipts                         (ConstParm, ReferenceParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FInAppPurchaseReceiptInfo2>Temp_struct_Variable_2                                           (ReferenceParm)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// enum class EInAppPurchaseStatus    Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FString                      CallFunc_Gtext_text                                              (ZeroConstructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array_2                                         (ReferenceParm)
// TArray<int32>                      K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class FString                      CallFunc_Gtext_text_1                                            (ZeroConstructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array_4                                         (ReferenceParm)
// class UM2save_C*                   CallFunc_m2save_save                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array_5                                         (ReferenceParm)
// class FString                      CallFunc_GetDefaultLanguage_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetUrl_url                                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Contains_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_isTr_tr_                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerControllerFromID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array_6                                         (ReferenceParm)
// class FString                      CallFunc_Gtext_text_2                                            (ZeroConstructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerControllerFromID_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2data_C*                   CallFunc_game_game_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInAppPurchaseState     K2Node_CustomEvent_CompletionStatus_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInAppPurchaseRestoreInfo>K2Node_CustomEvent_InAppRestorePurchaseInformation_1             (ConstParm, ReferenceParm)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Gtext_text_3                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (ZeroConstructor, HasGetValueTypeHash)
// struct FInAppPurchaseProductRequestK2Node_MakeStruct_InAppPurchaseProductRequest                    (None)
// struct FInAppPurchaseProductRequest2K2Node_MakeStruct_InAppPurchaseProductRequest2                   (None)
// class UInAppPurchaseCallbackProxy* CallFunc_CreateProxyObjectForInAppPurchase_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInAppPurchaseProductRequest>K2Node_MakeArray_Array_7                                         (ConstParm, ReferenceParm)
// class UInAppPurchaseRestoreCallbackProxy*CallFunc_CreateProxyObjectForInAppPurchaseRestore_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      K2Node_MakeArray_Array_8                                         (ReferenceParm)
// class UM2data_C*                   CallFunc_game_game_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerControllerFromID_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInAppPurchaseCallbackProxy2*CallFunc_CreateProxyObjectForInAppPurchase_ReturnValue_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULoading_C*                  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemShopPay_C::ExecuteUbergraph_ItemShopPay(int32 EntryPoint, bool CallFunc_EqualEqual_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EInAppPurchaseState K2Node_CustomEvent_CompletionStatus, TArray<struct FInAppPurchaseRestoreInfo>& K2Node_CustomEvent_InAppRestorePurchaseInformation, TArray<struct FInAppPurchaseRestoreInfo>& Temp_struct_Variable, enum class EInAppPurchaseState Temp_byte_Variable, enum class EInAppPurchaseState K2Node_CustomEvent_PurchaseStatus_3, const struct FInAppPurchaseProductInfo& K2Node_CustomEvent_InAppPurchaseReceipts_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EInAppPurchaseState K2Node_CustomEvent_PurchaseStatus_2, const struct FInAppPurchaseProductInfo& K2Node_CustomEvent_InAppPurchaseReceipts_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FInAppPurchaseProductInfo& Temp_struct_Variable_1, enum class EInAppPurchaseState Temp_byte_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, enum class EInAppPurchaseStatus K2Node_CustomEvent_PurchaseStatus_1, TArray<struct FInAppPurchaseReceiptInfo2>& K2Node_CustomEvent_InAppPurchaseReceipts_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, enum class EInAppPurchaseStatus K2Node_CustomEvent_PurchaseStatus, TArray<struct FInAppPurchaseReceiptInfo2>& K2Node_CustomEvent_InAppPurchaseReceipts, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, TArray<struct FInAppPurchaseReceiptInfo2>& Temp_struct_Variable_2, TArray<class FString>& K2Node_MakeArray_Array, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, enum class EInAppPurchaseStatus Temp_byte_Variable_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, TArray<class FString>& K2Node_MakeArray_Array_1, const class FString& CallFunc_Gtext_text, class UM2data_C* CallFunc_game_game, TArray<class FString>& K2Node_MakeArray_Array_2, TArray<int32>& K2Node_MakeArray_Array_3, const class FString& CallFunc_Gtext_text_1, TArray<int32>& K2Node_MakeArray_Array_4, class UM2save_C* CallFunc_m2save_save, TArray<class FString>& K2Node_MakeArray_Array_5, const class FString& CallFunc_GetDefaultLanguage_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UM2data_C* CallFunc_game_game_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetUrl_url, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, bool CallFunc_isTr_tr_, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, class UM2data_C* CallFunc_game_game_2, TArray<int32>& K2Node_MakeArray_Array_6, const class FString& CallFunc_Gtext_text_2, class UM2data_C* CallFunc_game_game_3, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class UM2data_C* CallFunc_game_game_4, enum class EInAppPurchaseState K2Node_CustomEvent_CompletionStatus_1, TArray<struct FInAppPurchaseRestoreInfo>& K2Node_CustomEvent_InAppRestorePurchaseInformation_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Gtext_text_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const struct FInAppPurchaseProductRequest& K2Node_MakeStruct_InAppPurchaseProductRequest, const struct FInAppPurchaseProductRequest2& K2Node_MakeStruct_InAppPurchaseProductRequest2, class UInAppPurchaseCallbackProxy* CallFunc_CreateProxyObjectForInAppPurchase_ReturnValue, TArray<struct FInAppPurchaseProductRequest>& K2Node_MakeArray_Array_7, class UInAppPurchaseRestoreCallbackProxy* CallFunc_CreateProxyObjectForInAppPurchaseRestore_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TArray<int32>& K2Node_MakeArray_Array_8, class UM2data_C* CallFunc_game_game_5, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue_2, class UInAppPurchaseCallbackProxy2* CallFunc_CreateProxyObjectForInAppPurchase_ReturnValue_1, class ULoading_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopPay_C", "ExecuteUbergraph_ItemShopPay");

	Params::UItemShopPay_C_ExecuteUbergraph_ItemShopPay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_CompletionStatus = K2Node_CustomEvent_CompletionStatus;
	Parms.K2Node_CustomEvent_InAppRestorePurchaseInformation = K2Node_CustomEvent_InAppRestorePurchaseInformation;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CustomEvent_PurchaseStatus_3 = K2Node_CustomEvent_PurchaseStatus_3;
	Parms.K2Node_CustomEvent_InAppPurchaseReceipts_3 = K2Node_CustomEvent_InAppPurchaseReceipts_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_PurchaseStatus_2 = K2Node_CustomEvent_PurchaseStatus_2;
	Parms.K2Node_CustomEvent_InAppPurchaseReceipts_2 = K2Node_CustomEvent_InAppPurchaseReceipts_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_CustomEvent_PurchaseStatus_1 = K2Node_CustomEvent_PurchaseStatus_1;
	Parms.K2Node_CustomEvent_InAppPurchaseReceipts_1 = K2Node_CustomEvent_InAppPurchaseReceipts_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.K2Node_CustomEvent_PurchaseStatus = K2Node_CustomEvent_PurchaseStatus;
	Parms.K2Node_CustomEvent_InAppPurchaseReceipts = K2Node_CustomEvent_InAppPurchaseReceipts;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Gtext_text = CallFunc_Gtext_text;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Gtext_text_1 = CallFunc_Gtext_text_1;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_m2save_save = CallFunc_m2save_save;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.CallFunc_GetDefaultLanguage_ReturnValue = CallFunc_GetDefaultLanguage_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUrl_url = CallFunc_GetUrl_url;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue_1 = CallFunc_Contains_ReturnValue_1;
	Parms.CallFunc_Contains_ReturnValue_2 = CallFunc_Contains_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_isTr_tr_ = CallFunc_isTr_tr_;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetPlayerControllerFromID_ReturnValue = CallFunc_GetPlayerControllerFromID_ReturnValue;
	Parms.CallFunc_game_game_2 = CallFunc_game_game_2;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_Gtext_text_2 = CallFunc_Gtext_text_2;
	Parms.CallFunc_game_game_3 = CallFunc_game_game_3;
	Parms.CallFunc_GetPlayerControllerFromID_ReturnValue_1 = CallFunc_GetPlayerControllerFromID_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_game_game_4 = CallFunc_game_game_4;
	Parms.K2Node_CustomEvent_CompletionStatus_1 = K2Node_CustomEvent_CompletionStatus_1;
	Parms.K2Node_CustomEvent_InAppRestorePurchaseInformation_1 = K2Node_CustomEvent_InAppRestorePurchaseInformation_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Gtext_text_3 = CallFunc_Gtext_text_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;
	Parms.K2Node_MakeStruct_InAppPurchaseProductRequest = K2Node_MakeStruct_InAppPurchaseProductRequest;
	Parms.K2Node_MakeStruct_InAppPurchaseProductRequest2 = K2Node_MakeStruct_InAppPurchaseProductRequest2;
	Parms.CallFunc_CreateProxyObjectForInAppPurchase_ReturnValue = CallFunc_CreateProxyObjectForInAppPurchase_ReturnValue;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.CallFunc_CreateProxyObjectForInAppPurchaseRestore_ReturnValue = CallFunc_CreateProxyObjectForInAppPurchaseRestore_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.CallFunc_game_game_5 = CallFunc_game_game_5;
	Parms.CallFunc_GetPlayerControllerFromID_ReturnValue_2 = CallFunc_GetPlayerControllerFromID_ReturnValue_2;
	Parms.CallFunc_CreateProxyObjectForInAppPurchase_ReturnValue_1 = CallFunc_CreateProxyObjectForInAppPurchase_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


