// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamMultiplayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMMULTIPLAYER_SteamMultiplayerCharacter_generated_h
#error "SteamMultiplayerCharacter.generated.h already included, missing '#pragma once' in SteamMultiplayerCharacter.h"
#endif
#define STEAMMULTIPLAYER_SteamMultiplayerCharacter_generated_h

#define FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASteamMultiplayerCharacter(); \
	friend struct Z_Construct_UClass_ASteamMultiplayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ASteamMultiplayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamMultiplayer"), NO_API) \
	DECLARE_SERIALIZER(ASteamMultiplayerCharacter)


#define FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASteamMultiplayerCharacter(ASteamMultiplayerCharacter&&); \
	ASteamMultiplayerCharacter(const ASteamMultiplayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASteamMultiplayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASteamMultiplayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASteamMultiplayerCharacter) \
	NO_API virtual ~ASteamMultiplayerCharacter();


#define FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerCharacter_h_18_PROLOG
#define FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMMULTIPLAYER_API UClass* StaticClass<class ASteamMultiplayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SteamMultiplayer_Source_SteamMultiplayer_SteamMultiplayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
