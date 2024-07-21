// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineCourse/Public/StructorActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructorActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_AStructorActor();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_AStructorActor_NoRegister();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_AUnrealEngineCourseCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngineCourse();
// End Cross Module References
	void AStructorActor::StaticRegisterNativesAStructorActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStructorActor);
	UClass* Z_Construct_UClass_AStructorActor_NoRegister()
	{
		return AStructorActor::StaticClass();
	}
	struct Z_Construct_UClass_AStructorActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StringIntMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringIntMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringIntMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StringIntMap;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_StringSet;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharactersArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharactersArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CharactersArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStructorActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineCourse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStructorActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStructorActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StructorActor.h" },
		{ "ModuleRelativePath", "Public/StructorActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStructorActor_Statics::NewProp_IntArray_Inner = { "IntArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStructorActor_Statics::NewProp_IntArray_MetaData[] = {
		{ "Category", "STRUCTURES" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TArray example\n" },
#endif
		{ "ModuleRelativePath", "Public/StructorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TArray example" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStructorActor_Statics::NewProp_IntArray = { "IntArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStructorActor, IntArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStructorActor_Statics::NewProp_IntArray_MetaData), Z_Construct_UClass_AStructorActor_Statics::NewProp_IntArray_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStructorActor_Statics::NewProp_StringIntMap_ValueProp = { "StringIntMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AStructorActor_Statics::NewProp_StringIntMap_Key_KeyProp = { "StringIntMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStructorActor_Statics::NewProp_StringIntMap_MetaData[] = {
		{ "Category", "STRUCTURES" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TMap example\n" },
#endif
		{ "ModuleRelativePath", "Public/StructorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TMap example" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AStructorActor_Statics::NewProp_StringIntMap = { "StringIntMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStructorActor, StringIntMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStructorActor_Statics::NewProp_StringIntMap_MetaData), Z_Construct_UClass_AStructorActor_Statics::NewProp_StringIntMap_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AStructorActor_Statics::NewProp_StringSet_ElementProp = { "StringSet", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStructorActor_Statics::NewProp_StringSet_MetaData[] = {
		{ "Category", "STRUCTURES" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TSet example\n" },
#endif
		{ "ModuleRelativePath", "Public/StructorActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TSet example" },
#endif
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AStructorActor_Statics::NewProp_StringSet = { "StringSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStructorActor, StringSet), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStructorActor_Statics::NewProp_StringSet_MetaData), Z_Construct_UClass_AStructorActor_Statics::NewProp_StringSet_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStructorActor_Statics::NewProp_CharactersArray_Inner = { "CharactersArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AUnrealEngineCourseCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStructorActor_Statics::NewProp_CharactersArray_MetaData[] = {
		{ "Category", "STRUCTURES" },
		{ "ModuleRelativePath", "Public/StructorActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStructorActor_Statics::NewProp_CharactersArray = { "CharactersArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStructorActor, CharactersArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStructorActor_Statics::NewProp_CharactersArray_MetaData), Z_Construct_UClass_AStructorActor_Statics::NewProp_CharactersArray_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStructorActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStructorActor_Statics::NewProp_IntArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStructorActor_Statics::NewProp_IntArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStructorActor_Statics::NewProp_StringIntMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStructorActor_Statics::NewProp_StringIntMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStructorActor_Statics::NewProp_StringIntMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStructorActor_Statics::NewProp_StringSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStructorActor_Statics::NewProp_StringSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStructorActor_Statics::NewProp_CharactersArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStructorActor_Statics::NewProp_CharactersArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStructorActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStructorActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStructorActor_Statics::ClassParams = {
		&AStructorActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStructorActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AStructorActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStructorActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AStructorActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStructorActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AStructorActor()
	{
		if (!Z_Registration_Info_UClass_AStructorActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStructorActor.OuterSingleton, Z_Construct_UClass_AStructorActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStructorActor.OuterSingleton;
	}
	template<> UNREALENGINECOURSE_API UClass* StaticClass<AStructorActor>()
	{
		return AStructorActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStructorActor);
	AStructorActor::~AStructorActor() {}
	struct Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_StructorActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_StructorActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStructorActor, AStructorActor::StaticClass, TEXT("AStructorActor"), &Z_Registration_Info_UClass_AStructorActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStructorActor), 3569712231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_StructorActor_h_122158293(TEXT("/Script/UnrealEngineCourse"),
		Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_StructorActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_StructorActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
