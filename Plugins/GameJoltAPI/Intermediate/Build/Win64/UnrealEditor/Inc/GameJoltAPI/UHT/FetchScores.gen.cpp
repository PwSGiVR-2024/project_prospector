// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Scores/FetchScores.h"
#include "../GameJoltStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFetchScores() {}
// Cross Module References
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UFetchScores();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UFetchScores_NoRegister();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UGameJoltAsyncBase();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UJsonData_NoRegister();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJErrors();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJScoreFilter();
	GAMEJOLTAPI_API UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature();
	GAMEJOLTAPI_API UScriptStruct* Z_Construct_UScriptStruct_FScoreInfo();
	UPackage* Z_Construct_UPackage__Script_GameJoltAPI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics
	{
		struct _Script_GameJoltAPI_eventFetchScoresSuccessDeleagte_Parms
		{
			EGJErrors Error;
			TArray<FScoreInfo> Scores;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Error;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scores_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scores_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Scores;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameJoltAPI_eventFetchScoresSuccessDeleagte_Parms, Error), Z_Construct_UEnum_GameJoltAPI_EGJErrors, METADATA_PARAMS(0, nullptr) }; // 1852560761
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::NewProp_Scores_Inner = { "Scores", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FScoreInfo, METADATA_PARAMS(0, nullptr) }; // 1122849245
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::NewProp_Scores_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::NewProp_Scores = { "Scores", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameJoltAPI_eventFetchScoresSuccessDeleagte_Parms, Scores), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::NewProp_Scores_MetaData), Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::NewProp_Scores_MetaData) }; // 1122849245
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::NewProp_Error_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::NewProp_Scores_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::NewProp_Scores,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Scores/FetchScores.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltAPI, nullptr, "FetchScoresSuccessDeleagte__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::_Script_GameJoltAPI_eventFetchScoresSuccessDeleagte_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::_Script_GameJoltAPI_eventFetchScoresSuccessDeleagte_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FFetchScoresSuccessDeleagte_DelegateWrapper(const FMulticastScriptDelegate& FetchScoresSuccessDeleagte, EGJErrors Error, TArray<FScoreInfo> const& Scores)
{
	struct _Script_GameJoltAPI_eventFetchScoresSuccessDeleagte_Parms
	{
		EGJErrors Error;
		TArray<FScoreInfo> Scores;
	};
	_Script_GameJoltAPI_eventFetchScoresSuccessDeleagte_Parms Parms;
	Parms.Error=Error;
	Parms.Scores=Scores;
	FetchScoresSuccessDeleagte.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UFetchScores::execCallback)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_GET_OBJECT(UJsonData,Z_Param_JSON);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Callback(Z_Param_bSuccess,Z_Param_JSON);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFetchScores::execFetchScores)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Limit);
		P_GET_PROPERTY(FIntProperty,Z_Param_TableID);
		P_GET_ENUM(EGJScoreFilter,Z_Param_Filter);
		P_GET_PROPERTY(FStrProperty,Z_Param_Guest);
		P_GET_PROPERTY(FIntProperty,Z_Param_BetterThan);
		P_GET_PROPERTY(FIntProperty,Z_Param_WorseThan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFetchScores**)Z_Param__Result=UFetchScores::FetchScores(Z_Param_Limit,Z_Param_TableID,EGJScoreFilter(Z_Param_Filter),Z_Param_Guest,Z_Param_BetterThan,Z_Param_WorseThan);
		P_NATIVE_END;
	}
	void UFetchScores::StaticRegisterNativesUFetchScores()
	{
		UClass* Class = UFetchScores::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Callback", &UFetchScores::execCallback },
			{ "FetchScores", &UFetchScores::execFetchScores },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFetchScores_Callback_Statics
	{
		struct FetchScores_eventCallback_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchScores_Callback_Statics::NewProp_bSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFetchScores_Callback_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FetchScores_eventCallback_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFetchScores_Callback_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FetchScores_eventCallback_Parms), &Z_Construct_UFunction_UFetchScores_Callback_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchScores_Callback_Statics::NewProp_bSuccess_MetaData), Z_Construct_UFunction_UFetchScores_Callback_Statics::NewProp_bSuccess_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchScores_Callback_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchScores_eventCallback_Parms, JSON), Z_Construct_UClass_UJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchScores_Callback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchScores_Callback_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchScores_Callback_Statics::NewProp_JSON,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchScores_Callback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Scores/FetchScores.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchScores_Callback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchScores, nullptr, "Callback", nullptr, nullptr, Z_Construct_UFunction_UFetchScores_Callback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchScores_Callback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFetchScores_Callback_Statics::FetchScores_eventCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchScores_Callback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFetchScores_Callback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchScores_Callback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFetchScores_Callback_Statics::FetchScores_eventCallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFetchScores_Callback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFetchScores_Callback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFetchScores_FetchScores_Statics
	{
		struct FetchScores_eventFetchScores_Parms
		{
			int32 Limit;
			int32 TableID;
			EGJScoreFilter Filter;
			FString Guest;
			int32 BetterThan;
			int32 WorseThan;
			UFetchScores* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TableID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Filter_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Filter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guest_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Guest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BetterThan_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BetterThan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorseThan_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WorseThan;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_Limit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchScores_eventFetchScores_Parms, Limit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_Limit_MetaData), Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_Limit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_TableID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_TableID = { "TableID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchScores_eventFetchScores_Parms, TableID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_TableID_MetaData), Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_TableID_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_Filter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchScores_eventFetchScores_Parms, Filter), Z_Construct_UEnum_GameJoltAPI_EGJScoreFilter, METADATA_PARAMS(0, nullptr) }; // 2300095023
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_Guest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_Guest = { "Guest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchScores_eventFetchScores_Parms, Guest), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_Guest_MetaData), Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_Guest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_BetterThan_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_BetterThan = { "BetterThan", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchScores_eventFetchScores_Parms, BetterThan), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_BetterThan_MetaData), Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_BetterThan_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_WorseThan_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_WorseThan = { "WorseThan", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchScores_eventFetchScores_Parms, WorseThan), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_WorseThan_MetaData), Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_WorseThan_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchScores_eventFetchScores_Parms, ReturnValue), Z_Construct_UClass_UFetchScores_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchScores_FetchScores_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_Limit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_TableID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_Filter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_Guest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_BetterThan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_WorseThan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchScores_FetchScores_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchScores_FetchScores_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns a list of scores either for a user or globally for a game.\n\x09 * The maximum amount of scores you can retrieve is 100.\n\x09 * @param Limit The number of scores you'd like to return. The maximum amount of scores you can retrieve is 100.\n\x09 * @param TableID (optional) The scoreboard ID. Uses the game's main board if none is set.\n\x09 * @param Filter Whether you want to fetch scores by all users, a specific guest or the current user\n\x09 * @param Guest Allows you to fetch scores by a specific guest name.\n\x09 * @param BetterThan Fetch only scores better than this score sort value. Mutually exclusive with WorseThan.\n\x09 * @param WorseThan Fetch only scores worse than this score sort value. Mutually exclusive with BetterThan.\n\x09 */" },
#endif
		{ "CPP_Default_BetterThan", "0" },
		{ "CPP_Default_Filter", "all" },
		{ "CPP_Default_Guest", "" },
		{ "CPP_Default_Limit", "10" },
		{ "CPP_Default_TableID", "0" },
		{ "CPP_Default_WorseThan", "0" },
		{ "ModuleRelativePath", "Public/AsyncActions/Scores/FetchScores.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a list of scores either for a user or globally for a game.\nThe maximum amount of scores you can retrieve is 100.\n@param Limit The number of scores you'd like to return. The maximum amount of scores you can retrieve is 100.\n@param TableID (optional) The scoreboard ID. Uses the game's main board if none is set.\n@param Filter Whether you want to fetch scores by all users, a specific guest or the current user\n@param Guest Allows you to fetch scores by a specific guest name.\n@param BetterThan Fetch only scores better than this score sort value. Mutually exclusive with WorseThan.\n@param WorseThan Fetch only scores worse than this score sort value. Mutually exclusive with BetterThan." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchScores_FetchScores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchScores, nullptr, "FetchScores", nullptr, nullptr, Z_Construct_UFunction_UFetchScores_FetchScores_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchScores_FetchScores_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFetchScores_FetchScores_Statics::FetchScores_eventFetchScores_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchScores_FetchScores_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFetchScores_FetchScores_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchScores_FetchScores_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFetchScores_FetchScores_Statics::FetchScores_eventFetchScores_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFetchScores_FetchScores()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFetchScores_FetchScores_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFetchScores);
	UClass* Z_Construct_UClass_UFetchScores_NoRegister()
	{
		return UFetchScores::StaticClass();
	}
	struct Z_Construct_UClass_UFetchScores_Statics
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
	UObject* (*const Z_Construct_UClass_UFetchScores_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameJoltAsyncBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltAPI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchScores_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFetchScores_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFetchScores_Callback, "Callback" }, // 3501596184
		{ &Z_Construct_UFunction_UFetchScores_FetchScores, "FetchScores" }, // 26227208
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchScores_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchScores_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Returns a list of scores\n */" },
#endif
		{ "IncludePath", "AsyncActions/Scores/FetchScores.h" },
		{ "ModuleRelativePath", "Public/AsyncActions/Scores/FetchScores.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a list of scores" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchScores_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Scores/FetchScores.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFetchScores_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFetchScores, Success), Z_Construct_UDelegateFunction_GameJoltAPI_FetchScoresSuccessDeleagte__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchScores_Statics::NewProp_Success_MetaData), Z_Construct_UClass_UFetchScores_Statics::NewProp_Success_MetaData) }; // 2531019751
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFetchScores_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFetchScores_Statics::NewProp_Success,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFetchScores_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFetchScores>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFetchScores_Statics::ClassParams = {
		&UFetchScores::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFetchScores_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFetchScores_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchScores_Statics::Class_MetaDataParams), Z_Construct_UClass_UFetchScores_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchScores_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFetchScores()
	{
		if (!Z_Registration_Info_UClass_UFetchScores.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFetchScores.OuterSingleton, Z_Construct_UClass_UFetchScores_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFetchScores.OuterSingleton;
	}
	template<> GAMEJOLTAPI_API UClass* StaticClass<UFetchScores>()
	{
		return UFetchScores::StaticClass();
	}
	UFetchScores::UFetchScores(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFetchScores);
	UFetchScores::~UFetchScores() {}
	struct Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFetchScores, UFetchScores::StaticClass, TEXT("UFetchScores"), &Z_Registration_Info_UClass_UFetchScores, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFetchScores), 1056619180U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_3818452656(TEXT("/Script/GameJoltAPI"),
		Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_FetchScores_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
