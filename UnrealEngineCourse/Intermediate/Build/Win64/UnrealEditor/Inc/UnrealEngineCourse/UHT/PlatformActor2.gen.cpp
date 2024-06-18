// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineCourse/Public/PlatformActor2.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformActor2() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_APlatformActor2();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_APlatformActor2_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngineCourse();
// End Cross Module References
	DEFINE_FUNCTION(APlatformActor2::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlatformActor2::execChangeMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_newMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMaterial(Z_Param_newMaterial);
		P_NATIVE_END;
	}
	void APlatformActor2::StaticRegisterNativesAPlatformActor2()
	{
		UClass* Class = APlatformActor2::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMaterial", &APlatformActor2::execChangeMaterial },
			{ "OnOverlapBegin", &APlatformActor2::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlatformActor2_ChangeMaterial_Statics
	{
		struct PlatformActor2_eventChangeMaterial_Parms
		{
			UMaterialInterface* newMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlatformActor2_ChangeMaterial_Statics::NewProp_newMaterial = { "newMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlatformActor2_eventChangeMaterial_Parms, newMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlatformActor2_ChangeMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformActor2_ChangeMaterial_Statics::NewProp_newMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformActor2_ChangeMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "Public/PlatformActor2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformActor2_ChangeMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformActor2, nullptr, "ChangeMaterial", nullptr, nullptr, Z_Construct_UFunction_APlatformActor2_ChangeMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformActor2_ChangeMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlatformActor2_ChangeMaterial_Statics::PlatformActor2_eventChangeMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformActor2_ChangeMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlatformActor2_ChangeMaterial_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformActor2_ChangeMaterial_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlatformActor2_ChangeMaterial_Statics::PlatformActor2_eventChangeMaterial_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlatformActor2_ChangeMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlatformActor2_ChangeMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics
	{
		struct PlatformActor2_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlatformActor2_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlatformActor2_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlatformActor2_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlatformActor2_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((PlatformActor2_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlatformActor2_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlatformActor2_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlatformActor2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlatformActor2, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::PlatformActor2_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::PlatformActor2_eventOnOverlapBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APlatformActor2_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlatformActor2_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatformActor2);
	UClass* Z_Construct_UClass_APlatformActor2_NoRegister()
	{
		return APlatformActor2::StaticClass();
	}
	struct Z_Construct_UClass_APlatformActor2_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementAmplitud_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementAmplitud;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformActor2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineCourse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor2_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APlatformActor2_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlatformActor2_ChangeMaterial, "ChangeMaterial" }, // 3264014049
		{ &Z_Construct_UFunction_APlatformActor2_OnOverlapBegin, "OnOverlapBegin" }, // 3255126733
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor2_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformActor2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlatformActor2.h" },
		{ "ModuleRelativePath", "Public/PlatformActor2.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformActor2_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Platform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlatformActor2.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformActor2_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformActor2, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor2_Statics::NewProp_MeshComponent_MetaData), Z_Construct_UClass_APlatformActor2_Statics::NewProp_MeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformActor2_Statics::NewProp_DefaultMaterial_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "Public/PlatformActor2.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformActor2_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformActor2, DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor2_Statics::NewProp_DefaultMaterial_MetaData), Z_Construct_UClass_APlatformActor2_Statics::NewProp_DefaultMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformActor2_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "PlatformActor2" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlatformActor2.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformActor2_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformActor2, CollisionComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor2_Statics::NewProp_CollisionComponent_MetaData), Z_Construct_UClass_APlatformActor2_Statics::NewProp_CollisionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformActor2_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "Public/PlatformActor2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlatformActor2_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformActor2, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor2_Statics::NewProp_MovementSpeed_MetaData), Z_Construct_UClass_APlatformActor2_Statics::NewProp_MovementSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformActor2_Statics::NewProp_MovementAmplitud_MetaData[] = {
		{ "Category", "Platform" },
		{ "ModuleRelativePath", "Public/PlatformActor2.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlatformActor2_Statics::NewProp_MovementAmplitud = { "MovementAmplitud", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformActor2, MovementAmplitud), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor2_Statics::NewProp_MovementAmplitud_MetaData), Z_Construct_UClass_APlatformActor2_Statics::NewProp_MovementAmplitud_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformActor2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformActor2_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformActor2_Statics::NewProp_DefaultMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformActor2_Statics::NewProp_CollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformActor2_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformActor2_Statics::NewProp_MovementAmplitud,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformActor2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformActor2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformActor2_Statics::ClassParams = {
		&APlatformActor2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlatformActor2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor2_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor2_Statics::Class_MetaDataParams), Z_Construct_UClass_APlatformActor2_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformActor2_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlatformActor2()
	{
		if (!Z_Registration_Info_UClass_APlatformActor2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformActor2.OuterSingleton, Z_Construct_UClass_APlatformActor2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlatformActor2.OuterSingleton;
	}
	template<> UNREALENGINECOURSE_API UClass* StaticClass<APlatformActor2>()
	{
		return APlatformActor2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformActor2);
	APlatformActor2::~APlatformActor2() {}
	struct Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_PlatformActor2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_PlatformActor2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlatformActor2, APlatformActor2::StaticClass, TEXT("APlatformActor2"), &Z_Registration_Info_UClass_APlatformActor2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformActor2), 2447775719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_PlatformActor2_h_4230223408(TEXT("/Script/UnrealEngineCourse"),
		Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_PlatformActor2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_PlatformActor2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
