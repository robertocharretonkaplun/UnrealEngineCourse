// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineCourse/Public/Car.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCar() {}
// Cross Module References
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_ACar();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_ACar_NoRegister();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_AVehicle();
	UPackage* Z_Construct_UPackage__Script_UnrealEngineCourse();
// End Cross Module References
	void ACar::StaticRegisterNativesACar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACar);
	UClass* Z_Construct_UClass_ACar_NoRegister()
	{
		return ACar::StaticClass();
	}
	struct Z_Construct_UClass_ACar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineCourse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Car.h" },
		{ "ModuleRelativePath", "Public/Car.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACar_Statics::ClassParams = {
		&ACar::StaticClass,
		"Engine",
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::Class_MetaDataParams), Z_Construct_UClass_ACar_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACar()
	{
		if (!Z_Registration_Info_UClass_ACar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACar.OuterSingleton, Z_Construct_UClass_ACar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACar.OuterSingleton;
	}
	template<> UNREALENGINECOURSE_API UClass* StaticClass<ACar>()
	{
		return ACar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACar);
	ACar::~ACar() {}
	struct Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_Car_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_Car_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACar, ACar::StaticClass, TEXT("ACar"), &Z_Registration_Info_UClass_ACar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACar), 1010106498U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_Car_h_3627850206(TEXT("/Script/UnrealEngineCourse"),
		Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_Car_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_Car_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
