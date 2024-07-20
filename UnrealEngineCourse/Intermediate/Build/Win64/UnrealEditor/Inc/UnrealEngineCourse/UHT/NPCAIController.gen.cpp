// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineCourse/Public/NPCAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_ANPCAIController();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_ANPCAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngineCourse();
// End Cross Module References
	void ANPCAIController::StaticRegisterNativesANPCAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPCAIController);
	UClass* Z_Construct_UClass_ANPCAIController_NoRegister()
	{
		return ANPCAIController::StaticClass();
	}
	struct Z_Construct_UClass_ANPCAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPCAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineCourse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCAIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCAIController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "NPCAIController.h" },
		{ "ModuleRelativePath", "Public/NPCAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPCAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCAIController_Statics::ClassParams = {
		&ANPCAIController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPCAIController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ANPCAIController()
	{
		if (!Z_Registration_Info_UClass_ANPCAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPCAIController.OuterSingleton, Z_Construct_UClass_ANPCAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANPCAIController.OuterSingleton;
	}
	template<> UNREALENGINECOURSE_API UClass* StaticClass<ANPCAIController>()
	{
		return ANPCAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCAIController);
	ANPCAIController::~ANPCAIController() {}
	struct Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_NPCAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_NPCAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANPCAIController, ANPCAIController::StaticClass, TEXT("ANPCAIController"), &Z_Registration_Info_UClass_ANPCAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCAIController), 1627013872U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_NPCAIController_h_3878983248(TEXT("/Script/UnrealEngineCourse"),
		Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_NPCAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_NPCAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
