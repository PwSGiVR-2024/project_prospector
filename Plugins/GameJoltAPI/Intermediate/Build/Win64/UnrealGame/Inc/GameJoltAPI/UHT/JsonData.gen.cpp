// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../JsonData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UJsonData();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UJsonData_NoRegister();
	GAMEJOLTAPI_API UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameJoltAPI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature_Statics
	{
		struct _Script_GameJoltAPI_eventOnGetResult_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_GameJoltAPI_eventOnGetResult_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_GameJoltAPI_eventOnGetResult_Parms), &Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess_MetaData), Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameJoltAPI_eventOnGetResult_Parms, JSON), Z_Construct_UClass_UJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature_Statics::NewProp_JSON,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JsonData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltAPI, nullptr, "OnGetResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature_Statics::_Script_GameJoltAPI_eventOnGetResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature_Statics::_Script_GameJoltAPI_eventOnGetResult_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGetResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetResult, bool bSuccess, UJsonData* JSON)
{
	struct _Script_GameJoltAPI_eventOnGetResult_Parms
	{
		bool bSuccess;
		UJsonData* JSON;
	};
	_Script_GameJoltAPI_eventOnGetResult_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.JSON=JSON;
	OnGetResult.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UJsonData::StaticRegisterNativesUJsonData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJsonData);
	UClass* Z_Construct_UClass_UJsonData_NoRegister()
	{
		return UJsonData::StaticClass();
	}
	struct Z_Construct_UClass_UJsonData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGetResult_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGetResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsonData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltAPI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "JsonData.h" },
		{ "ModuleRelativePath", "Public/JsonData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonData_Statics::NewProp_OnGetResult_MetaData[] = {
		{ "Category", "JSON" },
		{ "ModuleRelativePath", "Public/JsonData.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJsonData_Statics::NewProp_OnGetResult = { "OnGetResult", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJsonData, OnGetResult), Z_Construct_UDelegateFunction_GameJoltAPI_OnGetResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonData_Statics::NewProp_OnGetResult_MetaData), Z_Construct_UClass_UJsonData_Statics::NewProp_OnGetResult_MetaData) }; // 2136999445
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJsonData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJsonData_Statics::NewProp_OnGetResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsonData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJsonData_Statics::ClassParams = {
		&UJsonData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UJsonData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UJsonData_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonData_Statics::Class_MetaDataParams), Z_Construct_UClass_UJsonData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJsonData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UJsonData()
	{
		if (!Z_Registration_Info_UClass_UJsonData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJsonData.OuterSingleton, Z_Construct_UClass_UJsonData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJsonData.OuterSingleton;
	}
	template<> GAMEJOLTAPI_API UClass* StaticClass<UJsonData>()
	{
		return UJsonData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonData);
	UJsonData::~UJsonData() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJsonData, UJsonData::StaticClass, TEXT("UJsonData"), &Z_Registration_Info_UClass_UJsonData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJsonData), 1523137966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_822041088(TEXT("/Script/GameJoltAPI"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_JsonData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
