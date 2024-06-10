// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineCourse/CustomEventExample.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomEventExample() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_ACustomEventExample();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_ACustomEventExample_NoRegister();
	UNREALENGINECOURSE_API UFunction* Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEvent__DelegateSignature();
	UNREALENGINECOURSE_API UFunction* Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEventWithParam__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnrealEngineCourse();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declarar un evento din\xef\xbf\xbdmico multicast sin par\xef\xbf\xbdmetros\n" },
#endif
		{ "ModuleRelativePath", "CustomEventExample.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declarar un evento din\xef\xbf\xbdmico multicast sin par\xef\xbf\xbdmetros" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnrealEngineCourse, nullptr, "OnCustomEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCustomEvent_DelegateWrapper(const FMulticastScriptDelegate& OnCustomEvent)
{
	OnCustomEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEventWithParam__DelegateSignature_Statics
	{
		struct _Script_UnrealEngineCourse_eventOnCustomEventWithParam_Parms
		{
			int32 CustomValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CustomValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEventWithParam__DelegateSignature_Statics::NewProp_CustomValue = { "CustomValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UnrealEngineCourse_eventOnCustomEventWithParam_Parms, CustomValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEventWithParam__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEventWithParam__DelegateSignature_Statics::NewProp_CustomValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEventWithParam__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declarar un evento din\xef\xbf\xbdmico multicast con un par\xef\xbf\xbdmetro\n" },
#endif
		{ "ModuleRelativePath", "CustomEventExample.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declarar un evento din\xef\xbf\xbdmico multicast con un par\xef\xbf\xbdmetro" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEventWithParam__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UnrealEngineCourse, nullptr, "OnCustomEventWithParam__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEventWithParam__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEventWithParam__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEventWithParam__DelegateSignature_Statics::_Script_UnrealEngineCourse_eventOnCustomEventWithParam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEventWithParam__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEventWithParam__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEventWithParam__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEventWithParam__DelegateSignature_Statics::_Script_UnrealEngineCourse_eventOnCustomEventWithParam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEventWithParam__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEventWithParam__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCustomEventWithParam_DelegateWrapper(const FMulticastScriptDelegate& OnCustomEventWithParam, int32 CustomValue)
{
	struct _Script_UnrealEngineCourse_eventOnCustomEventWithParam_Parms
	{
		int32 CustomValue;
	};
	_Script_UnrealEngineCourse_eventOnCustomEventWithParam_Parms Parms;
	Parms.CustomValue=CustomValue;
	OnCustomEventWithParam.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ACustomEventExample::execTriggerCustomEventWithParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CustomValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerCustomEventWithParam(Z_Param_CustomValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomEventExample::execTriggerCustomEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerCustomEvent();
		P_NATIVE_END;
	}
	void ACustomEventExample::StaticRegisterNativesACustomEventExample()
	{
		UClass* Class = ACustomEventExample::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriggerCustomEvent", &ACustomEventExample::execTriggerCustomEvent },
			{ "TriggerCustomEventWithParam", &ACustomEventExample::execTriggerCustomEventWithParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACustomEventExample_TriggerCustomEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomEventExample_TriggerCustomEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// M\xef\xbf\xbdtodo para disparar el evento sin par\xef\xbf\xbdmetros\n" },
#endif
		{ "ModuleRelativePath", "CustomEventExample.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "M\xef\xbf\xbdtodo para disparar el evento sin par\xef\xbf\xbdmetros" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomEventExample_TriggerCustomEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomEventExample, nullptr, "TriggerCustomEvent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomEventExample_TriggerCustomEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACustomEventExample_TriggerCustomEvent_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACustomEventExample_TriggerCustomEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACustomEventExample_TriggerCustomEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomEventExample_TriggerCustomEventWithParam_Statics
	{
		struct CustomEventExample_eventTriggerCustomEventWithParam_Parms
		{
			int32 CustomValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CustomValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACustomEventExample_TriggerCustomEventWithParam_Statics::NewProp_CustomValue = { "CustomValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomEventExample_eventTriggerCustomEventWithParam_Parms, CustomValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomEventExample_TriggerCustomEventWithParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomEventExample_TriggerCustomEventWithParam_Statics::NewProp_CustomValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomEventExample_TriggerCustomEventWithParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// M\xef\xbf\xbdtodo para disparar el evento con un par\xef\xbf\xbdmetro\n" },
#endif
		{ "ModuleRelativePath", "CustomEventExample.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "M\xef\xbf\xbdtodo para disparar el evento con un par\xef\xbf\xbdmetro" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomEventExample_TriggerCustomEventWithParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomEventExample, nullptr, "TriggerCustomEventWithParam", nullptr, nullptr, Z_Construct_UFunction_ACustomEventExample_TriggerCustomEventWithParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomEventExample_TriggerCustomEventWithParam_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACustomEventExample_TriggerCustomEventWithParam_Statics::CustomEventExample_eventTriggerCustomEventWithParam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomEventExample_TriggerCustomEventWithParam_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACustomEventExample_TriggerCustomEventWithParam_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomEventExample_TriggerCustomEventWithParam_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACustomEventExample_TriggerCustomEventWithParam_Statics::CustomEventExample_eventTriggerCustomEventWithParam_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACustomEventExample_TriggerCustomEventWithParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACustomEventExample_TriggerCustomEventWithParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACustomEventExample);
	UClass* Z_Construct_UClass_ACustomEventExample_NoRegister()
	{
		return ACustomEventExample::StaticClass();
	}
	struct Z_Construct_UClass_ACustomEventExample_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCustomEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCustomEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCustomEventWithParam_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCustomEventWithParam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomEventExample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineCourse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomEventExample_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACustomEventExample_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACustomEventExample_TriggerCustomEvent, "TriggerCustomEvent" }, // 1326834939
		{ &Z_Construct_UFunction_ACustomEventExample_TriggerCustomEventWithParam, "TriggerCustomEventWithParam" }, // 4085802100
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomEventExample_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomEventExample_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomEventExample.h" },
		{ "ModuleRelativePath", "CustomEventExample.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomEventExample_Statics::NewProp_OnCustomEvent_MetaData[] = {
		{ "Category", "CustomEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declarar el evento como una variable p\xef\xbf\xbd""blica\n" },
#endif
		{ "ModuleRelativePath", "CustomEventExample.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declarar el evento como una variable p\xef\xbf\xbd""blica" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACustomEventExample_Statics::NewProp_OnCustomEvent = { "OnCustomEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomEventExample, OnCustomEvent), Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomEventExample_Statics::NewProp_OnCustomEvent_MetaData), Z_Construct_UClass_ACustomEventExample_Statics::NewProp_OnCustomEvent_MetaData) }; // 3280420829
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomEventExample_Statics::NewProp_OnCustomEventWithParam_MetaData[] = {
		{ "Category", "CustomEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declarar el evento con un par\xef\xbf\xbdmetro\n" },
#endif
		{ "ModuleRelativePath", "CustomEventExample.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declarar el evento con un par\xef\xbf\xbdmetro" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACustomEventExample_Statics::NewProp_OnCustomEventWithParam = { "OnCustomEventWithParam", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomEventExample, OnCustomEventWithParam), Z_Construct_UDelegateFunction_UnrealEngineCourse_OnCustomEventWithParam__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomEventExample_Statics::NewProp_OnCustomEventWithParam_MetaData), Z_Construct_UClass_ACustomEventExample_Statics::NewProp_OnCustomEventWithParam_MetaData) }; // 1539862039
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomEventExample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomEventExample_Statics::NewProp_OnCustomEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomEventExample_Statics::NewProp_OnCustomEventWithParam,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomEventExample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomEventExample>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACustomEventExample_Statics::ClassParams = {
		&ACustomEventExample::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACustomEventExample_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACustomEventExample_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomEventExample_Statics::Class_MetaDataParams), Z_Construct_UClass_ACustomEventExample_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACustomEventExample_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACustomEventExample()
	{
		if (!Z_Registration_Info_UClass_ACustomEventExample.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACustomEventExample.OuterSingleton, Z_Construct_UClass_ACustomEventExample_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACustomEventExample.OuterSingleton;
	}
	template<> UNREALENGINECOURSE_API UClass* StaticClass<ACustomEventExample>()
	{
		return ACustomEventExample::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomEventExample);
	ACustomEventExample::~ACustomEventExample() {}
	struct Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_CustomEventExample_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_CustomEventExample_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACustomEventExample, ACustomEventExample::StaticClass, TEXT("ACustomEventExample"), &Z_Registration_Info_UClass_ACustomEventExample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACustomEventExample), 4119952171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_CustomEventExample_h_1777362598(TEXT("/Script/UnrealEngineCourse"),
		Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_CustomEventExample_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_CustomEventExample_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
