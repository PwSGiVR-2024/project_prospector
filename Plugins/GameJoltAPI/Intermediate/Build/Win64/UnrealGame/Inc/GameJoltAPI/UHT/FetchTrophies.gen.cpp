// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trophies/FetchTrophies.h"
#include "../GameJoltStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFetchTrophies() {}
// Cross Module References
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UFetchTrophies();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UFetchTrophies_NoRegister();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UGameJoltAsyncBase();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UJsonData_NoRegister();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJAchievedTrophies();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJErrors();
	GAMEJOLTAPI_API UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature();
	GAMEJOLTAPI_API UScriptStruct* Z_Construct_UScriptStruct_FTrophyInfo();
	UPackage* Z_Construct_UPackage__Script_GameJoltAPI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics
	{
		struct _Script_GameJoltAPI_eventFetchTrophiesSuccessDelegate_Parms
		{
			EGJErrors Error;
			TArray<FTrophyInfo> Trophies;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Error;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Trophies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trophies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Trophies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameJoltAPI_eventFetchTrophiesSuccessDelegate_Parms, Error), Z_Construct_UEnum_GameJoltAPI_EGJErrors, METADATA_PARAMS(0, nullptr) }; // 1852560761
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::NewProp_Trophies_Inner = { "Trophies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTrophyInfo, METADATA_PARAMS(0, nullptr) }; // 3749690392
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::NewProp_Trophies_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::NewProp_Trophies = { "Trophies", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameJoltAPI_eventFetchTrophiesSuccessDelegate_Parms, Trophies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::NewProp_Trophies_MetaData), Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::NewProp_Trophies_MetaData) }; // 3749690392
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::NewProp_Error_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::NewProp_Trophies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::NewProp_Trophies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Trophies/FetchTrophies.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltAPI, nullptr, "FetchTrophiesSuccessDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::_Script_GameJoltAPI_eventFetchTrophiesSuccessDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::_Script_GameJoltAPI_eventFetchTrophiesSuccessDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FFetchTrophiesSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& FetchTrophiesSuccessDelegate, EGJErrors Error, TArray<FTrophyInfo> const& Trophies)
{
	struct _Script_GameJoltAPI_eventFetchTrophiesSuccessDelegate_Parms
	{
		EGJErrors Error;
		TArray<FTrophyInfo> Trophies;
	};
	_Script_GameJoltAPI_eventFetchTrophiesSuccessDelegate_Parms Parms;
	Parms.Error=Error;
	Parms.Trophies=Trophies;
	FetchTrophiesSuccessDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UFetchTrophies::execCallback)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_GET_OBJECT(UJsonData,Z_Param_JSON);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Callback(Z_Param_bSuccess,Z_Param_JSON);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFetchTrophies::execFetchTrophies)
	{
		P_GET_ENUM(EGJAchievedTrophies,Z_Param_TrophyFilter);
		P_GET_TARRAY(int32,Z_Param_TrophyIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFetchTrophies**)Z_Param__Result=UFetchTrophies::FetchTrophies(EGJAchievedTrophies(Z_Param_TrophyFilter),Z_Param_TrophyIDs);
		P_NATIVE_END;
	}
	void UFetchTrophies::StaticRegisterNativesUFetchTrophies()
	{
		UClass* Class = UFetchTrophies::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Callback", &UFetchTrophies::execCallback },
			{ "FetchTrophies", &UFetchTrophies::execFetchTrophies },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFetchTrophies_Callback_Statics
	{
		struct FetchTrophies_eventCallback_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchTrophies_Callback_Statics::NewProp_bSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFetchTrophies_Callback_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FetchTrophies_eventCallback_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFetchTrophies_Callback_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FetchTrophies_eventCallback_Parms), &Z_Construct_UFunction_UFetchTrophies_Callback_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchTrophies_Callback_Statics::NewProp_bSuccess_MetaData), Z_Construct_UFunction_UFetchTrophies_Callback_Statics::NewProp_bSuccess_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchTrophies_Callback_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchTrophies_eventCallback_Parms, JSON), Z_Construct_UClass_UJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchTrophies_Callback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchTrophies_Callback_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchTrophies_Callback_Statics::NewProp_JSON,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchTrophies_Callback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Trophies/FetchTrophies.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchTrophies_Callback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchTrophies, nullptr, "Callback", nullptr, nullptr, Z_Construct_UFunction_UFetchTrophies_Callback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchTrophies_Callback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFetchTrophies_Callback_Statics::FetchTrophies_eventCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchTrophies_Callback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFetchTrophies_Callback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchTrophies_Callback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFetchTrophies_Callback_Statics::FetchTrophies_eventCallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFetchTrophies_Callback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFetchTrophies_Callback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics
	{
		struct FetchTrophies_eventFetchTrophies_Parms
		{
			EGJAchievedTrophies TrophyFilter;
			TArray<int32> TrophyIDs;
			UFetchTrophies* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_TrophyFilter_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TrophyFilter;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrophyIDs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrophyIDs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics::NewProp_TrophyFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics::NewProp_TrophyFilter = { "TrophyFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchTrophies_eventFetchTrophies_Parms, TrophyFilter), Z_Construct_UEnum_GameJoltAPI_EGJAchievedTrophies, METADATA_PARAMS(0, nullptr) }; // 4173289317
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics::NewProp_TrophyIDs_Inner = { "TrophyIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics::NewProp_TrophyIDs = { "TrophyIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchTrophies_eventFetchTrophies_Parms, TrophyIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchTrophies_eventFetchTrophies_Parms, ReturnValue), Z_Construct_UClass_UFetchTrophies_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics::NewProp_TrophyFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics::NewProp_TrophyFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics::NewProp_TrophyIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics::NewProp_TrophyIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns one trophy or multiple trophies, depending on the parameters passed in.\n\x09 * Passing values in the TrophyIDs parameter will ignore the TrophyFilter parameter.\n\x09 * @param TropyFilter Whether you want to fetch all, only achieved or only unachieved trophies\n\x09 * @param TrophyIDs (Optional) Either a single trophy ID or multiple.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncActions/Trophies/FetchTrophies.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns one trophy or multiple trophies, depending on the parameters passed in.\nPassing values in the TrophyIDs parameter will ignore the TrophyFilter parameter.\n@param TropyFilter Whether you want to fetch all, only achieved or only unachieved trophies\n@param TrophyIDs (Optional) Either a single trophy ID or multiple." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchTrophies, nullptr, "FetchTrophies", nullptr, nullptr, Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics::FetchTrophies_eventFetchTrophies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics::FetchTrophies_eventFetchTrophies_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFetchTrophies_FetchTrophies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFetchTrophies_FetchTrophies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFetchTrophies);
	UClass* Z_Construct_UClass_UFetchTrophies_NoRegister()
	{
		return UFetchTrophies::StaticClass();
	}
	struct Z_Construct_UClass_UFetchTrophies_Statics
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
	UObject* (*const Z_Construct_UClass_UFetchTrophies_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameJoltAsyncBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltAPI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchTrophies_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFetchTrophies_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFetchTrophies_Callback, "Callback" }, // 2739775724
		{ &Z_Construct_UFunction_UFetchTrophies_FetchTrophies, "FetchTrophies" }, // 71300804
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchTrophies_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchTrophies_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Returns one trophy or multiple trophies, depending on the parameters passed in.\n */" },
#endif
		{ "IncludePath", "AsyncActions/Trophies/FetchTrophies.h" },
		{ "ModuleRelativePath", "Public/AsyncActions/Trophies/FetchTrophies.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns one trophy or multiple trophies, depending on the parameters passed in." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchTrophies_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Trophies/FetchTrophies.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFetchTrophies_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFetchTrophies, Success), Z_Construct_UDelegateFunction_GameJoltAPI_FetchTrophiesSuccessDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchTrophies_Statics::NewProp_Success_MetaData), Z_Construct_UClass_UFetchTrophies_Statics::NewProp_Success_MetaData) }; // 414381041
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFetchTrophies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFetchTrophies_Statics::NewProp_Success,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFetchTrophies_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFetchTrophies>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFetchTrophies_Statics::ClassParams = {
		&UFetchTrophies::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFetchTrophies_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFetchTrophies_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchTrophies_Statics::Class_MetaDataParams), Z_Construct_UClass_UFetchTrophies_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchTrophies_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFetchTrophies()
	{
		if (!Z_Registration_Info_UClass_UFetchTrophies.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFetchTrophies.OuterSingleton, Z_Construct_UClass_UFetchTrophies_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFetchTrophies.OuterSingleton;
	}
	template<> GAMEJOLTAPI_API UClass* StaticClass<UFetchTrophies>()
	{
		return UFetchTrophies::StaticClass();
	}
	UFetchTrophies::UFetchTrophies(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFetchTrophies);
	UFetchTrophies::~UFetchTrophies() {}
	struct Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFetchTrophies, UFetchTrophies::StaticClass, TEXT("UFetchTrophies"), &Z_Registration_Info_UClass_UFetchTrophies, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFetchTrophies), 364338644U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_2030870501(TEXT("/Script/GameJoltAPI"),
		Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Trophies_FetchTrophies_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
