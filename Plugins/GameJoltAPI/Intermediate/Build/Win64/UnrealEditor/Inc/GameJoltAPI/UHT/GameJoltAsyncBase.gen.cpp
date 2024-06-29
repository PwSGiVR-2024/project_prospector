// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameJoltAsyncBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameJoltAsyncBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UGameJoltAsyncBase();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UGameJoltAsyncBase_NoRegister();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJErrors();
	GAMEJOLTAPI_API UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_OnFailureOutputPin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameJoltAPI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameJoltAPI_OnFailureOutputPin__DelegateSignature_Statics
	{
		struct _Script_GameJoltAPI_eventOnFailureOutputPin_Parms
		{
			EGJErrors Error;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_OnFailureOutputPin__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_OnFailureOutputPin__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameJoltAPI_eventOnFailureOutputPin_Parms, Error), Z_Construct_UEnum_GameJoltAPI_EGJErrors, METADATA_PARAMS(0, nullptr) }; // 1852560761
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltAPI_OnFailureOutputPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_OnFailureOutputPin__DelegateSignature_Statics::NewProp_Error_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_OnFailureOutputPin__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltAPI_OnFailureOutputPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/GameJoltAsyncBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltAPI_OnFailureOutputPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltAPI, nullptr, "OnFailureOutputPin__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameJoltAPI_OnFailureOutputPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_OnFailureOutputPin__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_OnFailureOutputPin__DelegateSignature_Statics::_Script_GameJoltAPI_eventOnFailureOutputPin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_OnFailureOutputPin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameJoltAPI_OnFailureOutputPin__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_OnFailureOutputPin__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_OnFailureOutputPin__DelegateSignature_Statics::_Script_GameJoltAPI_eventOnFailureOutputPin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_OnFailureOutputPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameJoltAPI_OnFailureOutputPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFailureOutputPin_DelegateWrapper(const FMulticastScriptDelegate& OnFailureOutputPin, EGJErrors Error)
{
	struct _Script_GameJoltAPI_eventOnFailureOutputPin_Parms
	{
		EGJErrors Error;
	};
	_Script_GameJoltAPI_eventOnFailureOutputPin_Parms Parms;
	Parms.Error=Error;
	OnFailureOutputPin.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UGameJoltAsyncBase::StaticRegisterNativesUGameJoltAsyncBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameJoltAsyncBase);
	UClass* Z_Construct_UClass_UGameJoltAsyncBase_NoRegister()
	{
		return UGameJoltAsyncBase::StaticClass();
	}
	struct Z_Construct_UClass_UGameJoltAsyncBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Failure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameJoltAsyncBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltAPI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameJoltAsyncBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameJoltAsyncBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AsyncActions/GameJoltAsyncBase.h" },
		{ "ModuleRelativePath", "Public/AsyncActions/GameJoltAsyncBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameJoltAsyncBase_Statics::NewProp_Failure_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/GameJoltAsyncBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameJoltAsyncBase_Statics::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameJoltAsyncBase, Failure), Z_Construct_UDelegateFunction_GameJoltAPI_OnFailureOutputPin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameJoltAsyncBase_Statics::NewProp_Failure_MetaData), Z_Construct_UClass_UGameJoltAsyncBase_Statics::NewProp_Failure_MetaData) }; // 3166989538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameJoltAsyncBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameJoltAsyncBase_Statics::NewProp_Failure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameJoltAsyncBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameJoltAsyncBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameJoltAsyncBase_Statics::ClassParams = {
		&UGameJoltAsyncBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameJoltAsyncBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameJoltAsyncBase_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameJoltAsyncBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameJoltAsyncBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameJoltAsyncBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGameJoltAsyncBase()
	{
		if (!Z_Registration_Info_UClass_UGameJoltAsyncBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameJoltAsyncBase.OuterSingleton, Z_Construct_UClass_UGameJoltAsyncBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameJoltAsyncBase.OuterSingleton;
	}
	template<> GAMEJOLTAPI_API UClass* StaticClass<UGameJoltAsyncBase>()
	{
		return UGameJoltAsyncBase::StaticClass();
	}
	UGameJoltAsyncBase::UGameJoltAsyncBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameJoltAsyncBase);
	UGameJoltAsyncBase::~UGameJoltAsyncBase() {}
	struct Z_CompiledInDeferFile_FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_GameJoltAsyncBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_GameJoltAsyncBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameJoltAsyncBase, UGameJoltAsyncBase::StaticClass, TEXT("UGameJoltAsyncBase"), &Z_Registration_Info_UClass_UGameJoltAsyncBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameJoltAsyncBase), 1535397246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_GameJoltAsyncBase_h_3312227520(TEXT("/Script/GameJoltAPI"),
		Z_CompiledInDeferFile_FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_GameJoltAsyncBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_GameJoltAsyncBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
