// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data-Store/Remove.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemove() {}
// Cross Module References
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UGameJoltAsyncBase();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UJsonData_NoRegister();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_URemove();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_URemove_NoRegister();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJDataStore();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJErrors();
	GAMEJOLTAPI_API UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_RemoveDataSuccessDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameJoltAPI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameJoltAPI_RemoveDataSuccessDelegate__DelegateSignature_Statics
	{
		struct _Script_GameJoltAPI_eventRemoveDataSuccessDelegate_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_RemoveDataSuccessDelegate__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_RemoveDataSuccessDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameJoltAPI_eventRemoveDataSuccessDelegate_Parms, Error), Z_Construct_UEnum_GameJoltAPI_EGJErrors, METADATA_PARAMS(0, nullptr) }; // 1852560761
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltAPI_RemoveDataSuccessDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_RemoveDataSuccessDelegate__DelegateSignature_Statics::NewProp_Error_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_RemoveDataSuccessDelegate__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltAPI_RemoveDataSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Data-Store/Remove.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltAPI_RemoveDataSuccessDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltAPI, nullptr, "RemoveDataSuccessDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameJoltAPI_RemoveDataSuccessDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_RemoveDataSuccessDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_RemoveDataSuccessDelegate__DelegateSignature_Statics::_Script_GameJoltAPI_eventRemoveDataSuccessDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_RemoveDataSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameJoltAPI_RemoveDataSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_RemoveDataSuccessDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_RemoveDataSuccessDelegate__DelegateSignature_Statics::_Script_GameJoltAPI_eventRemoveDataSuccessDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_RemoveDataSuccessDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameJoltAPI_RemoveDataSuccessDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FRemoveDataSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& RemoveDataSuccessDelegate, EGJErrors Error)
{
	struct _Script_GameJoltAPI_eventRemoveDataSuccessDelegate_Parms
	{
		EGJErrors Error;
	};
	_Script_GameJoltAPI_eventRemoveDataSuccessDelegate_Parms Parms;
	Parms.Error=Error;
	RemoveDataSuccessDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(URemove::execCallback)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_GET_OBJECT(UJsonData,Z_Param_JSON);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Callback(Z_Param_bSuccess,Z_Param_JSON);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemove::execRemoveData)
	{
		P_GET_ENUM(EGJDataStore,Z_Param_Scope);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URemove**)Z_Param__Result=URemove::RemoveData(EGJDataStore(Z_Param_Scope),Z_Param_Key);
		P_NATIVE_END;
	}
	void URemove::StaticRegisterNativesURemove()
	{
		UClass* Class = URemove::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Callback", &URemove::execCallback },
			{ "RemoveData", &URemove::execRemoveData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URemove_Callback_Statics
	{
		struct Remove_eventCallback_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemove_Callback_Statics::NewProp_bSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_URemove_Callback_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((Remove_eventCallback_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemove_Callback_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Remove_eventCallback_Parms), &Z_Construct_UFunction_URemove_Callback_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URemove_Callback_Statics::NewProp_bSuccess_MetaData), Z_Construct_UFunction_URemove_Callback_Statics::NewProp_bSuccess_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemove_Callback_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Remove_eventCallback_Parms, JSON), Z_Construct_UClass_UJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemove_Callback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemove_Callback_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemove_Callback_Statics::NewProp_JSON,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemove_Callback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Data-Store/Remove.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemove_Callback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemove, nullptr, "Callback", nullptr, nullptr, Z_Construct_UFunction_URemove_Callback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemove_Callback_Statics::PropPointers), sizeof(Z_Construct_UFunction_URemove_Callback_Statics::Remove_eventCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URemove_Callback_Statics::Function_MetaDataParams), Z_Construct_UFunction_URemove_Callback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URemove_Callback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URemove_Callback_Statics::Remove_eventCallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URemove_Callback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemove_Callback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemove_RemoveData_Statics
	{
		struct Remove_eventRemoveData_Parms
		{
			EGJDataStore Scope;
			FString Key;
			URemove* ReturnValue;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemove_RemoveData_Statics::NewProp_Scope_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URemove_RemoveData_Statics::NewProp_Scope = { "Scope", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Remove_eventRemoveData_Parms, Scope), Z_Construct_UEnum_GameJoltAPI_EGJDataStore, METADATA_PARAMS(0, nullptr) }; // 1883144207
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemove_RemoveData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemove_RemoveData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Remove_eventRemoveData_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URemove_RemoveData_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_URemove_RemoveData_Statics::NewProp_Key_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemove_RemoveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Remove_eventRemoveData_Parms, ReturnValue), Z_Construct_UClass_URemove_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemove_RemoveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemove_RemoveData_Statics::NewProp_Scope_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemove_RemoveData_Statics::NewProp_Scope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemove_RemoveData_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemove_RemoveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemove_RemoveData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes data from the data store.\n\x09 * @param Scope If you select 'User', the item will be removed from a user's data store. If you select 'Global', it will be removed from the game's global data store.\n\x09 * @param Key The key of the data item you'd like to remove.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AsyncActions/Data-Store/Remove.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes data from the data store.\n@param Scope If you select 'User', the item will be removed from a user's data store. If you select 'Global', it will be removed from the game's global data store.\n@param Key The key of the data item you'd like to remove." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemove_RemoveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemove, nullptr, "RemoveData", nullptr, nullptr, Z_Construct_UFunction_URemove_RemoveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemove_RemoveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_URemove_RemoveData_Statics::Remove_eventRemoveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URemove_RemoveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_URemove_RemoveData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URemove_RemoveData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URemove_RemoveData_Statics::Remove_eventRemoveData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URemove_RemoveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemove_RemoveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemove);
	UClass* Z_Construct_UClass_URemove_NoRegister()
	{
		return URemove::StaticClass();
	}
	struct Z_Construct_UClass_URemove_Statics
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
	UObject* (*const Z_Construct_UClass_URemove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameJoltAsyncBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltAPI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URemove_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URemove_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URemove_Callback, "Callback" }, // 1851230671
		{ &Z_Construct_UFunction_URemove_RemoveData, "RemoveData" }, // 2326493233
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URemove_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemove_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Removes data from the data store.\n */" },
#endif
		{ "IncludePath", "AsyncActions/Data-Store/Remove.h" },
		{ "ModuleRelativePath", "Public/AsyncActions/Data-Store/Remove.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes data from the data store." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemove_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Data-Store/Remove.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URemove_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URemove, Success), Z_Construct_UDelegateFunction_GameJoltAPI_RemoveDataSuccessDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URemove_Statics::NewProp_Success_MetaData), Z_Construct_UClass_URemove_Statics::NewProp_Success_MetaData) }; // 1703225502
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemove_Statics::NewProp_Success,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemove>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemove_Statics::ClassParams = {
		&URemove::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URemove_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URemove_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URemove_Statics::Class_MetaDataParams), Z_Construct_UClass_URemove_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URemove_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URemove()
	{
		if (!Z_Registration_Info_UClass_URemove.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemove.OuterSingleton, Z_Construct_UClass_URemove_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemove.OuterSingleton;
	}
	template<> GAMEJOLTAPI_API UClass* StaticClass<URemove>()
	{
		return URemove::StaticClass();
	}
	URemove::URemove(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemove);
	URemove::~URemove() {}
	struct Z_CompiledInDeferFile_FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Remove_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Remove_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemove, URemove::StaticClass, TEXT("URemove"), &Z_Registration_Info_UClass_URemove, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemove), 2309864751U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Remove_h_2948294896(TEXT("/Script/GameJoltAPI"),
		Z_CompiledInDeferFile_FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Remove_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Data_Store_Remove_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
