// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActions/Users/Login.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UJsonData;
class ULogin;
enum class EGJErrors : uint8;
#ifdef GAMEJOLTAPI_Login_generated_h
#error "Login.generated.h already included, missing '#pragma once' in Login.h"
#endif
#define GAMEJOLTAPI_Login_generated_h

#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_Login_h_11_DELEGATE \
GAMEJOLTAPI_API void FLoginSuccesDelegate_DelegateWrapper(const FMulticastScriptDelegate& LoginSuccesDelegate, EGJErrors Error);


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_Login_h_19_SPARSE_DATA
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_Login_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_Login_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_Login_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallback); \
	DECLARE_FUNCTION(execLogin);


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_Login_h_19_ACCESSORS
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_Login_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULogin(); \
	friend struct Z_Construct_UClass_ULogin_Statics; \
public: \
	DECLARE_CLASS(ULogin, UGameJoltAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameJoltAPI"), NO_API) \
	DECLARE_SERIALIZER(ULogin)


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_Login_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULogin(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULogin(ULogin&&); \
	NO_API ULogin(const ULogin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULogin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogin); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULogin) \
	NO_API virtual ~ULogin();


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_Login_h_16_PROLOG
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_Login_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_Login_h_19_SPARSE_DATA \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_Login_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_Login_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_Login_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_Login_h_19_ACCESSORS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_Login_h_19_INCLASS_NO_PURE_DECLS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_Login_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJOLTAPI_API UClass* StaticClass<class ULogin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_Login_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
