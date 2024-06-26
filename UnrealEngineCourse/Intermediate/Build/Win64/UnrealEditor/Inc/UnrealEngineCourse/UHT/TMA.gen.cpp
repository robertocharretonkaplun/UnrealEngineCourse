// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineCourse/Public/TMA.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTMA() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_ATMA();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_ATMA_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngineCourse();
// End Cross Module References
	DEFINE_FUNCTION(ATMA::execModifyTargetTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ModifyTargetTransform();
		P_NATIVE_END;
	}
	void ATMA::StaticRegisterNativesATMA()
	{
		UClass* Class = ATMA::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ModifyTargetTransform", &ATMA::execModifyTargetTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATMA_ModifyTargetTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATMA_ModifyTargetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "TMA Settings" },
		{ "ModuleRelativePath", "Public/TMA.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMA_ModifyTargetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATMA, nullptr, "ModifyTargetTransform", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMA_ModifyTargetTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMA_ModifyTargetTransform_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATMA_ModifyTargetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMA_ModifyTargetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATMA);
	UClass* Z_Construct_UClass_ATMA_NoRegister()
	{
		return ATMA::StaticClass();
	}
	struct Z_Construct_UClass_ATMA_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATMA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineCourse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATMA_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATMA_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATMA_ModifyTargetTransform, "ModifyTargetTransform" }, // 3383464691
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATMA_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATMA_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TMA.h" },
		{ "ModuleRelativePath", "Public/TMA.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATMA_Statics::NewProp_TargetActor_MetaData[] = {
		{ "Category", "TMA Settings" },
		{ "ModuleRelativePath", "Public/TMA.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMA_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMA, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATMA_Statics::NewProp_TargetActor_MetaData), Z_Construct_UClass_ATMA_Statics::NewProp_TargetActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATMA_Statics::NewProp_NewTransform_MetaData[] = {
		{ "Category", "TMA Settings" },
		{ "ModuleRelativePath", "Public/TMA.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATMA_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMA, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATMA_Statics::NewProp_NewTransform_MetaData), Z_Construct_UClass_ATMA_Statics::NewProp_NewTransform_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATMA_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATMA_Statics::NewProp_Positions_MetaData[] = {
		{ "Category", "TMA Settings" },
		{ "ModuleRelativePath", "Public/TMA.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATMA_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMA, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATMA_Statics::NewProp_Positions_MetaData), Z_Construct_UClass_ATMA_Statics::NewProp_Positions_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMA_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATMA_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "TMA Settings" },
		{ "ModuleRelativePath", "Public/TMA.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATMA_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMA, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATMA_Statics::NewProp_Materials_MetaData), Z_Construct_UClass_ATMA_Statics::NewProp_Materials_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATMA_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMA_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMA_Statics::NewProp_NewTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMA_Statics::NewProp_Positions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMA_Statics::NewProp_Positions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMA_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMA_Statics::NewProp_Materials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATMA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATMA>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATMA_Statics::ClassParams = {
		&ATMA::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATMA_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATMA_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATMA_Statics::Class_MetaDataParams), Z_Construct_UClass_ATMA_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATMA_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATMA()
	{
		if (!Z_Registration_Info_UClass_ATMA.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATMA.OuterSingleton, Z_Construct_UClass_ATMA_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATMA.OuterSingleton;
	}
	template<> UNREALENGINECOURSE_API UClass* StaticClass<ATMA>()
	{
		return ATMA::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATMA);
	ATMA::~ATMA() {}
	struct Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_TMA_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_TMA_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATMA, ATMA::StaticClass, TEXT("ATMA"), &Z_Registration_Info_UClass_ATMA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATMA), 2707500922U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_TMA_h_2277584692(TEXT("/Script/UnrealEngineCourse"),
		Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_TMA_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_TMA_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
