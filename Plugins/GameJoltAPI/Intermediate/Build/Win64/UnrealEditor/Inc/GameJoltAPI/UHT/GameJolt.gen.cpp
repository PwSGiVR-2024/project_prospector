// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../GameJolt.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameJolt() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UGameJolt();
	GAMEJOLTAPI_API UClass* Z_Construct_UClass_UGameJolt_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameJoltAPI();
// End Cross Module References
	DEFINE_FUNCTION(UGameJolt::execLogout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameJolt::Logout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameJolt::execIsLoggedIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameJolt::IsLoggedIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameJolt::execGetGameID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGameJolt::GetGameID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameJolt::execGetPrivateKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGameJolt::GetPrivateKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameJolt::execGetUsername)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGameJolt::GetUsername();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameJolt::execInitialize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Game_ID);
		P_GET_PROPERTY(FStrProperty,Z_Param_Private_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Server);
		P_GET_PROPERTY(FStrProperty,Z_Param_Version);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGameJolt::Initialize(Z_Param_Game_ID,Z_Param_Private_Key,Z_Param_Server,Z_Param_Version);
		P_NATIVE_END;
	}
	void UGameJolt::StaticRegisterNativesUGameJolt()
	{
		UClass* Class = UGameJolt::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameID", &UGameJolt::execGetGameID },
			{ "GetPrivateKey", &UGameJolt::execGetPrivateKey },
			{ "GetUsername", &UGameJolt::execGetUsername },
			{ "Initialize", &UGameJolt::execInitialize },
			{ "IsLoggedIn", &UGameJolt::execIsLoggedIn },
			{ "Logout", &UGameJolt::execLogout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameJolt_GetGameID_Statics
	{
		struct GameJolt_eventGetGameID_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameJolt_GetGameID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameJolt_eventGetGameID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameJolt_GetGameID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameJolt_GetGameID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameJolt_GetGameID_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJoltAPI" },
		{ "ModuleRelativePath", "Public/GameJolt.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameJolt_GetGameID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameJolt, nullptr, "GetGameID", nullptr, nullptr, Z_Construct_UFunction_UGameJolt_GetGameID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameJolt_GetGameID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameJolt_GetGameID_Statics::GameJolt_eventGetGameID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameJolt_GetGameID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameJolt_GetGameID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameJolt_GetGameID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameJolt_GetGameID_Statics::GameJolt_eventGetGameID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameJolt_GetGameID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameJolt_GetGameID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameJolt_GetPrivateKey_Statics
	{
		struct GameJolt_eventGetPrivateKey_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameJolt_GetPrivateKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameJolt_eventGetPrivateKey_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameJolt_GetPrivateKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameJolt_GetPrivateKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameJolt_GetPrivateKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJoltAPI" },
		{ "ModuleRelativePath", "Public/GameJolt.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameJolt_GetPrivateKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameJolt, nullptr, "GetPrivateKey", nullptr, nullptr, Z_Construct_UFunction_UGameJolt_GetPrivateKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameJolt_GetPrivateKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameJolt_GetPrivateKey_Statics::GameJolt_eventGetPrivateKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameJolt_GetPrivateKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameJolt_GetPrivateKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameJolt_GetPrivateKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameJolt_GetPrivateKey_Statics::GameJolt_eventGetPrivateKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameJolt_GetPrivateKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameJolt_GetPrivateKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameJolt_GetUsername_Statics
	{
		struct GameJolt_eventGetUsername_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameJolt_GetUsername_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameJolt_eventGetUsername_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameJolt_GetUsername_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameJolt_GetUsername_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameJolt_GetUsername_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJoltAPI" },
		{ "ModuleRelativePath", "Public/GameJolt.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameJolt_GetUsername_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameJolt, nullptr, "GetUsername", nullptr, nullptr, Z_Construct_UFunction_UGameJolt_GetUsername_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameJolt_GetUsername_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameJolt_GetUsername_Statics::GameJolt_eventGetUsername_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameJolt_GetUsername_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameJolt_GetUsername_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameJolt_GetUsername_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameJolt_GetUsername_Statics::GameJolt_eventGetUsername_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameJolt_GetUsername()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameJolt_GetUsername_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameJolt_Initialize_Statics
	{
		struct GameJolt_eventInitialize_Parms
		{
			int32 Game_ID;
			FString Private_Key;
			FString Server;
			FString Version;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Game_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Game_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Private_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Private_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Server_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Server;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Version;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameJolt_Initialize_Statics::NewProp_Game_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameJolt_Initialize_Statics::NewProp_Game_ID = { "Game_ID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameJolt_eventInitialize_Parms, Game_ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameJolt_Initialize_Statics::NewProp_Game_ID_MetaData), Z_Construct_UFunction_UGameJolt_Initialize_Statics::NewProp_Game_ID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameJolt_Initialize_Statics::NewProp_Private_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameJolt_Initialize_Statics::NewProp_Private_Key = { "Private_Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameJolt_eventInitialize_Parms, Private_Key), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameJolt_Initialize_Statics::NewProp_Private_Key_MetaData), Z_Construct_UFunction_UGameJolt_Initialize_Statics::NewProp_Private_Key_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameJolt_Initialize_Statics::NewProp_Server_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameJolt_Initialize_Statics::NewProp_Server = { "Server", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameJolt_eventInitialize_Parms, Server), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameJolt_Initialize_Statics::NewProp_Server_MetaData), Z_Construct_UFunction_UGameJolt_Initialize_Statics::NewProp_Server_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameJolt_Initialize_Statics::NewProp_Version_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameJolt_Initialize_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameJolt_eventInitialize_Parms, Version), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameJolt_Initialize_Statics::NewProp_Version_MetaData), Z_Construct_UFunction_UGameJolt_Initialize_Statics::NewProp_Version_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameJolt_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameJolt_Initialize_Statics::NewProp_Game_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameJolt_Initialize_Statics::NewProp_Private_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameJolt_Initialize_Statics::NewProp_Server,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameJolt_Initialize_Statics::NewProp_Version,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameJolt_Initialize_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Server, Version" },
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Sets required information for all API requests\n     * @param Game_ID Required. Can be found in your game's dashboard\n     * @param Private_Key Required. Can be found in your game's dashboard\n     * @param Server Optional. Default is https://api.gamejolt.com/api/game/\n     * @param Version Optional. Default is v1_2\n     */" },
#endif
		{ "CPP_Default_Server", "" },
		{ "CPP_Default_Version", "" },
		{ "ModuleRelativePath", "Public/GameJolt.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets required information for all API requests\n@param Game_ID Required. Can be found in your game's dashboard\n@param Private_Key Required. Can be found in your game's dashboard\n@param Server Optional. Default is https://api.gamejolt.com/api/game/\n@param Version Optional. Default is v1_2" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameJolt_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameJolt, nullptr, "Initialize", nullptr, nullptr, Z_Construct_UFunction_UGameJolt_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameJolt_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameJolt_Initialize_Statics::GameJolt_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameJolt_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameJolt_Initialize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameJolt_Initialize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameJolt_Initialize_Statics::GameJolt_eventInitialize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameJolt_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameJolt_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameJolt_IsLoggedIn_Statics
	{
		struct GameJolt_eventIsLoggedIn_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameJolt_IsLoggedIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameJolt_eventIsLoggedIn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameJolt_IsLoggedIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameJolt_eventIsLoggedIn_Parms), &Z_Construct_UFunction_UGameJolt_IsLoggedIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameJolt_IsLoggedIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameJolt_IsLoggedIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameJolt_IsLoggedIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJoltAPI" },
		{ "ModuleRelativePath", "Public/GameJolt.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameJolt_IsLoggedIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameJolt, nullptr, "IsLoggedIn", nullptr, nullptr, Z_Construct_UFunction_UGameJolt_IsLoggedIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameJolt_IsLoggedIn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameJolt_IsLoggedIn_Statics::GameJolt_eventIsLoggedIn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameJolt_IsLoggedIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameJolt_IsLoggedIn_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameJolt_IsLoggedIn_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameJolt_IsLoggedIn_Statics::GameJolt_eventIsLoggedIn_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameJolt_IsLoggedIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameJolt_IsLoggedIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameJolt_Logout_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameJolt_Logout_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameJoltAPI" },
		{ "ModuleRelativePath", "Public/GameJolt.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameJolt_Logout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameJolt, nullptr, "Logout", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameJolt_Logout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameJolt_Logout_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UGameJolt_Logout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameJolt_Logout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameJolt);
	UClass* Z_Construct_UClass_UGameJolt_NoRegister()
	{
		return UGameJolt::StaticClass();
	}
	struct Z_Construct_UClass_UGameJolt_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameJolt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltAPI,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameJolt_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameJolt_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameJolt_GetGameID, "GetGameID" }, // 2753394724
		{ &Z_Construct_UFunction_UGameJolt_GetPrivateKey, "GetPrivateKey" }, // 1048784550
		{ &Z_Construct_UFunction_UGameJolt_GetUsername, "GetUsername" }, // 1966411170
		{ &Z_Construct_UFunction_UGameJolt_Initialize, "Initialize" }, // 1742974069
		{ &Z_Construct_UFunction_UGameJolt_IsLoggedIn, "IsLoggedIn" }, // 1377999283
		{ &Z_Construct_UFunction_UGameJolt_Logout, "Logout" }, // 3398326518
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameJolt_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameJolt_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Class to interact with the GameJolt-API.\n * Usable from Blueprint and C++.\n */" },
#endif
		{ "IncludePath", "GameJolt.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameJolt.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class to interact with the GameJolt-API.\nUsable from Blueprint and C++." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameJolt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameJolt>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameJolt_Statics::ClassParams = {
		&UGameJolt::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameJolt_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameJolt_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGameJolt()
	{
		if (!Z_Registration_Info_UClass_UGameJolt.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameJolt.OuterSingleton, Z_Construct_UClass_UGameJolt_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameJolt.OuterSingleton;
	}
	template<> GAMEJOLTAPI_API UClass* StaticClass<UGameJolt>()
	{
		return UGameJolt::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameJolt);
	UGameJolt::~UGameJolt() {}
	struct Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameJolt, UGameJolt::StaticClass, TEXT("UGameJolt"), &Z_Registration_Info_UClass_UGameJolt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameJolt), 834062580U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h_4159914254(TEXT("/Script/GameJoltAPI"),
		Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJolt_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
