// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActions/Scores/FetchScores.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFetchScores;
class UJsonData;
enum class EGJErrors : uint8;
enum class EGJScoreFilter : uint8;
struct FScoreInfo;
#ifdef GAMEJOLTAPI_FetchScores_generated_h
#error "FetchScores.generated.h already included, missing '#pragma once' in FetchScores.h"
#endif
#define GAMEJOLTAPI_FetchScores_generated_h

#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_10_DELEGATE \
GAMEJOLTAPI_API void FFetchScoresSuccessDeleagte_DelegateWrapper(const FMulticastScriptDelegate& FetchScoresSuccessDeleagte, EGJErrors Error, TArray<FScoreInfo> const& Scores);


#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_18_SPARSE_DATA
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallback); \
	DECLARE_FUNCTION(execFetchScores);


#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_18_ACCESSORS
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFetchScores(); \
	friend struct Z_Construct_UClass_UFetchScores_Statics; \
public: \
	DECLARE_CLASS(UFetchScores, UGameJoltAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameJoltAPI"), NO_API) \
	DECLARE_SERIALIZER(UFetchScores)


#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFetchScores(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFetchScores(UFetchScores&&); \
	NO_API UFetchScores(const UFetchScores&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFetchScores); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFetchScores); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFetchScores) \
	NO_API virtual ~UFetchScores();


#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_15_PROLOG
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_18_SPARSE_DATA \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_18_ACCESSORS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_18_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJOLTAPI_API UClass* StaticClass<class UFetchScores>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
