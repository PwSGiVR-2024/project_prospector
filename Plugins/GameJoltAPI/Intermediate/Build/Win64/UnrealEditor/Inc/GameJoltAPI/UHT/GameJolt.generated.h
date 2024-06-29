// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameJolt.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEJOLTAPI_GameJolt_generated_h
#error "GameJolt.generated.h already included, missing '#pragma once' in GameJolt.h"
#endif
#define GAMEJOLTAPI_GameJolt_generated_h

#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h_24_SPARSE_DATA
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLogout); \
	DECLARE_FUNCTION(execIsLoggedIn); \
	DECLARE_FUNCTION(execGetGameID); \
	DECLARE_FUNCTION(execGetPrivateKey); \
	DECLARE_FUNCTION(execGetUsername); \
	DECLARE_FUNCTION(execInitialize);


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h_24_ACCESSORS
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameJolt(); \
	friend struct Z_Construct_UClass_UGameJolt_Statics; \
public: \
	DECLARE_CLASS(UGameJolt, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameJoltAPI"), NO_API) \
	DECLARE_SERIALIZER(UGameJolt)


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameJolt(UGameJolt&&); \
	NO_API UGameJolt(const UGameJolt&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameJolt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameJolt); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameJolt) \
	NO_API virtual ~UGameJolt();


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h_21_PROLOG
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h_24_SPARSE_DATA \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h_24_ACCESSORS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h_24_INCLASS_NO_PURE_DECLS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJOLTAPI_API UClass* StaticClass<class UGameJolt>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
