// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RamaCodePlugin/Public/JoyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoyActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	RAMACODEPLUGIN_API UClass* Z_Construct_UClass_AJoyActor();
	RAMACODEPLUGIN_API UClass* Z_Construct_UClass_AJoyActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RamaCodePlugin();
// End Cross Module References
	DEFINE_FUNCTION(AJoyActor::execGetSelfUpVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSelfUpVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJoyActor::execGetSelfRightVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSelfRightVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJoyActor::execGetSelfForwardVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSelfForwardVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJoyActor::execGetSelfScale3D)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSelfScale3D();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJoyActor::execGetSelfRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetSelfRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJoyActor::execGetSelfTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetSelfTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AJoyActor::execGetSelfLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSelfLocation();
		P_NATIVE_END;
	}
	void AJoyActor::StaticRegisterNativesAJoyActor()
	{
		UClass* Class = AJoyActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSelfForwardVector", &AJoyActor::execGetSelfForwardVector },
			{ "GetSelfLocation", &AJoyActor::execGetSelfLocation },
			{ "GetSelfRightVector", &AJoyActor::execGetSelfRightVector },
			{ "GetSelfRotation", &AJoyActor::execGetSelfRotation },
			{ "GetSelfScale3D", &AJoyActor::execGetSelfScale3D },
			{ "GetSelfTransform", &AJoyActor::execGetSelfTransform },
			{ "GetSelfUpVector", &AJoyActor::execGetSelfUpVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AJoyActor_GetSelfForwardVector_Statics
	{
		struct JoyActor_eventGetSelfForwardVector_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AJoyActor_GetSelfForwardVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyActor_eventGetSelfForwardVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJoyActor_GetSelfForwardVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJoyActor_GetSelfForwardVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJoyActor_GetSelfForwardVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode" },
		{ "Comment", "//~~~\n" },
		{ "ModuleRelativePath", "Public/JoyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJoyActor_GetSelfForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJoyActor, nullptr, "GetSelfForwardVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_AJoyActor_GetSelfForwardVector_Statics::JoyActor_eventGetSelfForwardVector_Parms), Z_Construct_UFunction_AJoyActor_GetSelfForwardVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJoyActor_GetSelfForwardVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJoyActor_GetSelfForwardVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJoyActor_GetSelfForwardVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJoyActor_GetSelfForwardVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJoyActor_GetSelfForwardVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJoyActor_GetSelfLocation_Statics
	{
		struct JoyActor_eventGetSelfLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AJoyActor_GetSelfLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyActor_eventGetSelfLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJoyActor_GetSelfLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJoyActor_GetSelfLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJoyActor_GetSelfLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode" },
		{ "ModuleRelativePath", "Public/JoyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJoyActor_GetSelfLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJoyActor, nullptr, "GetSelfLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AJoyActor_GetSelfLocation_Statics::JoyActor_eventGetSelfLocation_Parms), Z_Construct_UFunction_AJoyActor_GetSelfLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJoyActor_GetSelfLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJoyActor_GetSelfLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJoyActor_GetSelfLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJoyActor_GetSelfLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJoyActor_GetSelfLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJoyActor_GetSelfRightVector_Statics
	{
		struct JoyActor_eventGetSelfRightVector_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AJoyActor_GetSelfRightVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyActor_eventGetSelfRightVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJoyActor_GetSelfRightVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJoyActor_GetSelfRightVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJoyActor_GetSelfRightVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode" },
		{ "ModuleRelativePath", "Public/JoyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJoyActor_GetSelfRightVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJoyActor, nullptr, "GetSelfRightVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_AJoyActor_GetSelfRightVector_Statics::JoyActor_eventGetSelfRightVector_Parms), Z_Construct_UFunction_AJoyActor_GetSelfRightVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJoyActor_GetSelfRightVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJoyActor_GetSelfRightVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJoyActor_GetSelfRightVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJoyActor_GetSelfRightVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJoyActor_GetSelfRightVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJoyActor_GetSelfRotation_Statics
	{
		struct JoyActor_eventGetSelfRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AJoyActor_GetSelfRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyActor_eventGetSelfRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJoyActor_GetSelfRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJoyActor_GetSelfRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJoyActor_GetSelfRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode" },
		{ "ModuleRelativePath", "Public/JoyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJoyActor_GetSelfRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJoyActor, nullptr, "GetSelfRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AJoyActor_GetSelfRotation_Statics::JoyActor_eventGetSelfRotation_Parms), Z_Construct_UFunction_AJoyActor_GetSelfRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJoyActor_GetSelfRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJoyActor_GetSelfRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJoyActor_GetSelfRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJoyActor_GetSelfRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJoyActor_GetSelfRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJoyActor_GetSelfScale3D_Statics
	{
		struct JoyActor_eventGetSelfScale3D_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AJoyActor_GetSelfScale3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyActor_eventGetSelfScale3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJoyActor_GetSelfScale3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJoyActor_GetSelfScale3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJoyActor_GetSelfScale3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode" },
		{ "ModuleRelativePath", "Public/JoyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJoyActor_GetSelfScale3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJoyActor, nullptr, "GetSelfScale3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_AJoyActor_GetSelfScale3D_Statics::JoyActor_eventGetSelfScale3D_Parms), Z_Construct_UFunction_AJoyActor_GetSelfScale3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJoyActor_GetSelfScale3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJoyActor_GetSelfScale3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJoyActor_GetSelfScale3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJoyActor_GetSelfScale3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJoyActor_GetSelfScale3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJoyActor_GetSelfTransform_Statics
	{
		struct JoyActor_eventGetSelfTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AJoyActor_GetSelfTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyActor_eventGetSelfTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJoyActor_GetSelfTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJoyActor_GetSelfTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJoyActor_GetSelfTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode" },
		{ "Comment", "/** World Transform! \xe2\x99\xa5 Rama */" },
		{ "ModuleRelativePath", "Public/JoyActor.h" },
		{ "ToolTip", "World Transform! \xe2\x99\xa5 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJoyActor_GetSelfTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJoyActor, nullptr, "GetSelfTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_AJoyActor_GetSelfTransform_Statics::JoyActor_eventGetSelfTransform_Parms), Z_Construct_UFunction_AJoyActor_GetSelfTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJoyActor_GetSelfTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJoyActor_GetSelfTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJoyActor_GetSelfTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJoyActor_GetSelfTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJoyActor_GetSelfTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AJoyActor_GetSelfUpVector_Statics
	{
		struct JoyActor_eventGetSelfUpVector_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AJoyActor_GetSelfUpVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyActor_eventGetSelfUpVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJoyActor_GetSelfUpVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJoyActor_GetSelfUpVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJoyActor_GetSelfUpVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode" },
		{ "ModuleRelativePath", "Public/JoyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJoyActor_GetSelfUpVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJoyActor, nullptr, "GetSelfUpVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_AJoyActor_GetSelfUpVector_Statics::JoyActor_eventGetSelfUpVector_Parms), Z_Construct_UFunction_AJoyActor_GetSelfUpVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJoyActor_GetSelfUpVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AJoyActor_GetSelfUpVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AJoyActor_GetSelfUpVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AJoyActor_GetSelfUpVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJoyActor_GetSelfUpVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJoyActor);
	UClass* Z_Construct_UClass_AJoyActor_NoRegister()
	{
		return AJoyActor::StaticClass();
	}
	struct Z_Construct_UClass_AJoyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJoyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RamaCodePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AJoyActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AJoyActor_GetSelfForwardVector, "GetSelfForwardVector" }, // 77257617
		{ &Z_Construct_UFunction_AJoyActor_GetSelfLocation, "GetSelfLocation" }, // 4085860615
		{ &Z_Construct_UFunction_AJoyActor_GetSelfRightVector, "GetSelfRightVector" }, // 545276472
		{ &Z_Construct_UFunction_AJoyActor_GetSelfRotation, "GetSelfRotation" }, // 4010830715
		{ &Z_Construct_UFunction_AJoyActor_GetSelfScale3D, "GetSelfScale3D" }, // 1505399068
		{ &Z_Construct_UFunction_AJoyActor_GetSelfTransform, "GetSelfTransform" }, // 1415571180
		{ &Z_Construct_UFunction_AJoyActor_GetSelfUpVector, "GetSelfUpVector" }, // 1835651997
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJoyActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n\x09This class is my immediate solution to issue of when you need a scenecomponent as your root,\n\x09so you can rotate and translate a static mesh or other component in the actor viewport that is the real root.\n\x09\n\x09""1. Please Set the SelfComponent in Construction Script\n\x09\n\x09""2. Please use GetSelfLocation, GetSelfRotation, and GetSelfTransform\n\x09\n\x09""3. I may put other fun Actor helper functions in this class eventually too!\n\x09\n\x09\xe2\x99\xa5 Rama\n*/" },
		{ "IncludePath", "JoyActor.h" },
		{ "ModuleRelativePath", "Public/JoyActor.h" },
		{ "ToolTip", "This class is my immediate solution to issue of when you need a scenecomponent as your root,\nso you can rotate and translate a static mesh or other component in the actor viewport that is the real root.\n\n1. Please Set the SelfComponent in Construction Script\n\n2. Please use GetSelfLocation, GetSelfRotation, and GetSelfTransform\n\n3. I may put other fun Actor helper functions in this class eventually too!\n\n\xe2\x99\xa5 Rama" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJoyActor_Statics::NewProp_SelfComponent_MetaData[] = {
		{ "Category", "RamaCode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/JoyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJoyActor_Statics::NewProp_SelfComponent = { "SelfComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AJoyActor, SelfComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJoyActor_Statics::NewProp_SelfComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJoyActor_Statics::NewProp_SelfComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJoyActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoyActor_Statics::NewProp_SelfComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJoyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJoyActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJoyActor_Statics::ClassParams = {
		&AJoyActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AJoyActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AJoyActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AJoyActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJoyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJoyActor()
	{
		if (!Z_Registration_Info_UClass_AJoyActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJoyActor.OuterSingleton, Z_Construct_UClass_AJoyActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AJoyActor.OuterSingleton;
	}
	template<> RAMACODEPLUGIN_API UClass* StaticClass<AJoyActor>()
	{
		return AJoyActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJoyActor);
	AJoyActor::~AJoyActor() {}
	struct Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AJoyActor, AJoyActor::StaticClass, TEXT("AJoyActor"), &Z_Registration_Info_UClass_AJoyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJoyActor), 2475802367U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyActor_h_3088312972(TEXT("/Script/RamaCodePlugin"),
		Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
