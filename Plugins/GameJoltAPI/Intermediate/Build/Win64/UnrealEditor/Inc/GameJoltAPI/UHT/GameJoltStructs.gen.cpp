// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../GameJoltStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameJoltStructs() {}
// Cross Module References
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJTrophyDifficulty();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJUserType();
	GAMEJOLTAPI_API UScriptStruct* Z_Construct_UScriptStruct_FScoreInfo();
	GAMEJOLTAPI_API UScriptStruct* Z_Construct_UScriptStruct_FScoreTableInfo();
	GAMEJOLTAPI_API UScriptStruct* Z_Construct_UScriptStruct_FServerTime();
	GAMEJOLTAPI_API UScriptStruct* Z_Construct_UScriptStruct_FTrophyInfo();
	GAMEJOLTAPI_API UScriptStruct* Z_Construct_UScriptStruct_FUserInfo();
	UPackage* Z_Construct_UPackage__Script_GameJoltAPI();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserInfo;
class UScriptStruct* FUserInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserInfo, (UObject*)Z_Construct_UPackage__Script_GameJoltAPI(), TEXT("UserInfo"));
	}
	return Z_Registration_Info_UScriptStruct_UserInfo.OuterSingleton;
}
template<> GAMEJOLTAPI_API UScriptStruct* StaticStruct<FUserInfo>()
{
	return FUserInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUserInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UserType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UserType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AvatarURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SignedUp_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SignedUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastLoggedIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LastLoggedIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Website_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Website;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Contains all available information about a user */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains all available information about a user" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FUserInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_UserID_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The ID of the user. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ID of the user." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserInfo, UserID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_UserID_MetaData), Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_UserID_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_UserType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_UserType_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The type of user. Can be 'User', 'Developer', 'Moderator', or 'Administrator'. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The type of user. Can be 'User', 'Developer', 'Moderator', or 'Administrator'." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_UserType = { "UserType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserInfo, UserType), Z_Construct_UEnum_GameJoltAPI_EGJUserType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_UserType_MetaData), Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_UserType_MetaData) }; // 3424349082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The user's username. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The user's username." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserInfo, UserName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_UserName_MetaData), Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_UserName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_AvatarURL_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The URL of the user's avatar. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The URL of the user's avatar." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_AvatarURL = { "AvatarURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserInfo, AvatarURL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_AvatarURL_MetaData), Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_AvatarURL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_SignedUp_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* How long ago the user signed up. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long ago the user signed up." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_SignedUp = { "SignedUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserInfo, SignedUp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_SignedUp_MetaData), Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_SignedUp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_LastLoggedIn_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* How long ago the user was last logged in. Will be Online Now if the user is currently online. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long ago the user was last logged in. Will be Online Now if the user is currently online." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_LastLoggedIn = { "LastLoggedIn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserInfo, LastLoggedIn), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_LastLoggedIn_MetaData), Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_LastLoggedIn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Active if the user is still a member of the site. Banned if they've been banned. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Active if the user is still a member of the site. Banned if they've been banned." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserInfo, Status), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Status_MetaData), Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Status_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The user's display name. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The user's display name." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserInfo, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_DisplayName_MetaData), Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_DisplayName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Website_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The user's website (or empty string if not specified) */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The user's website (or empty string if not specified)" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Website = { "Website", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserInfo, Website), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Website_MetaData), Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Website_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The user's profile markdown description. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The user's profile markdown description." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserInfo, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Description_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_UserID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_UserType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_UserType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_UserName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_AvatarURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_SignedUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_LastLoggedIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Website,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserInfo_Statics::NewProp_Description,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltAPI,
		nullptr,
		&NewStructOps,
		"UserInfo",
		Z_Construct_UScriptStruct_FUserInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::PropPointers),
		sizeof(FUserInfo),
		alignof(FUserInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUserInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_UserInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserInfo.InnerSingleton, Z_Construct_UScriptStruct_FUserInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UserInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TrophyInfo;
class UScriptStruct* FTrophyInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TrophyInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TrophyInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrophyInfo, (UObject*)Z_Construct_UPackage__Script_GameJoltAPI(), TEXT("TrophyInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TrophyInfo.OuterSingleton;
}
template<> GAMEJOLTAPI_API UScriptStruct* StaticStruct<FTrophyInfo>()
{
	return FTrophyInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTrophyInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Difficulty_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Difficulty_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Difficulty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImageURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAchieved_MetaData[];
#endif
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Timestamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrophyInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Contains all information about a trophy */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains all information about a trophy" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrophyInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The ID of the trophy. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ID of the trophy." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrophyInfo, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_ID_MetaData), Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_ID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The title of the trophy on the site. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The title of the trophy on the site." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrophyInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The trophy description text. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The trophy description text." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrophyInfo, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Description_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Difficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Difficulty_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The difficulty of the trophy */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The difficulty of the trophy" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Difficulty = { "Difficulty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrophyInfo, Difficulty), Z_Construct_UEnum_GameJoltAPI_EGJTrophyDifficulty, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Difficulty_MetaData), Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Difficulty_MetaData) }; // 619934838
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_ImageURL_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The URL of the trophy's thumbnail image. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The URL of the trophy's thumbnail image." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_ImageURL = { "ImageURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrophyInfo, ImageURL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_ImageURL_MetaData), Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_ImageURL_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_bAchieved_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Whether the current user has achieved the trophy */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the current user has achieved the trophy" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((FTrophyInfo*)Obj)->bAchieved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTrophyInfo), &Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_bAchieved_MetaData), Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_bAchieved_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Timestamp_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Date/time when the trophy was achieved by the user */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Date/time when the trophy was achieved by the user" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrophyInfo, Timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Timestamp_MetaData), Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Timestamp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrophyInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Difficulty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Difficulty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_ImageURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_bAchieved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewProp_Timestamp,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrophyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltAPI,
		nullptr,
		&NewStructOps,
		"TrophyInfo",
		Z_Construct_UScriptStruct_FTrophyInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrophyInfo_Statics::PropPointers),
		sizeof(FTrophyInfo),
		alignof(FTrophyInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrophyInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTrophyInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrophyInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTrophyInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TrophyInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TrophyInfo.InnerSingleton, Z_Construct_UScriptStruct_FTrophyInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TrophyInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScoreInfo;
class UScriptStruct* FScoreInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScoreInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScoreInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScoreInfo, (UObject*)Z_Construct_UPackage__Script_GameJoltAPI(), TEXT("ScoreInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ScoreInfo.OuterSingleton;
}
template<> GAMEJOLTAPI_API UScriptStruct* StaticStruct<FScoreInfo>()
{
	return FScoreInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScoreInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ScoreString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreSort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ScoreSort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guest_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Guest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stored_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Stored;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoredTimestamp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StoredTimestamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Contains all information about an entry in a scoreboard */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains all information about an entry in a scoreboard" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FScoreInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScoreInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ScoreString_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The score string. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The score string." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ScoreString = { "ScoreString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScoreInfo, ScoreString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ScoreString_MetaData), Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ScoreString_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ScoreSort_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The score's numerical sort value. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The score's numerical sort value." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ScoreSort = { "ScoreSort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScoreInfo, ScoreSort), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ScoreSort_MetaData), Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ScoreSort_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ExtraData_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Any extra data associated with the score. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Any extra data associated with the score." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ExtraData = { "ExtraData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScoreInfo, ExtraData), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ExtraData_MetaData), Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ExtraData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* If this is a user score, this is the display name for the user. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this is a user score, this is the display name for the user." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScoreInfo, UserName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UserName_MetaData), Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UserName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UserID_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* If this is a user score, this is the user's ID. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this is a user score, this is the user's ID." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UserID = { "UserID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScoreInfo, UserID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UserID_MetaData), Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UserID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_Guest_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* If this is a guest score, this is the guest's submitted name. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this is a guest score, this is the guest's submitted name." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_Guest = { "Guest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScoreInfo, Guest), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_Guest_MetaData), Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_Guest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_Stored_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns when the score was logged by the user. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns when the score was logged by the user." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_Stored = { "Stored", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScoreInfo, Stored), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_Stored_MetaData), Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_Stored_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_StoredTimestamp_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns the unix timestamp of when the score was logged by the user. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the unix timestamp of when the score was logged by the user." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_StoredTimestamp = { "StoredTimestamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScoreInfo, StoredTimestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_StoredTimestamp_MetaData), Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_StoredTimestamp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScoreInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ScoreString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ScoreSort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_ExtraData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UserName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_UserID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_Guest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_Stored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreInfo_Statics::NewProp_StoredTimestamp,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScoreInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltAPI,
		nullptr,
		&NewStructOps,
		"ScoreInfo",
		Z_Construct_UScriptStruct_FScoreInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreInfo_Statics::PropPointers),
		sizeof(FScoreInfo),
		alignof(FScoreInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScoreInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FScoreInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ScoreInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScoreInfo.InnerSingleton, Z_Construct_UScriptStruct_FScoreInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScoreInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScoreTableInfo;
class UScriptStruct* FScoreTableInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScoreTableInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScoreTableInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScoreTableInfo, (UObject*)Z_Construct_UPackage__Script_GameJoltAPI(), TEXT("ScoreTableInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ScoreTableInfo.OuterSingleton;
}
template<> GAMEJOLTAPI_API UScriptStruct* StaticStruct<FScoreTableInfo>()
{
	return FScoreTableInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScoreTableInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Primary_MetaData[];
#endif
		static void NewProp_Primary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Primary;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreTableInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Contains all information about a scoreboard */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains all information about a scoreboard" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScoreTableInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The ID of the score table. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ID of the score table." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScoreTableInfo, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_ID_MetaData), Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_ID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The developer-defined name of the score table. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The developer-defined name of the score table." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScoreTableInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The developer-defined description of the score table. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The developer-defined description of the score table." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScoreTableInfo, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Primary_MetaData[] = {
		{ "Category", "GameJoltAPI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Whether or not this is the default score table. Scores are submitted to the primary table by default. */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether or not this is the default score table. Scores are submitted to the primary table by default." },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Primary_SetBit(void* Obj)
	{
		((FScoreTableInfo*)Obj)->Primary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Primary = { "Primary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FScoreTableInfo), &Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Primary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Primary_MetaData), Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Primary_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScoreTableInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewProp_Primary,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScoreTableInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltAPI,
		nullptr,
		&NewStructOps,
		"ScoreTableInfo",
		Z_Construct_UScriptStruct_FScoreTableInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreTableInfo_Statics::PropPointers),
		sizeof(FScoreTableInfo),
		alignof(FScoreTableInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreTableInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScoreTableInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreTableInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FScoreTableInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ScoreTableInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScoreTableInfo.InnerSingleton, Z_Construct_UScriptStruct_FScoreTableInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScoreTableInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ServerTime;
class UScriptStruct* FServerTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ServerTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ServerTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerTime, (UObject*)Z_Construct_UPackage__Script_GameJoltAPI(), TEXT("ServerTime"));
	}
	return Z_Registration_Info_UScriptStruct_ServerTime.OuterSingleton;
}
template<> GAMEJOLTAPI_API UScriptStruct* StaticStruct<FServerTime>()
{
	return FServerTime::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FServerTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnixTimestamp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UnixTimestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timezone_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Timezone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Year_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Year;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Month_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Month;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Day_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Day;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hour_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Hour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minute_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Minute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Second_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Second;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerTime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Contains Server-Time information */" },
#endif
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains Server-Time information" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FServerTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerTime>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_UnixTimestamp_MetaData[] = {
		{ "Category", "GameJoltAPI" },
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_UnixTimestamp = { "UnixTimestamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerTime, UnixTimestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_UnixTimestamp_MetaData), Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_UnixTimestamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Timezone_MetaData[] = {
		{ "Category", "GameJoltAPI" },
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Timezone = { "Timezone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerTime, Timezone), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Timezone_MetaData), Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Timezone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Year_MetaData[] = {
		{ "Category", "GameJoltAPI" },
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Year = { "Year", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerTime, Year), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Year_MetaData), Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Year_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Month_MetaData[] = {
		{ "Category", "GameJoltAPI" },
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Month = { "Month", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerTime, Month), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Month_MetaData), Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Month_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Day_MetaData[] = {
		{ "Category", "GameJoltAPI" },
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Day = { "Day", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerTime, Day), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Day_MetaData), Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Day_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Hour_MetaData[] = {
		{ "Category", "GameJoltAPI" },
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Hour = { "Hour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerTime, Hour), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Hour_MetaData), Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Hour_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Minute_MetaData[] = {
		{ "Category", "GameJoltAPI" },
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Minute = { "Minute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerTime, Minute), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Minute_MetaData), Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Minute_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Second_MetaData[] = {
		{ "Category", "GameJoltAPI" },
		{ "ModuleRelativePath", "Public/GameJoltStructs.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Second = { "Second", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FServerTime, Second), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Second_MetaData), Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Second_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_UnixTimestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Timezone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Year,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Month,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Day,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Hour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Minute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerTime_Statics::NewProp_Second,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameJoltAPI,
		nullptr,
		&NewStructOps,
		"ServerTime",
		Z_Construct_UScriptStruct_FServerTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerTime_Statics::PropPointers),
		sizeof(FServerTime),
		alignof(FServerTime),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerTime_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FServerTime_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerTime_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FServerTime()
	{
		if (!Z_Registration_Info_UScriptStruct_ServerTime.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ServerTime.InnerSingleton, Z_Construct_UScriptStruct_FServerTime_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ServerTime.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJoltStructs_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJoltStructs_h_Statics::ScriptStructInfo[] = {
		{ FUserInfo::StaticStruct, Z_Construct_UScriptStruct_FUserInfo_Statics::NewStructOps, TEXT("UserInfo"), &Z_Registration_Info_UScriptStruct_UserInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserInfo), 2202402224U) },
		{ FTrophyInfo::StaticStruct, Z_Construct_UScriptStruct_FTrophyInfo_Statics::NewStructOps, TEXT("TrophyInfo"), &Z_Registration_Info_UScriptStruct_TrophyInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrophyInfo), 3749690392U) },
		{ FScoreInfo::StaticStruct, Z_Construct_UScriptStruct_FScoreInfo_Statics::NewStructOps, TEXT("ScoreInfo"), &Z_Registration_Info_UScriptStruct_ScoreInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScoreInfo), 1122849245U) },
		{ FScoreTableInfo::StaticStruct, Z_Construct_UScriptStruct_FScoreTableInfo_Statics::NewStructOps, TEXT("ScoreTableInfo"), &Z_Registration_Info_UScriptStruct_ScoreTableInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScoreTableInfo), 2846959055U) },
		{ FServerTime::StaticStruct, Z_Construct_UScriptStruct_FServerTime_Statics::NewStructOps, TEXT("ServerTime"), &Z_Registration_Info_UScriptStruct_ServerTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FServerTime), 2068115068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJoltStructs_h_113701858(TEXT("/Script/GameJoltAPI"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJoltStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projekty_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJoltStructs_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
