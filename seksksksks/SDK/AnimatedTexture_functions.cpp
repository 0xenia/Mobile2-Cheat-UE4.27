#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AnimatedTexture.AnimatedTexture2D
// (None)

class UClass* UAnimatedTexture2D::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimatedTexture2D");

	return Clss;
}


// AnimatedTexture2D AnimatedTexture.Default__AnimatedTexture2D
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimatedTexture2D* UAnimatedTexture2D::GetDefaultObj()
{
	static class UAnimatedTexture2D* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimatedTexture2D*>(UAnimatedTexture2D::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimatedTexture.AnimatedTexture2D.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAnimatedTexture2D::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimatedTexture2D", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AnimatedTexture.AnimatedTexture2D.SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewRate                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnimatedTexture2D::SetPlayRate(float NewRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimatedTexture2D", "SetPlayRate");

	Params::UAnimatedTexture2D_SetPlayRate_Params Parms{};

	Parms.NewRate = NewRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimatedTexture.AnimatedTexture2D.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewLooping                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnimatedTexture2D::SetLooping(bool bNewLooping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimatedTexture2D", "SetLooping");

	Params::UAnimatedTexture2D_SetLooping_Params Parms{};

	Parms.bNewLooping = bNewLooping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimatedTexture.AnimatedTexture2D.PlayFromStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAnimatedTexture2D::PlayFromStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimatedTexture2D", "PlayFromStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AnimatedTexture.AnimatedTexture2D.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAnimatedTexture2D::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimatedTexture2D", "Play");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AnimatedTexture.AnimatedTexture2D.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAnimatedTexture2D::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimatedTexture2D", "IsPlaying");

	Params::UAnimatedTexture2D_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimatedTexture.AnimatedTexture2D.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAnimatedTexture2D::IsLooping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimatedTexture2D", "IsLooping");

	Params::UAnimatedTexture2D_IsLooping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimatedTexture.AnimatedTexture2D.GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAnimatedTexture2D::GetPlayRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimatedTexture2D", "GetPlayRate");

	Params::UAnimatedTexture2D_GetPlayRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimatedTexture.AnimatedTexture2D.GetAnimationLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAnimatedTexture2D::GetAnimationLength()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimatedTexture2D", "GetAnimationLength");

	Params::UAnimatedTexture2D_GetAnimationLength_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimatedTexture.AnimatedTexture2D.Delete
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAnimatedTexture2D::Delete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimatedTexture2D", "Delete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class AnimatedTexture.MaterialExpressionTextureSampleParameterAnim
// (None)

class UClass* UMaterialExpressionTextureSampleParameterAnim::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionTextureSampleParameterAnim");

	return Clss;
}


// MaterialExpressionTextureSampleParameterAnim AnimatedTexture.Default__MaterialExpressionTextureSampleParameterAnim
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionTextureSampleParameterAnim* UMaterialExpressionTextureSampleParameterAnim::GetDefaultObj()
{
	static class UMaterialExpressionTextureSampleParameterAnim* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionTextureSampleParameterAnim*>(UMaterialExpressionTextureSampleParameterAnim::StaticClass()->DefaultObject);

	return Default;
}

}


