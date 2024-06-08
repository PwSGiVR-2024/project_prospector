// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActions/Scores/AddScore.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAddScore;
class UJsonData;
enum class EGJErrors : uint8;
#ifdef GAMEJOLTAPI_AddScore_generated_h
#error "AddScore.generated.h already included, missing '#pragma once' in AddScore.h"
#endif
#define GAMEJOLTAPI_AddScore_generated_h

#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_9_DELEGATE \
GAMEJOLTAPI_API void FAddScoreSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& AddScoreSuccessDelegate, EGJErrors Error);


#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_17_SPARSE_DATA
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallback); \
	DECLARE_FUNCTION(execAddScore);


#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_17_ACCESSORS
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAddScore(); \
	friend struct Z_Construct_UClass_UAddScore_Statics; \
public: \
	DECLARE_CLASS(UAddScore, UGameJoltAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameJoltAPI"), NO_API) \
	DECLARE_SERIALIZER(UAddScore)


#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAddScore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAddScore(UAddScore&&); \
	NO_API UAddScore(const UAddScore&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAddScore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAddScore); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAddScore) \
	NO_API virtual ~UAddScore();


#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_14_PROLOG
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_17_ACCESSORS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJOLTAPI_API UClass* StaticClass<class UAddScore>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
