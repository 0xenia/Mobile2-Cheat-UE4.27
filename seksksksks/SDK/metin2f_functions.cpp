#pragma once

// Dumped with Dumper-7!

#include "../SDK.hpp"

namespace SDK {
	//---------------------------------------------------------------------------------------------------------------------
	// FUNCTIONS
	//---------------------------------------------------------------------------------------------------------------------

	// Class metin2f.actorName
	// (SceneComponent)

	class UClass* UActorName::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("actorName");

		return Clss;
	}

	// actorName metin2f.Default__actorName
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UActorName* UActorName::GetDefaultObj()
	{
		static class UActorName* Default = nullptr;

		if (!Default)
			Default = static_cast<UActorName*>(UActorName::StaticClass()->DefaultObject);

		return Default;
	}

	// Class metin2f.animAction
	// (None)

	class UClass* UAnimAction::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("animAction");

		return Clss;
	}

	// animAction metin2f.Default__animAction
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UAnimAction* UAnimAction::GetDefaultObj()
	{
		static class UAnimAction* Default = nullptr;

		if (!Default)
			Default = static_cast<UAnimAction*>(UAnimAction::StaticClass()->DefaultObject);

		return Default;
	}

	// Class metin2f.charView
	// (Actor, Pawn)

	class UClass* ACharView::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("charView");

		return Clss;
	}

	// charView metin2f.Default__charView
	// (Public, ClassDefaultObject, ArchetypeObject)

	class ACharView* ACharView::GetDefaultObj()
	{
		static class ACharView* Default = nullptr;

		if (!Default)
			Default = static_cast<ACharView*>(ACharView::StaticClass()->DefaultObject);

		return Default;
	}

	// Function metin2f.charView.touchStart
	// (Final, Native, Protected)
	// Parameters:
	// enum class ETouchIndex             FingerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class UPrimitiveComponent*         TouchedComponent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ACharView::TouchStart(enum class ETouchIndex FingerIndex, class UPrimitiveComponent* TouchedComponent)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("charView", "touchStart");

		Params::ACharView_TouchStart_Params Parms{};

		Parms.FingerIndex = FingerIndex;
		Parms.TouchedComponent = TouchedComponent;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.charView.touchEnd
	// (Final, Native, Protected)
	// Parameters:
	// enum class ETouchIndex             FingerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class UPrimitiveComponent*         TouchedComponent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ACharView::TouchEnd(enum class ETouchIndex FingerIndex, class UPrimitiveComponent* TouchedComponent)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("charView", "touchEnd");

		Params::ACharView_TouchEnd_Params Parms{};

		Parms.FingerIndex = FingerIndex;
		Parms.TouchedComponent = TouchedComponent;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.charView.OnOverlapEndCap
	// (Final, Native, Protected)
	// Parameters:
	// class UPrimitiveComponent*         OverlappedComp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ACharView::OnOverlapEndCap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("charView", "OnOverlapEndCap");

		Params::ACharView_OnOverlapEndCap_Params Parms{};

		Parms.OverlappedComp = OverlappedComp;
		Parms.OtherActor = OtherActor;
		Parms.OtherComp = OtherComp;
		Parms.OtherBodyIndex = OtherBodyIndex;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.charView.OnOverlapEnd
	// (Final, Native, Protected)
	// Parameters:
	// class UPrimitiveComponent*         OverlappedComp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ACharView::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("charView", "OnOverlapEnd");

		Params::ACharView_OnOverlapEnd_Params Parms{};

		Parms.OverlappedComp = OverlappedComp;
		Parms.OtherActor = OtherActor;
		Parms.OtherComp = OtherComp;
		Parms.OtherBodyIndex = OtherBodyIndex;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.charView.OnOverlapBeginCap
	// (Final, Native, Protected, HasOutParams)
	// Parameters:
	// class UPrimitiveComponent*         OverlapComponent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	void ACharView::OnOverlapBeginCap(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("charView", "OnOverlapBeginCap");

		Params::ACharView_OnOverlapBeginCap_Params Parms{};

		Parms.OverlapComponent = OverlapComponent;
		Parms.OtherActor = OtherActor;
		Parms.OtherComp = OtherComp;
		Parms.OtherBodyIndex = OtherBodyIndex;
		Parms.bFromSweep = bFromSweep;
		Parms.SweepResult = SweepResult;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.charView.OnOverlapBegin
	// (Final, Native, Protected, HasOutParams)
	// Parameters:
	// class UPrimitiveComponent*         OverlapComponent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	void ACharView::OnOverlapBegin(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("charView", "OnOverlapBegin");

		Params::ACharView_OnOverlapBegin_Params Parms{};

		Parms.OverlapComponent = OverlapComponent;
		Parms.OtherActor = OtherActor;
		Parms.OtherComp = OtherComp;
		Parms.OtherBodyIndex = OtherBodyIndex;
		Parms.bFromSweep = bFromSweep;
		Parms.SweepResult = SweepResult;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.charView.hoverout
	// (Final, Native, Protected)
	// Parameters:
	// class UPrimitiveComponent*         ClickedComp                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ACharView::Hoverout(class UPrimitiveComponent* ClickedComp)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("charView", "hoverout");

		Params::ACharView_Hoverout_Params Parms{};

		Parms.ClickedComp = ClickedComp;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.charView.hover
	// (Final, Native, Protected)
	// Parameters:
	// class UPrimitiveComponent*         ClickedComp                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ACharView::Hover(class UPrimitiveComponent* ClickedComp)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("charView", "hover");

		Params::ACharView_Hover_Params Parms{};

		Parms.ClickedComp = ClickedComp;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.charView.click
	// (Final, Native, Protected)
	// Parameters:
	// class UPrimitiveComponent*         ClickedComp                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FKey                        ButtonPressed                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ACharView::Click(class UPrimitiveComponent* ClickedComp, const struct FKey& ButtonPressed)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("charView", "click");

		Params::ACharView_Click_Params Parms{};

		Parms.ClickedComp = ClickedComp;
		Parms.ButtonPressed = ButtonPressed;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Class metin2f.ChunkUpdater
	// (Actor)

	class UClass* AChunkUpdater::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ChunkUpdater");

		return Clss;
	}

	// ChunkUpdater metin2f.Default__ChunkUpdater
	// (Public, ClassDefaultObject, ArchetypeObject)

	class AChunkUpdater* AChunkUpdater::GetDefaultObj()
	{
		static class AChunkUpdater* Default = nullptr;

		if (!Default)
			Default = static_cast<AChunkUpdater*>(AChunkUpdater::StaticClass()->DefaultObject);

		return Default;
	}

	// Function metin2f.ChunkUpdater.updateGame
	// (Final, Native, Public, BlueprintCallable)
	// Parameters:

	void AChunkUpdater::UpdateGame()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("ChunkUpdater", "updateGame");

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, nullptr);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.ChunkUpdater.StartIssueDownload
	// (Final, Native, Public, BlueprintCallable)
	// Parameters:

	void AChunkUpdater::StartIssueDownload()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("ChunkUpdater", "StartIssueDownload");

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, nullptr);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.ChunkUpdater.PatchGame
	// (Final, Native, Public, BlueprintCallable)
	// Parameters:
	// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool AChunkUpdater::PatchGame()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("ChunkUpdater", "PatchGame");

		Params::AChunkUpdater_PatchGame_Params Parms{};

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		return Parms.ReturnValue;
	}

	// Function metin2f.ChunkUpdater.LoadPaks
	// (Final, Native, Public, BlueprintCallable)
	// Parameters:

	void AChunkUpdater::LoadPaks()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("ChunkUpdater", "LoadPaks");

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, nullptr);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.ChunkUpdater.GetLoadingProgress
	// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
	// Parameters:
	// int32                              FilesDownloaded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              TotalFilesToDownload                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// float                              DownloadPercent                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              ChunksMounted                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              TotalChunksToMount                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// float                              MountPercent                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AChunkUpdater::GetLoadingProgress(int32* FilesDownloaded, int32* TotalFilesToDownload, float* DownloadPercent, int32* ChunksMounted, int32* TotalChunksToMount, float* MountPercent)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("ChunkUpdater", "GetLoadingProgress");

		Params::AChunkUpdater_GetLoadingProgress_Params Parms{};

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		if (FilesDownloaded != nullptr)
			*FilesDownloaded = Parms.FilesDownloaded;

		if (TotalFilesToDownload != nullptr)
			*TotalFilesToDownload = Parms.TotalFilesToDownload;

		if (DownloadPercent != nullptr)
			*DownloadPercent = Parms.DownloadPercent;

		if (ChunksMounted != nullptr)
			*ChunksMounted = Parms.ChunksMounted;

		if (TotalChunksToMount != nullptr)
			*TotalChunksToMount = Parms.TotalChunksToMount;

		if (MountPercent != nullptr)
			*MountPercent = Parms.MountPercent;
	}

	// Class metin2f.doSkillDamage
	// (None)

	class UClass* UDoSkillDamage::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("doSkillDamage");

		return Clss;
	}

	// doSkillDamage metin2f.Default__doSkillDamage
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UDoSkillDamage* UDoSkillDamage::GetDefaultObj()
	{
		static class UDoSkillDamage* Default = nullptr;

		if (!Default)
			Default = static_cast<UDoSkillDamage*>(UDoSkillDamage::StaticClass()->DefaultObject);

		return Default;
	}

	// Class metin2f.droppedItem
	// (Actor)

	class UClass* ADroppedItem::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("droppedItem");

		return Clss;
	}

	// droppedItem metin2f.Default__droppedItem
	// (Public, ClassDefaultObject, ArchetypeObject)

	class ADroppedItem* ADroppedItem::GetDefaultObj()
	{
		static class ADroppedItem* Default = nullptr;

		if (!Default)
			Default = static_cast<ADroppedItem*>(ADroppedItem::StaticClass()->DefaultObject);

		return Default;
	}

	// Function metin2f.droppedItem.OnOverlapBegin
	// (Final, Native, Public, HasOutParams)
	// Parameters:
	// class UPrimitiveComponent*         OverlapComponent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	void ADroppedItem::OnOverlapBegin(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("droppedItem", "OnOverlapBegin");

		Params::ADroppedItem_OnOverlapBegin_Params Parms{};

		Parms.OverlapComponent = OverlapComponent;
		Parms.OtherActor = OtherActor;
		Parms.OtherComp = OtherComp;
		Parms.OtherBodyIndex = OtherBodyIndex;
		Parms.bFromSweep = bFromSweep;
		Parms.SweepResult = SweepResult;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.droppedItem.OnCompHit
	// (Final, Native, Public, HasOutParams, HasDefaults)
	// Parameters:
	// class UPrimitiveComponent*         HitComp                                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FVector                     NormalImpulse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	void ADroppedItem::OnCompHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("droppedItem", "OnCompHit");

		Params::ADroppedItem_OnCompHit_Params Parms{};

		Parms.HitComp = HitComp;
		Parms.OtherActor = OtherActor;
		Parms.OtherComp = OtherComp;
		Parms.NormalImpulse = NormalImpulse;
		Parms.Hit = Hit;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Class metin2f.fmdata
	// (None)

	class UClass* UFmdata::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("fmdata");

		return Clss;
	}

	// fmdata metin2f.Default__fmdata
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UFmdata* UFmdata::GetDefaultObj()
	{
		static class UFmdata* Default = nullptr;

		if (!Default)
			Default = static_cast<UFmdata*>(UFmdata::StaticClass()->DefaultObject);

		return Default;
	}

	// Function metin2f.fmdata.addchat
	// (Event, Public, BlueprintEvent)
	// Parameters:
	// int32                              Sender                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class FString                      SenderName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void UFmdata::Addchat(int32 Sender, const class FString& SenderName, const class FString& Message)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("fmdata", "addchat");

		Params::UFmdata_Addchat_Params Parms{};

		Parms.Sender = Sender;
		Parms.SenderName = SenderName;
		Parms.Message = Message;

		UObject::ProcessEvent(Func, &Parms);
	}

	// Class metin2f.gameManager
	// (Actor)

	class UClass* AGameManager::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("gameManager");

		return Clss;
	}

	// gameManager metin2f.Default__gameManager
	// (Public, ClassDefaultObject, ArchetypeObject)

	class AGameManager* AGameManager::GetDefaultObj()
	{
		static class AGameManager* Default = nullptr;

		if (!Default)
			Default = static_cast<AGameManager*>(AGameManager::StaticClass()->DefaultObject);

		return Default;
	}

	// Function metin2f.gameManager.showKeyboard
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:

	void AGameManager::ShowKeyboard()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "showKeyboard");

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, nullptr);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.gameManager.setM2dataReferences
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:

	void AGameManager::SetM2dataReferences()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "setM2dataReferences");

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, nullptr);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.gameManager.sendPacket
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// int32                              PId                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// TArray<int32>                      Ints                                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	// TArray<class FString>              Strings                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

	void AGameManager::SendPacket(int32 PId, const TArray<int32>& Ints, const TArray<class FString>& Strings)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "sendPacket");

		Params::AGameManager_SendPacket_Params Parms{};

		Parms.PId = PId;
		Parms.Ints = Ints;
		Parms.Strings = Strings;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.gameManager.selectActor
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               IsAttack                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               IsMouseClick                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AGameManager::SelectActor(class AActor* Actor, bool IsAttack, bool IsMouseClick)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "selectActor");

		Params::AGameManager_SelectActor_Params Parms{};

		Parms.Actor = Actor;
		Parms.IsAttack = IsAttack;
		Parms.IsMouseClick = IsMouseClick;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.gameManager.recon
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:

	void AGameManager::Recon()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "recon");

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, nullptr);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.gameManager.qtext
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class FString AGameManager::Qtext(const class FString& Name)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "qtext");

		Params::AGameManager_Qtext_Params Parms{};

		Parms.Name = Name;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		return Parms.ReturnValue;
	}

	// Function metin2f.gameManager.playUSoundAtPos
	// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	// Parameters:
	// class USoundBase*                  S                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FVector                     Pos                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// float                              Sound                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AGameManager::PlayUSoundAtPos(class USoundBase* S, const struct FVector& Pos, float Sound)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "playUSoundAtPos");

		Params::AGameManager_PlayUSoundAtPos_Params Parms{};

		Parms.S = S;
		Parms.Pos = Pos;
		Parms.Sound = Sound;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.gameManager.playSoundAtPos
	// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	// Parameters:
	// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FVector                     Pos                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               IsUISound                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AGameManager::PlaySoundAtPos(const class FString& Path, const struct FVector& Pos, float Volume, bool IsUISound)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "playSoundAtPos");

		Params::AGameManager_PlaySoundAtPos_Params Parms{};

		Parms.Path = Path;
		Parms.Pos = Pos;
		Parms.Volume = Volume;
		Parms.IsUISound = IsUISound;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.gameManager.playSound
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AGameManager::PlaySound(const class FString& Path)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "playSound");

		Params::AGameManager_PlaySound_Params Parms{};

		Parms.Path = Path;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.gameManager.longToString
	// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	// Parameters:
	// int64                              I                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class FString AGameManager::LongToString(int64 I)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "longToString");

		Params::AGameManager_LongToString_Params Parms{};

		Parms.I = I;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		return Parms.ReturnValue;
	}

	// Function metin2f.gameManager.loadObject
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// class UObject*                     Outer                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class FString                      Loc                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UObject* AGameManager::LoadObject(class UObject* Outer, const class FString& Loc)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "loadObject");

		Params::AGameManager_LoadObject_Params Parms{};

		Parms.Outer = Outer;
		Parms.Loc = Loc;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		return Parms.ReturnValue;
	}

	// Function metin2f.gameManager.isValidInput
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// class FString                      Text                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool AGameManager::IsValidInput(const class FString& Text)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "isValidInput");

		Params::AGameManager_IsValidInput_Params Parms{};

		Parms.Text = Text;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		return Parms.ReturnValue;
	}

	// Function metin2f.gameManager.initMobile
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:

	void AGameManager::InitMobile()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "initMobile");

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, nullptr);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.gameManager.gtext
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class FString AGameManager::Gtext(const class FString& Name)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "gtext");

		Params::AGameManager_Gtext_Params Parms{};

		Parms.Name = Name;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		return Parms.ReturnValue;
	}

	// Function metin2f.gameManager.getVertexs
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// class UStaticMeshComponent*        C                                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              Tolerance                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// TArray<struct FVector>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

	TArray<struct FVector> AGameManager::GetVertexs(class UStaticMeshComponent* C, int32 Tolerance)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "getVertexs");

		Params::AGameManager_GetVertexs_Params Parms{};

		Parms.C = C;
		Parms.Tolerance = Tolerance;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		return Parms.ReturnValue;
	}

	// Function metin2f.gameManager.getLoc
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// class FString                      Ip                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AGameManager::GetLoc(const class FString& Ip)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "getLoc");

		Params::AGameManager_GetLoc_Params Parms{};

		Parms.Ip = Ip;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.gameManager.getgame
	// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	// Parameters:
	// class UFmdata*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UFmdata* AGameManager::Getgame()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "getgame");

		Params::AGameManager_Getgame_Params Parms{};

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		return Parms.ReturnValue;
	}

	// Function metin2f.gameManager.formatText
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// TArray<class FString>              Strings                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	// TArray<int32>                      Ints                                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class FString AGameManager::FormatText(const class FString& Name, const TArray<class FString>& Strings, const TArray<int32>& Ints)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "formatText");

		Params::AGameManager_FormatText_Params Parms{};

		Parms.Name = Name;
		Parms.Strings = Strings;
		Parms.Ints = Ints;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		return Parms.ReturnValue;
	}

	// Function metin2f.gameManager.exitGame
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:

	void AGameManager::ExitGame()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "exitGame");

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, nullptr);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.gameManager.EncryptString
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// class FString                      InputString                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class FString AGameManager::EncryptString(const class FString& InputString, const class FString& Key)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "EncryptString");

		Params::AGameManager_EncryptString_Params Parms{};

		Parms.InputString = InputString;
		Parms.Key = Key;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		return Parms.ReturnValue;
	}

	// Function metin2f.gameManager.dotNumberS
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// class FString                      NumberString                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class FString AGameManager::DotNumberS(const class FString& NumberString)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "dotNumberS");

		Params::AGameManager_DotNumberS_Params Parms{};

		Parms.NumberString = NumberString;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		return Parms.ReturnValue;
	}

	// Function metin2f.gameManager.dotNumber
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// int32                              Number                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class FString AGameManager::DotNumber(int32 Number)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "dotNumber");

		Params::AGameManager_DotNumber_Params Parms{};

		Parms.Number = Number;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		return Parms.ReturnValue;
	}

	// Function metin2f.gameManager.DecryptString
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// class FString                      InputString                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class FString AGameManager::DecryptString(const class FString& InputString, const class FString& Key)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "DecryptString");

		Params::AGameManager_DecryptString_Params Parms{};

		Parms.InputString = InputString;
		Parms.Key = Key;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		return Parms.ReturnValue;
	}

	// Function metin2f.gameManager.checkM2data
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// class UWorld*                      World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AGameManager::CheckM2data(class UWorld* World)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "checkM2data");

		Params::AGameManager_CheckM2data_Params Parms{};

		Parms.World = World;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.gameManager.canAttack
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// class ANpc*                        Player                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool AGameManager::CanAttack(class ANpc* Player)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "canAttack");

		Params::AGameManager_CanAttack_Params Parms{};

		Parms.Player = Player;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		return Parms.ReturnValue;
	}

	// Function metin2f.gameManager._loadMap2
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class UGameInstance*               Game                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AGameManager::_loadMap2(const class FString& Name, class UGameInstance* Game)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("gameManager", "_loadMap2");

		Params::AGameManager__loadMap2_Params Parms{};

		Parms.Name = Name;
		Parms.Game = Game;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Class metin2f.go
	// (Actor)

	class UClass* AGo::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("go");

		return Clss;
	}

	// go metin2f.Default__go
	// (Public, ClassDefaultObject, ArchetypeObject)

	class AGo* AGo::GetDefaultObj()
	{
		static class AGo* Default = nullptr;

		if (!Default)
			Default = static_cast<AGo*>(AGo::StaticClass()->DefaultObject);

		return Default;
	}

	// Function metin2f.go.OnOverlapBeginCap
	// (Final, Native, Public, HasOutParams)
	// Parameters:
	// class UPrimitiveComponent*         OverlapComponent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	void AGo::OnOverlapBeginCap(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("go", "OnOverlapBeginCap");

		Params::AGo_OnOverlapBeginCap_Params Parms{};

		Parms.OverlapComponent = OverlapComponent;
		Parms.OtherActor = OtherActor;
		Parms.OtherComp = OtherComp;
		Parms.OtherBodyIndex = OtherBodyIndex;
		Parms.bFromSweep = bFromSweep;
		Parms.SweepResult = SweepResult;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Class metin2f.goTargetEffect
	// (None)

	class UClass* UGoTargetEffect::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("goTargetEffect");

		return Clss;
	}

	// goTargetEffect metin2f.Default__goTargetEffect
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UGoTargetEffect* UGoTargetEffect::GetDefaultObj()
	{
		static class UGoTargetEffect* Default = nullptr;

		if (!Default)
			Default = static_cast<UGoTargetEffect*>(UGoTargetEffect::StaticClass()->DefaultObject);

		return Default;
	}

	// Class metin2f.icamera
	// (Actor)

	class UClass* AIcamera::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("icamera");

		return Clss;
	}

	// icamera metin2f.Default__icamera
	// (Public, ClassDefaultObject, ArchetypeObject)

	class AIcamera* AIcamera::GetDefaultObj()
	{
		static class AIcamera* Default = nullptr;

		if (!Default)
			Default = static_cast<AIcamera*>(AIcamera::StaticClass()->DefaultObject);

		return Default;
	}

	// Function metin2f.icamera.changeTargetCam
	// (Final, Native, Public, BlueprintCallable)
	// Parameters:
	// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void AIcamera::ChangeTargetCam(class AActor* Target)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("icamera", "changeTargetCam");

		Params::AIcamera_ChangeTargetCam_Params Parms{};

		Parms.Target = Target;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Class metin2f.loader
	// (Actor)

	class UClass* ALoader::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("loader");

		return Clss;
	}

	// loader metin2f.Default__loader
	// (Public, ClassDefaultObject, ArchetypeObject)

	class ALoader* ALoader::GetDefaultObj()
	{
		static class ALoader* Default = nullptr;

		if (!Default)
			Default = static_cast<ALoader*>(ALoader::StaticClass()->DefaultObject);

		return Default;
	}

	// Function metin2f.loader.useSkill
	// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
	// Parameters:
	// int32                              SkillId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class FString                      Res                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ALoader::UseSkill(int32 SkillId, bool* Result, class FString* Res)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "useSkill");

		Params::ALoader_UseSkill_Params Parms{};

		Parms.SkillId = SkillId;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		if (Result != nullptr)
			*Result = Parms.Result;

		if (Res != nullptr)
			*Res = std::move(Parms.Res);
	}

	// Function metin2f.loader.spawnSkill
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// int32                              SkillId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              SkillDuration                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               IsWeapon                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               IsIdle                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               DirectSkillId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ALoader::SpawnSkill(int32 SkillId, class AActor* Target, int32 SkillDuration, bool IsWeapon, bool IsIdle, bool DirectSkillId)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "spawnSkill");

		Params::ALoader_SpawnSkill_Params Parms{};

		Parms.SkillId = SkillId;
		Parms.Target = Target;
		Parms.SkillDuration = SkillDuration;
		Parms.IsWeapon = IsWeapon;
		Parms.IsIdle = IsIdle;
		Parms.DirectSkillId = DirectSkillId;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.loader.sendSlotChange
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// int32                              OldSlot                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              NewSlot                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ALoader::SendSlotChange(int32 OldSlot, int32 NewSlot)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "sendSlotChange");

		Params::ALoader_SendSlotChange_Params Parms{};

		Parms.OldSlot = OldSlot;
		Parms.NewSlot = NewSlot;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.loader.sendSlotBirlestir
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// int32                              Source                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ALoader::SendSlotBirlestir(int32 Source, int32 Target)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "sendSlotBirlestir");

		Params::ALoader_SendSlotBirlestir_Params Parms{};

		Parms.Source = Source;
		Parms.Target = Target;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.loader.sendSlotAyir
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// int32                              Slot                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              Emptyslot                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ALoader::SendSlotAyir(int32 Slot, int32 Count, int32 Emptyslot)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "sendSlotAyir");

		Params::ALoader_SendSlotAyir_Params Parms{};

		Parms.Slot = Slot;
		Parms.Count = Count;
		Parms.Emptyslot = Emptyslot;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.loader.sendQuickChangeQ
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// int32                              Qid                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              Qid2                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ALoader::SendQuickChangeQ(int32 Qid, int32 Qid2)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "sendQuickChangeQ");

		Params::ALoader_SendQuickChangeQ_Params Parms{};

		Parms.Qid = Qid;
		Parms.Qid2 = Qid2;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.loader.sendQuickChange
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// int32                              Qid                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ALoader::SendQuickChange(int32 Qid, int32 Value)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "sendQuickChange");

		Params::ALoader_SendQuickChange_Params Parms{};

		Parms.Qid = Qid;
		Parms.Value = Value;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.loader.send
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// int32                              PId                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// TArray<int32>                      Ints                                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	// TArray<class FString>              Strings                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

	void ALoader::Send(int32 PId, const TArray<int32>& Ints, const TArray<class FString>& Strings)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "send");

		Params::ALoader_Send_Params Parms{};

		Parms.PId = PId;
		Parms.Ints = Ints;
		Parms.Strings = Strings;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.loader.loadLoader
	// (Final, Native, Public, BlueprintCallable)
	// Parameters:

	void ALoader::LoadLoader()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "loadLoader");

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, nullptr);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.loader.isAddItem
	// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
	// Parameters:
	// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FInvItem                    Item                                                             (Parm, OutParm, NativeAccessSpecifierPublic)

	void ALoader::IsAddItem(bool* Found, struct FInvItem* Item)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "isAddItem");

		Params::ALoader_IsAddItem_Params Parms{};

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		if (Found != nullptr)
			*Found = Parms.Found;

		if (Item != nullptr)
			*Item = std::move(Parms.Item);
	}

	// Function metin2f.loader.initGame
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// class UGameInstance*               Ins                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ALoader::InitGame(class UGameInstance* Ins)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "initGame");

		Params::ALoader_InitGame_Params Parms{};

		Parms.Ins = Ins;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.loader.getWorldPure
	// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	// Parameters:
	// class UWorld*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UWorld* ALoader::GetWorldPure()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "getWorldPure");

		Params::ALoader_GetWorldPure_Params Parms{};

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		return Parms.ReturnValue;
	}

	// Function metin2f.loader.getWorld
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ALoader::GetWorld(class UObject* WorldContextObject)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "getWorld");

		Params::ALoader_GetWorld_Params Parms{};

		Parms.WorldContextObject = WorldContextObject;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.loader.getUIPacketIsEmpty
	// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
	// Parameters:
	// bool                               IsEmpty                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ALoader::GetUIPacketIsEmpty(bool* IsEmpty)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "getUIPacketIsEmpty");

		Params::ALoader_GetUIPacketIsEmpty_Params Parms{};

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		if (IsEmpty != nullptr)
			*IsEmpty = Parms.IsEmpty;
	}

	// Function metin2f.loader.getUIPacket
	// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
	// Parameters:
	// struct FPacket                     Source                                                           (Parm, OutParm, NativeAccessSpecifierPublic)

	void ALoader::GetUIPacket(struct FPacket* Source)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "getUIPacket");

		Params::ALoader_GetUIPacket_Params Parms{};

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		if (Source != nullptr)
			*Source = std::move(Parms.Source);
	}

	// Function metin2f.loader.getSkill
	// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
	// Parameters:
	// int32                              ID                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FSkill                      Ob                                                               (Parm, OutParm, NativeAccessSpecifierPublic)

	void ALoader::GetSkill(int32 ID, struct FSkill* Ob)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "getSkill");

		Params::ALoader_GetSkill_Params Parms{};

		Parms.ID = ID;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		if (Ob != nullptr)
			*Ob = std::move(Parms.Ob);
	}

	// Function metin2f.loader.getServerTime
	// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	// Parameters:
	// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FDateTime ALoader::GetServerTime()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "getServerTime");

		Params::ALoader_GetServerTime_Params Parms{};

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		return Parms.ReturnValue;
	}

	// Function metin2f.loader.getQSlots
	// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
	// Parameters:
	// TArray<int32>                      Qslotse                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	// class ALoader*                     Loader                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ALoader::GetQSlots(TArray<int32>* Qslotse, class ALoader* Loader)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "getQSlots");

		Params::ALoader_GetQSlots_Params Parms{};

		Parms.Loader = Loader;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		if (Qslotse != nullptr)
			*Qslotse = std::move(Parms.Qslotse);
	}

	// Function metin2f.loader.getMob
	// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
	// Parameters:
	// int32                              ID                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FMob                        Mob                                                              (Parm, OutParm, NativeAccessSpecifierPublic)

	void ALoader::GetMob(int32 ID, struct FMob* Mob)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "getMob");

		Params::ALoader_GetMob_Params Parms{};

		Parms.ID = ID;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		if (Mob != nullptr)
			*Mob = std::move(Parms.Mob);
	}

	// Function metin2f.loader.getItemDes
	// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
	// Parameters:
	// int32                              ID                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class FString                      Ob                                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ALoader::GetItemDes(int32 ID, class FString* Ob)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "getItemDes");

		Params::ALoader_GetItemDes_Params Parms{};

		Parms.ID = ID;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		if (Ob != nullptr)
			*Ob = std::move(Parms.Ob);
	}

	// Function metin2f.loader.getItem
	// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
	// Parameters:
	// int32                              ID                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FIitem                      Ob                                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ALoader::GetItem(int32 ID, struct FIitem* Ob, bool* Found)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "getItem");

		Params::ALoader_GetItem_Params Parms{};

		Parms.ID = ID;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		if (Ob != nullptr)
			*Ob = std::move(Parms.Ob);

		if (Found != nullptr)
			*Found = Parms.Found;
	}

	// Function metin2f.loader.getCharData
	// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
	// Parameters:
	// struct FCharData                   CharData                                                         (Parm, OutParm, NativeAccessSpecifierPublic)

	void ALoader::GetCharData(struct FCharData* CharData)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "getCharData");

		Params::ALoader_GetCharData_Params Parms{};

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		if (CharData != nullptr)
			*CharData = std::move(Parms.CharData);
	}

	// Function metin2f.loader.getBox
	// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
	// Parameters:
	// int32                              ID                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               IsBox                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class FString                      Ob                                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ALoader::GetBox(int32 ID, bool* IsBox, class FString* Ob)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "getBox");

		Params::ALoader_GetBox_Params Parms{};

		Parms.ID = ID;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		if (IsBox != nullptr)
			*IsBox = Parms.IsBox;

		if (Ob != nullptr)
			*Ob = std::move(Parms.Ob);
	}

	// Function metin2f.loader.dateDiff
	// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
	// Parameters:
	// struct FDateTime                   D1                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FDateTime                   D2                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FTimespan                   Diff                                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ALoader::DateDiff(const struct FDateTime& D1, const struct FDateTime& D2, struct FTimespan* Diff)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "dateDiff");

		Params::ALoader_DateDiff_Params Parms{};

		Parms.D1 = D1;
		Parms.D2 = D2;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		if (Diff != nullptr)
			*Diff = std::move(Parms.Diff);
	}

	// Function metin2f.loader.canUseSkill
	// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
	// Parameters:
	// int32                              SkillId                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class FString                      Res                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool ALoader::CanUseSkill(int32 SkillId, class FString* Res)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("loader", "canUseSkill");

		Params::ALoader_CanUseSkill_Params Parms{};

		Parms.SkillId = SkillId;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		if (Res != nullptr)
			*Res = std::move(Parms.Res);

		return Parms.ReturnValue;
	}

	// Class metin2f.loader2
	// (Actor)

	class UClass* ALoader2::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("loader2");

		return Clss;
	}

	// loader2 metin2f.Default__loader2
	// (Public, ClassDefaultObject, ArchetypeObject)

	class ALoader2* ALoader2::GetDefaultObj()
	{
		static class ALoader2* Default = nullptr;

		if (!Default)
			Default = static_cast<ALoader2*>(ALoader2::StaticClass()->DefaultObject);

		return Default;
	}

	// Class metin2f.M2_PlaySoundM2
	// (None)

	class UClass* UM2_PlaySoundM2::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("M2_PlaySoundM2");

		return Clss;
	}

	// M2_PlaySoundM2 metin2f.Default__M2_PlaySoundM2
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UM2_PlaySoundM2* UM2_PlaySoundM2::GetDefaultObj()
	{
		static class UM2_PlaySoundM2* Default = nullptr;

		if (!Default)
			Default = static_cast<UM2_PlaySoundM2*>(UM2_PlaySoundM2::StaticClass()->DefaultObject);

		return Default;
	}

	// Class metin2f.metin2fGameModeBase
	// (Actor)

	class UClass* AMetin2fGameModeBase::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("metin2fGameModeBase");

		return Clss;
	}

	// metin2fGameModeBase metin2f.Default__metin2fGameModeBase
	// (Public, ClassDefaultObject, ArchetypeObject)

	class AMetin2fGameModeBase* AMetin2fGameModeBase::GetDefaultObj()
	{
		static class AMetin2fGameModeBase* Default = nullptr;

		if (!Default)
			Default = static_cast<AMetin2fGameModeBase*>(AMetin2fGameModeBase::StaticClass()->DefaultObject);

		return Default;
	}

	// Class metin2f.mobAnimer
	// (None)

	class UClass* UMobAnimer::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("mobAnimer");

		return Clss;
	}

	// mobAnimer metin2f.Default__mobAnimer
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UMobAnimer* UMobAnimer::GetDefaultObj()
	{
		static class UMobAnimer* Default = nullptr;

		if (!Default)
			Default = static_cast<UMobAnimer*>(UMobAnimer::StaticClass()->DefaultObject);

		return Default;
	}

	// Class metin2f.mobNamer
	// (None)

	class UClass* UMobNamer::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("mobNamer");

		return Clss;
	}

	// mobNamer metin2f.Default__mobNamer
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UMobNamer* UMobNamer::GetDefaultObj()
	{
		static class UMobNamer* Default = nullptr;

		if (!Default)
			Default = static_cast<UMobNamer*>(UMobNamer::StaticClass()->DefaultObject);

		return Default;
	}

	// Function metin2f.mobNamer.gettexto
	// (Final, Native, Public, BlueprintCallable)
	// Parameters:
	// class FString                      _textName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class FString UMobNamer::Gettexto(const class FString& _textName)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("mobNamer", "gettexto");

		Params::UMobNamer_Gettexto_Params Parms{};

		Parms._textName = _textName;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		return Parms.ReturnValue;
	}

	// Class metin2f.mount
	// (Actor)

	class UClass* AMount::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("mount");

		return Clss;
	}

	// mount metin2f.Default__mount
	// (Public, ClassDefaultObject, ArchetypeObject)

	class AMount* AMount::GetDefaultObj()
	{
		static class AMount* Default = nullptr;

		if (!Default)
			Default = static_cast<AMount*>(AMount::StaticClass()->DefaultObject);

		return Default;
	}

	// Class metin2f.MyEditorUtilityTask
	// (Field, Struct, Class)

	class UClass* UMyEditorUtilityTask::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MyEditorUtilityTask");

		return Clss;
	}

	// MyEditorUtilityTask metin2f.Default__MyEditorUtilityTask
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UMyEditorUtilityTask* UMyEditorUtilityTask::GetDefaultObj()
	{
		static class UMyEditorUtilityTask* Default = nullptr;

		if (!Default)
			Default = static_cast<UMyEditorUtilityTask*>(UMyEditorUtilityTask::StaticClass()->DefaultObject);

		return Default;
	}

	// Class metin2f.npc
	// (Actor)

	class UClass* ANpc::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("npc");

		return Clss;
	}

	// npc metin2f.Default__npc
	// (Public, ClassDefaultObject, ArchetypeObject)

	class ANpc* ANpc::GetDefaultObj()
	{
		static class ANpc* Default = nullptr;

		if (!Default)
			Default = static_cast<ANpc*>(ANpc::StaticClass()->DefaultObject);

		return Default;
	}

	// Function metin2f.npc.touchStart
	// (Final, Native, Public)
	// Parameters:
	// enum class ETouchIndex             FingerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class UPrimitiveComponent*         TouchedComponent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ANpc::TouchStart(enum class ETouchIndex FingerIndex, class UPrimitiveComponent* TouchedComponent)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("npc", "touchStart");

		Params::ANpc_TouchStart_Params Parms{};

		Parms.FingerIndex = FingerIndex;
		Parms.TouchedComponent = TouchedComponent;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.npc.touchEnd
	// (Final, Native, Public)
	// Parameters:
	// enum class ETouchIndex             FingerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class UPrimitiveComponent*         TouchedComponent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ANpc::TouchEnd(enum class ETouchIndex FingerIndex, class UPrimitiveComponent* TouchedComponent)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("npc", "touchEnd");

		Params::ANpc_TouchEnd_Params Parms{};

		Parms.FingerIndex = FingerIndex;
		Parms.TouchedComponent = TouchedComponent;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.npc.selectedShop
	// (Final, Native, Public, BlueprintCallable)
	// Parameters:

	void ANpc::SelectedShop()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("npc", "selectedShop");

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, nullptr);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.npc.release
	// (Final, Native, Public)
	// Parameters:
	// class UPrimitiveComponent*         ClickedComp                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FKey                        ButtonPressed                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ANpc::Release(class UPrimitiveComponent* ClickedComp, const struct FKey& ButtonPressed)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("npc", "release");

		Params::ANpc_Release_Params Parms{};

		Parms.ClickedComp = ClickedComp;
		Parms.ButtonPressed = ButtonPressed;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.npc.playUSound
	// (Final, Native, Public, BlueprintCallable)
	// Parameters:
	// class USoundBase*                  S                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              Source                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ANpc::PlayUSound(class USoundBase* S, int32 Source, float Volume)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("npc", "playUSound");

		Params::ANpc_PlayUSound_Params Parms{};

		Parms.S = S;
		Parms.Source = Source;
		Parms.Volume = Volume;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.npc.playSound
	// (Final, Native, Public, BlueprintCallable)
	// Parameters:
	// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ANpc::PlaySound(const class FString& Path)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("npc", "playSound");

		Params::ANpc_PlaySound_Params Parms{};

		Parms.Path = Path;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.npc.playHit
	// (Final, Native, Public, BlueprintCallable)
	// Parameters:

	void ANpc::PlayHit()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("npc", "playHit");

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, nullptr);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.npc.makeAttack
	// (Final, Native, Public, BlueprintCallable)
	// Parameters:

	void ANpc::MakeAttack()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("npc", "makeAttack");

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, nullptr);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.npc.hoverout
	// (Final, Native, Public)
	// Parameters:
	// class UPrimitiveComponent*         ClickedComp                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ANpc::Hoverout(class UPrimitiveComponent* ClickedComp)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("npc", "hoverout");

		Params::ANpc_Hoverout_Params Parms{};

		Parms.ClickedComp = ClickedComp;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.npc.hover
	// (Final, Native, Public)
	// Parameters:
	// class UPrimitiveComponent*         ClickedComp                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ANpc::Hover(class UPrimitiveComponent* ClickedComp)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("npc", "hover");

		Params::ANpc_Hover_Params Parms{};

		Parms.ClickedComp = ClickedComp;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.npc.click
	// (Final, Native, Public)
	// Parameters:
	// class UPrimitiveComponent*         ClickedComp                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FKey                        ButtonPressed                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void ANpc::Click(class UPrimitiveComponent* ClickedComp, const struct FKey& ButtonPressed)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("npc", "click");

		Params::ANpc_Click_Params Parms{};

		Parms.ClickedComp = ClickedComp;
		Parms.ButtonPressed = ButtonPressed;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Class metin2f.playerAnimer
	// (None)

	class UClass* UPlayerAnimer::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("playerAnimer");

		return Clss;
	}

	// playerAnimer metin2f.Default__playerAnimer
	// (Public, ClassDefaultObject, ArchetypeObject)

	class UPlayerAnimer* UPlayerAnimer::GetDefaultObj()
	{
		static class UPlayerAnimer* Default = nullptr;

		if (!Default)
			Default = static_cast<UPlayerAnimer*>(UPlayerAnimer::StaticClass()->DefaultObject);

		return Default;
	}

	// Function metin2f.playerAnimer.sendLoc
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:

	void UPlayerAnimer::SendLoc()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerAnimer", "sendLoc");

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, nullptr);

		Func->FunctionFlags = Flgs;
	}

	// Class metin2f.playerMove
	// (Actor, Pawn)

	class UClass* APlayerMove::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("playerMove");

		return Clss;
	}

	// playerMove metin2f.Default__playerMove
	// (Public, ClassDefaultObject, ArchetypeObject)

	class APlayerMove* APlayerMove::GetDefaultObj()
	{
		static class APlayerMove* Default = nullptr;

		if (!Default)
			Default = static_cast<APlayerMove*>(APlayerMove::StaticClass()->DefaultObject);

		return Default;
	}

	// Function metin2f.playerMove.zKey
	// (Final, Native, Protected, BlueprintCallable)
	// Parameters:
	// float                              Rate                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void APlayerMove::ZKey(float Rate)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "zKey");

		Params::APlayerMove_ZKey_Params Parms{};

		Parms.Rate = Rate;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.touchStart
	// (Final, Native, Private)
	// Parameters:
	// enum class ETouchIndex             FingerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class UPrimitiveComponent*         TouchedComponent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void APlayerMove::TouchStart(enum class ETouchIndex FingerIndex, class UPrimitiveComponent* TouchedComponent)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "touchStart");

		Params::APlayerMove_TouchStart_Params Parms{};

		Parms.FingerIndex = FingerIndex;
		Parms.TouchedComponent = TouchedComponent;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.touchEnd
	// (Final, Native, Private)
	// Parameters:
	// enum class ETouchIndex             FingerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class UPrimitiveComponent*         TouchedComponent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void APlayerMove::TouchEnd(enum class ETouchIndex FingerIndex, class UPrimitiveComponent* TouchedComponent)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "touchEnd");

		Params::APlayerMove_TouchEnd_Params Parms{};

		Parms.FingerIndex = FingerIndex;
		Parms.TouchedComponent = TouchedComponent;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.stopAttack
	// (Final, Native, Protected, BlueprintCallable)
	// Parameters:

	void APlayerMove::StopAttack()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "stopAttack");

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, nullptr);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.sendSkill
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:

	void APlayerMove::SendSkill()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "sendSkill");

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, nullptr);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.sendLoc
	// (Final, Native, Public, BlueprintCallable)
	// Parameters:
	// bool                               IsNext                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void APlayerMove::SendLoc(bool IsNext)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "sendLoc");

		Params::APlayerMove_SendLoc_Params Parms{};

		Parms.IsNext = IsNext;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.sendAttack
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// bool                               IsStrong                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void APlayerMove::SendAttack(bool IsStrong)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "sendAttack");

		Params::APlayerMove_SendAttack_Params Parms{};

		Parms.IsStrong = IsStrong;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.selectNearTarget
	// (Final, Native, Public, BlueprintCallable)
	// Parameters:

	void APlayerMove::SelectNearTarget()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "selectNearTarget");

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, nullptr);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.playUSound
	// (Final, Native, Public, BlueprintCallable)
	// Parameters:
	// class USoundBase*                  S                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void APlayerMove::PlayUSound(class USoundBase* S)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "playUSound");

		Params::APlayerMove_PlayUSound_Params Parms{};

		Parms.S = S;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.playSound
	// (Final, Native, Public, BlueprintCallable)
	// Parameters:
	// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void APlayerMove::PlaySound(const class FString& Path)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "playSound");

		Params::APlayerMove_PlaySound_Params Parms{};

		Parms.Path = Path;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.OnOverlapEndCap
	// (Final, Native, Private)
	// Parameters:
	// class UPrimitiveComponent*         OverlappedComp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void APlayerMove::OnOverlapEndCap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "OnOverlapEndCap");

		Params::APlayerMove_OnOverlapEndCap_Params Parms{};

		Parms.OverlappedComp = OverlappedComp;
		Parms.OtherActor = OtherActor;
		Parms.OtherComp = OtherComp;
		Parms.OtherBodyIndex = OtherBodyIndex;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.OnOverlapEndBox
	// (Final, Native, Private)
	// Parameters:
	// class UPrimitiveComponent*         OverlappedComp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void APlayerMove::OnOverlapEndBox(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "OnOverlapEndBox");

		Params::APlayerMove_OnOverlapEndBox_Params Parms{};

		Parms.OverlappedComp = OverlappedComp;
		Parms.OtherActor = OtherActor;
		Parms.OtherComp = OtherComp;
		Parms.OtherBodyIndex = OtherBodyIndex;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.OnOverlapEnd
	// (Final, Native, Private)
	// Parameters:
	// class UPrimitiveComponent*         OverlappedComp                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void APlayerMove::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "OnOverlapEnd");

		Params::APlayerMove_OnOverlapEnd_Params Parms{};

		Parms.OverlappedComp = OverlappedComp;
		Parms.OtherActor = OtherActor;
		Parms.OtherComp = OtherComp;
		Parms.OtherBodyIndex = OtherBodyIndex;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.OnOverlapBeginCap
	// (Final, Native, Private, HasOutParams)
	// Parameters:
	// class UPrimitiveComponent*         OverlapComponent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	void APlayerMove::OnOverlapBeginCap(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "OnOverlapBeginCap");

		Params::APlayerMove_OnOverlapBeginCap_Params Parms{};

		Parms.OverlapComponent = OverlapComponent;
		Parms.OtherActor = OtherActor;
		Parms.OtherComp = OtherComp;
		Parms.OtherBodyIndex = OtherBodyIndex;
		Parms.bFromSweep = bFromSweep;
		Parms.SweepResult = SweepResult;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.OnOverlapBeginBox
	// (Final, Native, Private, HasOutParams)
	// Parameters:
	// class UPrimitiveComponent*         OverlapComponent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	void APlayerMove::OnOverlapBeginBox(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "OnOverlapBeginBox");

		Params::APlayerMove_OnOverlapBeginBox_Params Parms{};

		Parms.OverlapComponent = OverlapComponent;
		Parms.OtherActor = OtherActor;
		Parms.OtherComp = OtherComp;
		Parms.OtherBodyIndex = OtherBodyIndex;
		Parms.bFromSweep = bFromSweep;
		Parms.SweepResult = SweepResult;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.OnOverlapBegin
	// (Final, Native, Private, HasOutParams)
	// Parameters:
	// class UPrimitiveComponent*         OverlapComponent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	void APlayerMove::OnOverlapBegin(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "OnOverlapBegin");

		Params::APlayerMove_OnOverlapBegin_Params Parms{};

		Parms.OverlapComponent = OverlapComponent;
		Parms.OtherActor = OtherActor;
		Parms.OtherComp = OtherComp;
		Parms.OtherBodyIndex = OtherBodyIndex;
		Parms.bFromSweep = bFromSweep;
		Parms.SweepResult = SweepResult;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.lookSkill
	// (Final, Native, Public, BlueprintCallable)
	// Parameters:

	void APlayerMove::LookSkill()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "lookSkill");

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, nullptr);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.hoverout
	// (Final, Native, Private)
	// Parameters:
	// class UPrimitiveComponent*         ClickedComp                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void APlayerMove::Hoverout(class UPrimitiveComponent* ClickedComp)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "hoverout");

		Params::APlayerMove_Hoverout_Params Parms{};

		Parms.ClickedComp = ClickedComp;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.hover
	// (Final, Native, Private)
	// Parameters:
	// class UPrimitiveComponent*         ClickedComp                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void APlayerMove::Hover(class UPrimitiveComponent* ClickedComp)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "hover");

		Params::APlayerMove_Hover_Params Parms{};

		Parms.ClickedComp = ClickedComp;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.doSkillDamage
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// class AActor*                      From                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FSkill                      Skill                                                            (Parm, NativeAccessSpecifierPublic)
	// bool                               AffectCircle                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// float                              AffectDirMin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// float                              AffectDirMax                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// float                              AffectDistance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               DoEffect                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               OneTarget                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               FarAttack                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               WillDrop                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               AffectTargetArea                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void APlayerMove::DoSkillDamage(class AActor* From, const struct FSkill& Skill, bool AffectCircle, float AffectDirMin, float AffectDirMax, float AffectDistance, bool DoEffect, bool OneTarget, bool FarAttack, bool WillDrop, bool AffectTargetArea)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "doSkillDamage");

		Params::APlayerMove_DoSkillDamage_Params Parms{};

		Parms.From = From;
		Parms.Skill = Skill;
		Parms.AffectCircle = AffectCircle;
		Parms.AffectDirMin = AffectDirMin;
		Parms.AffectDirMax = AffectDirMax;
		Parms.AffectDistance = AffectDistance;
		Parms.DoEffect = DoEffect;
		Parms.OneTarget = OneTarget;
		Parms.FarAttack = FarAttack;
		Parms.WillDrop = WillDrop;
		Parms.AffectTargetArea = AffectTargetArea;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.doAttackState
	// (Final, Native, Public, BlueprintCallable)
	// Parameters:
	// bool                               IsStrong                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               AffectCircle                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// float                              AffectDirMin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// float                              AffectDirMax                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// float                              AffectDistance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void APlayerMove::DoAttackState(bool IsStrong, bool AffectCircle, float AffectDirMin, float AffectDirMax, float AffectDistance)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "doAttackState");

		Params::APlayerMove_DoAttackState_Params Parms{};

		Parms.IsStrong = IsStrong;
		Parms.AffectCircle = AffectCircle;
		Parms.AffectDirMin = AffectDirMin;
		Parms.AffectDirMax = AffectDirMax;
		Parms.AffectDistance = AffectDistance;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.doAttack
	// (Final, Native, Protected, BlueprintCallable)
	// Parameters:

	void APlayerMove::DoAttack()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "doAttack");

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, nullptr);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.click
	// (Final, Native, Private)
	// Parameters:
	// class UPrimitiveComponent*         ClickedComp                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// struct FKey                        ButtonPressed                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void APlayerMove::Click(class UPrimitiveComponent* ClickedComp, const struct FKey& ButtonPressed)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "click");

		Params::APlayerMove_Click_Params Parms{};

		Parms.ClickedComp = ClickedComp;
		Parms.ButtonPressed = ButtonPressed;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.checkSkillWillHit
	// (Final, Native, Static, Public, BlueprintCallable)
	// Parameters:
	// class AActor*                      From                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// class AActor*                      Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               AffectCircle                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               FarAttack                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// float                              AffectDirMin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// float                              AffectDirMax                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               OneTarget                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// float                              AffectDistance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               AffectTargetArea                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool APlayerMove::CheckSkillWillHit(class AActor* From, class AActor* Target, bool AffectCircle, bool FarAttack, float AffectDirMin, float AffectDirMax, bool OneTarget, float AffectDistance, bool AffectTargetArea)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "checkSkillWillHit");

		Params::APlayerMove_CheckSkillWillHit_Params Parms{};

		Parms.From = From;
		Parms.Target = Target;
		Parms.AffectCircle = AffectCircle;
		Parms.FarAttack = FarAttack;
		Parms.AffectDirMin = AffectDirMin;
		Parms.AffectDirMax = AffectDirMax;
		Parms.OneTarget = OneTarget;
		Parms.AffectDistance = AffectDistance;
		Parms.AffectTargetArea = AffectTargetArea;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;

		return Parms.ReturnValue;
	}

	// Function metin2f.playerMove.calNext
	// (Final, Native, Public, BlueprintCallable)
	// Parameters:

	void APlayerMove::CalNext()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "calNext");

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, nullptr);

		Func->FunctionFlags = Flgs;
	}

	// Function metin2f.playerMove.animSender
	// (Final, Native, Public, BlueprintCallable)
	// Parameters:

	void APlayerMove::AnimSender()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction("playerMove", "animSender");

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, nullptr);

		Func->FunctionFlags = Flgs;
	}

	// Class metin2f.spawner
	// (None)

	class UClass* USpawner::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("spawner");

		return Clss;
	}

	// spawner metin2f.Default__spawner
	// (Public, ClassDefaultObject, ArchetypeObject)

	class USpawner* USpawner::GetDefaultObj()
	{
		static class USpawner* Default = nullptr;

		if (!Default)
			Default = static_cast<USpawner*>(USpawner::StaticClass()->DefaultObject);

		return Default;
	}
}