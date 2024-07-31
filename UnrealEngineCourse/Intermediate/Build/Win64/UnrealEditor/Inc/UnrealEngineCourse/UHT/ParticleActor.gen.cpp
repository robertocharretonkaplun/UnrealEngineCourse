// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineCourse/Public/ParticleActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_AParticleActor();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_AParticleActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngineCourse();
// End Cross Module References
	DEFINE_FUNCTION(AParticleActor::execStopParticles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopParticles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AParticleActor::execStartParticles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartParticles();
		P_NATIVE_END;
	}
	void AParticleActor::StaticRegisterNativesAParticleActor()
	{
		UClass* Class = AParticleActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartParticles", &AParticleActor::execStartParticles },
			{ "StopParticles", &AParticleActor::execStopParticles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AParticleActor_StartParticles_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticleActor_StartParticles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles" },
		{ "ModuleRelativePath", "Public/ParticleActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticleActor_StartParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticleActor, nullptr, "StartParticles", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParticleActor_StartParticles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParticleActor_StartParticles_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AParticleActor_StartParticles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParticleActor_StartParticles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParticleActor_StopParticles_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticleActor_StopParticles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles" },
		{ "ModuleRelativePath", "Public/ParticleActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticleActor_StopParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticleActor, nullptr, "StopParticles", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AParticleActor_StopParticles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AParticleActor_StopParticles_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AParticleActor_StopParticles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AParticleActor_StopParticles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AParticleActor);
	UClass* Z_Construct_UClass_AParticleActor_NoRegister()
	{
		return AParticleActor::StaticClass();
	}
	struct Z_Construct_UClass_AParticleActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleSystemComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParticleActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineCourse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParticleActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AParticleActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AParticleActor_StartParticles, "StartParticles" }, // 1947196053
		{ &Z_Construct_UFunction_AParticleActor_StopParticles, "StopParticles" }, // 2779568252
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParticleActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticleActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ParticleActor.h" },
		{ "ModuleRelativePath", "Public/ParticleActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticleActor_Statics::NewProp_ParticleSystemComponent_MetaData[] = {
		{ "Category", "Particles" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ParticleActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParticleActor_Statics::NewProp_ParticleSystemComponent = { "ParticleSystemComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AParticleActor, ParticleSystemComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AParticleActor_Statics::NewProp_ParticleSystemComponent_MetaData), Z_Construct_UClass_AParticleActor_Statics::NewProp_ParticleSystemComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParticleActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticleActor_Statics::NewProp_ParticleSystemComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParticleActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParticleActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AParticleActor_Statics::ClassParams = {
		&AParticleActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AParticleActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AParticleActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AParticleActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AParticleActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AParticleActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AParticleActor()
	{
		if (!Z_Registration_Info_UClass_AParticleActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AParticleActor.OuterSingleton, Z_Construct_UClass_AParticleActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AParticleActor.OuterSingleton;
	}
	template<> UNREALENGINECOURSE_API UClass* StaticClass<AParticleActor>()
	{
		return AParticleActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParticleActor);
	AParticleActor::~AParticleActor() {}
	struct Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_ParticleActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_ParticleActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AParticleActor, AParticleActor::StaticClass, TEXT("AParticleActor"), &Z_Registration_Info_UClass_AParticleActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AParticleActor), 1069979260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_ParticleActor_h_2446742328(TEXT("/Script/UnrealEngineCourse"),
		Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_ParticleActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_ParticleActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
