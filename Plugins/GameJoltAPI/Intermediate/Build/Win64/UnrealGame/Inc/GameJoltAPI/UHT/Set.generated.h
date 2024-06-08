// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActions/Data-Store/Set.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UJsonData;
class USet;
enum class EGJDataStore : uint8;
enum class EGJErrors : uint8;
#ifdef GAMEJOLTAPI_Set_generated_h
#error "Set.generated.h already included, missing '#pragma once' in Set.h"
#endif
#define GAMEJOLTAPI_Set_generated_h

#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Set_h_9_DELEGATE \
GAMEJOLTAPI_API void FSetSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& SetSuccessDelegate, EGJErrors Error);


#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Set_h_17_SPARSE_DATA
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Set_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Set_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Set_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallback); \
	DECLARE_FUNCTION(execSetData);


#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Set_h_17_ACCESSORS
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Set_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSet(); \
	friend struct Z_Construct_UClass_USet_Statics; \
public: \
	DECLARE_CLASS(USet, UGameJoltAsyncBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameJoltAPI"), NO_API) \
	DECLARE_SERIALIZER(USet)


#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Set_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USet(USet&&); \
	NO_API USet(const USet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USet) \
	NO_API virtual ~USet();


#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Set_h_14_PROLOG
#define FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Set_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Set_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Set_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Set_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Set_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Set_h_17_ACCESSORS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Set_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Set_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJOLTAPI_API UClass* StaticClass<class USet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Set_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
