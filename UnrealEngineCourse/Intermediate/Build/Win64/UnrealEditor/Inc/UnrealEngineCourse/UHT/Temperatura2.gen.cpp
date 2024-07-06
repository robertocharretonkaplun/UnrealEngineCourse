// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngineCourse/Public/Temperatura2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemperatura2() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_ATemperatura2();
	UNREALENGINECOURSE_API UClass* Z_Construct_UClass_ATemperatura2_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngineCourse();
// End Cross Module References
	DEFINE_FUNCTION(ATemperatura2::execCalculateTemperatureDifference)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Temp1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Temp2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=ATemperatura2::CalculateTemperatureDifference(Z_Param_Temp1,Z_Param_Temp2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATemperatura2::execCalculateAverageTemperature)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Temp1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Temp2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=ATemperatura2::CalculateAverageTemperature(Z_Param_Temp1,Z_Param_Temp2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATemperatura2::execConvertKelvinToCelsius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Kelvin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=ATemperatura2::ConvertKelvinToCelsius(Z_Param_Kelvin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATemperatura2::execConvertFahrenheitToCelsius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Fahrenheit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=ATemperatura2::ConvertFahrenheitToCelsius(Z_Param_Fahrenheit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATemperatura2::execGetTemperatureKelvin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTemperatureKelvin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATemperatura2::execGetTemperatureFahrenheit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTemperatureFahrenheit();
		P_NATIVE_END;
	}
	struct Temperatura2_eventCheckTemperature_Parms
	{
		int32 data;
	};
	static FName NAME_ATemperatura2_CheckTemperature = FName(TEXT("CheckTemperature"));
	void ATemperatura2::CheckTemperature(int32 data)
	{
		Temperatura2_eventCheckTemperature_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_ATemperatura2_CheckTemperature),&Parms);
	}
	void ATemperatura2::StaticRegisterNativesATemperatura2()
	{
		UClass* Class = ATemperatura2::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateAverageTemperature", &ATemperatura2::execCalculateAverageTemperature },
			{ "CalculateTemperatureDifference", &ATemperatura2::execCalculateTemperatureDifference },
			{ "ConvertFahrenheitToCelsius", &ATemperatura2::execConvertFahrenheitToCelsius },
			{ "ConvertKelvinToCelsius", &ATemperatura2::execConvertKelvinToCelsius },
			{ "GetTemperatureFahrenheit", &ATemperatura2::execGetTemperatureFahrenheit },
			{ "GetTemperatureKelvin", &ATemperatura2::execGetTemperatureKelvin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATemperatura2_CalculateAverageTemperature_Statics
	{
		struct Temperatura2_eventCalculateAverageTemperature_Parms
		{
			float Temp1;
			float Temp2;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Temp1;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Temp2;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura2_CalculateAverageTemperature_Statics::NewProp_Temp1 = { "Temp1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura2_eventCalculateAverageTemperature_Parms, Temp1), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura2_CalculateAverageTemperature_Statics::NewProp_Temp2 = { "Temp2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura2_eventCalculateAverageTemperature_Parms, Temp2), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura2_CalculateAverageTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura2_eventCalculateAverageTemperature_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura2_CalculateAverageTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura2_CalculateAverageTemperature_Statics::NewProp_Temp1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura2_CalculateAverageTemperature_Statics::NewProp_Temp2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura2_CalculateAverageTemperature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATemperatura2_CalculateAverageTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Temperatura" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to calculate average of two temperatures\n" },
#endif
		{ "ModuleRelativePath", "Public/Temperatura2.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to calculate average of two temperatures" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura2_CalculateAverageTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura2, nullptr, "CalculateAverageTemperature", nullptr, nullptr, Z_Construct_UFunction_ATemperatura2_CalculateAverageTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura2_CalculateAverageTemperature_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperatura2_CalculateAverageTemperature_Statics::Temperatura2_eventCalculateAverageTemperature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura2_CalculateAverageTemperature_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura2_CalculateAverageTemperature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura2_CalculateAverageTemperature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATemperatura2_CalculateAverageTemperature_Statics::Temperatura2_eventCalculateAverageTemperature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATemperatura2_CalculateAverageTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura2_CalculateAverageTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATemperatura2_CalculateTemperatureDifference_Statics
	{
		struct Temperatura2_eventCalculateTemperatureDifference_Parms
		{
			float Temp1;
			float Temp2;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Temp1;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Temp2;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura2_CalculateTemperatureDifference_Statics::NewProp_Temp1 = { "Temp1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura2_eventCalculateTemperatureDifference_Parms, Temp1), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura2_CalculateTemperatureDifference_Statics::NewProp_Temp2 = { "Temp2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura2_eventCalculateTemperatureDifference_Parms, Temp2), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura2_CalculateTemperatureDifference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura2_eventCalculateTemperatureDifference_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura2_CalculateTemperatureDifference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura2_CalculateTemperatureDifference_Statics::NewProp_Temp1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura2_CalculateTemperatureDifference_Statics::NewProp_Temp2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura2_CalculateTemperatureDifference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATemperatura2_CalculateTemperatureDifference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Temperatura" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to calculate the difference between two temperatures\n" },
#endif
		{ "ModuleRelativePath", "Public/Temperatura2.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to calculate the difference between two temperatures" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura2_CalculateTemperatureDifference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura2, nullptr, "CalculateTemperatureDifference", nullptr, nullptr, Z_Construct_UFunction_ATemperatura2_CalculateTemperatureDifference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura2_CalculateTemperatureDifference_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperatura2_CalculateTemperatureDifference_Statics::Temperatura2_eventCalculateTemperatureDifference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura2_CalculateTemperatureDifference_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura2_CalculateTemperatureDifference_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura2_CalculateTemperatureDifference_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATemperatura2_CalculateTemperatureDifference_Statics::Temperatura2_eventCalculateTemperatureDifference_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATemperatura2_CalculateTemperatureDifference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura2_CalculateTemperatureDifference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATemperatura2_CheckTemperature_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATemperatura2_CheckTemperature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura2_eventCheckTemperature_Parms, data), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura2_CheckTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura2_CheckTemperature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATemperatura2_CheckTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Temperatura" },
		{ "ModuleRelativePath", "Public/Temperatura2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura2_CheckTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura2, nullptr, "CheckTemperature", nullptr, nullptr, Z_Construct_UFunction_ATemperatura2_CheckTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura2_CheckTemperature_Statics::PropPointers), sizeof(Temperatura2_eventCheckTemperature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura2_CheckTemperature_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura2_CheckTemperature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura2_CheckTemperature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Temperatura2_eventCheckTemperature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATemperatura2_CheckTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura2_CheckTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATemperatura2_ConvertFahrenheitToCelsius_Statics
	{
		struct Temperatura2_eventConvertFahrenheitToCelsius_Parms
		{
			float Fahrenheit;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Fahrenheit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura2_ConvertFahrenheitToCelsius_Statics::NewProp_Fahrenheit = { "Fahrenheit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura2_eventConvertFahrenheitToCelsius_Parms, Fahrenheit), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura2_ConvertFahrenheitToCelsius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura2_eventConvertFahrenheitToCelsius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura2_ConvertFahrenheitToCelsius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura2_ConvertFahrenheitToCelsius_Statics::NewProp_Fahrenheit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura2_ConvertFahrenheitToCelsius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATemperatura2_ConvertFahrenheitToCelsius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Temperatura" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to convert Fahrenheit to Celsius\n" },
#endif
		{ "ModuleRelativePath", "Public/Temperatura2.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to convert Fahrenheit to Celsius" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura2_ConvertFahrenheitToCelsius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura2, nullptr, "ConvertFahrenheitToCelsius", nullptr, nullptr, Z_Construct_UFunction_ATemperatura2_ConvertFahrenheitToCelsius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura2_ConvertFahrenheitToCelsius_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperatura2_ConvertFahrenheitToCelsius_Statics::Temperatura2_eventConvertFahrenheitToCelsius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura2_ConvertFahrenheitToCelsius_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura2_ConvertFahrenheitToCelsius_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura2_ConvertFahrenheitToCelsius_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATemperatura2_ConvertFahrenheitToCelsius_Statics::Temperatura2_eventConvertFahrenheitToCelsius_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATemperatura2_ConvertFahrenheitToCelsius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura2_ConvertFahrenheitToCelsius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATemperatura2_ConvertKelvinToCelsius_Statics
	{
		struct Temperatura2_eventConvertKelvinToCelsius_Parms
		{
			float Kelvin;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Kelvin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura2_ConvertKelvinToCelsius_Statics::NewProp_Kelvin = { "Kelvin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura2_eventConvertKelvinToCelsius_Parms, Kelvin), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura2_ConvertKelvinToCelsius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura2_eventConvertKelvinToCelsius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura2_ConvertKelvinToCelsius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura2_ConvertKelvinToCelsius_Statics::NewProp_Kelvin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura2_ConvertKelvinToCelsius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATemperatura2_ConvertKelvinToCelsius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Temperatura" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to convert Kelvin to Celsius\n" },
#endif
		{ "ModuleRelativePath", "Public/Temperatura2.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to convert Kelvin to Celsius" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura2_ConvertKelvinToCelsius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura2, nullptr, "ConvertKelvinToCelsius", nullptr, nullptr, Z_Construct_UFunction_ATemperatura2_ConvertKelvinToCelsius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura2_ConvertKelvinToCelsius_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperatura2_ConvertKelvinToCelsius_Statics::Temperatura2_eventConvertKelvinToCelsius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura2_ConvertKelvinToCelsius_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura2_ConvertKelvinToCelsius_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura2_ConvertKelvinToCelsius_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATemperatura2_ConvertKelvinToCelsius_Statics::Temperatura2_eventConvertKelvinToCelsius_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATemperatura2_ConvertKelvinToCelsius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura2_ConvertKelvinToCelsius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATemperatura2_GetTemperatureFahrenheit_Statics
	{
		struct Temperatura2_eventGetTemperatureFahrenheit_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura2_GetTemperatureFahrenheit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura2_eventGetTemperatureFahrenheit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura2_GetTemperatureFahrenheit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura2_GetTemperatureFahrenheit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATemperatura2_GetTemperatureFahrenheit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Temperatura" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to calculate the temperature\n" },
#endif
		{ "ModuleRelativePath", "Public/Temperatura2.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to calculate the temperature" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura2_GetTemperatureFahrenheit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura2, nullptr, "GetTemperatureFahrenheit", nullptr, nullptr, Z_Construct_UFunction_ATemperatura2_GetTemperatureFahrenheit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura2_GetTemperatureFahrenheit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperatura2_GetTemperatureFahrenheit_Statics::Temperatura2_eventGetTemperatureFahrenheit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura2_GetTemperatureFahrenheit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura2_GetTemperatureFahrenheit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura2_GetTemperatureFahrenheit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATemperatura2_GetTemperatureFahrenheit_Statics::Temperatura2_eventGetTemperatureFahrenheit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATemperatura2_GetTemperatureFahrenheit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura2_GetTemperatureFahrenheit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATemperatura2_GetTemperatureKelvin_Statics
	{
		struct Temperatura2_eventGetTemperatureKelvin_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura2_GetTemperatureKelvin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura2_eventGetTemperatureKelvin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura2_GetTemperatureKelvin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura2_GetTemperatureKelvin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATemperatura2_GetTemperatureKelvin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Temperatura" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to calculate temperature in Kelvin\n" },
#endif
		{ "ModuleRelativePath", "Public/Temperatura2.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to calculate temperature in Kelvin" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura2_GetTemperatureKelvin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura2, nullptr, "GetTemperatureKelvin", nullptr, nullptr, Z_Construct_UFunction_ATemperatura2_GetTemperatureKelvin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura2_GetTemperatureKelvin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperatura2_GetTemperatureKelvin_Statics::Temperatura2_eventGetTemperatureKelvin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura2_GetTemperatureKelvin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura2_GetTemperatureKelvin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura2_GetTemperatureKelvin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATemperatura2_GetTemperatureKelvin_Statics::Temperatura2_eventGetTemperatureKelvin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATemperatura2_GetTemperatureKelvin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura2_GetTemperatureKelvin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATemperatura2);
	UClass* Z_Construct_UClass_ATemperatura2_NoRegister()
	{
		return ATemperatura2::StaticClass();
	}
	struct Z_Construct_UClass_ATemperatura2_Statics
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
	UObject* (*const Z_Construct_UClass_ATemperatura2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngineCourse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATemperatura2_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATemperatura2_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATemperatura2_CalculateAverageTemperature, "CalculateAverageTemperature" }, // 445291603
		{ &Z_Construct_UFunction_ATemperatura2_CalculateTemperatureDifference, "CalculateTemperatureDifference" }, // 2416124989
		{ &Z_Construct_UFunction_ATemperatura2_CheckTemperature, "CheckTemperature" }, // 3288609632
		{ &Z_Construct_UFunction_ATemperatura2_ConvertFahrenheitToCelsius, "ConvertFahrenheitToCelsius" }, // 2060038200
		{ &Z_Construct_UFunction_ATemperatura2_ConvertKelvinToCelsius, "ConvertKelvinToCelsius" }, // 3248829294
		{ &Z_Construct_UFunction_ATemperatura2_GetTemperatureFahrenheit, "GetTemperatureFahrenheit" }, // 711616302
		{ &Z_Construct_UFunction_ATemperatura2_GetTemperatureKelvin, "GetTemperatureKelvin" }, // 153197370
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATemperatura2_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATemperatura2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Temperatura2.h" },
		{ "ModuleRelativePath", "Public/Temperatura2.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATemperatura2_Statics::NewProp_TemperatureCelsius_MetaData[] = {
		{ "Category", "Temperatura" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Temperatura Variable\n" },
#endif
		{ "ModuleRelativePath", "Public/Temperatura2.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Temperatura Variable" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATemperatura2_Statics::NewProp_TemperatureCelsius = { "TemperatureCelsius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATemperatura2, TemperatureCelsius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATemperatura2_Statics::NewProp_TemperatureCelsius_MetaData), Z_Construct_UClass_ATemperatura2_Statics::NewProp_TemperatureCelsius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATemperatura2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemperatura2_Statics::NewProp_TemperatureCelsius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATemperatura2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATemperatura2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATemperatura2_Statics::ClassParams = {
		&ATemperatura2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATemperatura2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATemperatura2_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATemperatura2_Statics::Class_MetaDataParams), Z_Construct_UClass_ATemperatura2_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATemperatura2_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATemperatura2()
	{
		if (!Z_Registration_Info_UClass_ATemperatura2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATemperatura2.OuterSingleton, Z_Construct_UClass_ATemperatura2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATemperatura2.OuterSingleton;
	}
	template<> UNREALENGINECOURSE_API UClass* StaticClass<ATemperatura2>()
	{
		return ATemperatura2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATemperatura2);
	ATemperatura2::~ATemperatura2() {}
	struct Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_Temperatura2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_Temperatura2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATemperatura2, ATemperatura2::StaticClass, TEXT("ATemperatura2"), &Z_Registration_Info_UClass_ATemperatura2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATemperatura2), 174687056U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_Temperatura2_h_2013622535(TEXT("/Script/UnrealEngineCourse"),
		Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_Temperatura2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_Temperatura2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
