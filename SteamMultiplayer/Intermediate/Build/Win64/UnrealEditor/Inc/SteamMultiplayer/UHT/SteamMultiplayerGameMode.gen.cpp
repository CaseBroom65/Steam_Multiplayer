// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamMultiplayer/SteamMultiplayerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamMultiplayerGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
STEAMMULTIPLAYER_API UClass* Z_Construct_UClass_ASteamMultiplayerGameMode();
STEAMMULTIPLAYER_API UClass* Z_Construct_UClass_ASteamMultiplayerGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamMultiplayer();
// End Cross Module References

// Begin Class ASteamMultiplayerGameMode
void ASteamMultiplayerGameMode::StaticRegisterNativesASteamMultiplayerGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASteamMultiplayerGameMode);
UClass* Z_Construct_UClass_ASteamMultiplayerGameMode_NoRegister()
{
	return ASteamMultiplayerGameMode::StaticClass();
}
struct Z_Construct_UClass_ASteamMultiplayerGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SteamMultiplayerGameMode.h" },
		{ "ModuleRelativePath", "SteamMultiplayerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASteamMultiplayerGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASteamMultiplayerGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamMultiplayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASteamMultiplayerGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASteamMultiplayerGameMode_Statics::ClassParams = {
	&ASteamMultiplayerGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASteamMultiplayerGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASteamMultiplayerGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASteamMultiplayerGameMode()
{
	if (!Z_Registration_Info_UClass_ASteamMultiplayerGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASteamMultiplayerGameMode.OuterSingleton, Z_Construct_UClass_ASteamMultiplayerGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASteamMultiplayerGameMode.OuterSingleton;
}
template<> STEAMMULTIPLAYER_API UClass* StaticClass<ASteamMultiplayerGameMode>()
{
	return ASteamMultiplayerGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASteamMultiplayerGameMode);
ASteamMultiplayerGameMode::~ASteamMultiplayerGameMode() {}
// End Class ASteamMultiplayerGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASteamMultiplayerGameMode, ASteamMultiplayerGameMode::StaticClass, TEXT("ASteamMultiplayerGameMode"), &Z_Registration_Info_UClass_ASteamMultiplayerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASteamMultiplayerGameMode), 3266946232U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerGameMode_h_2414688329(TEXT("/Script/SteamMultiplayer"),
	Z_CompiledInDeferFile_FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
