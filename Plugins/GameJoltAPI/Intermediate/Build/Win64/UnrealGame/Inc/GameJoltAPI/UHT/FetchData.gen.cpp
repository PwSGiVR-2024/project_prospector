// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data-Store/FetchData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFetchData() {}
// Cross Module References
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UFetchData();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UFetchData_NoRegister();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UGameJoltAsyncBase();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UJsonData_NoRegister();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJDataStore();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJErrors();
	GAMEJOLTAPI_API UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_FetchDataSuccessDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameJoltAPI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameJoltAPI_FetchDataSuccessDelegate__DelegateSignature_Statics
	{
		struct _Script_GameJoltAPI_eventFetchDataSuccessDelegate_Parms
		{
			EGJErrors Error;
			FString Data;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Error;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_FetchDataSuccessDelegate__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_FetchDataSuccessDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameJoltAPI_eventFetchDataSuccessDelegate_Parms, Error), Z_Construct_UEnum_GameJoltAPI_EGJErrors, METADATA_PARAMS(0, nullptr) }; // 1852560761
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_FetchDataSuccessDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameJoltAPI_eventFetchDataSuccessDelegate_Parms, Data), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltAPI_FetchDataSuccessDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_FetchDataSuccessDelegate__DelegateSignature_Statics::NewProp_Error_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_FetchDataSuccessDelegate__DelegateSignature_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_FetchDataSuccessDelegate__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltAPI_FetchDataSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Data-Store/FetchData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltAPI_FetchDataSuccessDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltAPI, nullptr, "FetchDataSuccessDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameJoltAPI_FetchDataSuccessDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_FetchDataSuccessDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_FetchDataSuccessDelegate__DelegateSignature_Statics::_Script_GameJoltAPI_eventFetchDataSuccessDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_FetchDataSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameJoltAPI_FetchDataSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_FetchDataSuccessDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_FetchDataSuccessDelegate__DelegateSignature_Statics::_Script_GameJoltAPI_eventFetchDataSuccessDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_FetchDataSuccessDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameJoltAPI_FetchDataSuccessDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FFetchDataSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& FetchDataSuccessDelegate, EGJErrors Error, const FString& Data)
{
	struct _Script_GameJoltAPI_eventFetchDataSuccessDelegate_Parms
	{
		EGJErrors Error;
		FString Data;
	};
	_Script_GameJoltAPI_eventFetchDataSuccessDelegate_Parms Parms;
	Parms.Error=Error;
	Parms.Data=Data;
	FetchDataSuccessDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UFetchData::execCallback)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_GET_OBJECT(UJsonData,Z_Param_JSON);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Callback(Z_Param_bSuccess,Z_Param_JSON);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFetchData::execFetchData)
	{
		P_GET_ENUM(EGJDataStore,Z_Param_Scope);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFetchData**)Z_Param__Result=UFetchData::FetchData(EGJDataStore(Z_Param_Scope),Z_Param_Key);
		P_NATIVE_END;
	}
	void UFetchData::StaticRegisterNativesUFetchData()
	{
		UClass* Class = UFetchData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Callback", &UFetchData::execCallback },
			{ "FetchData", &UFetchData::execFetchData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFetchData_Callback_Statics
	{
		struct FetchData_eventCallback_Parms
		{
			bool bSuccess;
			UJsonData* JSON;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JSON;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchData_Callback_Statics::NewProp_bSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFetchData_Callback_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FetchData_eventCallback_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFetchData_Callback_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FetchData_eventCallback_Parms), &Z_Construct_UFunction_UFetchData_Callback_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchData_Callback_Statics::NewProp_bSuccess_MetaData), Z_Construct_UFunction_UFetchData_Callback_Statics::NewProp_bSuccess_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchData_Callback_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchData_eventCallback_Parms, JSON), Z_Construct_UClass_UJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchData_Callback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchData_Callback_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchData_Callback_Statics::NewProp_JSON,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchData_Callback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Data-Store/FetchData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchData_Callback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchData, nullptr, "Callback", nullptr, nullptr, Z_Construct_UFunction_UFetchData_Callback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchData_Callback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFetchData_Callback_Statics::FetchData_eventCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchData_Callback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFetchData_Callback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchData_Callback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFetchData_Callback_Statics::FetchData_eventCallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFetchData_Callback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFetchData_Callback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFetchData_FetchData_Statics
	{
		struct FetchData_eventFetchData_Parms
		{
			EGJDataStore Scope;
			FString Key;
			UFetchData* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Scope_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Scope;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFetchData_FetchData_Statics::NewProp_Scope_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFetchData_FetchData_Statics::NewProp_Scope = { "Scope", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchData_eventFetchData_Parms, Scope), Z_Construct_UEnum_GameJoltAPI_EGJDataStore, METADATA_PARAMS(0, nullptr) }; // 1883144207
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchData_FetchData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFetchData_FetchData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchData_eventFetchData_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchData_FetchData_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UFetchData_FetchData_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchData_FetchData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchData_eventFetchData_Parms, ReturnValue), Z_Construct_UClass_UFetchData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchData_FetchData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchData_FetchData_Statics::NewProp_Scope_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchData_FetchData_Statics::NewProp_Scope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchData_FetchData_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchData_FetchData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchData_FetchData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns data from the data store.\n\x09 * @param Scope If you select 'User', the data item will be fetched for a user. If you select 'Global', it will be fetched globally for the game.\n\x09 * @param Key The key of the data item you'd like to fetch.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncActions/Data-Store/FetchData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns data from the data store.\n@param Scope If you select 'User', the data item will be fetched for a user. If you select 'Global', it will be fetched globally for the game.\n@param Key The key of the data item you'd like to fetch." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchData_FetchData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchData, nullptr, "FetchData", nullptr, nullptr, Z_Construct_UFunction_UFetchData_FetchData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchData_FetchData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFetchData_FetchData_Statics::FetchData_eventFetchData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchData_FetchData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFetchData_FetchData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchData_FetchData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFetchData_FetchData_Statics::FetchData_eventFetchData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFetchData_FetchData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFetchData_FetchData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFetchData);
	UClass* Z_Construct_UClass_UFetchData_NoRegister()
	{
		return UFetchData::StaticClass();
	}
	struct Z_Construct_UClass_UFetchData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFetchData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameJoltAsyncBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltAPI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchData_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFetchData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFetchData_Callback, "Callback" }, // 1504142131
		{ &Z_Construct_UFunction_UFetchData_FetchData, "FetchData" }, // 2796441022
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchData_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchData_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Returns data from the data store.\n */" },
#endif
		{ "IncludePath", "AsyncActions/Data-Store/FetchData.h" },
		{ "ModuleRelativePath", "Public/AsyncActions/Data-Store/FetchData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns data from the data store." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchData_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Data-Store/FetchData.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFetchData_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFetchData, Success), Z_Construct_UDelegateFunction_GameJoltAPI_FetchDataSuccessDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchData_Statics::NewProp_Success_MetaData), Z_Construct_UClass_UFetchData_Statics::NewProp_Success_MetaData) }; // 1513440638
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFetchData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFetchData_Statics::NewProp_Success,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFetchData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFetchData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFetchData_Statics::ClassParams = {
		&UFetchData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFetchData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFetchData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchData_Statics::Class_MetaDataParams), Z_Construct_UClass_UFetchData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFetchData()
	{
		if (!Z_Registration_Info_UClass_UFetchData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFetchData.OuterSingleton, Z_Construct_UClass_UFetchData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFetchData.OuterSingleton;
	}
	template<> GAMEJOLTAPI_API UClass* StaticClass<UFetchData>()
	{
		return UFetchData::StaticClass();
	}
	UFetchData::UFetchData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFetchData);
	UFetchData::~UFetchData() {}
	struct Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFetchData, UFetchData::StaticClass, TEXT("UFetchData"), &Z_Registration_Info_UClass_UFetchData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFetchData), 3385192728U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_2295566957(TEXT("/Script/GameJoltAPI"),
		Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_FetchData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
