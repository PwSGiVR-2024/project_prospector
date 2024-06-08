// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActions/Data-Store/Update.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UJsonData;
class UUpdate;
enum class EGJDataOperation : uint8;
enum class EGJDataStore : uint8;
enum class EGJErrors : uint8;
#ifdef GAMEJOLTAPI_Update_generated_h
#error "Update.generated.h already included, missing '#pragma once' in Update.h"
#endif
#define GAMEJOLTAPI_Update_generated_h

#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Update_h_9_DELEGATE \
GAMEJOLTAPI_API void FUpdateSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& UpdateSuccessDelegate, EGJErrors Error, const FString& Data);


#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Update_h_17_SPARSE_DATA
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Update_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Update_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Update_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallback); \
	DECLARE_FUNCTION(execUpdateData);


#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Update_h_17_ACCESSORS
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Update_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUpdate(); \
	friend struct Z_Construct_UClass_UUpdate_Statics; \
public: \
	DECLARE_CLASS(UUpdate, UGameJoltAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameJoltAPI"), NO_API) \
	DECLARE_SERIALIZER(UUpdate)


#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Update_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUpdate(UUpdate&&); \
	NO_API UUpdate(const UUpdate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdate) \
	NO_API virtual ~UUpdate();


#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Update_h_14_PROLOG
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Update_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Update_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Update_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Update_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Update_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Update_h_17_ACCESSORS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Update_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Update_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJOLTAPI_API UClass* StaticClass<class UUpdate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Update_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
