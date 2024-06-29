// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActions/Users/AutoLogin.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAutoLogin;
class UJsonData;
enum class EGJErrors : uint8;
#ifdef GAMEJOLTAPI_AutoLogin_generated_h
#error "AutoLogin.generated.h already included, missing '#pragma once' in AutoLogin.h"
#endif
#define GAMEJOLTAPI_AutoLogin_generated_h

#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_AutoLogin_h_11_DELEGATE \
GAMEJOLTAPI_API void FAutoLoginSuccesDelegate_DelegateWrapper(const FMulticastScriptDelegate& AutoLoginSuccesDelegate, EGJErrors Error);


#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_AutoLogin_h_19_SPARSE_DATA
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_AutoLogin_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_AutoLogin_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_AutoLogin_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallback); \
	DECLARE_FUNCTION(execAutoLogin);


#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_AutoLogin_h_19_ACCESSORS
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_AutoLogin_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutoLogin(); \
	friend struct Z_Construct_UClass_UAutoLogin_Statics; \
public: \
	DECLARE_CLASS(UAutoLogin, UGameJoltAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameJoltAPI"), NO_API) \
	DECLARE_SERIALIZER(UAutoLogin)


#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_AutoLogin_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutoLogin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutoLogin(UAutoLogin&&); \
	NO_API UAutoLogin(const UAutoLogin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoLogin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoLogin); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoLogin) \
	NO_API virtual ~UAutoLogin();


#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_AutoLogin_h_16_PROLOG
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_AutoLogin_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_AutoLogin_h_19_SPARSE_DATA \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_AutoLogin_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_AutoLogin_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_AutoLogin_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_AutoLogin_h_19_ACCESSORS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_AutoLogin_h_19_INCLASS_NO_PURE_DECLS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_AutoLogin_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJOLTAPI_API UClass* StaticClass<class UAutoLogin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_AutoLogin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
