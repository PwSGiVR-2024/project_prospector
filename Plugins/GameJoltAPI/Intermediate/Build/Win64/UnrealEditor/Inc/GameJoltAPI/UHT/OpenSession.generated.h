// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActions/Sessions/OpenSession.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UJsonData;
class UOpenSession;
enum class EGJErrors : uint8;
#ifdef GAMEJOLTAPI_OpenSession_generated_h
#error "OpenSession.generated.h already included, missing '#pragma once' in OpenSession.h"
#endif
#define GAMEJOLTAPI_OpenSession_generated_h

#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_OpenSession_h_9_DELEGATE \
GAMEJOLTAPI_API void FOpenSessionSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& OpenSessionSuccessDelegate, EGJErrors Error);


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_OpenSession_h_17_SPARSE_DATA
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_OpenSession_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_OpenSession_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_OpenSession_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallback); \
	DECLARE_FUNCTION(execOpenSession);


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_OpenSession_h_17_ACCESSORS
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_OpenSession_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenSession(); \
	friend struct Z_Construct_UClass_UOpenSession_Statics; \
public: \
	DECLARE_CLASS(UOpenSession, UGameJoltAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameJoltAPI"), NO_API) \
	DECLARE_SERIALIZER(UOpenSession)


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_OpenSession_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenSession(UOpenSession&&); \
	NO_API UOpenSession(const UOpenSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenSession); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenSession) \
	NO_API virtual ~UOpenSession();


#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_OpenSession_h_14_PROLOG
#define FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_OpenSession_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_OpenSession_h_17_SPARSE_DATA \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_OpenSession_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_OpenSession_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_OpenSession_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_OpenSession_h_17_ACCESSORS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_OpenSession_h_17_INCLASS_NO_PURE_DECLS \
	FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_OpenSession_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJOLTAPI_API UClass* StaticClass<class UOpenSession>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_OpenSession_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
