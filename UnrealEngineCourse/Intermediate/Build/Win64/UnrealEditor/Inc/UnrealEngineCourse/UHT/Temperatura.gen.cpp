// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineCourse/Public/Temperatura.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemperatura() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_ATemperatura();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_ATemperatura_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngineCourse();
// End Cross Module References
	DEFINE_FUNCTION(ATemperatura::execGetTemperatureFahrenheit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTemperatureFahrenheit();
		P_NATIVE_END;
	}
	void ATemperatura::StaticRegisterNativesATemperatura()
	{
		UClass* Class = ATemperatura::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTemperatureFahrenheit", &ATemperatura::execGetTemperatureFahrenheit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics
	{
		struct Temperatura_eventGetTemperatureFahrenheit_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventGetTemperatureFahrenheit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Temperature" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to calculate temperature\n" },
#endif
		{ "ModuleRelativePath", "Public/Temperatura.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to calculate temperature" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura, nullptr, "GetTemperatureFahrenheit", nullptr, nullptr, Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::Temperatura_eventGetTemperatureFahrenheit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::Temperatura_eventGetTemperatureFahrenheit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATemperatura);
	UClass* Z_Construct_UClass_ATemperatura_NoRegister()
	{
		return ATemperatura::StaticClass();
	}
	struct Z_Construct_UClass_ATemperatura_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureCelsius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureCelsius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATemperatura_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineCourse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATemperatura_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATemperatura_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit, "GetTemperatureFahrenheit" }, // 665246730
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATemperatura_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATemperatura_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Temperatura.h" },
		{ "ModuleRelativePath", "Public/Temperatura.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATemperatura_Statics::NewProp_TemperatureCelsius_MetaData[] = {
		{ "Category", "Temperature" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Temperature variable\n" },
#endif
		{ "ModuleRelativePath", "Public/Temperatura.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Temperature variable" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATemperatura_Statics::NewProp_TemperatureCelsius = { "TemperatureCelsius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATemperatura, TemperatureCelsius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATemperatura_Statics::NewProp_TemperatureCelsius_MetaData), Z_Construct_UClass_ATemperatura_Statics::NewProp_TemperatureCelsius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATemperatura_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemperatura_Statics::NewProp_TemperatureCelsius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATemperatura_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATemperatura>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATemperatura_Statics::ClassParams = {
		&ATemperatura::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATemperatura_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATemperatura_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATemperatura_Statics::Class_MetaDataParams), Z_Construct_UClass_ATemperatura_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATemperatura_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATemperatura()
	{
		if (!Z_Registration_Info_UClass_ATemperatura.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATemperatura.OuterSingleton, Z_Construct_UClass_ATemperatura_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATemperatura.OuterSingleton;
	}
	template<> UNREALENGINECOURSE_API UClass* StaticClass<ATemperatura>()
	{
		return ATemperatura::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATemperatura);
	ATemperatura::~ATemperatura() {}
	struct Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_Temperatura_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_Temperatura_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATemperatura, ATemperatura::StaticClass, TEXT("ATemperatura"), &Z_Registration_Info_UClass_ATemperatura, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATemperatura), 2130659621U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_Temperatura_h_2650828108(TEXT("/Script/UnrealEngineCourse"),
		Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_Temperatura_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_Temperatura_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
