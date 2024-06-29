// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Users/FetchUsers.h"
#include "../GameJoltStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFetchUsers() {}
// Cross Module References
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UFetchUsers();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UFetchUsers_NoRegister();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UGameJoltAsyncBase();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UJsonData_NoRegister();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJErrors();
	GAMEJOLTAPI_API UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature();
	GAMEJOLTAPI_API UScriptStruct* Z_Construct_UScriptStruct_FUserInfo();
	UPackage* Z_Construct_UPackage__Script_GameJoltAPI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics
	{
		struct _Script_GameJoltAPI_eventFetchUsersSuccessDelegate_Parms
		{
			EGJErrors Error;
			TArray<FUserInfo> Users;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Error;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Users_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Users_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Users;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameJoltAPI_eventFetchUsersSuccessDelegate_Parms, Error), Z_Construct_UEnum_GameJoltAPI_EGJErrors, METADATA_PARAMS(0, nullptr) }; // 1852560761
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::NewProp_Users_Inner = { "Users", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUserInfo, METADATA_PARAMS(0, nullptr) }; // 2202402224
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::NewProp_Users_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameJoltAPI_eventFetchUsersSuccessDelegate_Parms, Users), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::NewProp_Users_MetaData), Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::NewProp_Users_MetaData) }; // 2202402224
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::NewProp_Error_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::NewProp_Users_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::NewProp_Users,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Users/FetchUsers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameJoltAPI, nullptr, "FetchUsersSuccessDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::_Script_GameJoltAPI_eventFetchUsersSuccessDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::_Script_GameJoltAPI_eventFetchUsersSuccessDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FFetchUsersSuccessDelegate_DelegateWrapper(const FMulticastScriptDelegate& FetchUsersSuccessDelegate, EGJErrors Error, TArray<FUserInfo> const& Users)
{
	struct _Script_GameJoltAPI_eventFetchUsersSuccessDelegate_Parms
	{
		EGJErrors Error;
		TArray<FUserInfo> Users;
	};
	_Script_GameJoltAPI_eventFetchUsersSuccessDelegate_Parms Parms;
	Parms.Error=Error;
	Parms.Users=Users;
	FetchUsersSuccessDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UFetchUsers::execCallback)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_GET_OBJECT(UJsonData,Z_Param_JSON);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Callback(Z_Param_bSuccess,Z_Param_JSON);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFetchUsers::execFetchUsers_Name)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFetchUsers**)Z_Param__Result=UFetchUsers::FetchUsers_Name(Z_Param_UserName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFetchUsers::execFetchUsers_ID)
	{
		P_GET_TARRAY(int32,Z_Param_UserIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFetchUsers**)Z_Param__Result=UFetchUsers::FetchUsers_ID(Z_Param_UserIDs);
		P_NATIVE_END;
	}
	void UFetchUsers::StaticRegisterNativesUFetchUsers()
	{
		UClass* Class = UFetchUsers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Callback", &UFetchUsers::execCallback },
			{ "FetchUsers_ID", &UFetchUsers::execFetchUsers_ID },
			{ "FetchUsers_Name", &UFetchUsers::execFetchUsers_Name },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFetchUsers_Callback_Statics
	{
		struct FetchUsers_eventCallback_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchUsers_Callback_Statics::NewProp_bSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UFetchUsers_Callback_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FetchUsers_eventCallback_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFetchUsers_Callback_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FetchUsers_eventCallback_Parms), &Z_Construct_UFunction_UFetchUsers_Callback_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchUsers_Callback_Statics::NewProp_bSuccess_MetaData), Z_Construct_UFunction_UFetchUsers_Callback_Statics::NewProp_bSuccess_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchUsers_Callback_Statics::NewProp_JSON = { "JSON", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchUsers_eventCallback_Parms, JSON), Z_Construct_UClass_UJsonData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchUsers_Callback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchUsers_Callback_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchUsers_Callback_Statics::NewProp_JSON,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchUsers_Callback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Users/FetchUsers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchUsers_Callback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchUsers, nullptr, "Callback", nullptr, nullptr, Z_Construct_UFunction_UFetchUsers_Callback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchUsers_Callback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFetchUsers_Callback_Statics::FetchUsers_eventCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchUsers_Callback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFetchUsers_Callback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchUsers_Callback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFetchUsers_Callback_Statics::FetchUsers_eventCallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFetchUsers_Callback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFetchUsers_Callback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFetchUsers_FetchUsers_ID_Statics
	{
		struct FetchUsers_eventFetchUsers_ID_Parms
		{
			TArray<int32> UserIDs;
			UFetchUsers* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserIDs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFetchUsers_FetchUsers_ID_Statics::NewProp_UserIDs_Inner = { "UserIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchUsers_FetchUsers_ID_Statics::NewProp_UserIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFetchUsers_FetchUsers_ID_Statics::NewProp_UserIDs = { "UserIDs", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchUsers_eventFetchUsers_ID_Parms, UserIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchUsers_FetchUsers_ID_Statics::NewProp_UserIDs_MetaData), Z_Construct_UFunction_UFetchUsers_FetchUsers_ID_Statics::NewProp_UserIDs_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchUsers_FetchUsers_ID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchUsers_eventFetchUsers_ID_Parms, ReturnValue), Z_Construct_UClass_UFetchUsers_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchUsers_FetchUsers_ID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchUsers_FetchUsers_ID_Statics::NewProp_UserIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchUsers_FetchUsers_ID_Statics::NewProp_UserIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchUsers_FetchUsers_ID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchUsers_FetchUsers_ID_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns a user's data.\n\x09 * @param UserIDs The ID(s) of the user(s) whose data you'd like to fetch.\n\x09 */" },
#endif
		{ "DisplayName", "Fetch Users by ID" },
		{ "ModuleRelativePath", "Public/AsyncActions/Users/FetchUsers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a user's data.\n@param UserIDs The ID(s) of the user(s) whose data you'd like to fetch." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchUsers_FetchUsers_ID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchUsers, nullptr, "FetchUsers_ID", nullptr, nullptr, Z_Construct_UFunction_UFetchUsers_FetchUsers_ID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchUsers_FetchUsers_ID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFetchUsers_FetchUsers_ID_Statics::FetchUsers_eventFetchUsers_ID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchUsers_FetchUsers_ID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFetchUsers_FetchUsers_ID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchUsers_FetchUsers_ID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFetchUsers_FetchUsers_ID_Statics::FetchUsers_eventFetchUsers_ID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFetchUsers_FetchUsers_ID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFetchUsers_FetchUsers_ID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFetchUsers_FetchUsers_Name_Statics
	{
		struct FetchUsers_eventFetchUsers_Name_Parms
		{
			FString UserName;
			UFetchUsers* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchUsers_FetchUsers_Name_Statics::NewProp_UserName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFetchUsers_FetchUsers_Name_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchUsers_eventFetchUsers_Name_Parms, UserName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchUsers_FetchUsers_Name_Statics::NewProp_UserName_MetaData), Z_Construct_UFunction_UFetchUsers_FetchUsers_Name_Statics::NewProp_UserName_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFetchUsers_FetchUsers_Name_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FetchUsers_eventFetchUsers_Name_Parms, ReturnValue), Z_Construct_UClass_UFetchUsers_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFetchUsers_FetchUsers_Name_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchUsers_FetchUsers_Name_Statics::NewProp_UserName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFetchUsers_FetchUsers_Name_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFetchUsers_FetchUsers_Name_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns a user's data.\n\x09 * @param UserNames The name of the userwhose data you'd like to fetch.\n\x09 */" },
#endif
		{ "DisplayName", "Fetch User by Name" },
		{ "ModuleRelativePath", "Public/AsyncActions/Users/FetchUsers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a user's data.\n@param UserNames The name of the userwhose data you'd like to fetch." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFetchUsers_FetchUsers_Name_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFetchUsers, nullptr, "FetchUsers_Name", nullptr, nullptr, Z_Construct_UFunction_UFetchUsers_FetchUsers_Name_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchUsers_FetchUsers_Name_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFetchUsers_FetchUsers_Name_Statics::FetchUsers_eventFetchUsers_Name_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchUsers_FetchUsers_Name_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFetchUsers_FetchUsers_Name_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFetchUsers_FetchUsers_Name_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFetchUsers_FetchUsers_Name_Statics::FetchUsers_eventFetchUsers_Name_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFetchUsers_FetchUsers_Name()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFetchUsers_FetchUsers_Name_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFetchUsers);
	UClass* Z_Construct_UClass_UFetchUsers_NoRegister()
	{
		return UFetchUsers::StaticClass();
	}
	struct Z_Construct_UClass_UFetchUsers_Statics
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
	UObject* (*const Z_Construct_UClass_UFetchUsers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameJoltAsyncBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltAPI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchUsers_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFetchUsers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFetchUsers_Callback, "Callback" }, // 792231239
		{ &Z_Construct_UFunction_UFetchUsers_FetchUsers_ID, "FetchUsers_ID" }, // 3280896298
		{ &Z_Construct_UFunction_UFetchUsers_FetchUsers_Name, "FetchUsers_Name" }, // 253616069
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchUsers_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchUsers_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Returns a user's data.\n */" },
#endif
		{ "IncludePath", "AsyncActions/Users/FetchUsers.h" },
		{ "ModuleRelativePath", "Public/AsyncActions/Users/FetchUsers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a user's data." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFetchUsers_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncActions/Users/FetchUsers.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFetchUsers_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFetchUsers, Success), Z_Construct_UDelegateFunction_GameJoltAPI_FetchUsersSuccessDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchUsers_Statics::NewProp_Success_MetaData), Z_Construct_UClass_UFetchUsers_Statics::NewProp_Success_MetaData) }; // 2453792205
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFetchUsers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFetchUsers_Statics::NewProp_Success,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFetchUsers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFetchUsers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFetchUsers_Statics::ClassParams = {
		&UFetchUsers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFetchUsers_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFetchUsers_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchUsers_Statics::Class_MetaDataParams), Z_Construct_UClass_UFetchUsers_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFetchUsers_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFetchUsers()
	{
		if (!Z_Registration_Info_UClass_UFetchUsers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFetchUsers.OuterSingleton, Z_Construct_UClass_UFetchUsers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFetchUsers.OuterSingleton;
	}
	template<> GAMEJOLTAPI_API UClass* StaticClass<UFetchUsers>()
	{
		return UFetchUsers::StaticClass();
	}
	UFetchUsers::UFetchUsers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFetchUsers);
	UFetchUsers::~UFetchUsers() {}
	struct Z_CompiledInDeferFile_FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFetchUsers, UFetchUsers::StaticClass, TEXT("UFetchUsers"), &Z_Registration_Info_UClass_UFetchUsers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFetchUsers), 3431536912U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_3652801407(TEXT("/Script/GameJoltAPI"),
		Z_CompiledInDeferFile_FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_AsyncActions_Users_FetchUsers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
