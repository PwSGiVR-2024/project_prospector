// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActions/Trophies/FetchTrophies.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFetchTrophies;
class UJsonData;
enum class EGJAchievedTrophies : uint8;
enum class EGJErrors : uint8;
struct FTrophyInfo;
#ifdef GAMEJOLTAPI_FetchTrophies_generated_h
#error "FetchTrophies.generated.h already included, missing '#pragma once' in FetchTrophies.h"
#endif
#define GAMEJOLTAPI_FetchTrophies_generated_h

#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_10_DELEGATE \
GAMEJOLTAPI_API void FFetchTrophiesSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& FetchTrophiesSuccessDelegate, EGJErrors Error, TArray<FTrophyInfo> const& Trophies);


#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_18_SPARSE_DATA
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallback); \
	DECLARE_FUNCTION(execFetchTrophies);


#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_18_ACCESSORS
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFetchTrophies(); \
	friend struct Z_Construct_UClass_UFetchTrophies_Statics; \
public: \
	DECLARE_CLASS(UFetchTrophies, UGameJoltAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameJoltAPI"), NO_API) \
	DECLARE_SERIALIZER(UFetchTrophies)


#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFetchTrophies(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFetchTrophies(UFetchTrophies&&); \
	NO_API UFetchTrophies(const UFetchTrophies&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFetchTrophies); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFetchTrophies); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFetchTrophies) \
	NO_API virtual ~UFetchTrophies();


#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_15_PROLOG
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_18_SPARSE_DATA \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_18_ACCESSORS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_18_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJOLTAPI_API UClass* StaticClass<class UFetchTrophies>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
