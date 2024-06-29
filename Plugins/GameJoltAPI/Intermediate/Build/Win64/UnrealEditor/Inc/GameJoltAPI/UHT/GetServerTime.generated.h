// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActions/Misc/GetServerTime.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGetServerTime;
class UJsonData;
enum class EGJErrors : uint8;
struct FServerTime;
#ifdef GAMEJOLTAPI_GetServerTime_generated_h
#error "GetServerTime.generated.h already included, missing '#pragma once' in GetServerTime.h"
#endif
#define GAMEJOLTAPI_GetServerTime_generated_h

#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_10_DELEGATE \
GAMEJOLTAPI_API void FTimeSuccesDelegate_DelegateWrapper(const FMulticastScriptDelegate& TimeSuccesDelegate, EGJErrors Error, FServerTime ServerTime);


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_18_SPARSE_DATA
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallback); \
	DECLARE_FUNCTION(execGetServerTime);


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_18_ACCESSORS
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGetServerTime(); \
	friend struct Z_Construct_UClass_UGetServerTime_Statics; \
public: \
	DECLARE_CLASS(UGetServerTime, UGameJoltAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameJoltAPI"), NO_API) \
	DECLARE_SERIALIZER(UGetServerTime)


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetServerTime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetServerTime(UGetServerTime&&); \
	NO_API UGetServerTime(const UGetServerTime&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetServerTime); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetServerTime); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetServerTime) \
	NO_API virtual ~UGetServerTime();


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_15_PROLOG
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_18_SPARSE_DATA \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_18_ACCESSORS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_18_INCLASS_NO_PURE_DECLS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJOLTAPI_API UClass* StaticClass<class UGetServerTime>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
