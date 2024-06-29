// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActions/Sessions/PingSession.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UJsonData;
class UPingSession;
enum class EGJErrors : uint8;
enum class EGJSessionStatus : uint8;
#ifdef GAMEJOLTAPI_PingSession_generated_h
#error "PingSession.generated.h already included, missing '#pragma once' in PingSession.h"
#endif
#define GAMEJOLTAPI_PingSession_generated_h

#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_9_DELEGATE \
GAMEJOLTAPI_API void FPingSessionSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& PingSessionSuccessDelegate, EGJErrors Error);


#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_17_SPARSE_DATA
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallback); \
	DECLARE_FUNCTION(execPingSession);


#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_17_ACCESSORS
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPingSession(); \
	friend struct Z_Construct_UClass_UPingSession_Statics; \
public: \
	DECLARE_CLASS(UPingSession, UGameJoltAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameJoltAPI"), NO_API) \
	DECLARE_SERIALIZER(UPingSession)


#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPingSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPingSession(UPingSession&&); \
	NO_API UPingSession(const UPingSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPingSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPingSession); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPingSession) \
	NO_API virtual ~UPingSession();


#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_14_PROLOG
#define FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_17_SPARSE_DATA \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_17_ACCESSORS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJOLTAPI_API UClass* StaticClass<class UPingSession>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
