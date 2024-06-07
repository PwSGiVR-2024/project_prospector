// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/GetFriendlist.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetFriendlist() {}
// Cross Module References
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UGameJoltAsyncBase();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UGetFriendlist();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UGetFriendlist_NoRegister();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UJsonData_NoRegister();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJErrors();
	GAMEJOLTAPI_API UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameJoltAPI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics
	{
		struct _Script_GameJoltAPI_eventGetFriendlistSuccessDelegate_Parms
		{
			EGJErrors Error;
			TArray<int32> Friendlist;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Error;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Friendlist_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Friendlist_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Friendlist;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameJoltAPI_eventGetFriendlistSuccessDelegate_Parms, Error), Z_Construct_UEnum_GameJoltAPI_EGJErrors, METADATA_PARAMS(0, nullptr) }; // 1852560761
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::NewProp_Friendlist_Inner = { "Friendlist", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::NewProp_Friendlist_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::NewProp_Friendlist = { "Friendlist", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameJoltAPI_eventGetFriendlistSuccessDelegate_Parms, Friendlist), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::NewProp_Friendlist_MetaData), Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::NewProp_Friendlist_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::NewProp_Error_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::NewProp_Friendlist_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::NewProp_Friendlist,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Misc/GetFriendlist.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltAPI, nullptr, "GetFriendlistSuccessDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::_Script_GameJoltAPI_eventGetFriendlistSuccessDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::_Script_GameJoltAPI_eventGetFriendlistSuccessDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGetFriendlistSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& GetFriendlistSuccessDelegate, EGJErrors Error, TArray<int32> const& Friendlist)
{
	struct _Script_GameJoltAPI_eventGetFriendlistSuccessDelegate_Parms
	{
		EGJErrors Error;
		TArray<int32> Friendlist;
	};
	_Script_GameJoltAPI_eventGetFriendlistSuccessDelegate_Parms Parms;
	Parms.Error=Error;
	Parms.Friendlist=Friendlist;
	GetFriendlistSuccessDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UGetFriendlist::execCallback)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_GET_OBJECT(UJsonData,Z_Param_JSON);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Callback(Z_Param_bSuccess,Z_Param_JSON);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGetFriendlist::execGetFriendlist)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGetFriendlist**)Z_Param__Result=UGetFriendlist::GetFriendlist();
		P_NATIVE_END;
	}
	void UGetFriendlist::StaticRegisterNativesUGetFriendlist()
	{
		UClass* Class = UGetFriendlist::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Callback", &UGetFriendlist::execCallback },
			{ "GetFriendlist", &UGetFriendlist::execGetFriendlist },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetFriendlist_Callback_Statics
	{
		struct GetFriendlist_eventCallback_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetFriendlist_Callback_Statics::NewProp_bSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGetFriendlist_Callback_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((GetFriendlist_eventCallback_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGetFriendlist_Callback_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GetFriendlist_eventCallback_Parms), &Z_Construct_UFunction_UGetFriendlist_Callback_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetFriendlist_Callback_Statics::NewProp_bSuccess_MetaData), Z_Construct_UFunction_UGetFriendlist_Callback_Statics::NewProp_bSuccess_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetFriendlist_Callback_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetFriendlist_eventCallback_Parms, JSON), Z_Construct_UClass_UJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetFriendlist_Callback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetFriendlist_Callback_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetFriendlist_Callback_Statics::NewProp_JSON,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetFriendlist_Callback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Misc/GetFriendlist.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetFriendlist_Callback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetFriendlist, nullptr, "Callback", nullptr, nullptr, Z_Construct_UFunction_UGetFriendlist_Callback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetFriendlist_Callback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGetFriendlist_Callback_Statics::GetFriendlist_eventCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetFriendlist_Callback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGetFriendlist_Callback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetFriendlist_Callback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGetFriendlist_Callback_Statics::GetFriendlist_eventCallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGetFriendlist_Callback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGetFriendlist_Callback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetFriendlist_GetFriendlist_Statics
	{
		struct GetFriendlist_eventGetFriendlist_Parms
		{
			UGetFriendlist* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetFriendlist_GetFriendlist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GetFriendlist_eventGetFriendlist_Parms, ReturnValue), Z_Construct_UClass_UGetFriendlist_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetFriendlist_GetFriendlist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetFriendlist_GetFriendlist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetFriendlist_GetFriendlist_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/AsyncActions/Misc/GetFriendlist.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetFriendlist_GetFriendlist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetFriendlist, nullptr, "GetFriendlist", nullptr, nullptr, Z_Construct_UFunction_UGetFriendlist_GetFriendlist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetFriendlist_GetFriendlist_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGetFriendlist_GetFriendlist_Statics::GetFriendlist_eventGetFriendlist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetFriendlist_GetFriendlist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGetFriendlist_GetFriendlist_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGetFriendlist_GetFriendlist_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGetFriendlist_GetFriendlist_Statics::GetFriendlist_eventGetFriendlist_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGetFriendlist_GetFriendlist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGetFriendlist_GetFriendlist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGetFriendlist);
	UClass* Z_Construct_UClass_UGetFriendlist_NoRegister()
	{
		return UGetFriendlist::StaticClass();
	}
	struct Z_Construct_UClass_UGetFriendlist_Statics
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
	UObject* (*const Z_Construct_UClass_UGetFriendlist_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameJoltAsyncBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltAPI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGetFriendlist_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetFriendlist_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetFriendlist_Callback, "Callback" }, // 3640579097
		{ &Z_Construct_UFunction_UGetFriendlist_GetFriendlist, "GetFriendlist" }, // 1030962271
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGetFriendlist_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetFriendlist_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Gets the friendlist (array of integers representing user IDs) of the current user\n */" },
		{ "IncludePath", "AsyncActions/Misc/GetFriendlist.h" },
		{ "ModuleRelativePath", "Public/AsyncActions/Misc/GetFriendlist.h" },
		{ "ToolTip", "Gets the friendlist (array of integers representing user IDs) of the current user" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetFriendlist_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Misc/GetFriendlist.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetFriendlist_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGetFriendlist, Success), Z_Construct_UDelegateFunction_GameJoltAPI_GetFriendlistSuccessDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGetFriendlist_Statics::NewProp_Success_MetaData), Z_Construct_UClass_UGetFriendlist_Statics::NewProp_Success_MetaData) }; // 2188332110
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetFriendlist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetFriendlist_Statics::NewProp_Success,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetFriendlist_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetFriendlist>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGetFriendlist_Statics::ClassParams = {
		&UGetFriendlist::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGetFriendlist_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGetFriendlist_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGetFriendlist_Statics::Class_MetaDataParams), Z_Construct_UClass_UGetFriendlist_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGetFriendlist_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGetFriendlist()
	{
		if (!Z_Registration_Info_UClass_UGetFriendlist.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGetFriendlist.OuterSingleton, Z_Construct_UClass_UGetFriendlist_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGetFriendlist.OuterSingleton;
	}
	template<> GAMEJOLTAPI_API UClass* StaticClass<UGetFriendlist>()
	{
		return UGetFriendlist::StaticClass();
	}
	UGetFriendlist::UGetFriendlist(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetFriendlist);
	UGetFriendlist::~UGetFriendlist() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetFriendlist_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetFriendlist_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGetFriendlist, UGetFriendlist::StaticClass, TEXT("UGetFriendlist"), &Z_Registration_Info_UClass_UGetFriendlist, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGetFriendlist), 976488855U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetFriendlist_h_1051645818(TEXT("/Script/GameJoltAPI"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetFriendlist_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Misc_GetFriendlist_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
