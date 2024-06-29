// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JsonData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UJsonData;
#ifdef GAMEJOLTAPI_JsonData_generated_h
#error "JsonData.generated.h already included, missing '#pragma once' in JsonData.h"
#endif
#define GAMEJOLTAPI_JsonData_generated_h

#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_22_DELEGATE \
GAMEJOLTAPI_API void FOnGetResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetResult, bool bSuccess, UJsonData* JSON);


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_27_SPARSE_DATA
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_27_ACCESSORS
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonData(); \
	friend struct Z_Construct_UClass_UJsonData_Statics; \
public: \
	DECLARE_CLASS(UJsonData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameJoltAPI"), NO_API) \
	DECLARE_SERIALIZER(UJsonData)


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonData(UJsonData&&); \
	NO_API UJsonData(const UJsonData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UJsonData) \
	NO_API virtual ~UJsonData();


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_24_PROLOG
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_27_SPARSE_DATA \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_27_ACCESSORS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_27_INCLASS_NO_PURE_DECLS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJOLTAPI_API UClass* StaticClass<class UJsonData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
