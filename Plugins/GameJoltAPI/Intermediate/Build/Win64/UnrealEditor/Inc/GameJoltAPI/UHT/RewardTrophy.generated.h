// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActions/Trophies/RewardTrophy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UJsonData;
class URewardTrophy;
enum class EGJErrors : uint8;
#ifdef GAMEJOLTAPI_RewardTrophy_generated_h
#error "RewardTrophy.generated.h already included, missing '#pragma once' in RewardTrophy.h"
#endif
#define GAMEJOLTAPI_RewardTrophy_generated_h

#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_RewardTrophy_h_9_DELEGATE \
GAMEJOLTAPI_API void FRewardTrophySuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& RewardTrophySuccessDelegate, EGJErrors Error);


#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_RewardTrophy_h_17_SPARSE_DATA
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_RewardTrophy_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_RewardTrophy_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_RewardTrophy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallback); \
	DECLARE_FUNCTION(execRewardTrophy);


#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_RewardTrophy_h_17_ACCESSORS
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_RewardTrophy_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURewardTrophy(); \
	friend struct Z_Construct_UClass_URewardTrophy_Statics; \
public: \
	DECLARE_CLASS(URewardTrophy, UGameJoltAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameJoltAPI"), NO_API) \
	DECLARE_SERIALIZER(URewardTrophy)


#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_RewardTrophy_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URewardTrophy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URewardTrophy(URewardTrophy&&); \
	NO_API URewardTrophy(const URewardTrophy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URewardTrophy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URewardTrophy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URewardTrophy) \
	NO_API virtual ~URewardTrophy();


#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_RewardTrophy_h_14_PROLOG
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_RewardTrophy_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_RewardTrophy_h_17_SPARSE_DATA \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_RewardTrophy_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_RewardTrophy_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_RewardTrophy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_RewardTrophy_h_17_ACCESSORS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_RewardTrophy_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_RewardTrophy_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJOLTAPI_API UClass* StaticClass<class URewardTrophy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_RewardTrophy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
