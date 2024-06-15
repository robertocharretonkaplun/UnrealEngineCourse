// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineCourse/Public/GrabDropCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabDropCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_AGrabDropCharacter();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_AGrabDropCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngineCourse();
// End Cross Module References
	void AGrabDropCharacter::StaticRegisterNativesAGrabDropCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrabDropCharacter);
	UClass* Z_Construct_UClass_AGrabDropCharacter_NoRegister()
	{
		return AGrabDropCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGrabDropCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrabDropCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineCourse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrabDropCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabDropCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GrabDropCharacter.h" },
		{ "ModuleRelativePath", "Public/GrabDropCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrabDropCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrabDropCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrabDropCharacter_Statics::ClassParams = {
		&AGrabDropCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrabDropCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGrabDropCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGrabDropCharacter()
	{
		if (!Z_Registration_Info_UClass_AGrabDropCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrabDropCharacter.OuterSingleton, Z_Construct_UClass_AGrabDropCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGrabDropCharacter.OuterSingleton;
	}
	template<> UNREALENGINECOURSE_API UClass* StaticClass<AGrabDropCharacter>()
	{
		return AGrabDropCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrabDropCharacter);
	AGrabDropCharacter::~AGrabDropCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_GrabDropCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_GrabDropCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGrabDropCharacter, AGrabDropCharacter::StaticClass, TEXT("AGrabDropCharacter"), &Z_Registration_Info_UClass_AGrabDropCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrabDropCharacter), 3014271326U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_GrabDropCharacter_h_3316785644(TEXT("/Script/UnrealEngineCourse"),
		Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_GrabDropCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_GrabDropCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
