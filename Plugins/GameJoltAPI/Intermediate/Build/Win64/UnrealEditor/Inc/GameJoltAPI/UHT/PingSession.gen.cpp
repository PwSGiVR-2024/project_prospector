// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sessions/PingSession.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePingSession() {}
// Cross Module References
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UGameJoltAsyncBase();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UJsonData_NoRegister();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UPingSession();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UPingSession_NoRegister();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJErrors();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJSessionStatus();
	GAMEJOLTAPI_API UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_PingSessionSuccessDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameJoltAPI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameJoltAPI_PingSessionSuccessDelegate__DelegateSignature_Statics
	{
		struct _Script_GameJoltAPI_eventPingSessionSuccessDelegate_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_PingSessionSuccessDelegate__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_PingSessionSuccessDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameJoltAPI_eventPingSessionSuccessDelegate_Parms, Error), Z_Construct_UEnum_GameJoltAPI_EGJErrors, METADATA_PARAMS(0, nullptr) }; // 1852560761
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltAPI_PingSessionSuccessDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_PingSessionSuccessDelegate__DelegateSignature_Statics::NewProp_Error_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_PingSessionSuccessDelegate__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltAPI_PingSessionSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Sessions/PingSession.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltAPI_PingSessionSuccessDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltAPI, nullptr, "PingSessionSuccessDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameJoltAPI_PingSessionSuccessDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_PingSessionSuccessDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_PingSessionSuccessDelegate__DelegateSignature_Statics::_Script_GameJoltAPI_eventPingSessionSuccessDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_PingSessionSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameJoltAPI_PingSessionSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_PingSessionSuccessDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_PingSessionSuccessDelegate__DelegateSignature_Statics::_Script_GameJoltAPI_eventPingSessionSuccessDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_PingSessionSuccessDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameJoltAPI_PingSessionSuccessDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPingSessionSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& PingSessionSuccessDelegate, EGJErrors Error)
{
	struct _Script_GameJoltAPI_eventPingSessionSuccessDelegate_Parms
	{
		EGJErrors Error;
	};
	_Script_GameJoltAPI_eventPingSessionSuccessDelegate_Parms Parms;
	Parms.Error=Error;
	PingSessionSuccessDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UPingSession::execCallback)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_GET_OBJECT(UJsonData,Z_Param_JSON);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Callback(Z_Param_bSuccess,Z_Param_JSON);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPingSession::execPingSession)
	{
		P_GET_ENUM(EGJSessionStatus,Z_Param_SessionStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPingSession**)Z_Param__Result=UPingSession::PingSession(EGJSessionStatus(Z_Param_SessionStatus));
		P_NATIVE_END;
	}
	void UPingSession::StaticRegisterNativesUPingSession()
	{
		UClass* Class = UPingSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Callback", &UPingSession::execCallback },
			{ "PingSession", &UPingSession::execPingSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPingSession_Callback_Statics
	{
		struct PingSession_eventCallback_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPingSession_Callback_Statics::NewProp_bSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UPingSession_Callback_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((PingSession_eventCallback_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPingSession_Callback_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PingSession_eventCallback_Parms), &Z_Construct_UFunction_UPingSession_Callback_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPingSession_Callback_Statics::NewProp_bSuccess_MetaData), Z_Construct_UFunction_UPingSession_Callback_Statics::NewProp_bSuccess_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPingSession_Callback_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PingSession_eventCallback_Parms, JSON), Z_Construct_UClass_UJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPingSession_Callback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPingSession_Callback_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPingSession_Callback_Statics::NewProp_JSON,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPingSession_Callback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Sessions/PingSession.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPingSession_Callback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPingSession, nullptr, "Callback", nullptr, nullptr, Z_Construct_UFunction_UPingSession_Callback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPingSession_Callback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPingSession_Callback_Statics::PingSession_eventCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPingSession_Callback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPingSession_Callback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPingSession_Callback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPingSession_Callback_Statics::PingSession_eventCallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPingSession_Callback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPingSession_Callback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPingSession_PingSession_Statics
	{
		struct PingSession_eventPingSession_Parms
		{
			EGJSessionStatus SessionStatus;
			UPingSession* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SessionStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SessionStatus;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPingSession_PingSession_Statics::NewProp_SessionStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPingSession_PingSession_Statics::NewProp_SessionStatus = { "SessionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PingSession_eventPingSession_Parms, SessionStatus), Z_Construct_UEnum_GameJoltAPI_EGJSessionStatus, METADATA_PARAMS(0, nullptr) }; // 3662948232
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPingSession_PingSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PingSession_eventPingSession_Parms, ReturnValue), Z_Construct_UClass_UPingSession_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPingSession_PingSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPingSession_PingSession_Statics::NewProp_SessionStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPingSession_PingSession_Statics::NewProp_SessionStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPingSession_PingSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPingSession_PingSession_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/AsyncActions/Sessions/PingSession.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPingSession_PingSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPingSession, nullptr, "PingSession", nullptr, nullptr, Z_Construct_UFunction_UPingSession_PingSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPingSession_PingSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPingSession_PingSession_Statics::PingSession_eventPingSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPingSession_PingSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPingSession_PingSession_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPingSession_PingSession_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPingSession_PingSession_Statics::PingSession_eventPingSession_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPingSession_PingSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPingSession_PingSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPingSession);
	UClass* Z_Construct_UClass_UPingSession_NoRegister()
	{
		return UPingSession::StaticClass();
	}
	struct Z_Construct_UClass_UPingSession_Statics
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
	UObject* (*const Z_Construct_UClass_UPingSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameJoltAsyncBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltAPI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPingSession_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPingSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPingSession_Callback, "Callback" }, // 3289524246
		{ &Z_Construct_UFunction_UPingSession_PingSession, "PingSession" }, // 482882884
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPingSession_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPingSession_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Pings an open session of the current user.\n */" },
#endif
		{ "IncludePath", "AsyncActions/Sessions/PingSession.h" },
		{ "ModuleRelativePath", "Public/AsyncActions/Sessions/PingSession.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pings an open session of the current user." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPingSession_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Sessions/PingSession.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPingSession_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPingSession, Success), Z_Construct_UDelegateFunction_GameJoltAPI_PingSessionSuccessDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPingSession_Statics::NewProp_Success_MetaData), Z_Construct_UClass_UPingSession_Statics::NewProp_Success_MetaData) }; // 3126859761
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPingSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPingSession_Statics::NewProp_Success,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPingSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPingSession>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPingSession_Statics::ClassParams = {
		&UPingSession::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPingSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPingSession_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPingSession_Statics::Class_MetaDataParams), Z_Construct_UClass_UPingSession_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPingSession_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPingSession()
	{
		if (!Z_Registration_Info_UClass_UPingSession.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPingSession.OuterSingleton, Z_Construct_UClass_UPingSession_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPingSession.OuterSingleton;
	}
	template<> GAMEJOLTAPI_API UClass* StaticClass<UPingSession>()
	{
		return UPingSession::StaticClass();
	}
	UPingSession::UPingSession(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPingSession);
	UPingSession::~UPingSession() {}
	struct Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPingSession, UPingSession::StaticClass, TEXT("UPingSession"), &Z_Registration_Info_UClass_UPingSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPingSession), 428721481U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_89730466(TEXT("/Script/GameJoltAPI"),
		Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Sessions_PingSession_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
