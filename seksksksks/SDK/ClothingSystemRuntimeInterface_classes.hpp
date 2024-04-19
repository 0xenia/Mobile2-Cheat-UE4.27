#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// Class ClothingSystemRuntimeInterface.ClothConfigBase
class UClothConfigBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UClothConfigBase* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
class UClothSharedSimConfigBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UClothSharedSimConfigBase* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class ClothingSystemRuntimeInterface.ClothingAssetBase
class UClothingAssetBase : public UObject
{
public:
	class FString                                ImportedFilePath;                                  // 0x30(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 AssetGuid;                                         // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UClothingAssetBase* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
class UClothingSimulationFactory : public UObject
{
public:

	static class UClass* StaticClass();
	static class UClothingSimulationFactory* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class ClothingSystemRuntimeInterface.ClothingInteractor
class UClothingInteractor : public UObject
{
public:
	uint8                                        Pad_B9D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UClothingInteractor* GetDefaultObj();

};

// 0x68 (0x98 - 0x30)
// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
class UClothingSimulationInteractor : public UObject
{
public:
	TMap<class FName, class UClothingInteractor*> ClothingInteractors;                               // 0x30(0x50)(NativeAccessSpecifierPublic)
	uint8                                        Pad_BCA[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UClothingSimulationInteractor* GetDefaultObj();

	void SetNumSubsteps(int32 NumSubsteps);
	void SetNumIterations(int32 NumIterations);
	void SetAnimDriveSpringStiffness(float InStiffness);
	void PhysicsAssetUpdated();
	float GetSimulationTime();
	int32 GetNumSubsteps();
	int32 GetNumKinematicParticles();
	int32 GetNumIterations();
	int32 GetNumDynamicParticles();
	int32 GetNumCloths();
	class UClothingInteractor* GetClothingInteractor(const class FString& ClothingAssetName);
	void EnableGravityOverride(struct FVector& InVector);
	void DisableGravityOverride();
	void ClothConfigUpdated();
};

// 0xB8 (0xE8 - 0x30)
// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
class UClothPhysicalMeshDataBase_Legacy : public UObject
{
public:
	TArray<struct FVector>                       Vertices;                                          // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Normals;                                           // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                               Indices;                                           // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                InverseMasses;                                     // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FClothVertBoneData>            BoneData;                                          // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumFixedVerts;                                     // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxBoneWeights;                                    // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32>                               SelfCollisionIndices;                              // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD5[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UClothPhysicalMeshDataBase_Legacy* GetDefaultObj();

};

}


