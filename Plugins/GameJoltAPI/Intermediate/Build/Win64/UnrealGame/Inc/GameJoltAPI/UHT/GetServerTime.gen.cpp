// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/GetServerTime.h"
#include "../GameJoltStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetServerTime() {}
// Cross Module References
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UGameJoltAsyncBase();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UGetServerTime();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UGetServerTime_NoRegister();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UJsonData_NoRegister();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJErrors();
	GAMEJOLTAPI_API UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_TimeSuccesDelegate__DelegateSignature();
	GAMEJOLTAPI_API UScriptStruct* Z_Construct_UScriptStruct_FServerTime();
	UPackage* Z_Construct_UPackage__Script_GameJoltAPI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameJoltAPI_TimeSuccesDelegate__DelegateSignature_Statics
	{
		struct _Script_GameJoltAPI_eventTimeSuccesDelegate_Parms
		{
			EGJErrors Error;
			FServerTime ServerTime;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Error;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ServerTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_TimeSuccesDelegate__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_TimeSuccesDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameJoltAPI_eventTimeSuccesDelegate_Parms, Error), Z_Construct_UEnum_GameJoltAPI_EGJErrors, METADATA_PARAMS(0, nullptr) }; // 1852560761
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_TimeSuccesDelegate__DelegateSignature_Statics::NewProp_ServerTime = { "ServerTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameJoltAPI_eventTimeSuccesDelegate_Parms, ServerTime), Z_Construct_UScriptStruct_FServerTime, METADATA_PARAMS(0, nullptr) }; // 3498917748
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltAPI_TimeSuccesDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_TimeSuccesDelegate__DelegateSignature_Statics::NewProp_Error_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_TimeSuccesDelegate__DelegateSignature_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_TimeSuccesDelegate__DelegateSignature_Statics::NewProp_ServerTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltAPI_TimeSuccesDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Misc/GetServerTime.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltAPI_TimeSuccesDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltAPI, nullptr, "TimeSuccesDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameJoltAPI_TimeSuccesDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_TimeSuccesDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_TimeSuccesDelegate__DelegateSignature_Statics::_Script_GameJoltAPI_eventTimeSuccesDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_TimeSuccesDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameJoltAPI_TimeSuccesDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_TimeSuccesDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_TimeSuccesDelegate__DelegateSignature_Statics::_Script_GameJoltAPI_eventTimeSuccesDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_TimeSuccesDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameJoltAPI_TimeSuccesDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTimeSuccesDelegate_DelegateWrapper(const FMulticastScriptDelegate& TimeSuccesDelegate, EGJErrors Error, FServerTime ServerTime)
{
	struct _Script_GameJoltAPI_eventTimeSuccesDelegate_Parms
	{
		EGJErrors Error;
		FServerTime ServerTime;
	};
	_Script_GameJoltAPI_eventTimeSuccesDelegate_Parms Parms;
	Parms.Error=Error;
	Parms.ServerTime=ServerTime;
	TimeSuccesDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UGetServerTime::execCallback)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_GET_OBJECT(UJsonData,Z_Param_JSON);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Callback(Z_Param_bSuccess,Z_Param_JSON);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGetServerTime::execGetServerTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGetServerTime**)Z_Param__Result=UGetServerTime::GetServerTime();
		P_NATIVE_END;
	}
	void UGetServerTime::StaticRegisterNativesUGetServerTime()
	{
		UClass* Class = UGetServerTime::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Callback", &UGetServerTime::execCallback },
			{ "GetServerTime", &UGetServerTime::execGetServerTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetServerTime_Callback_Statics
	{
		struct GetServerTime_eventCallback_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetServerTime_Callback_Statics::NewProp_bSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGetServerTime_Callback_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((GetServerTime_eventCallback_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGetServerTime_Callback_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GetServerTime_eventCallback_Parms), &Z_Construct_UFunction_UGetServerTime_Callback_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetServerTime_Callback_Statics::NewProp_bSuccess_MetaData), Z_Construct_UFunction_UGetServerTime_Callback_Statics::NewProp_bSuccess_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetServerTime_Callback_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetServerTime_eventCallback_Parms, JSON), Z_Construct_UClass_UJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetServerTime_Callback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetServerTime_Callback_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetServerTime_Callback_Statics::NewProp_JSON,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetServerTime_Callback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Misc/GetServerTime.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetServerTime_Callback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetServerTime, nullptr, "Callback", nullptr, nullptr, Z_Construct_UFunction_UGetServerTime_Callback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetServerTime_Callback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGetServerTime_Callback_Statics::GetServerTime_eventCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetServerTime_Callback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGetServerTime_Callback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetServerTime_Callback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGetServerTime_Callback_Statics::GetServerTime_eventCallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGetServerTime_Callback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGetServerTime_Callback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetServerTime_GetServerTime_Statics
	{
		struct GetServerTime_eventGetServerTime_Parms
		{
			UGetServerTime* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetServerTime_GetServerTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetServerTime_eventGetServerTime_Parms, ReturnValue), Z_Construct_UClass_UGetServerTime_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetServerTime_GetServerTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetServerTime_GetServerTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetServerTime_GetServerTime_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/AsyncActions/Misc/GetServerTime.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetServerTime_GetServerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetServerTime, nullptr, "GetServerTime", nullptr, nullptr, Z_Construct_UFunction_UGetServerTime_GetServerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetServerTime_GetServerTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGetServerTime_GetServerTime_Statics::GetServerTime_eventGetServerTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetServerTime_GetServerTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGetServerTime_GetServerTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetServerTime_GetServerTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGetServerTime_GetServerTime_Statics::GetServerTime_eventGetServerTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGetServerTime_GetServerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGetServerTime_GetServerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGetServerTime);
	UClass* Z_Construct_UClass_UGetServerTime_NoRegister()
	{
		return UGetServerTime::StaticClass();
	}
	struct Z_Construct_UClass_UGetServerTime_Statics
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
	UObject* (*const Z_Construct_UClass_UGetServerTime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameJoltAsyncBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltAPI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGetServerTime_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetServerTime_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetServerTime_Callback, "Callback" }, // 3708798974
		{ &Z_Construct_UFunction_UGetServerTime_GetServerTime, "GetServerTime" }, // 3725360065
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGetServerTime_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetServerTime_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the time of the Game Jolt server.\n */" },
		{ "IncludePath", "AsyncActions/Misc/GetServerTime.h" },
		{ "ModuleRelativePath", "Public/AsyncActions/Misc/GetServerTime.h" },
		{ "ToolTip", "Returns the time of the Game Jolt server." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetServerTime_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Misc/GetServerTime.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetServerTime_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGetServerTime, Success), Z_Construct_UDelegateFunction_GameJoltAPI_TimeSuccesDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGetServerTime_Statics::NewProp_Success_MetaData), Z_Construct_UClass_UGetServerTime_Statics::NewProp_Success_MetaData) }; // 1895126875
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetServerTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetServerTime_Statics::NewProp_Success,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetServerTime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetServerTime>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGetServerTime_Statics::ClassParams = {
		&UGetServerTime::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGetServerTime_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGetServerTime_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGetServerTime_Statics::Class_MetaDataParams), Z_Construct_UClass_UGetServerTime_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGetServerTime_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGetServerTime()
	{
		if (!Z_Registration_Info_UClass_UGetServerTime.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGetServerTime.OuterSingleton, Z_Construct_UClass_UGetServerTime_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGetServerTime.OuterSingleton;
	}
	template<> GAMEJOLTAPI_API UClass* StaticClass<UGetServerTime>()
	{
		return UGetServerTime::StaticClass();
	}
	UGetServerTime::UGetServerTime(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetServerTime);
	UGetServerTime::~UGetServerTime() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGetServerTime, UGetServerTime::StaticClass, TEXT("UGetServerTime"), &Z_Registration_Info_UClass_UGetServerTime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGetServerTime), 3816839119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_929061793(TEXT("/Script/GameJoltAPI"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetServerTime_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
