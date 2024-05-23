// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineCourse/UnrealEngineCourseGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealEngineCourseGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_AUnrealEngineCourseGameMode();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_AUnrealEngineCourseGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngineCourse();
// End Cross Module References
	void AUnrealEngineCourseGameMode::StaticRegisterNativesAUnrealEngineCourseGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealEngineCourseGameMode);
	UClass* Z_Construct_UClass_AUnrealEngineCourseGameMode_NoRegister()
	{
		return AUnrealEngineCourseGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealEngineCourseGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealEngineCourseGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineCourse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealEngineCourseGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealEngineCourseGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealEngineCourseGameMode.h" },
		{ "ModuleRelativePath", "UnrealEngineCourseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealEngineCourseGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealEngineCourseGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealEngineCourseGameMode_Statics::ClassParams = {
		&AUnrealEngineCourseGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealEngineCourseGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnrealEngineCourseGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AUnrealEngineCourseGameMode()
	{
		if (!Z_Registration_Info_UClass_AUnrealEngineCourseGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealEngineCourseGameMode.OuterSingleton, Z_Construct_UClass_AUnrealEngineCourseGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnrealEngineCourseGameMode.OuterSingleton;
	}
	template<> UNREALENGINECOURSE_API UClass* StaticClass<AUnrealEngineCourseGameMode>()
	{
		return AUnrealEngineCourseGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealEngineCourseGameMode);
	AUnrealEngineCourseGameMode::~AUnrealEngineCourseGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_UnrealEngineCourseGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_UnrealEngineCourseGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealEngineCourseGameMode, AUnrealEngineCourseGameMode::StaticClass, TEXT("AUnrealEngineCourseGameMode"), &Z_Registration_Info_UClass_AUnrealEngineCourseGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealEngineCourseGameMode), 2376414368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_UnrealEngineCourseGameMode_h_2144421708(TEXT("/Script/UnrealEngineCourse"),
		Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_UnrealEngineCourseGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_UnrealEngineCourseGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
