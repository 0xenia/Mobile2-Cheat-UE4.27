#pragma once

// Dumped with Dumper-7!

#include "../SDK.hpp"

namespace SDK {
	//---------------------------------------------------------------------------------------------------------------------
	// FUNCTIONS
	//---------------------------------------------------------------------------------------------------------------------

	// BlueprintGeneratedClass m2f.m2f_C
	// (Actor)

	class UClass* AM2f_C::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("m2f_C");

		return Clss;
	}

	// m2f_C m2f.Default__m2f_C
	// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

	class AM2f_C* AM2f_C::GetDefaultObj()
	{
		static class AM2f_C* Default = nullptr;

		if (!Default)
			Default = static_cast<AM2f_C*>(AM2f_C::StaticClass()->DefaultObject);

		return Default;
	}
}