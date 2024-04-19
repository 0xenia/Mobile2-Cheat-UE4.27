#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// Class PacketHandler.HandlerComponentFactory
class UHandlerComponentFactory : public UObject
{
public:

	static class UClass* StaticClass();
	static class UHandlerComponentFactory* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class PacketHandler.PacketHandlerProfileConfig
class UPacketHandlerProfileConfig : public UObject
{
public:
	TArray<class FString>                        Components;                                        // 0x30(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPacketHandlerProfileConfig* GetDefaultObj();

};

}


