// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "SDK.hpp"
#include "memory.h"
#include <polyhook2/Detour/x64Detour.hpp>
#include <codecvt>
#include <cwchar>
#include <math.h>
#include "DynamicTimer.h"
#include "WinSock2.h"
#include "StringExtension.h"

#define M_PI   3.14159265358979323846264338327950288

SDK::UFont* defaultFont;

static bool attack = true;

SOCKET m2Socket;
auto ws2sendadr = GetProcAddress(GetModuleHandleA("WS2_32.dll"), "send");
typedef int(_stdcall* tWSockSend)(SOCKET s, const char* buf, int len, int flags);
tWSockSend oWSockSend;

void ProcessSendPacket(int len, void* pDestBuf, DWORD address)
{
	BYTE header;
	memcpy(&header, pDestBuf, sizeof(header));
	BYTE* recvBuff = new BYTE[len];
	memcpy(recvBuff, pDestBuf, len);

	string packetHex = StringExtension::MakeHexString((BYTE*)pDestBuf, len, true, true);
	string ascii = StringExtension::BYTEToAsciiString(pDestBuf, len);

	//string line = "[SEND][L:" + std::to_string(len) + "][" + packetHex + "]";
	//std::cout << line << std::endl;

	//std::cout << ascii << std::endl;
}

int _stdcall hWSockSend(SOCKET s, const char* pDestBuf, int len, int flags)
{
	try
	{
		m2Socket = s;
		BYTE* recvBuff = new BYTE[len];
		memcpy(recvBuff, pDestBuf, len);
		std::string packetHex = StringExtension::MakeHexString((BYTE*)pDestBuf, len, true, true);
		packetHex = StringExtension::ReplaceString(packetHex, "50 00 0B 00 00 00 08", "50 00 0B 00 00 00 10");
		std::vector<char> bytes = StringExtension::HexToBytes(packetHex);
		const char* data = reinterpret_cast<const char*>(bytes.data());
		int ret = oWSockSend(s, data, len, flags);
		BYTE* destBuf = (BYTE*)pDestBuf;
		ProcessSendPacket(len, (void*)data, (DWORD)_ReturnAddress());

		return ret;
	}
	catch (...)
	{
		return true;
	}
}

static float AngleBetweenTwoPoints(float x1, float y1, float x2, float y2)
{
	//static const double TWOPI = 6.2831853071795865;
	//static const double RAD2DEG = 57.2957795130823209;
	//// if (a1 = b1 and a2 = b2) throw an error
	//double theta = atan2(x2 - x1, y2 - y2);
	//if (theta < 0.0)
	//	theta += TWOPI;
	//return RAD2DEG * theta;

	/*float dot = x1 * x2 + y1 * y2;
	float det = x1 * y2 - y1 * x2;
	float angle = atan2(det, dot);*/

	/*float a = x1 * x2 + y1 * y2;
	float b = std::sqrt(x1 * x1 + y1 * y1);
	float c = std::sqrt(x2 * x2 + y2 * y2);
	float angle = std::acos(a / (b * c));*/

	float angle = (float)atan2(y2 - y1, x2 - x1) * (float)(180 / 3.14159265358979323846);
	/*if (angle < 0)
	{
		angle += 360;
	}*/

	return angle;
}



static int CountDistanceTwoPoints(SDK::FVector startPoint, SDK::FVector endPoint)
{
	// Calculating distance
	return sqrt(pow(endPoint.X - startPoint.X, 2) +
		pow(endPoint.Y - startPoint.Y, 2) * 1.0);
}

bool str_check(std::string input)
{
	for (char c : input) {
		if (!isalpha(c)) {
			std::cout << "String düzgün deðil." << std::endl;
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

typedef void(__thiscall* process_event_hook_t)(SDK::UObject* caller, SDK::UObject* fn, void* params);
process_event_hook_t orig_process_event = nullptr;

void process_event_hook(SDK::UObject* caller, SDK::UObject* fn, void* params)
{
	auto callername = caller->GetName().c_str();
	if (strcmp(callername, "görevs") > 0 && strstr(callername, "mobAnim_Child_C") == 0)
	{
		printf("Caller [%s] Function [%s] \n", caller->GetName().c_str(), fn->GetFullName().c_str());
	}

	orig_process_event(caller, fn, params);
}


#pragma pack(push, 1)
typedef struct packet_use_item
{
	BYTE header = 0xD;
	BYTE unk1[3] = { 0x0, 0x0, 0x0 };
	BYTE subheader = 0x04;
	BYTE subheader2 = 0x64;
	BYTE subheader3 = 0x03;
	BYTE slot;
	BYTE unk2[3] = { 0x0, 0x0, 0x0 };
	BYTE subheader4 = 0x2;
	BYTE unk3[4] = { 0x0,0x0,0x0,0x0 };
	BYTE subheader5 = 0x5;
} TPacketCGItemUse;
#pragma pack(pop)
enum HPPot
{
	KUCUK = 27001,
	ORTA = 27002,
	BUYUK = 27003,
	KUCUK_3 = 27201,
	ORTA_2 = 27202,
	BUYUK_2 = 27203
};

int GetHpPercentage(SDK::ALoader* loader)
{
	if (loader)
	{
		auto hp = loader->CharData.HP;
		auto fullhp = loader->CharData.FullHP;
		return (hp * 100) / fullhp;
	}
}

int GetHPPotSlot(SDK::ALoader* loader) {
	if (!loader) return -1; // Return -1 if loader is nullptr

	auto items = loader->CharData.Invitems;
	int slot = 0;
	for (auto it = items.begin(); it != items.end(); it++) {
		auto index = it->Key; // Key
		auto val = it->Value;  // Value

		// Check if the item ID is in the HPPot enum
		for (int i = KUCUK; i <= BUYUK_2; i++) {
			if (val.ItemId == i) {
				slot = index;
				return slot; // Return slot if found
			}
		}
	}
	return -1; // Return -1 if no health potion found
}

void UseHPPot(SDK::ALoader* loader)
{
	auto slot = GetHPPotSlot(loader);
	if (slot == -1) return;
	TPacketCGItemUse ItemUsePacket;
	ItemUsePacket.slot = slot;

	oWSockSend(m2Socket, (char*)&ItemUsePacket, sizeof(ItemUsePacket), 0);
}

BYTE* vmt_hook(void** VFTable, std::uint32_t index, void* TargetFunction) {
	BYTE* org = reinterpret_cast<BYTE*>(VFTable[index]);

	DWORD protect = 0;

	VirtualProtect(&VFTable[index], 8, PAGE_EXECUTE_READWRITE, &protect);

	VFTable[index] = TargetFunction;

	VirtualProtect(&VFTable[index], 8, protect, 0);

	return org;
}

int post_render_index = 0x63;
int process_event_index = 0x44;

using fn = void(__thiscall*)(SDK::UGameViewportClient*, SDK::UCanvas*);

fn orig = nullptr;

void postrenderhook(SDK::UGameViewportClient* viewport, SDK::UCanvas* canvas)
{
	auto world = viewport->World;
	auto gameinstance = viewport->GameInstance;
	if (!gameinstance->LocalPlayers.Num()) return;
	auto localplayer = gameinstance->LocalPlayers[0];
	if (!localplayer) return;

	SDK::ACharacter* localplayerchar = localplayer->PlayerController->Character;
	if (!localplayerchar) return;

	SDK::APlayerMove* playermove = reinterpret_cast<SDK::APlayerMove*>(localplayerchar);

	auto controller = localplayer->PlayerController;

	if (!controller) return;

	SDK::ANpc* c = nullptr;
	SDK::ADroppedItem* d = nullptr;
	SDK::ALoader* loader = playermove->Gm->Loader;

	int lowestDistance = 200000;
	int lowestDistance2 = 200000;
	int dropcount = 0;

	bool foundClosest = false;

	auto mobs = playermove->Gm->Mobs;
	auto drops = playermove->Gm->Drops;

	for (auto it = mobs.begin(); it != mobs.end(); it++)
	{
		auto actor = it->Value.Mover;
		if (!actor) continue;

		int distance = CountDistanceTwoPoints(localplayerchar->K2_GetActorLocation(), actor->K2_GetActorLocation());
		auto type = _wtol(actor->Thismob.Type.ToWString().c_str());
		auto level = actor->Thismob.Level;
		auto mylevel = loader->CharData.Level;
		mylevel += 1;
		if (distance < lowestDistance && type == 0 && mylevel >= level)
		{
			lowestDistance = distance;
			c = actor;
		}
	}

	for (auto itor = drops.begin(); itor != drops.end(); itor++)
	{
		auto actor = itor->Value.Di;
		if (!actor) continue;

		int distance = CountDistanceTwoPoints(localplayerchar->K2_GetActorLocation(), actor->K2_GetActorLocation());
		int itemid = actor->Ne->ItemId;

		if (distance < lowestDistance2 && actor->Ne->Name.IsValid() && itemid)
		{
			lowestDistance2 = distance;
			d = actor;
			if (distance < 300)
			{
				dropcount++;
			}
		}
	}

	if (c != nullptr)

	{
		auto playerpos = c->K2_GetActorLocation();
		SDK::FVector droppos;
		if (d)
		{
			droppos = d->K2_GetActorLocation();
		}

		auto mypos = localplayerchar->K2_GetActorLocation();

		//if (CountDistanceTwoPoints(mypos, playerpos) > 150 || playermove->NearMobes.Num() == 0 && playermove->Anim->Attacking)
		//{
		//	playermove->StopAttack();
		//}

		if (DynamicTimer::CheckAutoSet("AutoPot", 250) && GetHpPercentage(loader) <= 50)
		{
			UseHPPot(loader);
		}

		if (dropcount == 0)
		{
			if (CountDistanceTwoPoints(mypos, playerpos) > 70)
			{
				if (!playermove->Anim->Run)
				{
					playermove->GoTarget = true;
					playermove->GoTargetPos = playerpos;
				}
			}

			if (CountDistanceTwoPoints(mypos, playerpos) > 70)
			{
				auto angle = playermove->PlayerRot.Yaw = AngleBetweenTwoPoints(mypos.X, mypos.Y, playerpos.X, playerpos.Y);
			}

			if (DynamicTimer::CheckAutoSet("Attack", 350))
			{
				playermove->SendAttack(true);
			}
		}

		if (dropcount > 0 && d)
		{
			playermove->GoTarget = true;
			playermove->GoTargetPos = droppos;

			if (DynamicTimer::CheckAutoSet("Collect", 150))
			{
				playermove->ZKey(100.f);
			}
		}
	}

	orig(viewport, canvas);
}

SDK::UWorld* GetUWorld()
{
	static uint64_t gworld_ptr = 0;
	if (!gworld_ptr)
	{
		auto gworld = signature("48 8B ? ? ? ? ? 48 85 ? 74 ? 48 8B ? E8 ? ? ? ? 83 F8").instruction(3).add(7);
		gworld_ptr = gworld.GetPointer();
	}
	return (*(SDK::UWorld**)(gworld_ptr));
}

SDK::UWorld* world = nullptr; // Declare the variable with the correct type

void main(HMODULE Module)
{
	AllocConsole();
	FILE* Dummy;
	freopen_s(&Dummy, "CONOUT$", "w", stdout);
	freopen_s(&Dummy, "CONIN$", "r", stdin);
	system("chcp 1254");
	system("cls");
	world = GetUWorld();
	printf("%llx\n", world);
	SDK::InitGObjects();

	defaultFont = SDK::UObject::FindObject<SDK::UFont>("Font Transient.DefaultTinyFont");

	auto gameinstance = world->OwningGameInstance;

	auto localplayer = gameinstance->LocalPlayers[0];
	SDK::ACharacter* localplayerchar = localplayer->PlayerController->Character;
	SDK::APlayerMove* playermove = reinterpret_cast<SDK::APlayerMove*>(localplayerchar);
	SDK::ALoader* loader = playermove->Gm->Loader;
	printf("%llx\n", localplayerchar);

	printf("%llx\n", loader);

	auto viewportcl = localplayer->ViewportClient;

	void** VFTable = viewportcl->Vft;

	auto process_event_addr = world->GetProcessEventAddr();

	orig = (fn)vmt_hook(VFTable, post_render_index, postrenderhook);

	PLH::x64Detour detour((uint64)ws2sendadr, (uint64)hWSockSend, (uint64*)&oWSockSend);
	detour.hook();

	//PLH::x64Detour detour((uint64)process_event_addr, (uint64)process_event_hook, (uint64*)&orig_process_event);
	//detour.hook();

	//hook atýlan addresi yazýyoruz

	while (true)
	{
		if (GetAsyncKeyState(VK_LSHIFT) & 1)
		{

		}

		//auto xd = loader->CharData.HP;
		//auto xdd = loader->CharData.FullHP;

		//auto xdddd = loader->PlayerSkills;
		//auto xd = playermove->Gm->Drops;
		//for (auto it = xd.begin(); it != xd.end(); it++)
		//{
		//	auto index = it->Key;
		//	auto val = it->Value.Di;
		//	if (strstr(val->GetName().c_str(), "dropped"))
		//	{
		//		auto xd = val->K2_GetActorLocation();
		//		printf("X: %f, Y: %f, Z: %f\n", xd.X, xd.Y, xd.Z);

		//		playermove->GoTarget = true;
		//		playermove->GoTargetPos = xd;
		//	}
		//}

		//auto moblist = playermove->Gm->Mobs;
		//for (auto it = moblist.begin(); it != moblist.end(); it++)
		//{
		//	auto index = it->Key;
		//	auto val = it->Value.Mover;
		//	if (val && val->IsA(SDK::ANpc::StaticClass()))
		//	{
		//		auto xd = val->K2_GetActorLocation();
		//		printf("X: %f, Y: %f, Z: %f\n", xd.X, xd.Y, xd.Z);
		//	}
		//}

		////loader->UseSkill(4, NULL, NULL);
		//const char hex[] = "\x0D\x00\x00\x00\x04\x6C\x03\x15\x00\x00\x00\x02\x00\x00\x00\x00\x05";
		//const char hex2[] = "\x08\x00\x00\x00\x04\x21\x03\x2A\x23\x00\x00\x05";
		//oWSockSend(m2Socket, hex2, sizeof(hex2) - 1, 0);

		if (GetAsyncKeyState(VK_F6) & 1)
		{
			fclose(stdout);
			if (Dummy) fclose(Dummy);
			FreeConsole();

			FreeLibraryAndExitThread(Module, 0);
		}
		Sleep(100);
	}
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)main, hModule, NULL, NULL);
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}