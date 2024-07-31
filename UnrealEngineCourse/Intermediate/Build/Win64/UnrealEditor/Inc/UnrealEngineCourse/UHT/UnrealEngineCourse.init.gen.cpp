// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealEngineCourse_init() {}
	UNREALENGINECOURSE_API UFunction* Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEvent__DelegateSignature();
	UNREALENGINECOURSE_API UFunction* Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEventWithParam__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UnrealEngineCourse;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UnrealEngineCourse()
	{
		if (!Z_Registration_Info_UPackage__Script_UnrealEngineCourse.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEventWithParam__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnrealEngineCourse",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x44E22D06,
				0xE6060613,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UnrealEngineCourse.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UnrealEngineCourse.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UnrealEngineCourse(Z_Construct_UPackage__Script_UnrealEngineCourse, TEXT("/Script/UnrealEngineCourse"), Z_Registration_Info_UPackage__Script_UnrealEngineCourse, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x44E22D06, 0xE6060613));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
