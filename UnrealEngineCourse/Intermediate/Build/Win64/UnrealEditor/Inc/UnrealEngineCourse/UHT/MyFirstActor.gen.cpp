// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineCourse/MyFirstActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFirstActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_AMyFirstActor();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_AMyFirstActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngineCourse();
// End Cross Module References
	DEFINE_FUNCTION(AMyFirstActor::execExampleFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExampleFunction();
		P_NATIVE_END;
	}
	void AMyFirstActor::StaticRegisterNativesAMyFirstActor()
	{
		UClass* Class = AMyFirstActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExampleFunction", &AMyFirstActor::execExampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyFirstActor_ExampleFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyFirstActor_ExampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Example" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ejemplo de una funci\xef\xbf\xbdn p\xef\xbf\xbd""blica\n" },
#endif
		{ "ModuleRelativePath", "MyFirstActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ejemplo de una funci\xef\xbf\xbdn p\xef\xbf\xbd""blica" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyFirstActor_ExampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyFirstActor, nullptr, "ExampleFunction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyFirstActor_ExampleFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyFirstActor_ExampleFunction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyFirstActor_ExampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyFirstActor_ExampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyFirstActor);
	UClass* Z_Construct_UClass_AMyFirstActor_NoRegister()
	{
		return AMyFirstActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyFirstActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExampleFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExampleFloat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyFirstActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineCourse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFirstActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyFirstActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyFirstActor_ExampleFunction, "ExampleFunction" }, // 2203834266
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFirstActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFirstActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyFirstActor.h" },
		{ "ModuleRelativePath", "MyFirstActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFirstActor_Statics::NewProp_ExampleFloat_MetaData[] = {
		{ "Category", "Example" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ejemplo de una variable de instancia p\xef\xbf\xbd""blica\n" },
#endif
		{ "ModuleRelativePath", "MyFirstActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ejemplo de una variable de instancia p\xef\xbf\xbd""blica" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyFirstActor_Statics::NewProp_ExampleFloat = { "ExampleFloat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyFirstActor, ExampleFloat), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFirstActor_Statics::NewProp_ExampleFloat_MetaData), Z_Construct_UClass_AMyFirstActor_Statics::NewProp_ExampleFloat_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyFirstActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyFirstActor_Statics::NewProp_ExampleFloat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyFirstActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyFirstActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyFirstActor_Statics::ClassParams = {
		&AMyFirstActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyFirstActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyFirstActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFirstActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyFirstActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyFirstActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyFirstActor()
	{
		if (!Z_Registration_Info_UClass_AMyFirstActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyFirstActor.OuterSingleton, Z_Construct_UClass_AMyFirstActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyFirstActor.OuterSingleton;
	}
	template<> UNREALENGINECOURSE_API UClass* StaticClass<AMyFirstActor>()
	{
		return AMyFirstActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyFirstActor);
	AMyFirstActor::~AMyFirstActor() {}
	struct Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_MyFirstActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_MyFirstActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyFirstActor, AMyFirstActor::StaticClass, TEXT("AMyFirstActor"), &Z_Registration_Info_UClass_AMyFirstActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyFirstActor), 2412441562U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_MyFirstActor_h_1094616987(TEXT("/Script/UnrealEngineCourse"),
		Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_MyFirstActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_MyFirstActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
