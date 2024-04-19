#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_Wind_Particle_True.Interface_Wind_Particle_True_C
// (None)

class UClass* IInterface_Wind_Particle_True_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_Wind_Particle_True_C");

	return Clss;
}


// Interface_Wind_Particle_True_C Interface_Wind_Particle_True.Default__Interface_Wind_Particle_True_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_Wind_Particle_True_C* IInterface_Wind_Particle_True_C::GetDefaultObj()
{
	static class IInterface_Wind_Particle_True_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_Wind_Particle_True_C*>(IInterface_Wind_Particle_True_C::StaticClass()->DefaultObject);

	return Default;
}

}


