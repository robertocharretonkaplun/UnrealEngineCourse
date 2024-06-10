// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineCourse/ActorClase1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorClase1() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_AActorClase1();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_AActorClase1_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngineCourse();
// End Cross Module References
	void AActorClase1::StaticRegisterNativesAActorClase1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorClase1);
	UClass* Z_Construct_UClass_AActorClase1_NoRegister()
	{
		return AActorClase1::StaticClass();
	}
	struct Z_Construct_UClass_AActorClase1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_edad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_edad;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActorClase1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineCourse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorClase1_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorClase1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorClase1.h" },
		{ "ModuleRelativePath", "ActorClase1.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorClase1_Statics::NewProp_edad_MetaData[] = {
		{ "Category", "Example" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ejemplo de una variable de instancia publica\n" },
#endif
		{ "ModuleRelativePath", "ActorClase1.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ejemplo de una variable de instancia publica" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AActorClase1_Statics::NewProp_edad = { "edad", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AActorClase1, edad), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActorClase1_Statics::NewProp_edad_MetaData), Z_Construct_UClass_AActorClase1_Statics::NewProp_edad_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorClase1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorClase1_Statics::NewProp_edad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorClase1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorClase1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorClase1_Statics::ClassParams = {
		&AActorClase1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AActorClase1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AActorClase1_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActorClase1_Statics::Class_MetaDataParams), Z_Construct_UClass_AActorClase1_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActorClase1_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AActorClase1()
	{
		if (!Z_Registration_Info_UClass_AActorClase1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorClase1.OuterSingleton, Z_Construct_UClass_AActorClase1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AActorClase1.OuterSingleton;
	}
	template<> UNREALENGINECOURSE_API UClass* StaticClass<AActorClase1>()
	{
		return AActorClase1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorClase1);
	AActorClase1::~AActorClase1() {}
	struct Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_ActorClase1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_ActorClase1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AActorClase1, AActorClase1::StaticClass, TEXT("AActorClase1"), &Z_Registration_Info_UClass_AActorClase1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorClase1), 1676971941U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_ActorClase1_h_1682225776(TEXT("/Script/UnrealEngineCourse"),
		Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_ActorClase1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_ActorClase1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
