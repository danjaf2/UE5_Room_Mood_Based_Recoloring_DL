// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RamaCodePlugin/Public/MultiThread/RamaCodeMultiThreadActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRamaCodeMultiThreadActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	RAMACODEPLUGIN_API UClass* Z_Construct_UClass_ARamaCodeMultiThreadActor();
	RAMACODEPLUGIN_API UClass* Z_Construct_UClass_ARamaCodeMultiThreadActor_NoRegister();
	RAMACODEPLUGIN_API UClass* Z_Construct_UClass_URamaThreadDataQueue();
	RAMACODEPLUGIN_API UClass* Z_Construct_UClass_URamaThreadDataQueue_NoRegister();
	RAMACODEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRamaCircularQueueData();
	UPackage* Z_Construct_UPackage__Script_RamaCodePlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RamaCircularQueueData;
class UScriptStruct* FRamaCircularQueueData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RamaCircularQueueData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RamaCircularQueueData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRamaCircularQueueData, Z_Construct_UPackage__Script_RamaCodePlugin(), TEXT("RamaCircularQueueData"));
	}
	return Z_Registration_Info_UScriptStruct_RamaCircularQueueData.OuterSingleton;
}
template<> RAMACODEPLUGIN_API UScriptStruct* StaticStruct<FRamaCircularQueueData>()
{
	return FRamaCircularQueueData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRamaCircularQueueData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalculatedPrimeNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CalculatedPrimeNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRamaCircularQueueData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* \n\x09Simple data in this case, \n\x09\n\x09""But you can store literally anything here \n\x09\n\x09""For your own threaded calculations!\n\x09\n\x09\xe2\x99\xa5 Rama\n*///BlueprintType if want access in BP\n" },
		{ "ModuleRelativePath", "Public/MultiThread/RamaCodeMultiThreadActor.h" },
		{ "ToolTip", "Simple data in this case,\n\nBut you can store literally anything here\n\nFor your own threaded calculations!\n\n\xe2\x99\xa5 Rama\n//BlueprintType if want access in BP" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRamaCircularQueueData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRamaCircularQueueData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRamaCircularQueueData_Statics::NewProp_CalculatedPrimeNumber_MetaData[] = {
		{ "Category", "RamaCode" },
		{ "Comment", "//This is not UPROPERTY() in the circular queue \n// so do not store UE Actor or UE Object pointers in this struct!\n" },
		{ "ModuleRelativePath", "Public/MultiThread/RamaCodeMultiThreadActor.h" },
		{ "ToolTip", "This is not UPROPERTY() in the circular queue\n so do not store UE Actor or UE Object pointers in this struct!" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRamaCircularQueueData_Statics::NewProp_CalculatedPrimeNumber = { "CalculatedPrimeNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRamaCircularQueueData, CalculatedPrimeNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FRamaCircularQueueData_Statics::NewProp_CalculatedPrimeNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRamaCircularQueueData_Statics::NewProp_CalculatedPrimeNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRamaCircularQueueData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRamaCircularQueueData_Statics::NewProp_CalculatedPrimeNumber,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRamaCircularQueueData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RamaCodePlugin,
		nullptr,
		&NewStructOps,
		"RamaCircularQueueData",
		sizeof(FRamaCircularQueueData),
		alignof(FRamaCircularQueueData),
		Z_Construct_UScriptStruct_FRamaCircularQueueData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRamaCircularQueueData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRamaCircularQueueData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRamaCircularQueueData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRamaCircularQueueData()
	{
		if (!Z_Registration_Info_UScriptStruct_RamaCircularQueueData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RamaCircularQueueData.InnerSingleton, Z_Construct_UScriptStruct_FRamaCircularQueueData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RamaCircularQueueData.InnerSingleton;
	}
	void URamaThreadDataQueue::StaticRegisterNativesURamaThreadDataQueue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URamaThreadDataQueue);
	UClass* Z_Construct_UClass_URamaThreadDataQueue_NoRegister()
	{
		return URamaThreadDataQueue::StaticClass();
	}
	struct Z_Construct_UClass_URamaThreadDataQueue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URamaThreadDataQueue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RamaCodePlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URamaThreadDataQueue_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//Use this to safely check for updates from a thread in one-way fashion!\n//(Just receiving data from thread at thread's discretion)\n" },
		{ "IncludePath", "MultiThread/RamaCodeMultiThreadActor.h" },
		{ "ModuleRelativePath", "Public/MultiThread/RamaCodeMultiThreadActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Use this to safely check for updates from a thread in one-way fashion!\n(Just receiving data from thread at thread's discretion)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URamaThreadDataQueue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URamaThreadDataQueue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URamaThreadDataQueue_Statics::ClassParams = {
		&URamaThreadDataQueue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URamaThreadDataQueue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URamaThreadDataQueue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URamaThreadDataQueue()
	{
		if (!Z_Registration_Info_UClass_URamaThreadDataQueue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URamaThreadDataQueue.OuterSingleton, Z_Construct_UClass_URamaThreadDataQueue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URamaThreadDataQueue.OuterSingleton;
	}
	template<> RAMACODEPLUGIN_API UClass* StaticClass<URamaThreadDataQueue>()
	{
		return URamaThreadDataQueue::StaticClass();
	}
	URamaThreadDataQueue::~URamaThreadDataQueue() {}
	DEFINE_FUNCTION(ARamaCodeMultiThreadActor::execIsJoyThreadPaused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsJoyThreadPaused();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARamaCodeMultiThreadActor::execRemoveFromQueue_GetAllFinished_ThreadCalculatedData)
	{
		P_GET_TARRAY_REF(FRamaCircularQueueData,Z_Param_Out_NewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromQueue_GetAllFinished_ThreadCalculatedData(Z_Param_Out_NewData);
		P_NATIVE_END;
	}
	struct RamaCodeMultiThreadActor_eventRamaCodeLog_Parms
	{
		FString Str;
		FLinearColor Color;
		float Duration;
	};
	static FName NAME_ARamaCodeMultiThreadActor_RamaCodeLog = FName(TEXT("RamaCodeLog"));
	void ARamaCodeMultiThreadActor::RamaCodeLog(const FString& Str, FLinearColor Color, float Duration)
	{
		RamaCodeMultiThreadActor_eventRamaCodeLog_Parms Parms;
		Parms.Str=Str;
		Parms.Color=Color;
		Parms.Duration=Duration;
		ProcessEvent(FindFunctionChecked(NAME_ARamaCodeMultiThreadActor_RamaCodeLog),&Parms);
	}
	static FName NAME_ARamaCodeMultiThreadActor_StartRamaCodeThreadTimerUpdate = FName(TEXT("StartRamaCodeThreadTimerUpdate"));
	void ARamaCodeMultiThreadActor::StartRamaCodeThreadTimerUpdate()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARamaCodeMultiThreadActor_StartRamaCodeThreadTimerUpdate),NULL);
	}
	void ARamaCodeMultiThreadActor::StaticRegisterNativesARamaCodeMultiThreadActor()
	{
		UClass* Class = ARamaCodeMultiThreadActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsJoyThreadPaused", &ARamaCodeMultiThreadActor::execIsJoyThreadPaused },
			{ "RemoveFromQueue_GetAllFinished_ThreadCalculatedData", &ARamaCodeMultiThreadActor::execRemoveFromQueue_GetAllFinished_ThreadCalculatedData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARamaCodeMultiThreadActor_IsJoyThreadPaused_Statics
	{
		struct RamaCodeMultiThreadActor_eventIsJoyThreadPaused_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARamaCodeMultiThreadActor_IsJoyThreadPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RamaCodeMultiThreadActor_eventIsJoyThreadPaused_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARamaCodeMultiThreadActor_IsJoyThreadPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RamaCodeMultiThreadActor_eventIsJoyThreadPaused_Parms), &Z_Construct_UFunction_ARamaCodeMultiThreadActor_IsJoyThreadPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARamaCodeMultiThreadActor_IsJoyThreadPaused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeMultiThreadActor_IsJoyThreadPaused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARamaCodeMultiThreadActor_IsJoyThreadPaused_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode" },
		{ "Comment", "/** In this example, there is only 1 task, calc first 50,000 prime numbers, so once the Joy thread pauses herself, that means all primes are done, example complete! In a real game case, you would want to have other tasks for your thread, during the lifetime of the game */" },
		{ "ModuleRelativePath", "Public/MultiThread/RamaCodeMultiThreadActor.h" },
		{ "ToolTip", "In this example, there is only 1 task, calc first 50,000 prime numbers, so once the Joy thread pauses herself, that means all primes are done, example complete! In a real game case, you would want to have other tasks for your thread, during the lifetime of the game" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARamaCodeMultiThreadActor_IsJoyThreadPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARamaCodeMultiThreadActor, nullptr, "IsJoyThreadPaused", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARamaCodeMultiThreadActor_IsJoyThreadPaused_Statics::RamaCodeMultiThreadActor_eventIsJoyThreadPaused_Parms), Z_Construct_UFunction_ARamaCodeMultiThreadActor_IsJoyThreadPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARamaCodeMultiThreadActor_IsJoyThreadPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARamaCodeMultiThreadActor_IsJoyThreadPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARamaCodeMultiThreadActor_IsJoyThreadPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARamaCodeMultiThreadActor_IsJoyThreadPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARamaCodeMultiThreadActor_IsJoyThreadPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARamaCodeMultiThreadActor_RamaCodeLog_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Str_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Str;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARamaCodeMultiThreadActor_RamaCodeLog_Statics::NewProp_Str_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARamaCodeMultiThreadActor_RamaCodeLog_Statics::NewProp_Str = { "Str", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeMultiThreadActor_eventRamaCodeLog_Parms, Str), METADATA_PARAMS(Z_Construct_UFunction_ARamaCodeMultiThreadActor_RamaCodeLog_Statics::NewProp_Str_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARamaCodeMultiThreadActor_RamaCodeLog_Statics::NewProp_Str_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARamaCodeMultiThreadActor_RamaCodeLog_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeMultiThreadActor_eventRamaCodeLog_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARamaCodeMultiThreadActor_RamaCodeLog_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeMultiThreadActor_eventRamaCodeLog_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARamaCodeMultiThreadActor_RamaCodeLog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeMultiThreadActor_RamaCodeLog_Statics::NewProp_Str,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeMultiThreadActor_RamaCodeLog_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeMultiThreadActor_RamaCodeLog_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARamaCodeMultiThreadActor_RamaCodeLog_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode" },
		{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "ModuleRelativePath", "Public/MultiThread/RamaCodeMultiThreadActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARamaCodeMultiThreadActor_RamaCodeLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARamaCodeMultiThreadActor, nullptr, "RamaCodeLog", nullptr, nullptr, sizeof(RamaCodeMultiThreadActor_eventRamaCodeLog_Parms), Z_Construct_UFunction_ARamaCodeMultiThreadActor_RamaCodeLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARamaCodeMultiThreadActor_RamaCodeLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARamaCodeMultiThreadActor_RamaCodeLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARamaCodeMultiThreadActor_RamaCodeLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARamaCodeMultiThreadActor_RamaCodeLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARamaCodeMultiThreadActor_RamaCodeLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARamaCodeMultiThreadActor_RemoveFromQueue_GetAllFinished_ThreadCalculatedData_Statics
	{
		struct RamaCodeMultiThreadActor_eventRemoveFromQueue_GetAllFinished_ThreadCalculatedData_Parms
		{
			TArray<FRamaCircularQueueData> NewData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARamaCodeMultiThreadActor_RemoveFromQueue_GetAllFinished_ThreadCalculatedData_Statics::NewProp_NewData_Inner = { "NewData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRamaCircularQueueData, METADATA_PARAMS(nullptr, 0) }; // 263710687
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARamaCodeMultiThreadActor_RemoveFromQueue_GetAllFinished_ThreadCalculatedData_Statics::NewProp_NewData = { "NewData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeMultiThreadActor_eventRemoveFromQueue_GetAllFinished_ThreadCalculatedData_Parms, NewData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 263710687
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARamaCodeMultiThreadActor_RemoveFromQueue_GetAllFinished_ThreadCalculatedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeMultiThreadActor_RemoveFromQueue_GetAllFinished_ThreadCalculatedData_Statics::NewProp_NewData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeMultiThreadActor_RemoveFromQueue_GetAllFinished_ThreadCalculatedData_Statics::NewProp_NewData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARamaCodeMultiThreadActor_RemoveFromQueue_GetAllFinished_ThreadCalculatedData_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode" },
		{ "Comment", "/** Get the most recently calculated numbers from the Multi-threaded calculation process! This removes the data from the storage queue, so better put the data somewhere permanent! */" },
		{ "ModuleRelativePath", "Public/MultiThread/RamaCodeMultiThreadActor.h" },
		{ "ToolTip", "Get the most recently calculated numbers from the Multi-threaded calculation process! This removes the data from the storage queue, so better put the data somewhere permanent!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARamaCodeMultiThreadActor_RemoveFromQueue_GetAllFinished_ThreadCalculatedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARamaCodeMultiThreadActor, nullptr, "RemoveFromQueue_GetAllFinished_ThreadCalculatedData", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARamaCodeMultiThreadActor_RemoveFromQueue_GetAllFinished_ThreadCalculatedData_Statics::RamaCodeMultiThreadActor_eventRemoveFromQueue_GetAllFinished_ThreadCalculatedData_Parms), Z_Construct_UFunction_ARamaCodeMultiThreadActor_RemoveFromQueue_GetAllFinished_ThreadCalculatedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARamaCodeMultiThreadActor_RemoveFromQueue_GetAllFinished_ThreadCalculatedData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARamaCodeMultiThreadActor_RemoveFromQueue_GetAllFinished_ThreadCalculatedData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARamaCodeMultiThreadActor_RemoveFromQueue_GetAllFinished_ThreadCalculatedData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARamaCodeMultiThreadActor_RemoveFromQueue_GetAllFinished_ThreadCalculatedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARamaCodeMultiThreadActor_RemoveFromQueue_GetAllFinished_ThreadCalculatedData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARamaCodeMultiThreadActor_StartRamaCodeThreadTimerUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARamaCodeMultiThreadActor_StartRamaCodeThreadTimerUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode" },
		{ "Comment", "/** Start a timer in BP to *safely* check for thread updates! */" },
		{ "ModuleRelativePath", "Public/MultiThread/RamaCodeMultiThreadActor.h" },
		{ "ToolTip", "Start a timer in BP to *safely* check for thread updates!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARamaCodeMultiThreadActor_StartRamaCodeThreadTimerUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARamaCodeMultiThreadActor, nullptr, "StartRamaCodeThreadTimerUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARamaCodeMultiThreadActor_StartRamaCodeThreadTimerUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARamaCodeMultiThreadActor_StartRamaCodeThreadTimerUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARamaCodeMultiThreadActor_StartRamaCodeThreadTimerUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARamaCodeMultiThreadActor_StartRamaCodeThreadTimerUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARamaCodeMultiThreadActor);
	UClass* Z_Construct_UClass_ARamaCodeMultiThreadActor_NoRegister()
	{
		return ARamaCodeMultiThreadActor::StaticClass();
	}
	struct Z_Construct_UClass_ARamaCodeMultiThreadActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiThreadDataCore_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MultiThreadDataCore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARamaCodeMultiThreadActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RamaCodePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARamaCodeMultiThreadActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARamaCodeMultiThreadActor_IsJoyThreadPaused, "IsJoyThreadPaused" }, // 491002944
		{ &Z_Construct_UFunction_ARamaCodeMultiThreadActor_RamaCodeLog, "RamaCodeLog" }, // 3196702648
		{ &Z_Construct_UFunction_ARamaCodeMultiThreadActor_RemoveFromQueue_GetAllFinished_ThreadCalculatedData, "RemoveFromQueue_GetAllFinished_ThreadCalculatedData" }, // 751422046
		{ &Z_Construct_UFunction_ARamaCodeMultiThreadActor_StartRamaCodeThreadTimerUpdate, "StartRamaCodeThreadTimerUpdate" }, // 3350701513
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARamaCodeMultiThreadActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" },
		{ "IncludePath", "MultiThread/RamaCodeMultiThreadActor.h" },
		{ "ModuleRelativePath", "Public/MultiThread/RamaCodeMultiThreadActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARamaCodeMultiThreadActor_Statics::NewProp_MultiThreadDataCore_MetaData[] = {
		{ "Comment", "//Accessed by Game Thread, added to by your new thread's calculations\n//! <~~~~~~~~~~~~~~~~~~~~~~~~ ALWAYS! to avoid dangling pointers, UE will clear all UPROPERTY() UObject* when they are destroyed!\n" },
		{ "ModuleRelativePath", "Public/MultiThread/RamaCodeMultiThreadActor.h" },
		{ "ToolTip", "Accessed by Game Thread, added to by your new thread's calculations\n! <~~~~~~~~~~~~~~~~~~~~~~~~ ALWAYS! to avoid dangling pointers, UE will clear all UPROPERTY() UObject* when they are destroyed!" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARamaCodeMultiThreadActor_Statics::NewProp_MultiThreadDataCore = { "MultiThreadDataCore", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARamaCodeMultiThreadActor, MultiThreadDataCore), Z_Construct_UClass_URamaThreadDataQueue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARamaCodeMultiThreadActor_Statics::NewProp_MultiThreadDataCore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARamaCodeMultiThreadActor_Statics::NewProp_MultiThreadDataCore_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARamaCodeMultiThreadActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARamaCodeMultiThreadActor_Statics::NewProp_MultiThreadDataCore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARamaCodeMultiThreadActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARamaCodeMultiThreadActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARamaCodeMultiThreadActor_Statics::ClassParams = {
		&ARamaCodeMultiThreadActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARamaCodeMultiThreadActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARamaCodeMultiThreadActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARamaCodeMultiThreadActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARamaCodeMultiThreadActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARamaCodeMultiThreadActor()
	{
		if (!Z_Registration_Info_UClass_ARamaCodeMultiThreadActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARamaCodeMultiThreadActor.OuterSingleton, Z_Construct_UClass_ARamaCodeMultiThreadActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARamaCodeMultiThreadActor.OuterSingleton;
	}
	template<> RAMACODEPLUGIN_API UClass* StaticClass<ARamaCodeMultiThreadActor>()
	{
		return ARamaCodeMultiThreadActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARamaCodeMultiThreadActor);
	ARamaCodeMultiThreadActor::~ARamaCodeMultiThreadActor() {}
	struct Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_MultiThread_RamaCodeMultiThreadActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_MultiThread_RamaCodeMultiThreadActor_h_Statics::ScriptStructInfo[] = {
		{ FRamaCircularQueueData::StaticStruct, Z_Construct_UScriptStruct_FRamaCircularQueueData_Statics::NewStructOps, TEXT("RamaCircularQueueData"), &Z_Registration_Info_UScriptStruct_RamaCircularQueueData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRamaCircularQueueData), 263710687U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_MultiThread_RamaCodeMultiThreadActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URamaThreadDataQueue, URamaThreadDataQueue::StaticClass, TEXT("URamaThreadDataQueue"), &Z_Registration_Info_UClass_URamaThreadDataQueue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URamaThreadDataQueue), 3147328732U) },
		{ Z_Construct_UClass_ARamaCodeMultiThreadActor, ARamaCodeMultiThreadActor::StaticClass, TEXT("ARamaCodeMultiThreadActor"), &Z_Registration_Info_UClass_ARamaCodeMultiThreadActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARamaCodeMultiThreadActor), 2697574146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_MultiThread_RamaCodeMultiThreadActor_h_412255624(TEXT("/Script/RamaCodePlugin"),
		Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_MultiThread_RamaCodeMultiThreadActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_MultiThread_RamaCodeMultiThreadActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_MultiThread_RamaCodeMultiThreadActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_MultiThread_RamaCodeMultiThreadActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
