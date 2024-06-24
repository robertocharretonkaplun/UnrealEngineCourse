// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineCourse/Public/TransformModifierActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformModifierActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_ATransformModifierActor();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_ATransformModifierActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngineCourse();
// End Cross Module References
	DEFINE_FUNCTION(ATransformModifierActor::execModifyTargetTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ModifyTargetTransform();
		P_NATIVE_END;
	}
	void ATransformModifierActor::StaticRegisterNativesATransformModifierActor()
	{
		UClass* Class = ATransformModifierActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ModifyTargetTransform", &ATransformModifierActor::execModifyTargetTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to modify the transform of the target actor\n" },
#endif
		{ "ModuleRelativePath", "Public/TransformModifierActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to modify the transform of the target actor" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformModifierActor, nullptr, "ModifyTargetTransform", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATransformModifierActor);
	UClass* Z_Construct_UClass_ATransformModifierActor_NoRegister()
	{
		return ATransformModifierActor::StaticClass();
	}
	struct Z_Construct_UClass_ATransformModifierActor_Statics
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
	UObject* (*const Z_Construct_UClass_ATransformModifierActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineCourse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifierActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATransformModifierActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATransformModifierActor_ModifyTargetTransform, "ModifyTargetTransform" }, // 232946990
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifierActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformModifierActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TransformModifierActor.h" },
		{ "ModuleRelativePath", "Public/TransformModifierActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_TargetActor_MetaData[] = {
		{ "Category", "Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Variable to hold the target actor\n" },
#endif
		{ "ModuleRelativePath", "Public/TransformModifierActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variable to hold the target actor" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformModifierActor, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_TargetActor_MetaData), Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_TargetActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_NewTransform_MetaData[] = {
		{ "Category", "Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Variable to hold the new transform\n" },
#endif
		{ "ModuleRelativePath", "Public/TransformModifierActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variable to hold the new transform" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformModifierActor, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_NewTransform_MetaData), Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_NewTransform_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Positions_MetaData[] = {
		{ "Category", "Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array of positions for the square path\n" },
#endif
		{ "ModuleRelativePath", "Public/TransformModifierActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of positions for the square path" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformModifierActor, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Positions_MetaData), Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Positions_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Array of materials to switch between\n" },
#endif
		{ "ModuleRelativePath", "Public/TransformModifierActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of materials to switch between" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformModifierActor, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Materials_MetaData), Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Materials_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATransformModifierActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_NewTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Positions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Positions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifierActor_Statics::NewProp_Materials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATransformModifierActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATransformModifierActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATransformModifierActor_Statics::ClassParams = {
		&ATransformModifierActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATransformModifierActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifierActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifierActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATransformModifierActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifierActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATransformModifierActor()
	{
		if (!Z_Registration_Info_UClass_ATransformModifierActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATransformModifierActor.OuterSingleton, Z_Construct_UClass_ATransformModifierActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATransformModifierActor.OuterSingleton;
	}
	template<> UNREALENGINECOURSE_API UClass* StaticClass<ATransformModifierActor>()
	{
		return ATransformModifierActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATransformModifierActor);
	ATransformModifierActor::~ATransformModifierActor() {}
	struct Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_TransformModifierActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_TransformModifierActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATransformModifierActor, ATransformModifierActor::StaticClass, TEXT("ATransformModifierActor"), &Z_Registration_Info_UClass_ATransformModifierActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATransformModifierActor), 3640785480U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_TransformModifierActor_h_2940905386(TEXT("/Script/UnrealEngineCourse"),
		Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_TransformModifierActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_TransformModifierActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
