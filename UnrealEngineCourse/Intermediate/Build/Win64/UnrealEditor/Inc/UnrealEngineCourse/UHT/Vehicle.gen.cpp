// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineCourse/Vehicle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicle() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_AVehicle();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_AVehicle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngineCourse();
// End Cross Module References
	DEFINE_FUNCTION(AVehicle::execMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move();
		P_NATIVE_END;
	}
	void AVehicle::StaticRegisterNativesAVehicle()
	{
		UClass* Class = AVehicle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Move", &AVehicle::execMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVehicle_Move_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicle_Move_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Move Vehicle\n" },
#endif
		{ "ModuleRelativePath", "Vehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Vehicle" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicle_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicle, nullptr, "Move", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicle_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicle_Move_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AVehicle_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicle_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVehicle);
	UClass* Z_Construct_UClass_AVehicle_NoRegister()
	{
		return AVehicle::StaticClass();
	}
	struct Z_Construct_UClass_AVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineCourse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AVehicle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVehicle_Move, "Move" }, // 886855679
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Vehicle.h" },
		{ "ModuleRelativePath", "Vehicle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicle_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vehicle Speed\n" },
#endif
		{ "ModuleRelativePath", "Vehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Speed" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicle_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicle, speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Statics::NewProp_speed_MetaData), Z_Construct_UClass_AVehicle_Statics::NewProp_speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicle_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vehicle Color\n" },
#endif
		{ "ModuleRelativePath", "Vehicle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Color" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVehicle_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicle, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Statics::NewProp_Color_MetaData), Z_Construct_UClass_AVehicle_Statics::NewProp_Color_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVehicle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicle_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicle_Statics::NewProp_Color,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVehicle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVehicle_Statics::ClassParams = {
		&AVehicle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVehicle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Statics::Class_MetaDataParams), Z_Construct_UClass_AVehicle_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVehicle_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AVehicle()
	{
		if (!Z_Registration_Info_UClass_AVehicle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVehicle.OuterSingleton, Z_Construct_UClass_AVehicle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVehicle.OuterSingleton;
	}
	template<> UNREALENGINECOURSE_API UClass* StaticClass<AVehicle>()
	{
		return AVehicle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVehicle);
	AVehicle::~AVehicle() {}
	struct Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Vehicle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Vehicle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVehicle, AVehicle::StaticClass, TEXT("AVehicle"), &Z_Registration_Info_UClass_AVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVehicle), 3125811753U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Vehicle_h_3732005456(TEXT("/Script/UnrealEngineCourse"),
		Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Vehicle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Vehicle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
