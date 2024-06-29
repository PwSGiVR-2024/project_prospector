// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActions/Data-Store/GetKeys.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGetKeys;
class UJsonData;
enum class EGJDataStore : uint8;
enum class EGJErrors : uint8;
#ifdef GAMEJOLTAPI_GetKeys_generated_h
#error "GetKeys.generated.h already included, missing '#pragma once' in GetKeys.h"
#endif
#define GAMEJOLTAPI_GetKeys_generated_h

#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_GetKeys_h_9_DELEGATE \
GAMEJOLTAPI_API void FGetKeysSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& GetKeysSuccessDelegate, EGJErrors Error, TArray<FString> const& Keys);


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_GetKeys_h_17_SPARSE_DATA
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_GetKeys_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_GetKeys_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_GetKeys_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallback); \
	DECLARE_FUNCTION(execGetKeys);


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_GetKeys_h_17_ACCESSORS
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_GetKeys_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGetKeys(); \
	friend struct Z_Construct_UClass_UGetKeys_Statics; \
public: \
	DECLARE_CLASS(UGetKeys, UGameJoltAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameJoltAPI"), NO_API) \
	DECLARE_SERIALIZER(UGetKeys)


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_GetKeys_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetKeys(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetKeys(UGetKeys&&); \
	NO_API UGetKeys(const UGetKeys&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetKeys); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetKeys); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetKeys) \
	NO_API virtual ~UGetKeys();


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_GetKeys_h_14_PROLOG
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_GetKeys_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_GetKeys_h_17_SPARSE_DATA \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_GetKeys_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_GetKeys_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_GetKeys_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_GetKeys_h_17_ACCESSORS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_GetKeys_h_17_INCLASS_NO_PURE_DECLS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_GetKeys_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJOLTAPI_API UClass* StaticClass<class UGetKeys>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_GetKeys_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
