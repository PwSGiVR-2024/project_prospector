// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActions/Data-Store/FetchData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFetchData;
class UJsonData;
enum class EGJDataStore : uint8;
enum class EGJErrors : uint8;
#ifdef GAMEJOLTAPI_FetchData_generated_h
#error "FetchData.generated.h already included, missing '#pragma once' in FetchData.h"
#endif
#define GAMEJOLTAPI_FetchData_generated_h

#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_9_DELEGATE \
GAMEJOLTAPI_API void FFetchDataSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& FetchDataSuccessDelegate, EGJErrors Error, const FString& Data);


#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_17_SPARSE_DATA
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallback); \
	DECLARE_FUNCTION(execFetchData);


#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_17_ACCESSORS
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFetchData(); \
	friend struct Z_Construct_UClass_UFetchData_Statics; \
public: \
	DECLARE_CLASS(UFetchData, UGameJoltAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameJoltAPI"), NO_API) \
	DECLARE_SERIALIZER(UFetchData)


#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFetchData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFetchData(UFetchData&&); \
	NO_API UFetchData(const UFetchData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFetchData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFetchData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFetchData) \
	NO_API virtual ~UFetchData();


#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_14_PROLOG
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_17_SPARSE_DATA \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_17_ACCESSORS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJOLTAPI_API UClass* StaticClass<class UFetchData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
