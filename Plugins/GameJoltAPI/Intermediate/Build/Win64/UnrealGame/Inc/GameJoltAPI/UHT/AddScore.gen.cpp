// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Scores/AddScore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddScore() {}
// Cross Module References
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UAddScore();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UAddScore_NoRegister();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UGameJoltAsyncBase();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UJsonData_NoRegister();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJErrors();
	GAMEJOLTAPI_API UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_AddScoreSuccessDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameJoltAPI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameJoltAPI_AddScoreSuccessDelegate__DelegateSignature_Statics
	{
		struct _Script_GameJoltAPI_eventAddScoreSuccessDelegate_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_AddScoreSuccessDelegate__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_AddScoreSuccessDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameJoltAPI_eventAddScoreSuccessDelegate_Parms, Error), Z_Construct_UEnum_GameJoltAPI_EGJErrors, METADATA_PARAMS(0, nullptr) }; // 1852560761
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltAPI_AddScoreSuccessDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_AddScoreSuccessDelegate__DelegateSignature_Statics::NewProp_Error_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_AddScoreSuccessDelegate__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltAPI_AddScoreSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Scores/AddScore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltAPI_AddScoreSuccessDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltAPI, nullptr, "AddScoreSuccessDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameJoltAPI_AddScoreSuccessDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_AddScoreSuccessDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_AddScoreSuccessDelegate__DelegateSignature_Statics::_Script_GameJoltAPI_eventAddScoreSuccessDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_AddScoreSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameJoltAPI_AddScoreSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_AddScoreSuccessDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_AddScoreSuccessDelegate__DelegateSignature_Statics::_Script_GameJoltAPI_eventAddScoreSuccessDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_AddScoreSuccessDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameJoltAPI_AddScoreSuccessDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAddScoreSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& AddScoreSuccessDelegate, EGJErrors Error)
{
	struct _Script_GameJoltAPI_eventAddScoreSuccessDelegate_Parms
	{
		EGJErrors Error;
	};
	_Script_GameJoltAPI_eventAddScoreSuccessDelegate_Parms Parms;
	Parms.Error=Error;
	AddScoreSuccessDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAddScore::execCallback)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_GET_OBJECT(UJsonData,Z_Param_JSON);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Callback(Z_Param_bSuccess,Z_Param_JSON);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAddScore::execAddScore)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Score);
		P_GET_PROPERTY(FIntProperty,Z_Param_ScoreSort);
		P_GET_PROPERTY(FIntProperty,Z_Param_TableID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Guest);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExtraData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAddScore**)Z_Param__Result=UAddScore::AddScore(Z_Param_Score,Z_Param_ScoreSort,Z_Param_TableID,Z_Param_Guest,Z_Param_ExtraData);
		P_NATIVE_END;
	}
	void UAddScore::StaticRegisterNativesUAddScore()
	{
		UClass* Class = UAddScore::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddScore", &UAddScore::execAddScore },
			{ "Callback", &UAddScore::execCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAddScore_AddScore_Statics
	{
		struct AddScore_eventAddScore_Parms
		{
			FString Score;
			int32 ScoreSort;
			int32 TableID;
			FString Guest;
			FString ExtraData;
			UAddScore* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreSort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ScoreSort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TableID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guest_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Guest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_Score_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AddScore_eventAddScore_Parms, Score), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_Score_MetaData), Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_Score_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_ScoreSort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_ScoreSort = { "ScoreSort", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AddScore_eventAddScore_Parms, ScoreSort), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_ScoreSort_MetaData), Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_ScoreSort_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_TableID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_TableID = { "TableID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AddScore_eventAddScore_Parms, TableID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_TableID_MetaData), Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_TableID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_Guest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_Guest = { "Guest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AddScore_eventAddScore_Parms, Guest), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_Guest_MetaData), Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_Guest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_ExtraData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_ExtraData = { "ExtraData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AddScore_eventAddScore_Parms, ExtraData), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_ExtraData_MetaData), Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_ExtraData_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AddScore_eventAddScore_Parms, ReturnValue), Z_Construct_UClass_UAddScore_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAddScore_AddScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_Score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_ScoreSort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_TableID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_Guest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_ExtraData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAddScore_AddScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAddScore_AddScore_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/**\n\x09 * You can either store a score for a user or a guest.\n\x09 * If you're storing for a (logged in) user, the plugin will handle that for you.\n\x09 * If you're storing for a guest, you must pass in the guest parameter.\n\x09 * \n\x09 * @param Score A string representing the score. (500 Jumps)\n\x09 * @param ScoreSort An integer for sorting the score (500)\n\x09 * @param TableID (optional) The scoreboard ID. Uses the game's main board if none is set\n\x09 * @param Guest Only use this when there is no user logged in and you want to save a score for a guest.\n\x09 * @param ExtraData (optional) If there's any extra data you would like to store as a string, you can use this.\n\x09 */" },
		{ "CPP_Default_ExtraData", "" },
		{ "CPP_Default_Guest", "" },
		{ "CPP_Default_TableID", "0" },
		{ "ModuleRelativePath", "Public/AsyncActions/Scores/AddScore.h" },
		{ "ToolTip", "You can either store a score for a user or a guest.\nIf you're storing for a (logged in) user, the plugin will handle that for you.\nIf you're storing for a guest, you must pass in the guest parameter.\n\n@param Score A string representing the score. (500 Jumps)\n@param ScoreSort An integer for sorting the score (500)\n@param TableID (optional) The scoreboard ID. Uses the game's main board if none is set\n@param Guest Only use this when there is no user logged in and you want to save a score for a guest.\n@param ExtraData (optional) If there's any extra data you would like to store as a string, you can use this." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAddScore_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAddScore, nullptr, "AddScore", nullptr, nullptr, Z_Construct_UFunction_UAddScore_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAddScore_AddScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAddScore_AddScore_Statics::AddScore_eventAddScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAddScore_AddScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAddScore_AddScore_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAddScore_AddScore_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAddScore_AddScore_Statics::AddScore_eventAddScore_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAddScore_AddScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAddScore_AddScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAddScore_Callback_Statics
	{
		struct AddScore_eventCallback_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAddScore_Callback_Statics::NewProp_bSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAddScore_Callback_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((AddScore_eventCallback_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAddScore_Callback_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AddScore_eventCallback_Parms), &Z_Construct_UFunction_UAddScore_Callback_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAddScore_Callback_Statics::NewProp_bSuccess_MetaData), Z_Construct_UFunction_UAddScore_Callback_Statics::NewProp_bSuccess_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAddScore_Callback_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AddScore_eventCallback_Parms, JSON), Z_Construct_UClass_UJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAddScore_Callback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAddScore_Callback_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAddScore_Callback_Statics::NewProp_JSON,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAddScore_Callback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Scores/AddScore.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAddScore_Callback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAddScore, nullptr, "Callback", nullptr, nullptr, Z_Construct_UFunction_UAddScore_Callback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAddScore_Callback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAddScore_Callback_Statics::AddScore_eventCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAddScore_Callback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAddScore_Callback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAddScore_Callback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAddScore_Callback_Statics::AddScore_eventCallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAddScore_Callback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAddScore_Callback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAddScore);
	UClass* Z_Construct_UClass_UAddScore_NoRegister()
	{
		return UAddScore::StaticClass();
	}
	struct Z_Construct_UClass_UAddScore_Statics
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
	UObject* (*const Z_Construct_UClass_UAddScore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameJoltAsyncBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltAPI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAddScore_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAddScore_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAddScore_AddScore, "AddScore" }, // 1804045173
		{ &Z_Construct_UFunction_UAddScore_Callback, "Callback" }, // 22121118
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAddScore_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddScore_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds a score for a user or guest.\n */" },
		{ "IncludePath", "AsyncActions/Scores/AddScore.h" },
		{ "ModuleRelativePath", "Public/AsyncActions/Scores/AddScore.h" },
		{ "ToolTip", "Adds a score for a user or guest." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddScore_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Scores/AddScore.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAddScore_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAddScore, Success), Z_Construct_UDelegateFunction_GameJoltAPI_AddScoreSuccessDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAddScore_Statics::NewProp_Success_MetaData), Z_Construct_UClass_UAddScore_Statics::NewProp_Success_MetaData) }; // 1037930274
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAddScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddScore_Statics::NewProp_Success,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddScore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddScore>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAddScore_Statics::ClassParams = {
		&UAddScore::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAddScore_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAddScore_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAddScore_Statics::Class_MetaDataParams), Z_Construct_UClass_UAddScore_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAddScore_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAddScore()
	{
		if (!Z_Registration_Info_UClass_UAddScore.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAddScore.OuterSingleton, Z_Construct_UClass_UAddScore_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAddScore.OuterSingleton;
	}
	template<> GAMEJOLTAPI_API UClass* StaticClass<UAddScore>()
	{
		return UAddScore::StaticClass();
	}
	UAddScore::UAddScore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddScore);
	UAddScore::~UAddScore() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAddScore, UAddScore::StaticClass, TEXT("UAddScore"), &Z_Registration_Info_UClass_UAddScore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAddScore), 601538094U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_2861368279(TEXT("/Script/GameJoltAPI"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Scores_AddScore_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
