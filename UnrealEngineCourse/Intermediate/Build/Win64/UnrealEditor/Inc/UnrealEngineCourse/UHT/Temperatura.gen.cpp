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
	DEFINE_FUNCTION(ATemperatura::execCalculateTemperatureDifference)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Temp1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Temp2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=ATemperatura::CalculateTemperatureDifference(Z_Param_Temp1,Z_Param_Temp2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATemperatura::execCalculateAverageTemperature)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Temp1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Temp2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=ATemperatura::CalculateAverageTemperature(Z_Param_Temp1,Z_Param_Temp2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATemperatura::execConvertKelvinToCelsius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Kelvin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=ATemperatura::ConvertKelvinToCelsius(Z_Param_Kelvin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATemperatura::execConvertFahrenheitToCelsius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Fahrenheit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=ATemperatura::ConvertFahrenheitToCelsius(Z_Param_Fahrenheit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATemperatura::execGetTemperatureKelvin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTemperatureKelvin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATemperatura::execGetTemperatureFahrenheit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTemperatureFahrenheit();
		P_NATIVE_END;
	}
	static FName NAME_ATemperatura_CheckTemperature = FName(TEXT("CheckTemperature"));
	void ATemperatura::CheckTemperature()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATemperatura_CheckTemperature),NULL);
	}
	void ATemperatura::StaticRegisterNativesATemperatura()
	{
		UClass* Class = ATemperatura::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateAverageTemperature", &ATemperatura::execCalculateAverageTemperature },
			{ "CalculateTemperatureDifference", &ATemperatura::execCalculateTemperatureDifference },
			{ "ConvertFahrenheitToCelsius", &ATemperatura::execConvertFahrenheitToCelsius },
			{ "ConvertKelvinToCelsius", &ATemperatura::execConvertKelvinToCelsius },
			{ "GetTemperatureFahrenheit", &ATemperatura::execGetTemperatureFahrenheit },
			{ "GetTemperatureKelvin", &ATemperatura::execGetTemperatureKelvin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATemperatura_CalculateAverageTemperature_Statics
	{
		struct Temperatura_eventCalculateAverageTemperature_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_CalculateAverageTemperature_Statics::NewProp_Temp1 = { "Temp1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventCalculateAverageTemperature_Parms, Temp1), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_CalculateAverageTemperature_Statics::NewProp_Temp2 = { "Temp2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventCalculateAverageTemperature_Parms, Temp2), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_CalculateAverageTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventCalculateAverageTemperature_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura_CalculateAverageTemperature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_CalculateAverageTemperature_Statics::NewProp_Temp1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_CalculateAverageTemperature_Statics::NewProp_Temp2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_CalculateAverageTemperature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATemperatura_CalculateAverageTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Temperature" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to calculate average of two temperatures\n" },
#endif
		{ "ModuleRelativePath", "Public/Temperatura.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to calculate average of two temperatures" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura_CalculateAverageTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura, nullptr, "CalculateAverageTemperature", nullptr, nullptr, Z_Construct_UFunction_ATemperatura_CalculateAverageTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_CalculateAverageTemperature_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperatura_CalculateAverageTemperature_Statics::Temperatura_eventCalculateAverageTemperature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_CalculateAverageTemperature_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura_CalculateAverageTemperature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_CalculateAverageTemperature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATemperatura_CalculateAverageTemperature_Statics::Temperatura_eventCalculateAverageTemperature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATemperatura_CalculateAverageTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura_CalculateAverageTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics
	{
		struct Temperatura_eventCalculateTemperatureDifference_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::NewProp_Temp1 = { "Temp1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventCalculateTemperatureDifference_Parms, Temp1), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::NewProp_Temp2 = { "Temp2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventCalculateTemperatureDifference_Parms, Temp2), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventCalculateTemperatureDifference_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::NewProp_Temp1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::NewProp_Temp2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Temperature" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to calculate the difference between two temperatures\n" },
#endif
		{ "ModuleRelativePath", "Public/Temperatura.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to calculate the difference between two temperatures" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura, nullptr, "CalculateTemperatureDifference", nullptr, nullptr, Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::Temperatura_eventCalculateTemperatureDifference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::Temperatura_eventCalculateTemperatureDifference_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATemperatura_CheckTemperature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATemperatura_CheckTemperature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Temperature" },
		{ "ModuleRelativePath", "Public/Temperatura.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura_CheckTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura, nullptr, "CheckTemperature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_CheckTemperature_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura_CheckTemperature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATemperatura_CheckTemperature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura_CheckTemperature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATemperatura_ConvertFahrenheitToCelsius_Statics
	{
		struct Temperatura_eventConvertFahrenheitToCelsius_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_ConvertFahrenheitToCelsius_Statics::NewProp_Fahrenheit = { "Fahrenheit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventConvertFahrenheitToCelsius_Parms, Fahrenheit), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_ConvertFahrenheitToCelsius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventConvertFahrenheitToCelsius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura_ConvertFahrenheitToCelsius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_ConvertFahrenheitToCelsius_Statics::NewProp_Fahrenheit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_ConvertFahrenheitToCelsius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATemperatura_ConvertFahrenheitToCelsius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Temperature" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to convert Fahrenheit to Celsius\n" },
#endif
		{ "ModuleRelativePath", "Public/Temperatura.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to convert Fahrenheit to Celsius" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura_ConvertFahrenheitToCelsius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura, nullptr, "ConvertFahrenheitToCelsius", nullptr, nullptr, Z_Construct_UFunction_ATemperatura_ConvertFahrenheitToCelsius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_ConvertFahrenheitToCelsius_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperatura_ConvertFahrenheitToCelsius_Statics::Temperatura_eventConvertFahrenheitToCelsius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_ConvertFahrenheitToCelsius_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura_ConvertFahrenheitToCelsius_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_ConvertFahrenheitToCelsius_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATemperatura_ConvertFahrenheitToCelsius_Statics::Temperatura_eventConvertFahrenheitToCelsius_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATemperatura_ConvertFahrenheitToCelsius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura_ConvertFahrenheitToCelsius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics
	{
		struct Temperatura_eventConvertKelvinToCelsius_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::NewProp_Kelvin = { "Kelvin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventConvertKelvinToCelsius_Parms, Kelvin), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventConvertKelvinToCelsius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::NewProp_Kelvin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Temperature" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to convert Kelvin to Celsius\n" },
#endif
		{ "ModuleRelativePath", "Public/Temperatura.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to convert Kelvin to Celsius" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura, nullptr, "ConvertKelvinToCelsius", nullptr, nullptr, Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::Temperatura_eventConvertKelvinToCelsius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::Temperatura_eventConvertKelvinToCelsius_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_ATemperatura_GetTemperatureKelvin_Statics
	{
		struct Temperatura_eventGetTemperatureKelvin_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_GetTemperatureKelvin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventGetTemperatureKelvin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura_GetTemperatureKelvin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_GetTemperatureKelvin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATemperatura_GetTemperatureKelvin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Temperature" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to calculate temperature in Kelvin\n" },
#endif
		{ "ModuleRelativePath", "Public/Temperatura.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to calculate temperature in Kelvin" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura_GetTemperatureKelvin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura, nullptr, "GetTemperatureKelvin", nullptr, nullptr, Z_Construct_UFunction_ATemperatura_GetTemperatureKelvin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_GetTemperatureKelvin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperatura_GetTemperatureKelvin_Statics::Temperatura_eventGetTemperatureKelvin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_GetTemperatureKelvin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura_GetTemperatureKelvin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_GetTemperatureKelvin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATemperatura_GetTemperatureKelvin_Statics::Temperatura_eventGetTemperatureKelvin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATemperatura_GetTemperatureKelvin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura_GetTemperatureKelvin_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_ATemperatura_CalculateAverageTemperature, "CalculateAverageTemperature" }, // 1931385529
		{ &Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference, "CalculateTemperatureDifference" }, // 3069030508
		{ &Z_Construct_UFunction_ATemperatura_CheckTemperature, "CheckTemperature" }, // 1482301276
		{ &Z_Construct_UFunction_ATemperatura_ConvertFahrenheitToCelsius, "ConvertFahrenheitToCelsius" }, // 2108385215
		{ &Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius, "ConvertKelvinToCelsius" }, // 31367435
		{ &Z_Construct_UFunction_ATemperatura_GetTemperatureFahrenheit, "GetTemperatureFahrenheit" }, // 665246730
		{ &Z_Construct_UFunction_ATemperatura_GetTemperatureKelvin, "GetTemperatureKelvin" }, // 2530713239
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
		{ Z_Construct_UClass_ATemperatura, ATemperatura::StaticClass, TEXT("ATemperatura"), &Z_Registration_Info_UClass_ATemperatura, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATemperatura), 1606851365U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_Temperatura_h_977650636(TEXT("/Script/UnrealEngineCourse"),
		Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_Temperatura_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rchar_OneDrive_Documentos_GitHub_UnrealEngineCourse_UnrealEngineCourse_Source_UnrealEngineCourse_Public_Temperatura_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
