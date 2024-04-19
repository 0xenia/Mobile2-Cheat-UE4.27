#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x340 - 0x2B8)
// Class Lobby.LobbyBeaconClient
class ALobbyBeaconClient : public AOnlineBeaconClient
{
public:
	class ALobbyBeaconState*                     LobbyState;                                        // 0x2B8(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALobbyBeaconPlayerState*               PlayerState;                                       // 0x2C0(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32F[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ELobbyBeaconJoinState             LobbyJoinServerState;                              // 0x2C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_330[0x76];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ALobbyBeaconClient* GetDefaultObj();

	void ServerSetPartyOwner(struct FUniqueNetIdRepl& InUniqueId, struct FUniqueNetIdRepl& InPartyOwnerId);
	void ServerNotifyJoiningServer();
	void ServerLoginPlayer(const class FString& InSessionId, struct FUniqueNetIdRepl& InUniqueId, const class FString& UrlString);
	void ServerKickPlayer(struct FUniqueNetIdRepl& PlayerToKick, class FText& Reason);
	void ServerDisconnectFromLobby();
	void ServerCheat(const class FString& Msg);
	void ClientWasKicked(class FText& KickReason);
	void ClientSetInviteFlags(struct FJoinabilitySettings& Settings);
	void ClientPlayerLeft(struct FUniqueNetIdRepl& InUniqueId);
	void ClientPlayerJoined(class FText& NewPlayerName, struct FUniqueNetIdRepl& InUniqueId);
	void ClientLoginComplete(struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
	void ClientJoinGame();
	void ClientAckJoiningServer();
};

// 0x38 (0x288 - 0x250)
// Class Lobby.LobbyBeaconHost
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{
public:
	uint8                                        Pad_333[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class ALobbyBeaconState>       LobbyStateClass;                                   // 0x258(0x28)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ALobbyBeaconState*                     LobbyState;                                        // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ALobbyBeaconHost* GetDefaultObj();

};

// 0xC0 (0x2E8 - 0x228)
// Class Lobby.LobbyBeaconPlayerState
class ALobbyBeaconPlayerState : public AInfo
{
public:
	class FText                                  DisplayName;                                       // 0x228(0x18)(Net, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x240(0x28)(Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      PartyOwnerUniqueId;                                // 0x268(0x28)(Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInLobby;                                          // 0x290(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_337[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AOnlineBeaconClient*                   ClientActor;                                       // 0x298(0x8)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_338[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ALobbyBeaconPlayerState* GetDefaultObj();

	void OnRep_UniqueId();
	void OnRep_PartyOwner();
	void OnRep_InLobby();
};

// 0x1A8 (0x3D0 - 0x228)
// Class Lobby.LobbyBeaconState
class ALobbyBeaconState : public AInfo
{
public:
	int32                                        MaxPlayers;                                        // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_33A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ALobbyBeaconPlayerState>   LobbyBeaconPlayerStateClass;                       // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_33C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bLobbyStarted;                                     // 0x240(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_33E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitForPlayersTimeRemaining;                       // 0x244(0x4)(Net, ZeroConstructor, Config, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLobbyPlayerStateInfoArray            Players;                                           // 0x248(0x120)(Net, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_33F[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ALobbyBeaconState* GetDefaultObj();

	void OnRep_WaitForPlayersTimeRemaining();
	void OnRep_LobbyStarted();
};

}


