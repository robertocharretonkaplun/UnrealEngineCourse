// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineCourse/Public/UCQClase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUCQClase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_AUCQClase();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_AUCQClase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngineCourse();
// End Cross Module References
	DEFINE_FUNCTION(AUCQClase::execExampleFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExampleFunction();
		P_NATIVE_END;
	}
	void AUCQClase::StaticRegisterNativesAUCQClase()
	{
		UClass* Class = AUCQClase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExampleFunction", &AUCQClase::execExampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUCQClase_ExampleFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUCQClase_ExampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Example Settings" },
		{ "ModuleRelativePath", "Public/UCQClase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUCQClase_ExampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUCQClase, nullptr, "ExampleFunction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUCQClase_ExampleFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUCQClase_ExampleFunction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AUCQClase_ExampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUCQClase_ExampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUCQClase);
	UClass* Z_Construct_UClass_AUCQClase_NoRegister()
	{
		return AUCQClase::StaticClass();
	}
	struct Z_Construct_UClass_AUCQClase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	UObject* (*const Z_Construct_UClass_AUCQClase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineCourse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUCQClase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AUCQClase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUCQClase_ExampleFunction, "ExampleFunction" }, // 2007896664
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUCQClase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUCQClase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UCQClase.h" },
		{ "ModuleRelativePath", "Public/UCQClase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUCQClase_Statics::NewProp_edad_MetaData[] = {
		{ "Category", "Example Settings" },
		{ "ModuleRelativePath", "Public/UCQClase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUCQClase_Statics::NewProp_edad = { "edad", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUCQClase, edad), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUCQClase_Statics::NewProp_edad_MetaData), Z_Construct_UClass_AUCQClase_Statics::NewProp_edad_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUCQClase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUCQClase_Statics::NewProp_edad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUCQClase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUCQClase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUCQClase_Statics::ClassParams = {
		&AUCQClase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUCQClase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUCQClase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUCQClase_Statics::Class_MetaDataParams), Z_Construct_UClass_AUCQClase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUCQClase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AUCQClase()
	{
		if (!Z_Registration_Info_UClass_AUCQClase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUCQClase.OuterSingleton, Z_Construct_UClass_AUCQClase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUCQClase.OuterSingleton;
	}
	template<> UNREALENGINECOURSE_API UClass* StaticClass<AUCQClase>()
	{
		return AUCQClase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUCQClase);
	AUCQClase::~AUCQClase() {}
	struct Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_UCQClase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_UCQClase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUCQClase, AUCQClase::StaticClass, TEXT("AUCQClase"), &Z_Registration_Info_UClass_AUCQClase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUCQClase), 2660186946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_UCQClase_h_781085303(TEXT("/Script/UnrealEngineCourse"),
		Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_UCQClase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_UCQClase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
