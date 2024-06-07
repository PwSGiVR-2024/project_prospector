// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../GameJoltEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameJoltEnums() {}
// Cross Module References
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJAchievedTrophies();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJDataOperation();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJDataStore();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJErrors();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJScoreFilter();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJSessionStatus();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJTrophyDifficulty();
	GAMEJOLTAPI_API UEnum* Z_Construct_UEnum_GameJoltAPI_EGJUserType();
	UPackage* Z_Construct_UPackage__Script_GameJoltAPI();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGJAchievedTrophies;
	static UEnum* EGJAchievedTrophies_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGJAchievedTrophies.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGJAchievedTrophies.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameJoltAPI_EGJAchievedTrophies, (UObject*)Z_Construct_UPackage__Script_GameJoltAPI(), TEXT("EGJAchievedTrophies"));
		}
		return Z_Registration_Info_UEnum_EGJAchievedTrophies.OuterSingleton;
	}
	template<> GAMEJOLTAPI_API UEnum* StaticEnum<EGJAchievedTrophies>()
	{
		return EGJAchievedTrophies_StaticEnum();
	}
	struct Z_Construct_UEnum_GameJoltAPI_EGJAchievedTrophies_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameJoltAPI_EGJAchievedTrophies_Statics::Enumerators[] = {
		{ "EGJAchievedTrophies::all", (int64)EGJAchievedTrophies::all },
		{ "EGJAchievedTrophies::achieved", (int64)EGJAchievedTrophies::achieved },
		{ "EGJAchievedTrophies::unachieved", (int64)EGJAchievedTrophies::unachieved },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameJoltAPI_EGJAchievedTrophies_Statics::Enum_MetaDataParams[] = {
		{ "achieved.DisplayName", "User Achieved Trophies" },
		{ "achieved.Name", "EGJAchievedTrophies::achieved" },
		{ "all.DisplayName", "All Trophies" },
		{ "all.Name", "EGJAchievedTrophies::all" },
		{ "BlueprintType", "true" },
		{ "Comment", "/* A filter used to fetch trophies */" },
		{ "ModuleRelativePath", "Public/GameJoltEnums.h" },
		{ "ToolTip", "A filter used to fetch trophies" },
		{ "unachieved.DisplayName", "Unachieved Trophies" },
		{ "unachieved.Name", "EGJAchievedTrophies::unachieved" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameJoltAPI_EGJAchievedTrophies_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameJoltAPI,
		nullptr,
		"EGJAchievedTrophies",
		"EGJAchievedTrophies",
		Z_Construct_UEnum_GameJoltAPI_EGJAchievedTrophies_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameJoltAPI_EGJAchievedTrophies_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameJoltAPI_EGJAchievedTrophies_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameJoltAPI_EGJAchievedTrophies_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GameJoltAPI_EGJAchievedTrophies()
	{
		if (!Z_Registration_Info_UEnum_EGJAchievedTrophies.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGJAchievedTrophies.InnerSingleton, Z_Construct_UEnum_GameJoltAPI_EGJAchievedTrophies_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGJAchievedTrophies.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGJSessionStatus;
	static UEnum* EGJSessionStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGJSessionStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGJSessionStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameJoltAPI_EGJSessionStatus, (UObject*)Z_Construct_UPackage__Script_GameJoltAPI(), TEXT("EGJSessionStatus"));
		}
		return Z_Registration_Info_UEnum_EGJSessionStatus.OuterSingleton;
	}
	template<> GAMEJOLTAPI_API UEnum* StaticEnum<EGJSessionStatus>()
	{
		return EGJSessionStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_GameJoltAPI_EGJSessionStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameJoltAPI_EGJSessionStatus_Statics::Enumerators[] = {
		{ "EGJSessionStatus::active", (int64)EGJSessionStatus::active },
		{ "EGJSessionStatus::idle", (int64)EGJSessionStatus::idle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameJoltAPI_EGJSessionStatus_Statics::Enum_MetaDataParams[] = {
		{ "active.DisplayName", "Active" },
		{ "active.Name", "EGJSessionStatus::active" },
		{ "BlueprintType", "true" },
		{ "Comment", "/* Represents the state of a session. */" },
		{ "idle.DisplayName", "Idle" },
		{ "idle.Name", "EGJSessionStatus::idle" },
		{ "ModuleRelativePath", "Public/GameJoltEnums.h" },
		{ "ToolTip", "Represents the state of a session." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameJoltAPI_EGJSessionStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameJoltAPI,
		nullptr,
		"EGJSessionStatus",
		"EGJSessionStatus",
		Z_Construct_UEnum_GameJoltAPI_EGJSessionStatus_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameJoltAPI_EGJSessionStatus_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameJoltAPI_EGJSessionStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameJoltAPI_EGJSessionStatus_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GameJoltAPI_EGJSessionStatus()
	{
		if (!Z_Registration_Info_UEnum_EGJSessionStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGJSessionStatus.InnerSingleton, Z_Construct_UEnum_GameJoltAPI_EGJSessionStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGJSessionStatus.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGJDataStore;
	static UEnum* EGJDataStore_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGJDataStore.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGJDataStore.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameJoltAPI_EGJDataStore, (UObject*)Z_Construct_UPackage__Script_GameJoltAPI(), TEXT("EGJDataStore"));
		}
		return Z_Registration_Info_UEnum_EGJDataStore.OuterSingleton;
	}
	template<> GAMEJOLTAPI_API UEnum* StaticEnum<EGJDataStore>()
	{
		return EGJDataStore_StaticEnum();
	}
	struct Z_Construct_UEnum_GameJoltAPI_EGJDataStore_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameJoltAPI_EGJDataStore_Statics::Enumerators[] = {
		{ "EGJDataStore::global", (int64)EGJDataStore::global },
		{ "EGJDataStore::user", (int64)EGJDataStore::user },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameJoltAPI_EGJDataStore_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Represents the scope of a data-store action */" },
		{ "global.DisplayName", "Global" },
		{ "global.Name", "EGJDataStore::global" },
		{ "ModuleRelativePath", "Public/GameJoltEnums.h" },
		{ "ToolTip", "Represents the scope of a data-store action" },
		{ "user.DisplayName", "User" },
		{ "user.Name", "EGJDataStore::user" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameJoltAPI_EGJDataStore_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameJoltAPI,
		nullptr,
		"EGJDataStore",
		"EGJDataStore",
		Z_Construct_UEnum_GameJoltAPI_EGJDataStore_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameJoltAPI_EGJDataStore_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameJoltAPI_EGJDataStore_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameJoltAPI_EGJDataStore_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GameJoltAPI_EGJDataStore()
	{
		if (!Z_Registration_Info_UEnum_EGJDataStore.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGJDataStore.InnerSingleton, Z_Construct_UEnum_GameJoltAPI_EGJDataStore_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGJDataStore.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGJDataOperation;
	static UEnum* EGJDataOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGJDataOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGJDataOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameJoltAPI_EGJDataOperation, (UObject*)Z_Construct_UPackage__Script_GameJoltAPI(), TEXT("EGJDataOperation"));
		}
		return Z_Registration_Info_UEnum_EGJDataOperation.OuterSingleton;
	}
	template<> GAMEJOLTAPI_API UEnum* StaticEnum<EGJDataOperation>()
	{
		return EGJDataOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_GameJoltAPI_EGJDataOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameJoltAPI_EGJDataOperation_Statics::Enumerators[] = {
		{ "EGJDataOperation::add", (int64)EGJDataOperation::add },
		{ "EGJDataOperation::substract", (int64)EGJDataOperation::substract },
		{ "EGJDataOperation::multiply", (int64)EGJDataOperation::multiply },
		{ "EGJDataOperation::divide", (int64)EGJDataOperation::divide },
		{ "EGJDataOperation::append", (int64)EGJDataOperation::append },
		{ "EGJDataOperation::prepend", (int64)EGJDataOperation::prepend },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameJoltAPI_EGJDataOperation_Statics::Enum_MetaDataParams[] = {
		{ "add.DisplayName", "Add" },
		{ "add.Name", "EGJDataOperation::add" },
		{ "append.DisplayName", "Append" },
		{ "append.Name", "EGJDataOperation::append" },
		{ "BlueprintType", "true" },
		{ "Comment", "/* Represents possible operations to perform with stored data */" },
		{ "divide.DisplayName", "Divide" },
		{ "divide.Name", "EGJDataOperation::divide" },
		{ "ModuleRelativePath", "Public/GameJoltEnums.h" },
		{ "multiply.DisplayName", "Multiply" },
		{ "multiply.Name", "EGJDataOperation::multiply" },
		{ "prepend.DisplayName", "Prepend" },
		{ "prepend.Name", "EGJDataOperation::prepend" },
		{ "substract.DisplayName", "Substract" },
		{ "substract.Name", "EGJDataOperation::substract" },
		{ "ToolTip", "Represents possible operations to perform with stored data" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameJoltAPI_EGJDataOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameJoltAPI,
		nullptr,
		"EGJDataOperation",
		"EGJDataOperation",
		Z_Construct_UEnum_GameJoltAPI_EGJDataOperation_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameJoltAPI_EGJDataOperation_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameJoltAPI_EGJDataOperation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameJoltAPI_EGJDataOperation_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GameJoltAPI_EGJDataOperation()
	{
		if (!Z_Registration_Info_UEnum_EGJDataOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGJDataOperation.InnerSingleton, Z_Construct_UEnum_GameJoltAPI_EGJDataOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGJDataOperation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGJScoreFilter;
	static UEnum* EGJScoreFilter_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGJScoreFilter.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGJScoreFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameJoltAPI_EGJScoreFilter, (UObject*)Z_Construct_UPackage__Script_GameJoltAPI(), TEXT("EGJScoreFilter"));
		}
		return Z_Registration_Info_UEnum_EGJScoreFilter.OuterSingleton;
	}
	template<> GAMEJOLTAPI_API UEnum* StaticEnum<EGJScoreFilter>()
	{
		return EGJScoreFilter_StaticEnum();
	}
	struct Z_Construct_UEnum_GameJoltAPI_EGJScoreFilter_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameJoltAPI_EGJScoreFilter_Statics::Enumerators[] = {
		{ "EGJScoreFilter::all", (int64)EGJScoreFilter::all },
		{ "EGJScoreFilter::guest", (int64)EGJScoreFilter::guest },
		{ "EGJScoreFilter::user", (int64)EGJScoreFilter::user },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameJoltAPI_EGJScoreFilter_Statics::Enum_MetaDataParams[] = {
		{ "all.DisplayName", "All Scores" },
		{ "all.Name", "EGJScoreFilter::all" },
		{ "BlueprintType", "true" },
		{ "Comment", "/* A filter used to fetch high-scores */" },
		{ "guest.DisplayName", "Scores of a guest" },
		{ "guest.Name", "EGJScoreFilter::guest" },
		{ "ModuleRelativePath", "Public/GameJoltEnums.h" },
		{ "ToolTip", "A filter used to fetch high-scores" },
		{ "user.DisplayName", "Scores of the current user" },
		{ "user.Name", "EGJScoreFilter::user" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameJoltAPI_EGJScoreFilter_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameJoltAPI,
		nullptr,
		"EGJScoreFilter",
		"EGJScoreFilter",
		Z_Construct_UEnum_GameJoltAPI_EGJScoreFilter_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameJoltAPI_EGJScoreFilter_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameJoltAPI_EGJScoreFilter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameJoltAPI_EGJScoreFilter_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GameJoltAPI_EGJScoreFilter()
	{
		if (!Z_Registration_Info_UEnum_EGJScoreFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGJScoreFilter.InnerSingleton, Z_Construct_UEnum_GameJoltAPI_EGJScoreFilter_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGJScoreFilter.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGJUserType;
	static UEnum* EGJUserType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGJUserType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGJUserType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameJoltAPI_EGJUserType, (UObject*)Z_Construct_UPackage__Script_GameJoltAPI(), TEXT("EGJUserType"));
		}
		return Z_Registration_Info_UEnum_EGJUserType.OuterSingleton;
	}
	template<> GAMEJOLTAPI_API UEnum* StaticEnum<EGJUserType>()
	{
		return EGJUserType_StaticEnum();
	}
	struct Z_Construct_UEnum_GameJoltAPI_EGJUserType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameJoltAPI_EGJUserType_Statics::Enumerators[] = {
		{ "EGJUserType::User", (int64)EGJUserType::User },
		{ "EGJUserType::Developer", (int64)EGJUserType::Developer },
		{ "EGJUserType::Moderator", (int64)EGJUserType::Moderator },
		{ "EGJUserType::Administrator", (int64)EGJUserType::Administrator },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameJoltAPI_EGJUserType_Statics::Enum_MetaDataParams[] = {
		{ "Administrator.Name", "EGJUserType::Administrator" },
		{ "BlueprintType", "true" },
		{ "Comment", "/* Represents the type of a user */" },
		{ "Developer.Name", "EGJUserType::Developer" },
		{ "Moderator.Name", "EGJUserType::Moderator" },
		{ "ModuleRelativePath", "Public/GameJoltEnums.h" },
		{ "ToolTip", "Represents the type of a user" },
		{ "User.Name", "EGJUserType::User" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameJoltAPI_EGJUserType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameJoltAPI,
		nullptr,
		"EGJUserType",
		"EGJUserType",
		Z_Construct_UEnum_GameJoltAPI_EGJUserType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameJoltAPI_EGJUserType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameJoltAPI_EGJUserType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameJoltAPI_EGJUserType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GameJoltAPI_EGJUserType()
	{
		if (!Z_Registration_Info_UEnum_EGJUserType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGJUserType.InnerSingleton, Z_Construct_UEnum_GameJoltAPI_EGJUserType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGJUserType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGJTrophyDifficulty;
	static UEnum* EGJTrophyDifficulty_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGJTrophyDifficulty.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGJTrophyDifficulty.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameJoltAPI_EGJTrophyDifficulty, (UObject*)Z_Construct_UPackage__Script_GameJoltAPI(), TEXT("EGJTrophyDifficulty"));
		}
		return Z_Registration_Info_UEnum_EGJTrophyDifficulty.OuterSingleton;
	}
	template<> GAMEJOLTAPI_API UEnum* StaticEnum<EGJTrophyDifficulty>()
	{
		return EGJTrophyDifficulty_StaticEnum();
	}
	struct Z_Construct_UEnum_GameJoltAPI_EGJTrophyDifficulty_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameJoltAPI_EGJTrophyDifficulty_Statics::Enumerators[] = {
		{ "EGJTrophyDifficulty::Bronze", (int64)EGJTrophyDifficulty::Bronze },
		{ "EGJTrophyDifficulty::Silver", (int64)EGJTrophyDifficulty::Silver },
		{ "EGJTrophyDifficulty::Gold", (int64)EGJTrophyDifficulty::Gold },
		{ "EGJTrophyDifficulty::Platinum", (int64)EGJTrophyDifficulty::Platinum },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameJoltAPI_EGJTrophyDifficulty_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bronze.Name", "EGJTrophyDifficulty::Bronze" },
		{ "Comment", "/* Represents the difficulty of a trophy */" },
		{ "Gold.Name", "EGJTrophyDifficulty::Gold" },
		{ "ModuleRelativePath", "Public/GameJoltEnums.h" },
		{ "Platinum.Name", "EGJTrophyDifficulty::Platinum" },
		{ "Silver.Name", "EGJTrophyDifficulty::Silver" },
		{ "ToolTip", "Represents the difficulty of a trophy" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameJoltAPI_EGJTrophyDifficulty_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameJoltAPI,
		nullptr,
		"EGJTrophyDifficulty",
		"EGJTrophyDifficulty",
		Z_Construct_UEnum_GameJoltAPI_EGJTrophyDifficulty_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameJoltAPI_EGJTrophyDifficulty_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameJoltAPI_EGJTrophyDifficulty_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameJoltAPI_EGJTrophyDifficulty_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GameJoltAPI_EGJTrophyDifficulty()
	{
		if (!Z_Registration_Info_UEnum_EGJTrophyDifficulty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGJTrophyDifficulty.InnerSingleton, Z_Construct_UEnum_GameJoltAPI_EGJTrophyDifficulty_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGJTrophyDifficulty.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGJErrors;
	static UEnum* EGJErrors_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGJErrors.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGJErrors.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameJoltAPI_EGJErrors, (UObject*)Z_Construct_UPackage__Script_GameJoltAPI(), TEXT("EGJErrors"));
		}
		return Z_Registration_Info_UEnum_EGJErrors.OuterSingleton;
	}
	template<> GAMEJOLTAPI_API UEnum* StaticEnum<EGJErrors>()
	{
		return EGJErrors_StaticEnum();
	}
	struct Z_Construct_UEnum_GameJoltAPI_EGJErrors_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameJoltAPI_EGJErrors_Statics::Enumerators[] = {
		{ "EGJErrors::None", (int64)EGJErrors::None },
		{ "EGJErrors::UnknownError", (int64)EGJErrors::UnknownError },
		{ "EGJErrors::UnknownError_Server", (int64)EGJErrors::UnknownError_Server },
		{ "EGJErrors::GameIDUnset", (int64)EGJErrors::GameIDUnset },
		{ "EGJErrors::GameIDInvalid", (int64)EGJErrors::GameIDInvalid },
		{ "EGJErrors::PrivateKeyUnset", (int64)EGJErrors::PrivateKeyUnset },
		{ "EGJErrors::ParametersInvalidOrUnset", (int64)EGJErrors::ParametersInvalidOrUnset },
		{ "EGJErrors::ResponseInvalid", (int64)EGJErrors::ResponseInvalid },
		{ "EGJErrors::RequestFailed", (int64)EGJErrors::RequestFailed },
		{ "EGJErrors::CredentialsInvalid", (int64)EGJErrors::CredentialsInvalid },
		{ "EGJErrors::RestrictedKey", (int64)EGJErrors::RestrictedKey },
		{ "EGJErrors::KeyNotFound", (int64)EGJErrors::KeyNotFound },
		{ "EGJErrors::OperationFailed", (int64)EGJErrors::OperationFailed },
		{ "EGJErrors::SignatureInvalid", (int64)EGJErrors::SignatureInvalid },
		{ "EGJErrors::InvalidTrophyID", (int64)EGJErrors::InvalidTrophyID },
		{ "EGJErrors::TrophyNotAchieved", (int64)EGJErrors::TrophyNotAchieved },
		{ "EGJErrors::TrophyAlreadyAchieved", (int64)EGJErrors::TrophyAlreadyAchieved },
		{ "EGJErrors::GuestsNotAllowed", (int64)EGJErrors::GuestsNotAllowed },
		{ "EGJErrors::NoSession", (int64)EGJErrors::NoSession },
		{ "EGJErrors::CredentialsNotFound", (int64)EGJErrors::CredentialsNotFound },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameJoltAPI_EGJErrors_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CredentialsInvalid.Name", "EGJErrors::CredentialsInvalid" },
		{ "CredentialsNotFound.Name", "EGJErrors::CredentialsNotFound" },
		{ "GameIDInvalid.Name", "EGJErrors::GameIDInvalid" },
		{ "GameIDUnset.Name", "EGJErrors::GameIDUnset" },
		{ "GuestsNotAllowed.Name", "EGJErrors::GuestsNotAllowed" },
		{ "InvalidTrophyID.Name", "EGJErrors::InvalidTrophyID" },
		{ "KeyNotFound.Name", "EGJErrors::KeyNotFound" },
		{ "ModuleRelativePath", "Public/GameJoltEnums.h" },
		{ "None.Name", "EGJErrors::None" },
		{ "NoSession.Name", "EGJErrors::NoSession" },
		{ "OperationFailed.Name", "EGJErrors::OperationFailed" },
		{ "ParametersInvalidOrUnset.Name", "EGJErrors::ParametersInvalidOrUnset" },
		{ "PrivateKeyUnset.Name", "EGJErrors::PrivateKeyUnset" },
		{ "RequestFailed.Name", "EGJErrors::RequestFailed" },
		{ "ResponseInvalid.Name", "EGJErrors::ResponseInvalid" },
		{ "RestrictedKey.Name", "EGJErrors::RestrictedKey" },
		{ "SignatureInvalid.Name", "EGJErrors::SignatureInvalid" },
		{ "TrophyAlreadyAchieved.Name", "EGJErrors::TrophyAlreadyAchieved" },
		{ "TrophyNotAchieved.Name", "EGJErrors::TrophyNotAchieved" },
		{ "UnknownError.DisplayName", "An unknown error on the plugin's side has occured." },
		{ "UnknownError.Name", "EGJErrors::UnknownError" },
		{ "UnknownError_Server.DisplayName", "An unknown error on GameJolt's side has occured." },
		{ "UnknownError_Server.Name", "EGJErrors::UnknownError_Server" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameJoltAPI_EGJErrors_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameJoltAPI,
		nullptr,
		"EGJErrors",
		"EGJErrors",
		Z_Construct_UEnum_GameJoltAPI_EGJErrors_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameJoltAPI_EGJErrors_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameJoltAPI_EGJErrors_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameJoltAPI_EGJErrors_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GameJoltAPI_EGJErrors()
	{
		if (!Z_Registration_Info_UEnum_EGJErrors.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGJErrors.InnerSingleton, Z_Construct_UEnum_GameJoltAPI_EGJErrors_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGJErrors.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJoltEnums_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJoltEnums_h_Statics::EnumInfo[] = {
		{ EGJAchievedTrophies_StaticEnum, TEXT("EGJAchievedTrophies"), &Z_Registration_Info_UEnum_EGJAchievedTrophies, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2612278277U) },
		{ EGJSessionStatus_StaticEnum, TEXT("EGJSessionStatus"), &Z_Registration_Info_UEnum_EGJSessionStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 742866748U) },
		{ EGJDataStore_StaticEnum, TEXT("EGJDataStore"), &Z_Registration_Info_UEnum_EGJDataStore, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1859354787U) },
		{ EGJDataOperation_StaticEnum, TEXT("EGJDataOperation"), &Z_Registration_Info_UEnum_EGJDataOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1422521647U) },
		{ EGJScoreFilter_StaticEnum, TEXT("EGJScoreFilter"), &Z_Registration_Info_UEnum_EGJScoreFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2587997971U) },
		{ EGJUserType_StaticEnum, TEXT("EGJUserType"), &Z_Registration_Info_UEnum_EGJUserType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3993509682U) },
		{ EGJTrophyDifficulty_StaticEnum, TEXT("EGJTrophyDifficulty"), &Z_Registration_Info_UEnum_EGJTrophyDifficulty, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3289541263U) },
		{ EGJErrors_StaticEnum, TEXT("EGJErrors"), &Z_Registration_Info_UEnum_EGJErrors, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1852560761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJoltEnums_h_177509422(TEXT("/Script/GameJoltAPI"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJoltEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJoltEnums_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
