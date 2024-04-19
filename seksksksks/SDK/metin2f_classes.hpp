#pragma once

// Dumped with Dumper-7!

namespace SDK {
	//---------------------------------------------------------------------------------------------------------------------
	// CLASSES
	//---------------------------------------------------------------------------------------------------------------------

	// 0xD8 (0x2E0 - 0x208)
	// Class metin2f.actorName
	class UActorName : public USceneComponent
	{
	public:
		class UTextRenderComponent* _displayText;                                      // 0x208(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        Height;                                            // 0x210(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_1D6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class UWidgetComponent* MyWidget;                                          // 0x218(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor* Parent;                                            // 0x220(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_1D7[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TSubclassOf<class UMobNamer>                 QuestsMenuClass;                                   // 0x270(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget* QuestsMenu;                                        // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMobNamer* N;                                                 // 0x280(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         IsItem;                                            // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_1D9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		int32                                        ItemId;                                            // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                Itemsahip;                                         // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_1DC[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		struct FColor                                Tc;                                                // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_1DE[0xD];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         Shower;                                            // 0x2B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_1DF[0x1A];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         Check;                                             // 0x2D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_1E0[0xB];                                      // Fixing Size Of Struct [ Dumper-7 ]

		static class UClass* StaticClass();
		static class UActorName* GetDefaultObj();
	};

	// 0x18 (0x58 - 0x40)
	// Class metin2f.animAction
	class UAnimAction : public UAnimNotify
	{
	public:
		class FString                                Action;                                            // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        Value;                                             // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_1E8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

		static class UClass* StaticClass();
		static class UAnimAction* GetDefaultObj();
	};

	// 0x1F8 (0x6B0 - 0x4B8)
	// Class metin2f.charView
	class ACharView : public ACharacter
	{
	public:
		uint8                                        Pad_224[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class USkeletalMeshComponent* H;                                                 // 0x4C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent* Weapon;                                            // 0x4C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent* Weapon2;                                           // 0x4D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UActorName* Mename;                                            // 0x4D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPlayerAnimer* Anim;                                              // 0x4E0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent* MountSke;                                          // 0x4E8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_226[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class UParticleSystemComponent* AuraP;                                             // 0x4F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FEffect>                       Effects;                                           // 0x500(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
		uint8                                        Pad_227[0x52];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         Inited;                                            // 0x562(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Loaded;                                            // 0x563(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        ViewId;                                            // 0x564(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCharData                             Data;                                              // 0x568(0x148)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

		static class UClass* StaticClass();
		static class ACharView* GetDefaultObj();

		void TouchStart(enum class ETouchIndex FingerIndex, class UPrimitiveComponent* TouchedComponent);
		void TouchEnd(enum class ETouchIndex FingerIndex, class UPrimitiveComponent* TouchedComponent);
		void OnOverlapEndCap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
		void OnOverlapBeginCap(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
		void OnOverlapBegin(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
		void Hoverout(class UPrimitiveComponent* ClickedComp);
		void Hover(class UPrimitiveComponent* ClickedComp);
		void Click(class UPrimitiveComponent* ClickedComp, const struct FKey& ButtonPressed);
	};

	// 0x48 (0x270 - 0x228)
	// Class metin2f.ChunkUpdater
	class AChunkUpdater : public AActor
	{
	public:
		uint8                                        Pad_236[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		FMulticastInlineDelegateProperty_            OnPatchComplete;                                   // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		TArray<int32>                                ChunkDownloadList;                                 // 0x240(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
		bool                                         DownloadStarted;                                   // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_237[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		int32                                        WillDownloadMb;                                    // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                ChunkVersion;                                      // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         ChunksLoaded;                                      // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         DownloadOk;                                        // 0x269(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_238[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

		static class UClass* StaticClass();
		static class AChunkUpdater* GetDefaultObj();

		void UpdateGame();
		void StartIssueDownload();
		bool PatchGame();
		void LoadPaks();
		void GetLoadingProgress(int32* FilesDownloaded, int32* TotalFilesToDownload, float* DownloadPercent, int32* ChunksMounted, int32* TotalChunksToMount, float* MountPercent);
	};

	// 0x30 (0x70 - 0x40)
	// Class metin2f.doSkillDamage
	class UDoSkillDamage : public UAnimNotify
	{
	public:
		int32                                        SkillId;                                           // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        PId;                                               // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         DoOnlyOnce;                                        // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         AffectCircle;                                      // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_23B[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        AffectDirMin;                                      // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        AffectDirMax;                                      // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        AffectDistance;                                    // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         DoEffect;                                          // 0x58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         OneTarget;                                         // 0x59(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         FarAttack;                                         // 0x5A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         AffectTargetArea;                                  // 0x5B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         WillDrop;                                          // 0x5C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         DoState;                                           // 0x5D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_23E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        DoStateAfter;                                      // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_23F[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

		static class UClass* StaticClass();
		static class UDoSkillDamage* GetDefaultObj();
	};

	// 0xA8 (0x2D0 - 0x228)
	// Class metin2f.droppedItem
	class ADroppedItem : public AActor
	{
	public:
		uint8                                        Pad_250[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        Height;                                            // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Disabled;                                          // 0x234(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_251[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		struct FDateTime                             DropedAt;                                          // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent* Obj;                                               // 0x240(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_252[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		class UWidgetComponent* MyWidget;                                          // 0x258(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_253[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		class UMobNamer* Ne;                                                // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UBoxComponent* Cap;                                               // 0x280(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCapsuleComponent* CapDet;                                            // 0x288(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         SetOk;                                             // 0x290(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_257[0x2F];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         SetLoc;                                            // 0x2C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_259[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		int32                                        C;                                                 // 0x2C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UParticleSystemComponent* Particle;                                          // 0x2C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

		static class UClass* StaticClass();
		static class ADroppedItem* GetDefaultObj();

		void OnOverlapBegin(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
		void OnCompHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	};

	// 0x8360 (0x8510 - 0x1B0)
	// Class metin2f.fmdata
	class UFmdata : public UGameInstance
	{
	public:
		bool                                         Inited;                                            // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         ServerAuthReady;                                   // 0x1B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_25F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class AActor* SelectedActor;                                     // 0x1B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor* LastSkillSelectedActor;                            // 0x1C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         SelectedActorByClick;                              // 0x1C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         ItemsLoaded;                                       // 0x1C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         IsEs2;                                             // 0x1CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         IsMobile;                                          // 0x1CB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         IsEditor;                                          // 0x1CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         FirstInit;                                         // 0x1CD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         UiPress;                                           // 0x1CE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         UiHover;                                           // 0x1CF(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Dc;                                                // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         RemoveThis;                                        // 0x1D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         InstanceInitOk;                                    // 0x1D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         FirstConOk;                                        // 0x1D3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         CanReCon;                                          // 0x1D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         EnteredGame;                                       // 0x1D5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         CanCamMove;                                        // 0x1D6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_260[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class FString                                Nowmap;                                            // 0x1D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGameManager* Gm;                                                // 0x1E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget* Joy;                                               // 0x1F0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AIcamera* Camera;                                            // 0x1F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        Playerid;                                          // 0x200(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_263[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class FString                                Playername;                                        // 0x208(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UEditableTextBox* Ee;                                                // 0x218(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget* UI;                                                // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         UiItemDraging;                                     // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_264[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class ANpc* UiItemDragingMob;                                  // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_265[0x7588];                                   // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         ConnectedServer;                                   // 0x77C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         NoInternet;                                        // 0x77C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         ServerShutDown;                                    // 0x77C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         VersionOld;                                        // 0x77C3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_266[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class FString                                AndroidLink;                                       // 0x77C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                IOSLink;                                           // 0x77D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         MapLoginOk;                                        // 0x77E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         ResetGame;                                         // 0x77E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         GoingLogin;                                        // 0x77EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_267[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FScreenMenu>                   Wmenus;                                            // 0x77F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                         WorldFocus;                                        // 0x7800(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         GameClickLocked;                                   // 0x7801(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_269[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class UUserWidget* OpenedWindow;                                      // 0x7808(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         PrivateShopOpen;                                   // 0x7810(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_26A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		struct FVector                               PrivateShopOpenedPos;                              // 0x7814(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int32>                                PrivateShopOpened;                                 // 0x7820(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                         DoMapper;                                          // 0x7830(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_26B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class FString                                DoMapperMap;                                       // 0x7838(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                PvpMode;                                           // 0x7848(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                Lang;                                              // 0x7858(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                AuthLogin;                                         // 0x7868(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundAttenuation* DefaultSoundSettings;                              // 0x7878(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameSettings                         GameSettings;                                      // 0x7880(0x60)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
		struct FServerSettings                       ServerSettings;                                    // 0x78E0(0x4)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
		bool                                         LoaderLoaded;                                      // 0x78E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         ItemshopOpen;                                      // 0x78E5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         MobileLoaded;                                      // 0x78E6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_26E[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		TMap<int32, struct FSkill>                   IskillData;                                        // 0x78E8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, struct FMob>                     Mobs;                                              // 0x7938(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>           NpcListSets;                                       // 0x7988(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, class FString>                   NpcList;                                           // 0x79D8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<class FString, struct FMapHEI>          HeiMAP;                                            // 0x7A28(0x50)(NativeAccessSpecifierPublic)
		int32                                        HeiMapStartX;                                      // 0x7A78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        HeiMapStartY;                                      // 0x7A7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        HeiMapEndX;                                        // 0x7A80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        HeiMapEndY;                                        // 0x7A84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<int32, struct FSkinData>                WarriorArmorData;                                  // 0x7A88(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, struct FSkinData>                WarriorHairData;                                   // 0x7AD8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, struct FSkinData>                Warrior2ArmorData;                                 // 0x7B28(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, struct FSkinData>                Warrior2HairData;                                  // 0x7B78(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, struct FSkinData>                SuraArmorData;                                     // 0x7BC8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, struct FSkinData>                SuraHairData;                                      // 0x7C18(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, struct FSkinData>                Sura2ArmorData;                                    // 0x7C68(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, struct FSkinData>                Sura2HairData;                                     // 0x7CB8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, struct FSkinData>                NinjaArmorData;                                    // 0x7D08(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, struct FSkinData>                NinjaHairData;                                     // 0x7D58(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, struct FSkinData>                Ninja2ArmorData;                                   // 0x7DA8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, struct FSkinData>                Ninja2HairData;                                    // 0x7DF8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, struct FSkinData>                ShamanArmorData;                                   // 0x7E48(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, struct FSkinData>                ShamanHairData;                                    // 0x7E98(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, struct FSkinData>                Shaman2ArmorData;                                  // 0x7EE8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, struct FSkinData>                Shaman2HairData;                                   // 0x7F38(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, class UTexture2D*>               WarriorHairDataIndex;                              // 0x7F88(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, class UTexture2D*>               Warrior2HairDataIndex;                             // 0x7FD8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, class UTexture2D*>               SuraHairDataIndex;                                 // 0x8028(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, class UTexture2D*>               Sura2HairDataIndex;                                // 0x8078(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, class UTexture2D*>               NinjaHairDataIndex;                                // 0x80C8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, class UTexture2D*>               Ninja2HairDataIndex;                               // 0x8118(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, class UTexture2D*>               ShamanHairDataIndex;                               // 0x8168(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, class UTexture2D*>               Shaman2HairDataIndex;                              // 0x81B8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, class FString>                   Locale;                                            // 0x8208(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>           LocaleGame;                                        // 0x8258(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>           LocaleInter;                                       // 0x82A8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, class FString>                   QuestText;                                         // 0x82F8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, struct FHairData>                HairData;                                          // 0x8348(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		class FString                                WarriorDesc;                                       // 0x8398(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                SuraDesc;                                          // 0x83A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                ShamanDesc;                                        // 0x83B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                NinjaDesc;                                         // 0x83C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                OkeyDesc;                                          // 0x83D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                        Insult;                                            // 0x83E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FServerData>                   ServerDatas;                                       // 0x83F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FServerData                           SelectedServer;                                    // 0x8408(0x30)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		int32                                        SelectedServerIndex;                               // 0x8438(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_277[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		TMap<int32, struct FCharacterPack>           CharPacks;                                         // 0x8440(0x50)(NativeAccessSpecifierPublic)
		class UMaterialInstance* MainSkinImport;                                    // 0x8490(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstance* MainSkinHair;                                      // 0x8498(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstance* MainSkinWeapon;                                    // 0x84A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class USkeletalMesh*>                 ShopMeshes;                                        // 0x84A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		class UParticleSystem* HitEffect;                                         // 0x84B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class USoundBase*>       LoadedSounds;                                      // 0x84C0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

		static class UClass* StaticClass();
		static class UFmdata* GetDefaultObj();

		void Addchat(int32 Sender, const class FString& SenderName, const class FString& Message);
	};

	// 0x9A8 (0xBD0 - 0x228)
	// Class metin2f.gameManager
	class AGameManager : public AActor
	{
	public:
		uint8                                        Pad_2C2[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         HeiLoaded;                                         // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         HeiLoading;                                        // 0x259(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         HeiLoadOk;                                         // 0x25A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_2C5[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		int32                                        WillLoad;                                          // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        WillLoaded;                                        // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_2C6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<class FString>                        Langs;                                             // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		uint8                                        Pad_2C7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<class FString>                        Efsunlar;                                          // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		uint8                                        Pad_2C8[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		class APlayerMove* Player;                                            // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_2CA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class AIcamera* Cam;                                               // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ALoader* Loader;                                            // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_2CC[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		struct FDateTime                             SpawnTime;                                         // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDateTime                             LastPing;                                          // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                IpLocGet;                                          // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               ListenerPos;                                       // 0x368(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                              ListenerRot;                                       // 0x374(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FSoundAttenuationSettings             GlobalActorSound;                                  // 0x380(0x3A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		class USoundConcurrency* DefaultConcurrent;                                 // 0x720(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundAttenuation* DefaultAttenuation;                                // 0x728(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstance* UMat;                                              // 0x730(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundBase* HitSound;                                          // 0x738(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_2CE[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		class FString                                Mac;                                               // 0x758(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWorld* World;                                             // 0x768(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TSubclassOf<class UUserWidget>               DropInfo;                                          // 0x770(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TSubclassOf<class UUserWidget>               ActorName;                                         // 0x778(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TSubclassOf<class UUserWidget>               ActorNameMob;                                      // 0x780(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TSubclassOf<class UUserWidget>               ActorNameRPlayer;                                  // 0x788(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TSubclassOf<class UGameInstance>             M2dataInstance;                                    // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TSubclassOf<class UGameInstance>             FmdataInfo;                                        // 0x798(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<int32, struct FDropItem>                Drops;                                             // 0x7A0(0x50)(NativeAccessSpecifierPublic)
		uint8                                        Pad_2D1[0xC0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		class FString                                Mapname;                                           // 0x8B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                LoadMapname;                                       // 0x8C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         DoSpawn;                                           // 0x8D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_2D4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		int32                                        NowSkillUse;                                       // 0x8D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_2D5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class UParticleSystem* SelectEffect;                                      // 0x8E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UParticleSystem* SelectEffect_hover;                                // 0x8E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<int32, struct FEffectData>              EffectDatabase;                                    // 0x8F0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
		uint8                                        Pad_2D7[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		struct FVector                               PlayerPos;                                         // 0x950(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_2D8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class UParticleSystem* ExpEffect;                                         // 0x960(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         LeftDown;                                          // 0x968(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_2D9[0x57];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TMap<int32, struct FXmob>                    Mobs;                                              // 0x9C0(0x50)(NativeAccessSpecifierPublic)
		TMap<int32, struct FXmob>                    Metins;                                            // 0xA10(0x50)(NativeAccessSpecifierPublic)
		TMap<int32, struct FXmob>                    Players;                                           // 0xA60(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, struct FXmob>                    PrivShops;                                         // 0xAB0(0x50)(NativeAccessSpecifierPublic)
		uint8                                        Pad_2DA[0xD0];                                     // Fixing Size Of Struct [ Dumper-7 ]

		static class UClass* StaticClass();
		static class AGameManager* GetDefaultObj();

		void ShowKeyboard();
		void SetM2dataReferences();
		void SendPacket(int32 PId, const TArray<int32>& Ints, const TArray<class FString>& Strings);
		void SelectActor(class AActor* Actor, bool IsAttack, bool IsMouseClick);
		void Recon();
		class FString Qtext(const class FString& Name);
		void PlayUSoundAtPos(class USoundBase* S, const struct FVector& Pos, float Sound);
		void PlaySoundAtPos(const class FString& Path, const struct FVector& Pos, float Volume, bool IsUISound);
		void PlaySound(const class FString& Path);
		class FString LongToString(int64 I);
		class UObject* LoadObject(class UObject* Outer, const class FString& Loc);
		bool IsValidInput(const class FString& Text);
		void InitMobile();
		class FString Gtext(const class FString& Name);
		TArray<struct FVector> GetVertexs(class UStaticMeshComponent* C, int32 Tolerance);
		void GetLoc(const class FString& Ip);
		class UFmdata* Getgame();
		class FString FormatText(const class FString& Name, const TArray<class FString>& Strings, const TArray<int32>& Ints);
		void ExitGame();
		class FString EncryptString(const class FString& InputString, const class FString& Key);
		class FString DotNumberS(const class FString& NumberString);
		class FString DotNumber(int32 Number);
		class FString DecryptString(const class FString& InputString, const class FString& Key);
		void CheckM2data(class UWorld* World);
		bool CanAttack(class ANpc* Player);
		void _loadMap2(const class FString& Name, class UGameInstance* Game);
	};

	// 0xF0 (0x318 - 0x228)
	// Class metin2f.go
	class AGo : public AActor
	{
	public:
		bool                                         GoActor;                                           // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_2E2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		struct FVector                               GoPos;                                             // 0x22C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               StartPos;                                          // 0x238(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_2E4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class USphereComponent* Sph;                                               // 0x248(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor* Target;                                            // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         IsDirect;                                          // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Go;                                                // 0x259(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         IsArrow;                                           // 0x25A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_2E6[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        IsDirectioner;                                     // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               DirectionerLast;                                   // 0x260(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               Direction;                                         // 0x26C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         AttachSoketForGo;                                  // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         DirectionSet;                                      // 0x279(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_2E9[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        MinShowTime;                                       // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        Speed;                                             // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        Speed2;                                            // 0x284(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        Speed3;                                            // 0x288(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        RandX;                                             // 0x28C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        RandY;                                             // 0x290(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        RandZ;                                             // 0x294(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        WaitForGo;                                         // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_2EC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class USkeletalMeshComponent* Ske;                                               // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                SocketName;                                        // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                              StartRot;                                          // 0x2B8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                        RandomNear;                                        // 0x2C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UParticleSystemComponent* Effect;                                            // 0x2C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UParticleSystemComponent* Effect2;                                           // 0x2D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_2ED[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        RandomerTimer;                                     // 0x2DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_2EF[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        DestroyTimer;                                      // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         DropOnHit;                                         // 0x2F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         AffectAllHit;                                      // 0x2F5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         DamageOnHit;                                       // 0x2F6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_2F2[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        GoSize;                                            // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        DestroyDistance;                                   // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        AffectDistance;                                    // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         SpawnOnTarget;                                     // 0x304(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_2F6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class USoundBase* HitSound;                                          // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_2F7[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

		static class UClass* StaticClass();
		static class AGo* GetDefaultObj();

		void OnOverlapBeginCap(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	};

	// 0x0 (0x40 - 0x40)
	// Class metin2f.goTargetEffect
	class UGoTargetEffect : public UAnimNotify
	{
	public:

		static class UClass* StaticClass();
		static class UGoTargetEffect* GetDefaultObj();
	};

	// 0x158 (0x380 - 0x228)
	// Class metin2f.icamera
	class AIcamera : public AActor
	{
	public:
		class USpringArmComponent* CameraBoom;                                        // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCameraComponent* FollowCamera;                                      // 0x230(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAudioComponent* Sound;                                             // 0x238(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_300[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        CurrentDistance;                                   // 0x244(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               Add;                                               // 0x248(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_301[0x1C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        X;                                                 // 0x270(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        Y;                                                 // 0x274(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Stop;                                              // 0x278(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_305[0x1B];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         ShowCam;                                           // 0x294(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_306[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		struct FVector                               ShowCamPos;                                        // 0x298(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                              ShowCamRot;                                        // 0x2A4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                         StopRot;                                           // 0x2B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_307[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		struct FVector                               Diff;                                              // 0x2B4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_308[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        MaxDistance;                                       // 0x2C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        DesDis;                                            // 0x2C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        CurHeig;                                           // 0x2CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        CamSpeed;                                          // 0x2D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        RotateSpeed;                                       // 0x2D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_309[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		struct FQuat                                 Seho;                                              // 0x2E0(0x10)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                               J;                                                 // 0x2F0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        Hei;                                               // 0x2FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        Speedom;                                           // 0x300(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               LastTargetPos;                                     // 0x304(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        AngleAxis;                                         // 0x310(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        AngleAxis2;                                        // 0x314(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        AngleAxis3;                                        // 0x318(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               Dimensions;                                        // 0x31C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               AxisVector;                                        // 0x328(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               AxisVector2;                                       // 0x334(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        Multiplier;                                        // 0x340(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               Impa;                                              // 0x344(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        CorDist;                                           // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Rotew;                                             // 0x354(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Posw;                                              // 0x355(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_30B[0x2A];                                     // Fixing Size Of Struct [ Dumper-7 ]

		static class UClass* StaticClass();
		static class AIcamera* GetDefaultObj();

		void ChangeTargetCam(class AActor* Target);
	};

	// 0x888 (0xAB0 - 0x228)
	// Class metin2f.loader
	class ALoader : public AActor
	{
	public:
		uint8                                        Pad_349[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         SkillDataGet;                                      // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_34A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		struct FPlayerSetting                        PlayerSettings;                                    // 0x23C(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
		uint8                                        Pad_34B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		struct FMapHEI                               NowHEI;                                            // 0x250(0x58)(NativeAccessSpecifierPublic)
		TArray<int32>                                QSlots;                                            // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TMap<int32, struct FSkill>                   PlayerSkills;                                      // 0x2B8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TArray<int32>                                MeDamgeds;                                         // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<int32>                                GotDamgeds;                                        // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<int32>                                GotKritiks;                                        // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<int32>                                MeKritiks;                                         // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FInvItem>                      CUpdates;                                          // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FInvItem>                      Drops;                                             // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		uint8                                        Pad_34D[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FMob>                          TempData1;                                         // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FShopData>                     WaitingShop;                                       // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FChatData>                     WaitingChats;                                      // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FChatData>                     WaitingMsgBoxs;                                    // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<int32>                                DropsRemove;                                       // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<int32>                                DropsActive;                                       // 0x3D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<int32>                                ResetSlots;                                        // 0x3E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FUstData>                      UstDatas;                                          // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FIquest>                       Iquests;                                           // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                         IquestsReset;                                      // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_350[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FGardiTalk>                    GardiTalks;                                        // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FRefine>                       Refines;                                           // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<int32>                                EfsunOrans;                                        // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                         EfsunOransGet;                                     // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         EfsunOransUpdate;                                  // 0x449(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_352[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FInvUpdate>                    InvUpdates;                                        // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FInvUpdate>                    QuickUpdates;                                      // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FWSlotUpdate>                  WSlotUpdates;                                      // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FPlayerProfile>                FriendRequests;                                    // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FFriendsData>                  FriendsData;                                       // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FFriendsData>                  LoncaFriendsData;                                  // 0x4A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FPlayerProfile>                FriendsDataAdd;                                    // 0x4B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FPlayerProfile>                FriendsDataRemove;                                 // 0x4C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FPlayerProfile>                FriendOnlines;                                     // 0x4D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FPlayerProfile>                FriendOnlinesOff;                                  // 0x4E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FPlayerProfile>                LoncaFriendOnlinesOff;                             // 0x4F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FDmData>                       DmDatas;                                           // 0x500(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FNewDm>                        DmDataAdds;                                        // 0x510(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FPlayerProfile>                TradeDatas;                                        // 0x520(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FInvItem>                      TradeAdds;                                         // 0x530(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FInvItem>                      TradeRemoves;                                      // 0x540(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FInvItem>                      TradeLocks;                                        // 0x550(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                         TradeOk;                                           // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_357[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		struct FGroupData                            GroupData;                                         // 0x568(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TArray<struct FPlayerProfile>                GroupWant;                                         // 0x588(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FPlayerProfile>                GroupRemoves;                                      // 0x598(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                         GroupDelete;                                       // 0x5A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_358[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FPlayerProfile>                GroupOnlinechanges;                                // 0x5B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		uint8                                        Pad_359[0xA0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FPlayerProfile>                WsWant;                                            // 0x660(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FPlayerProfile>                WsStart;                                           // 0x670(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                         DoReSpawn;                                         // 0x680(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_35C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FAskBoxData>                   AskBoxes;                                          // 0x688(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FHavaiData>                    WaitingHavais;                                     // 0x698(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                         GetDmData;                                         // 0x6A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         GetCreateShop;                                     // 0x6A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         GetCreateShopPriemium;                             // 0x6AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         GetTakeShopItems;                                  // 0x6AB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        TakeShopItemsCount;                                // 0x6AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         GetOpenMall;                                       // 0x6B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_35E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<int32>                                PrivShopBuys;                                      // 0x6B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<int32>                                OpenWindows;                                       // 0x6C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FEventData>                    EventDatas;                                        // 0x6D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                         EventDatasInit;                                    // 0x6E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_360[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		struct FDateTime                             ServerTime;                                        // 0x6F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDateTime                             LoginTime;                                         // 0x6F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         ClearUst;                                          // 0x700(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         CloseTrade;                                        // 0x701(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_361[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class UPlayerAnimer* PlayerAnimer;                                      // 0x708(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPrivShopData>                 PrivShops;                                         // 0x710(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FPrivShopData>                 CreateShopData;                                    // 0x720(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FPrivShopData>                 MallData;                                          // 0x730(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<int32>                                AskFishData;                                       // 0x740(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		int32                                        AskFishId;                                         // 0x750(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_362[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FLightPoint>                   LightPoints;                                       // 0x758(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TMap<int32, struct FDropLoc>                 DropLocs;                                          // 0x768(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TArray<struct FNpcTalk>                      Talks;                                             // 0x7B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		int32                                        DropLocCounter;                                    // 0x7C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         CloseShop;                                         // 0x7CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_365[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		struct FMapData                              Map;                                               // 0x7D0(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		bool                                         LoginGet;                                          // 0x7F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Loginok;                                           // 0x7F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         SmsOk;                                             // 0x7FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         SmsGetto;                                          // 0x7FB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        LoginResponse;                                     // 0x7FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                UserName;                                          // 0x800(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FCharData>                     Chars;                                             // 0x810(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		class UFmdata* Game;                                              // 0x820(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCharData                             CharData;                                          // 0x828(0x148)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		TMap<int32, class USkeletalMesh*>            MobsCache;                                         // 0x970(0x50)(NativeAccessSpecifierPublic)
		TMap<int32, class UObject*>                  MobsAnimCache;                                     // 0x9C0(0x50)(NativeAccessSpecifierPublic)
		TMap<int32, int32>                           MobsSizeCache;                                     // 0xA10(0x50)(NativeAccessSpecifierPublic)
		uint8                                        Pad_368[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

		static class UClass* StaticClass();
		static class ALoader* GetDefaultObj();

		void UseSkill(int32 SkillId, bool* Result, class FString* Res);
		void SpawnSkill(int32 SkillId, class AActor* Target, int32 SkillDuration, bool IsWeapon, bool IsIdle, bool DirectSkillId);
		void SendSlotChange(int32 OldSlot, int32 NewSlot);
		void SendSlotBirlestir(int32 Source, int32 Target);
		void SendSlotAyir(int32 Slot, int32 Count, int32 Emptyslot);
		void SendQuickChangeQ(int32 Qid, int32 Qid2);
		void SendQuickChange(int32 Qid, int32 Value);
		void Send(int32 PId, const TArray<int32>& Ints, const TArray<class FString>& Strings);
		void LoadLoader();
		void IsAddItem(bool* Found, struct FInvItem* Item);
		void InitGame(class UGameInstance* Ins);
		class UWorld* GetWorldPure();
		void GetWorld(class UObject* WorldContextObject);
		void GetUIPacketIsEmpty(bool* IsEmpty);
		void GetUIPacket(struct FPacket* Source);
		void GetSkill(int32 ID, struct FSkill* Ob);
		struct FDateTime GetServerTime();
		void GetQSlots(TArray<int32>* Qslotse, class ALoader* Loader);
		void GetMob(int32 ID, struct FMob* Mob);
		void GetItemDes(int32 ID, class FString* Ob);
		void GetItem(int32 ID, struct FIitem* Ob, bool* Found);
		void GetCharData(struct FCharData* CharData);
		void GetBox(int32 ID, bool* IsBox, class FString* Ob);
		void DateDiff(const struct FDateTime& D1, const struct FDateTime& D2, struct FTimespan* Diff);
		bool CanUseSkill(int32 SkillId, class FString* Res);
	};

	// 0x0 (0x228 - 0x228)
	// Class metin2f.loader2
	class ALoader2 : public AActor
	{
	public:

		static class UClass* StaticClass();
		static class ALoader2* GetDefaultObj();
	};

	// 0x40 (0x80 - 0x40)
	// Class metin2f.M2_PlaySoundM2
	class UM2_PlaySoundM2 : public UAnimNotify
	{
	public:
		class USoundBase* Sound;                                             // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class USoundBase*>                    SoundList;                                         // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
		bool                                         PlayList;                                          // 0x58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_36C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        MaxDistance;                                       // 0x5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        VolumeMultiplier;                                  // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        PitchMultiplier;                                   // 0x64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        bFollow : 1;                                       // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        BitPad_1D : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
		uint8                                        Pad_36F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         FollowActor;                                       // 0x6C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_370[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		int32                                        SourceId;                                          // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                  AttachName;                                        // 0x74(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_371[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

		static class UClass* StaticClass();
		static class UM2_PlaySoundM2* GetDefaultObj();
	};

	// 0x0 (0x2C8 - 0x2C8)
	// Class metin2f.metin2fGameModeBase
	class AMetin2fGameModeBase : public AGameModeBase
	{
	public:

		static class UClass* StaticClass();
		static class AMetin2fGameModeBase* GetDefaultObj();
	};

	// 0x88 (0x340 - 0x2B8)
	// Class metin2f.mobAnimer
	class UMobAnimer : public UAnimInstance
	{
	public:
		bool                                         Run;                                               // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Attack;                                            // 0x2B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Attacking;                                         // 0x2BA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_376[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		struct FVector                               Target;                                            // 0x2BC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Drop;                                              // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         DropUpOk;                                          // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Damge;                                             // 0x2CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Damged;                                            // 0x2CB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Dead;                                              // 0x2CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_379[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        WaitTimer;                                         // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Canmove;                                           // 0x2D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         HaveTarget;                                        // 0x2D5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         SkillDropped;                                      // 0x2D6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_37A[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class ANpc* Mob;                                               // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_attack;                                          // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_wait;                                            // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_wait2;                                           // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_wait3;                                           // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_damge;                                           // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_dead;                                            // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_drop;                                            // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_dropup;                                          // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_run;                                             // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_walk;                                            // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_spawnAnim;                                       // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_run2;                                            // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

		static class UClass* StaticClass();
		static class UMobAnimer* GetDefaultObj();
	};

	// 0xB0 (0x320 - 0x270)
	// Class metin2f.mobNamer
	class UMobNamer : public UUserWidget
	{
	public:
		class FString                                Level;                                             // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                Name;                                              // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                Guild;                                             // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Ismob;                                             // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_380[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class FString                                Chat;                                              // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        ChatT;                                             // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Chatter;                                           // 0x2BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_381[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		struct FColor                                NameColor;                                         // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                baseNameColor;                                     // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        Rank;                                              // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        ShowEmoji;                                         // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        ShowEmojiTime;                                     // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_382[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class FString                                Sahip;                                             // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        ItemId;                                            // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        DropId;                                            // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        Count;                                             // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               Pos;                                               // 0x2F4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         HideWidget;                                        // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Reload;                                            // 0x301(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         IsGM;                                              // 0x302(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_384[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		int32                                        Type;                                              // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Group;                                             // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Mefriend;                                          // 0x309(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Medusman;                                          // 0x30A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_388[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class AActor* Parent;                                            // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         IsLocal;                                           // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_389[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

		static class UClass* StaticClass();
		static class UMobNamer* GetDefaultObj();

		class FString Gettexto(const class FString& _textName);
	};

	// 0x10 (0x238 - 0x228)
	// Class metin2f.mount
	class AMount : public AActor
	{
	public:
		class USkeletalMeshComponent* Ske;                                               // 0x228(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_38A[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

		static class UClass* StaticClass();
		static class AMount* GetDefaultObj();
	};

	// 0x0 (0x238 - 0x238)
	// Class metin2f.MyEditorUtilityTask
	class UMyEditorUtilityTask : public UClass
	{
	public:

		static class UClass* StaticClass();
		static class UMyEditorUtilityTask* GetDefaultObj();
	};

	// 0x608 (0x830 - 0x228)
	// Class metin2f.npc
	class ANpc : public AActor
	{
	public:
		uint8                                        Pad_39B[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		class UAudioComponent* Sound;                                             // 0x238(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAudioComponent* Sound2;                                            // 0x240(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAudioComponent* Sound3;                                            // 0x248(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAudioComponent* SoundWalk;                                         // 0x250(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAudioComponent* SoundDamge;                                        // 0x258(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_39E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FEffect>                       Effects;                                           // 0x268(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
		TArray<class USkeletalMeshComponent*>        MeshesT;                                           // 0x278(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		uint8                                        Pad_39F[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		class UCapsuleComponent* Cap;                                               // 0x2A0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UActorName* Mename;                                            // 0x2A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent* Ske;                                               // 0x2B0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMobAnimer* Anim;                                              // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPlayerAnimer* AnimP;                                             // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGameManager* Gm;                                                // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3A2[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		struct FVector                               R1;                                                // 0x2F0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               R2;                                                // 0x2FC(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               TargetLocation;                                    // 0x308(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3A4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class AActor* TargetA;                                           // 0x318(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3A5[0x1C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		struct FVector                               ServerPos;                                         // 0x33C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         GoServerPos;                                       // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         GoServerPosSet;                                    // 0x349(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3A6[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		struct FMob                                  Thismob;                                           // 0x350(0x188)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
		uint8                                        Pad_3A7[0x2E];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         Spawned;                                           // 0x506(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3A8[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         Dead;                                              // 0x50C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3A9[0x37];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		int32                                        HP;                                                // 0x544(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        Maxhp;                                             // 0x548(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        ID;                                                // 0x54C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3AB[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         UiDrag;                                            // 0x578(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3AD[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class UParticleSystemComponent* Hit2;                                              // 0x588(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UParticleSystemComponent* Out2;                                              // 0x590(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UParticleSystemComponent* Head2;                                             // 0x598(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UParticleSystemComponent* AuraP;                                             // 0x5A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic* Mat;                                               // 0x5A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic* Mat2;                                              // 0x5B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic* Mat3;                                              // 0x5B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic* Mat4;                                              // 0x5C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic* MatWeapon;                                         // 0x5C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic* MatWeapon2;                                        // 0x5D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic* MatFace;                                           // 0x5D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic* MatHair;                                           // 0x5E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic* MatMount;                                          // 0x5E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3AE[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        AnimSpeed;                                         // 0x608(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3AF[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         Isplayer;                                          // 0x618(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3B1[0x17];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		class FString                                Playername;                                        // 0x630(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                PlayerGuildName;                                   // 0x640(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        PlayerLevel;                                       // 0x650(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        PlayerType;                                        // 0x654(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3B2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		int32                                        PlayerWeapon;                                      // 0x65C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3B3[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         IsGM;                                              // 0x698(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3B5[0x17];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		class UMobAnimer* MountAnim;                                         // 0x6B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3B6[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<struct FSkillQue>                     SkillQ;                                            // 0x708(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
		uint8                                        Pad_3B7[0x60];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         Attackable;                                        // 0x778(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3B8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         Stuned;                                            // 0x781(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         DoAttack;                                          // 0x782(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3B9[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		int32                                        AttackId;                                          // 0x784(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3BA[0xA8];                                     // Fixing Size Of Struct [ Dumper-7 ]

		static class UClass* StaticClass();
		static class ANpc* GetDefaultObj();

		void TouchStart(enum class ETouchIndex FingerIndex, class UPrimitiveComponent* TouchedComponent);
		void TouchEnd(enum class ETouchIndex FingerIndex, class UPrimitiveComponent* TouchedComponent);
		void SelectedShop();
		void Release(class UPrimitiveComponent* ClickedComp, const struct FKey& ButtonPressed);
		void PlayUSound(class USoundBase* S, int32 Source, float Volume);
		void PlaySound(const class FString& Path);
		void PlayHit();
		void MakeAttack();
		void Hoverout(class UPrimitiveComponent* ClickedComp);
		void Hover(class UPrimitiveComponent* ClickedComp);
		void Click(class UPrimitiveComponent* ClickedComp, const struct FKey& ButtonPressed);
	};

	// 0x158 (0x410 - 0x2B8)
	// Class metin2f.playerAnimer
	class UPlayerAnimer : public UAnimInstance
	{
	public:
		bool                                         Run;                                               // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Attack;                                            // 0x2B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Attacking;                                         // 0x2BA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         DoAttack;                                          // 0x2BB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         HaveWeapon;                                        // 0x2BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         HaveRod;                                           // 0x2BD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3BE[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class FString                                WeaponType;                                        // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        SkillGroup;                                        // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        Type;                                              // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Fishing;                                           // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         CancelFishing;                                     // 0x2D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         CanFish;                                           // 0x2DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3C0[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		int32                                        GetFishAction;                                     // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         CanRotate;                                         // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         OneHand;                                           // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         AttackRotate;                                      // 0x2E2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         AttackForward;                                     // 0x2E3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         CanAttack;                                         // 0x2E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         NeverDrop;                                         // 0x2E5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         CanAttackToSingleTarget;                           // 0x2E6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         NormalAttack;                                      // 0x2E7(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         StrongAttack;                                      // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         AttackSender;                                      // 0x2E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         SattackSender;                                     // 0x2EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         SpaceDown;                                         // 0x2EB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        AttackId;                                          // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        NowAttack;                                         // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         AttackEnded;                                       // 0x2F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3C3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        RightMove;                                         // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        ForwardMove;                                       // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                             CamMove;                                           // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                             JoyMove;                                           // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Stuned;                                            // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         HaveMount;                                         // 0x311(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Skill;                                             // 0x312(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3C5[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		int32                                        SkillId;                                           // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        SkillPid;                                          // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         SkillDoOnce;                                       // 0x31C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3C7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<class ANpc*>                          SkillDamaged;                                      // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		int32                                        SkillDuration;                                     // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         EndSkill;                                          // 0x334(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Skilling;                                          // 0x335(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         SkillLook;                                         // 0x336(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         DoSkillDamge;                                      // 0x337(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         SkillMove;                                         // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Damge;                                             // 0x339(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Drop;                                              // 0x33A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3C8[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        DropAnimSpeed;                                     // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        SkillMoveSpeed;                                    // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Dropping;                                          // 0x344(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         DropUp;                                            // 0x345(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Dead;                                              // 0x346(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3C9[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class AActor* Actorr;                                            // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         IsLocal;                                           // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_3CA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class UAnimSequence* S_wait;                                            // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_waitSword;                                       // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_run;                                             // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_runSword;                                        // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_damge;                                           // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_attack1;                                         // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_attack2;                                         // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_attack3;                                         // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_attack4;                                         // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_attackNoSword;                                   // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_drop;                                            // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_dropup;                                          // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_dead;                                            // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_horseWait;                                       // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_horseRun;                                        // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_horseWait2;                                      // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_horseWait3;                                      // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_horseDamge;                                      // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_horseDead;                                       // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_horseAttack1;                                    // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_horseAttack2;                                    // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_horseAttack3;                                    // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequence* S_horseAttack4;                                    // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

		static class UClass* StaticClass();
		static class UPlayerAnimer* GetDefaultObj();

		void SendLoc();
	};

	// 0x428 (0x8E0 - 0x4B8)
	// Class metin2f.playerMove
	class APlayerMove : public ACharacter
	{
	public:
		uint8                                        Pad_425[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class APlayerController* Controler;                                         // 0x4C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                        Pad_426[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class UBoxComponent* Box;                                               // 0x4D0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		class UBoxComponent* boxNear;                                           // 0x4D8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		class UCapsuleComponent* Cap;                                               // 0x4E0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		class UPhysicalAnimationComponent* PhyAnim;                                           // 0x4E8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		bool                                         Canmove;                                           // 0x4F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                        Pad_429[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class UAudioComponent* Sound;                                             // 0x4F8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		class UAudioComponent* Sound2;                                            // 0x500(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		class UAudioComponent* Sound3;                                            // 0x508(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		class UAudioComponent* SoundWalk;                                         // 0x510(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		TArray<class ANpc*>                          NearMobes;                                         // 0x518(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class AActor*>                        InMe;                                              // 0x528(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
		struct FVector                               PlayerPos;                                         // 0x538(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                              PlayerRot;                                         // 0x544(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		uint8                                        Pad_42C[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<class UClass*>                        Dyn_animbps;                                       // 0x578(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		class UParticleSystemComponent* HitP;                                              // 0x588(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UParticleSystemComponent* AuraP;                                             // 0x590(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        BaseTurnRate;                                      // 0x598(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         GoTarget;                                          // 0x59C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         GoTargetSkill;                                     // 0x59D(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_42F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class ANpc* GoTargetSkillNpc;                                  // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        GoTargetSkillId;                                   // 0x5A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        GoTargetSkillDistance;                             // 0x5AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                               GoTargetPos;                                       // 0x5B0(0xC)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_431[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class ANpc* GoTargetNpc;                                       // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         GoTargetAttack;                                    // 0x5C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_432[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class ANpc* GoTargetAttackNpc;                                 // 0x5D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         GoTargetDrop;                                      // 0x5D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_433[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		int32                                        Type;                                              // 0x5DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        BaseLookUpRate;                                    // 0x5E0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                Col;                                               // 0x5E4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_435[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		TArray<int32>                                SkillR;                                            // 0x638(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent* H;                                                 // 0x648(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent* Weapon;                                            // 0x650(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent* Weapon2;                                           // 0x658(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent* PolyMesh;                                          // 0x660(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UActorName* Mename;                                            // 0x668(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_438[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class UPlayerAnimer* Anim;                                              // 0x678(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMobAnimer* PolyAnim;                                          // 0x680(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCharacterMovementComponent* Cm;                                                // 0x688(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AGameManager* Gm;                                                // 0x690(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_43A[0x98];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        MoveLimit;                                         // 0x730(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        CameraZoomSpeed;                                   // 0x734(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        TurnSpeed;                                         // 0x738(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        AttackTurnSpeed;                                   // 0x73C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        AnimSpeed;                                         // 0x740(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        AttackSpeed;                                       // 0x744(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        AttackDistance;                                    // 0x748(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        A1;                                                // 0x74C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        PlayerLowSpeed;                                    // 0x750(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         GotDrop;                                           // 0x754(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_43E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		struct FVector                               GotDropLoc;                                        // 0x758(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Dead;                                              // 0x764(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_43F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		struct FVector                               Te;                                                // 0x768(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                        Alpha;                                             // 0x774(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_441[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        CameraY;                                           // 0x77C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         RotateTarget;                                      // 0x780(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_443[0x17];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		float                                        blockWait;                                         // 0x798(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         Stuned;                                            // 0x79C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_444[0x23];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		class UMaterialInstanceDynamic* MatBody;                                           // 0x7C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic* MatFace;                                           // 0x7C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic* MatHair;                                           // 0x7D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic* MatWeapon;                                         // 0x7D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic* MatWeapon2;                                        // 0x7E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic* MatMount;                                          // 0x7E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_448[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		class UParticleSystem* Hit2;                                              // 0x810(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FEffect>                       Effects;                                           // 0x818(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                         SendAnim;                                          // 0x828(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_44A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class UParticleSystemComponent* Pp;                                                // 0x830(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UParticleSystemComponent* Out2;                                              // 0x838(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                        NowUseSkill;                                       // 0x840(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         IsInSafe;                                          // 0x844(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_44B[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         IsShop;                                            // 0x854(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_44C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		struct FRotator                              Nextrot;                                           // 0x858(0xC)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                               Nextpos;                                           // 0x864(0xC)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_44E[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		bool                                         IsGM;                                              // 0x888(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         GmHide;                                            // 0x889(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                         AttackReset;                                       // 0x88A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_44F[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
		class USkeletalMeshComponent* MountSke;                                          // 0x890(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                        Pad_450[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

		static class UClass* StaticClass();
		static class APlayerMove* GetDefaultObj();

		void ZKey(float Rate);
		void TouchStart(enum class ETouchIndex FingerIndex, class UPrimitiveComponent* TouchedComponent);
		void TouchEnd(enum class ETouchIndex FingerIndex, class UPrimitiveComponent* TouchedComponent);
		void StopAttack();
		void SendSkill();
		void SendLoc(bool IsNext);
		void SendAttack(bool IsStrong);
		void SelectNearTarget();
		void PlayUSound(class USoundBase* S);
		void PlaySound(const class FString& Path);
		void OnOverlapEndCap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
		void OnOverlapEndBox(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
		void OnOverlapBeginCap(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
		void OnOverlapBeginBox(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
		void OnOverlapBegin(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
		void LookSkill();
		void Hoverout(class UPrimitiveComponent* ClickedComp);
		void Hover(class UPrimitiveComponent* ClickedComp);
		void DoSkillDamage(class AActor* From, const struct FSkill& Skill, bool AffectCircle, float AffectDirMin, float AffectDirMax, float AffectDistance, bool DoEffect, bool OneTarget, bool FarAttack, bool WillDrop, bool AffectTargetArea);
		void DoAttackState(bool IsStrong, bool AffectCircle, float AffectDirMin, float AffectDirMax, float AffectDistance);
		void DoAttack();
		void Click(class UPrimitiveComponent* ClickedComp, const struct FKey& ButtonPressed);
		bool CheckSkillWillHit(class AActor* From, class AActor* Target, bool AffectCircle, bool FarAttack, float AffectDirMin, float AffectDirMax, bool OneTarget, float AffectDistance, bool AffectTargetArea);
		void CalNext();
		void AnimSender();
	};

	// 0x0 (0xB8 - 0xB8)
	// Class metin2f.spawner
	class USpawner : public UActorComponent
	{
	public:

		static class UClass* StaticClass();
		static class USpawner* GetDefaultObj();
	};
}