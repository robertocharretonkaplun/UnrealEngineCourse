// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineCourse/GrabbableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabbableActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_AGrabbableActor();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_AGrabbableActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngineCourse();
// End Cross Module References
	DEFINE_FUNCTION(AGrabbableActor::execDrop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Drop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGrabbableActor::execGrab)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Grab();
		P_NATIVE_END;
	}
	void AGrabbableActor::StaticRegisterNativesAGrabbableActor()
	{
		UClass* Class = AGrabbableActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Drop", &AGrabbableActor::execDrop },
			{ "Grab", &AGrabbableActor::execGrab },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGrabbableActor_Drop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrabbableActor_Drop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grabbable" },
		{ "ModuleRelativePath", "GrabbableActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrabbableActor_Drop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrabbableActor, nullptr, "Drop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrabbableActor_Drop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrabbableActor_Drop_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGrabbableActor_Drop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrabbableActor_Drop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGrabbableActor_Grab_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGrabbableActor_Grab_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grabbable" },
		{ "ModuleRelativePath", "GrabbableActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGrabbableActor_Grab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGrabbableActor, nullptr, "Grab", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGrabbableActor_Grab_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGrabbableActor_Grab_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGrabbableActor_Grab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGrabbableActor_Grab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrabbableActor);
	UClass* Z_Construct_UClass_AGrabbableActor_NoRegister()
	{
		return AGrabbableActor::StaticClass();
	}
	struct Z_Construct_UClass_AGrabbableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGrabbed_MetaData[];
#endif
		static void NewProp_bIsGrabbed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGrabbed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldingActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoldingActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrabbableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineCourse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbableActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGrabbableActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGrabbableActor_Drop, "Drop" }, // 3069470900
		{ &Z_Construct_UFunction_AGrabbableActor_Grab, "Grab" }, // 2985862311
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbableActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbableActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GrabbableActor.h" },
		{ "ModuleRelativePath", "GrabbableActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbableActor_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "GrabbableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GrabbableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrabbableActor_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrabbableActor, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbableActor_Statics::NewProp_MeshComponent_MetaData), Z_Construct_UClass_AGrabbableActor_Statics::NewProp_MeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbableActor_Statics::NewProp_bIsGrabbed_MetaData[] = {
		{ "Category", "GrabbableActor" },
		{ "ModuleRelativePath", "GrabbableActor.h" },
	};
#endif
	void Z_Construct_UClass_AGrabbableActor_Statics::NewProp_bIsGrabbed_SetBit(void* Obj)
	{
		((AGrabbableActor*)Obj)->bIsGrabbed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGrabbableActor_Statics::NewProp_bIsGrabbed = { "bIsGrabbed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGrabbableActor), &Z_Construct_UClass_AGrabbableActor_Statics::NewProp_bIsGrabbed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbableActor_Statics::NewProp_bIsGrabbed_MetaData), Z_Construct_UClass_AGrabbableActor_Statics::NewProp_bIsGrabbed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrabbableActor_Statics::NewProp_HoldingActor_MetaData[] = {
		{ "Category", "GrabbableActor" },
		{ "ModuleRelativePath", "GrabbableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrabbableActor_Statics::NewProp_HoldingActor = { "HoldingActor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGrabbableActor, HoldingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbableActor_Statics::NewProp_HoldingActor_MetaData), Z_Construct_UClass_AGrabbableActor_Statics::NewProp_HoldingActor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrabbableActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrabbableActor_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrabbableActor_Statics::NewProp_bIsGrabbed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrabbableActor_Statics::NewProp_HoldingActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrabbableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrabbableActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrabbableActor_Statics::ClassParams = {
		&AGrabbableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGrabbableActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbableActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGrabbableActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGrabbableActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGrabbableActor()
	{
		if (!Z_Registration_Info_UClass_AGrabbableActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrabbableActor.OuterSingleton, Z_Construct_UClass_AGrabbableActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGrabbableActor.OuterSingleton;
	}
	template<> UNREALENGINECOURSE_API UClass* StaticClass<AGrabbableActor>()
	{
		return AGrabbableActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrabbableActor);
	AGrabbableActor::~AGrabbableActor() {}
	struct Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_GrabbableActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_GrabbableActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGrabbableActor, AGrabbableActor::StaticClass, TEXT("AGrabbableActor"), &Z_Registration_Info_UClass_AGrabbableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrabbableActor), 2939999448U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_GrabbableActor_h_194237014(TEXT("/Script/UnrealEngineCourse"),
		Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_GrabbableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_GrabbableActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
