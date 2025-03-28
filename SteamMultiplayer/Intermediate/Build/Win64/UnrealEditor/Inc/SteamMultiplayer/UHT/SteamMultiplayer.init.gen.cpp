// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamMultiplayer_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SteamMultiplayer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SteamMultiplayer()
	{
		if (!Z_Registration_Info_UPackage__Script_SteamMultiplayer.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SteamMultiplayer",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xB29A0A44,
				0x7A7B0758,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SteamMultiplayer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SteamMultiplayer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SteamMultiplayer(Z_Construct_UPackage__Script_SteamMultiplayer, TEXT("/Script/SteamMultiplayer"), Z_Registration_Info_UPackage__Script_SteamMultiplayer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB29A0A44, 0x7A7B0758));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
