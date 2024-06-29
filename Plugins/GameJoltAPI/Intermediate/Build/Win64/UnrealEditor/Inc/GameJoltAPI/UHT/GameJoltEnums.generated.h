// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameJoltEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEJOLTAPI_GameJoltEnums_generated_h
#error "GameJoltEnums.generated.h already included, missing '#pragma once' in GameJoltEnums.h"
#endif
#define GAMEJOLTAPI_GameJoltEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_project_prospector_Plugins_GameJoltAPI_Source_GameJoltAPI_Public_GameJoltEnums_h


#define FOREACH_ENUM_EGJACHIEVEDTROPHIES(op) \
	op(EGJAchievedTrophies::all) \
	op(EGJAchievedTrophies::achieved) \
	op(EGJAchievedTrophies::unachieved) 

enum class EGJAchievedTrophies : uint8;
template<> struct TIsUEnumClass<EGJAchievedTrophies> { enum { Value = true }; };
template<> GAMEJOLTAPI_API UEnum* StaticEnum<EGJAchievedTrophies>();

#define FOREACH_ENUM_EGJSESSIONSTATUS(op) \
	op(EGJSessionStatus::active) \
	op(EGJSessionStatus::idle) 

enum class EGJSessionStatus : uint8;
template<> struct TIsUEnumClass<EGJSessionStatus> { enum { Value = true }; };
template<> GAMEJOLTAPI_API UEnum* StaticEnum<EGJSessionStatus>();

#define FOREACH_ENUM_EGJDATASTORE(op) \
	op(EGJDataStore::global) \
	op(EGJDataStore::user) 

enum class EGJDataStore : uint8;
template<> struct TIsUEnumClass<EGJDataStore> { enum { Value = true }; };
template<> GAMEJOLTAPI_API UEnum* StaticEnum<EGJDataStore>();

#define FOREACH_ENUM_EGJDATAOPERATION(op) \
	op(EGJDataOperation::add) \
	op(EGJDataOperation::substract) \
	op(EGJDataOperation::multiply) \
	op(EGJDataOperation::divide) \
	op(EGJDataOperation::append) \
	op(EGJDataOperation::prepend) 

enum class EGJDataOperation : uint8;
template<> struct TIsUEnumClass<EGJDataOperation> { enum { Value = true }; };
template<> GAMEJOLTAPI_API UEnum* StaticEnum<EGJDataOperation>();

#define FOREACH_ENUM_EGJSCOREFILTER(op) \
	op(EGJScoreFilter::all) \
	op(EGJScoreFilter::guest) \
	op(EGJScoreFilter::user) 

enum class EGJScoreFilter : uint8;
template<> struct TIsUEnumClass<EGJScoreFilter> { enum { Value = true }; };
template<> GAMEJOLTAPI_API UEnum* StaticEnum<EGJScoreFilter>();

#define FOREACH_ENUM_EGJUSERTYPE(op) \
	op(EGJUserType::User) \
	op(EGJUserType::Developer) \
	op(EGJUserType::Moderator) \
	op(EGJUserType::Administrator) 

enum class EGJUserType : uint8;
template<> struct TIsUEnumClass<EGJUserType> { enum { Value = true }; };
template<> GAMEJOLTAPI_API UEnum* StaticEnum<EGJUserType>();

#define FOREACH_ENUM_EGJTROPHYDIFFICULTY(op) \
	op(EGJTrophyDifficulty::Bronze) \
	op(EGJTrophyDifficulty::Silver) \
	op(EGJTrophyDifficulty::Gold) \
	op(EGJTrophyDifficulty::Platinum) 

enum class EGJTrophyDifficulty : uint8;
template<> struct TIsUEnumClass<EGJTrophyDifficulty> { enum { Value = true }; };
template<> GAMEJOLTAPI_API UEnum* StaticEnum<EGJTrophyDifficulty>();

#define FOREACH_ENUM_EGJERRORS(op) \
	op(EGJErrors::None) \
	op(EGJErrors::UnknownError) \
	op(EGJErrors::UnknownError_Server) \
	op(EGJErrors::GameIDUnset) \
	op(EGJErrors::GameIDInvalid) \
	op(EGJErrors::PrivateKeyUnset) \
	op(EGJErrors::ParametersInvalidOrUnset) \
	op(EGJErrors::ResponseInvalid) \
	op(EGJErrors::RequestFailed) \
	op(EGJErrors::CredentialsInvalid) \
	op(EGJErrors::RestrictedKey) \
	op(EGJErrors::KeyNotFound) \
	op(EGJErrors::OperationFailed) \
	op(EGJErrors::SignatureInvalid) \
	op(EGJErrors::InvalidTrophyID) \
	op(EGJErrors::TrophyNotAchieved) \
	op(EGJErrors::TrophyAlreadyAchieved) \
	op(EGJErrors::GuestsNotAllowed) \
	op(EGJErrors::NoSession) \
	op(EGJErrors::CredentialsNotFound) 

enum class EGJErrors : uint8;
template<> struct TIsUEnumClass<EGJErrors> { enum { Value = true }; };
template<> GAMEJOLTAPI_API UEnum* StaticEnum<EGJErrors>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
