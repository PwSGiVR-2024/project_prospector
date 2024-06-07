// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Scores/GetRank.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetRank() {}
// Cross Module References
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UGameJoltAsyncBase();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UGetRank();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UGetRank_NoRegister();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UJsonData_NoRegister();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJErrors();
	GAMEJOLTAPI_API UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_GetRankSuccessDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameJoltAPI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameJoltAPI_GetRankSuccessDelegate__DelegateSignature_Statics
	{
		struct _Script_GameJoltAPI_eventGetRankSuccessDelegate_Parms
		{
			EGJErrors Error;
			int32 Rank;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Error;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Rank;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_GetRankSuccessDelegate__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_GetRankSuccessDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameJoltAPI_eventGetRankSuccessDelegate_Parms, Error), Z_Construct_UEnum_GameJoltAPI_EGJErrors, METADATA_PARAMS(0, nullptr) }; // 1852560761
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_GetRankSuccessDelegate__DelegateSignature_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameJoltAPI_eventGetRankSuccessDelegate_Parms, Rank), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltAPI_GetRankSuccessDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_GetRankSuccessDelegate__DelegateSignature_Statics::NewProp_Error_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_GetRankSuccessDelegate__DelegateSignature_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_GetRankSuccessDelegate__DelegateSignature_Statics::NewProp_Rank,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltAPI_GetRankSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Scores/GetRank.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltAPI_GetRankSuccessDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltAPI, nullptr, "GetRankSuccessDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameJoltAPI_GetRankSuccessDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_GetRankSuccessDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_GetRankSuccessDelegate__DelegateSignature_Statics::_Script_GameJoltAPI_eventGetRankSuccessDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_GetRankSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameJoltAPI_GetRankSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_GetRankSuccessDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_GetRankSuccessDelegate__DelegateSignature_Statics::_Script_GameJoltAPI_eventGetRankSuccessDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_GetRankSuccessDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameJoltAPI_GetRankSuccessDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGetRankSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& GetRankSuccessDelegate, EGJErrors Error, int32 Rank)
{
	struct _Script_GameJoltAPI_eventGetRankSuccessDelegate_Parms
	{
		EGJErrors Error;
		int32 Rank;
	};
	_Script_GameJoltAPI_eventGetRankSuccessDelegate_Parms Parms;
	Parms.Error=Error;
	Parms.Rank=Rank;
	GetRankSuccessDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UGetRank::execCallback)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_GET_OBJECT(UJsonData,Z_Param_JSON);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Callback(Z_Param_bSuccess,Z_Param_JSON);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGetRank::execGetRank)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ScoreSort);
		P_GET_PROPERTY(FIntProperty,Z_Param_TableID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGetRank**)Z_Param__Result=UGetRank::GetRank(Z_Param_ScoreSort,Z_Param_TableID);
		P_NATIVE_END;
	}
	void UGetRank::StaticRegisterNativesUGetRank()
	{
		UClass* Class = UGetRank::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Callback", &UGetRank::execCallback },
			{ "GetRank", &UGetRank::execGetRank },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetRank_Callback_Statics
	{
		struct GetRank_eventCallback_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetRank_Callback_Statics::NewProp_bSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGetRank_Callback_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((GetRank_eventCallback_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGetRank_Callback_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GetRank_eventCallback_Parms), &Z_Construct_UFunction_UGetRank_Callback_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetRank_Callback_Statics::NewProp_bSuccess_MetaData), Z_Construct_UFunction_UGetRank_Callback_Statics::NewProp_bSuccess_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetRank_Callback_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetRank_eventCallback_Parms, JSON), Z_Construct_UClass_UJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetRank_Callback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetRank_Callback_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetRank_Callback_Statics::NewProp_JSON,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetRank_Callback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Scores/GetRank.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetRank_Callback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetRank, nullptr, "Callback", nullptr, nullptr, Z_Construct_UFunction_UGetRank_Callback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetRank_Callback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGetRank_Callback_Statics::GetRank_eventCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetRank_Callback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGetRank_Callback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetRank_Callback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGetRank_Callback_Statics::GetRank_eventCallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGetRank_Callback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGetRank_Callback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetRank_GetRank_Statics
	{
		struct GetRank_eventGetRank_Parms
		{
			int32 ScoreSort;
			int32 TableID;
			UGetRank* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreSort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ScoreSort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TableID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetRank_GetRank_Statics::NewProp_ScoreSort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGetRank_GetRank_Statics::NewProp_ScoreSort = { "ScoreSort", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetRank_eventGetRank_Parms, ScoreSort), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetRank_GetRank_Statics::NewProp_ScoreSort_MetaData), Z_Construct_UFunction_UGetRank_GetRank_Statics::NewProp_ScoreSort_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetRank_GetRank_Statics::NewProp_TableID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGetRank_GetRank_Statics::NewProp_TableID = { "TableID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetRank_eventGetRank_Parms, TableID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetRank_GetRank_Statics::NewProp_TableID_MetaData), Z_Construct_UFunction_UGetRank_GetRank_Statics::NewProp_TableID_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetRank_GetRank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetRank_eventGetRank_Parms, ReturnValue), Z_Construct_UClass_UGetRank_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetRank_GetRank_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetRank_GetRank_Statics::NewProp_ScoreSort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetRank_GetRank_Statics::NewProp_TableID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetRank_GetRank_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetRank_GetRank_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/**\n\x09 * Returns the rank of a particular score on a score table.\n\x09 * If the score is not represented by any rank on the score table, the request will return the rank that is closest to the requested score.\n\x09 * \n\x09 * @param Sort This is a numerical sorting value that is represented by a rank on the score table.\n\x09 * @param TableID (optional) The scoreboard ID. Uses the game's main board if none is set\n\x09 */" },
		{ "CPP_Default_TableID", "0" },
		{ "ModuleRelativePath", "Public/AsyncActions/Scores/GetRank.h" },
		{ "ToolTip", "Returns the rank of a particular score on a score table.\nIf the score is not represented by any rank on the score table, the request will return the rank that is closest to the requested score.\n\n@param Sort This is a numerical sorting value that is represented by a rank on the score table.\n@param TableID (optional) The scoreboard ID. Uses the game's main board if none is set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetRank_GetRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetRank, nullptr, "GetRank", nullptr, nullptr, Z_Construct_UFunction_UGetRank_GetRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetRank_GetRank_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGetRank_GetRank_Statics::GetRank_eventGetRank_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetRank_GetRank_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGetRank_GetRank_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetRank_GetRank_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGetRank_GetRank_Statics::GetRank_eventGetRank_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGetRank_GetRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGetRank_GetRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGetRank);
	UClass* Z_Construct_UClass_UGetRank_NoRegister()
	{
		return UGetRank::StaticClass();
	}
	struct Z_Construct_UClass_UGetRank_Statics
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
	UObject* (*const Z_Construct_UClass_UGetRank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameJoltAsyncBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltAPI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGetRank_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetRank_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetRank_Callback, "Callback" }, // 1308841796
		{ &Z_Construct_UFunction_UGetRank_GetRank, "GetRank" }, // 3560622391
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGetRank_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetRank_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the rank of a particular score on a score table.\n */" },
		{ "IncludePath", "AsyncActions/Scores/GetRank.h" },
		{ "ModuleRelativePath", "Public/AsyncActions/Scores/GetRank.h" },
		{ "ToolTip", "Returns the rank of a particular score on a score table." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetRank_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Scores/GetRank.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetRank_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGetRank, Success), Z_Construct_UDelegateFunction_GameJoltAPI_GetRankSuccessDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGetRank_Statics::NewProp_Success_MetaData), Z_Construct_UClass_UGetRank_Statics::NewProp_Success_MetaData) }; // 515420876
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetRank_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetRank_Statics::NewProp_Success,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetRank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetRank>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGetRank_Statics::ClassParams = {
		&UGetRank::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGetRank_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGetRank_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGetRank_Statics::Class_MetaDataParams), Z_Construct_UClass_UGetRank_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGetRank_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGetRank()
	{
		if (!Z_Registration_Info_UClass_UGetRank.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGetRank.OuterSingleton, Z_Construct_UClass_UGetRank_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGetRank.OuterSingleton;
	}
	template<> GAMEJOLTAPI_API UClass* StaticClass<UGetRank>()
	{
		return UGetRank::StaticClass();
	}
	UGetRank::UGetRank(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetRank);
	UGetRank::~UGetRank() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_GetRank_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_GetRank_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGetRank, UGetRank::StaticClass, TEXT("UGetRank"), &Z_Registration_Info_UClass_UGetRank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGetRank), 2138107200U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_GetRank_h_1055051201(TEXT("/Script/GameJoltAPI"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_GetRank_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_GetRank_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
