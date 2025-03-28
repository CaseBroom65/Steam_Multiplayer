// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamMultiplayerGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMMULTIPLAYER_SteamMultiplayerGameMode_generated_h
#error "SteamMultiplayerGameMode.generated.h already included, missing '#pragma once' in SteamMultiplayerGameMode.h"
#endif
#define STEAMMULTIPLAYER_SteamMultiplayerGameMode_generated_h

#define FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASteamMultiplayerGameMode(); \
	friend struct Z_Construct_UClass_ASteamMultiplayerGameMode_Statics; \
public: \
	DECLARE_CLASS(ASteamMultiplayerGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamMultiplayer"), STEAMMULTIPLAYER_API) \
	DECLARE_SERIALIZER(ASteamMultiplayerGameMode)


#define FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASteamMultiplayerGameMode(ASteamMultiplayerGameMode&&); \
	ASteamMultiplayerGameMode(const ASteamMultiplayerGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STEAMMULTIPLAYER_API, ASteamMultiplayerGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASteamMultiplayerGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASteamMultiplayerGameMode) \
	STEAMMULTIPLAYER_API virtual ~ASteamMultiplayerGameMode();


#define FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerGameMode_h_9_PROLOG
#define FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMMULTIPLAYER_API UClass* StaticClass<class ASteamMultiplayerGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
