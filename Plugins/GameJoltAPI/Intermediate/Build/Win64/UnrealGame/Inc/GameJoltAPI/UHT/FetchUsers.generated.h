// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActions/Users/FetchUsers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFetchUsers;
class UJsonData;
enum class EGJErrors : uint8;
struct FUserInfo;
#ifdef GAMEJOLTAPI_FetchUsers_generated_h
#error "FetchUsers.generated.h already included, missing '#pragma once' in FetchUsers.h"
#endif
#define GAMEJOLTAPI_FetchUsers_generated_h

#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_10_DELEGATE \
GAMEJOLTAPI_API void FFetchUsersSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& FetchUsersSuccessDelegate, EGJErrors Error, TArray<FUserInfo> const& Users);


#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_18_SPARSE_DATA
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallback); \
	DECLARE_FUNCTION(execFetchUsers_Name); \
	DECLARE_FUNCTION(execFetchUsers_ID);


#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_18_ACCESSORS
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFetchUsers(); \
	friend struct Z_Construct_UClass_UFetchUsers_Statics; \
public: \
	DECLARE_CLASS(UFetchUsers, UGameJoltAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameJoltAPI"), NO_API) \
	DECLARE_SERIALIZER(UFetchUsers)


#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFetchUsers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFetchUsers(UFetchUsers&&); \
	NO_API UFetchUsers(const UFetchUsers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFetchUsers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFetchUsers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFetchUsers) \
	NO_API virtual ~UFetchUsers();


#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_15_PROLOG
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_18_SPARSE_DATA \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_18_ACCESSORS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_18_INCLASS_NO_PURE_DECLS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJOLTAPI_API UClass* StaticClass<class UFetchUsers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
