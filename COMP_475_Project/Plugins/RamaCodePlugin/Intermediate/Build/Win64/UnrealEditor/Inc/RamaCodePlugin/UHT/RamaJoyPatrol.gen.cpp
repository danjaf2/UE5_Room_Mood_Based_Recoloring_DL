// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RamaCodePlugin/Public/RamaJoyPatrol/RamaJoyPatrol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRamaJoyPatrol() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	RAMACODEPLUGIN_API UClass* Z_Construct_UClass_URamaJoyPatrol();
	RAMACODEPLUGIN_API UClass* Z_Construct_UClass_URamaJoyPatrol_NoRegister();
	RAMACODEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolChooseNextMoveGoal__DelegateSignature();
	RAMACODEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature();
	RAMACODEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature();
	RAMACODEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature();
	RAMACODEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RamaCodePlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolChooseNextMoveGoal__DelegateSignature_Statics
	{
		struct _Script_RamaCodePlugin_eventRamaPatrolChooseNextMoveGoal_Parms
		{
			URamaJoyPatrol* RamaJoyPatrolComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RamaJoyPatrolComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RamaJoyPatrolComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolChooseNextMoveGoal__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolChooseNextMoveGoal__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent = { "RamaJoyPatrolComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RamaCodePlugin_eventRamaPatrolChooseNextMoveGoal_Parms, RamaJoyPatrolComponent), Z_Construct_UClass_URamaJoyPatrol_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolChooseNextMoveGoal__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolChooseNextMoveGoal__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolChooseNextMoveGoal__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolChooseNextMoveGoal__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolChooseNextMoveGoal__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Delegates\n" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolChooseNextMoveGoal__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RamaCodePlugin, nullptr, "RamaPatrolChooseNextMoveGoal__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolChooseNextMoveGoal__DelegateSignature_Statics::_Script_RamaCodePlugin_eventRamaPatrolChooseNextMoveGoal_Parms), Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolChooseNextMoveGoal__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolChooseNextMoveGoal__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolChooseNextMoveGoal__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolChooseNextMoveGoal__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolChooseNextMoveGoal__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolChooseNextMoveGoal__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature_Statics
	{
		struct _Script_RamaCodePlugin_eventRamaPatrolMoveRequest_Parms
		{
			URamaJoyPatrol* RamaJoyPatrolComponent;
			FVector MoveGoal;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RamaJoyPatrolComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RamaJoyPatrolComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveGoal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveGoal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent = { "RamaJoyPatrolComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RamaCodePlugin_eventRamaPatrolMoveRequest_Parms, RamaJoyPatrolComponent), Z_Construct_UClass_URamaJoyPatrol_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature_Statics::NewProp_MoveGoal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature_Statics::NewProp_MoveGoal = { "MoveGoal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RamaCodePlugin_eventRamaPatrolMoveRequest_Parms, MoveGoal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature_Statics::NewProp_MoveGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature_Statics::NewProp_MoveGoal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature_Statics::NewProp_MoveGoal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RamaCodePlugin, nullptr, "RamaPatrolMoveRequest__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature_Statics::_Script_RamaCodePlugin_eventRamaPatrolMoveRequest_Parms), Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature_Statics
	{
		struct _Script_RamaCodePlugin_eventRamaPatrolWaiting_Parms
		{
			URamaJoyPatrol* RamaJoyPatrolComponent;
			float RemainingTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RamaJoyPatrolComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RamaJoyPatrolComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainingTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent = { "RamaJoyPatrolComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RamaCodePlugin_eventRamaPatrolWaiting_Parms, RamaJoyPatrolComponent), Z_Construct_UClass_URamaJoyPatrol_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature_Statics::NewProp_RemainingTime = { "RemainingTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RamaCodePlugin_eventRamaPatrolWaiting_Parms, RemainingTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature_Statics::NewProp_RemainingTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RamaCodePlugin, nullptr, "RamaPatrolWaiting__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature_Statics::_Script_RamaCodePlugin_eventRamaPatrolWaiting_Parms), Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature_Statics
	{
		struct _Script_RamaCodePlugin_eventRamaPatrolSkippedBecauseStuck_Parms
		{
			URamaJoyPatrol* RamaJoyPatrolComponent;
			FVector SkippedMoveGoal;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RamaJoyPatrolComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RamaJoyPatrolComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkippedMoveGoal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent = { "RamaJoyPatrolComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RamaCodePlugin_eventRamaPatrolSkippedBecauseStuck_Parms, RamaJoyPatrolComponent), Z_Construct_UClass_URamaJoyPatrol_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature_Statics::NewProp_SkippedMoveGoal = { "SkippedMoveGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RamaCodePlugin_eventRamaPatrolSkippedBecauseStuck_Parms, SkippedMoveGoal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature_Statics::NewProp_SkippedMoveGoal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RamaCodePlugin, nullptr, "RamaPatrolSkippedBecauseStuck__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature_Statics::_Script_RamaCodePlugin_eventRamaPatrolSkippedBecauseStuck_Parms), Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature_Statics
	{
		struct _Script_RamaCodePlugin_eventRamaPatrolStuckWhileFollowing_Parms
		{
			URamaJoyPatrol* RamaJoyPatrolComponent;
			float StuckTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RamaJoyPatrolComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RamaJoyPatrolComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StuckTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent = { "RamaJoyPatrolComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RamaCodePlugin_eventRamaPatrolStuckWhileFollowing_Parms, RamaJoyPatrolComponent), Z_Construct_UClass_URamaJoyPatrol_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature_Statics::NewProp_StuckTime = { "StuckTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RamaCodePlugin_eventRamaPatrolStuckWhileFollowing_Parms, StuckTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature_Statics::NewProp_RamaJoyPatrolComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature_Statics::NewProp_StuckTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RamaCodePlugin, nullptr, "RamaPatrolStuckWhileFollowing__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature_Statics::_Script_RamaCodePlugin_eventRamaPatrolStuckWhileFollowing_Parms), Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URamaJoyPatrol::execGetActorMeasureLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetActorMeasureLocation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URamaJoyPatrol::execIsPathFollowingActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPathFollowingActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URamaJoyPatrol::execSetPathFollowingActive)
	{
		P_GET_UBOOL(Z_Param_MakeActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPathFollowingActive(Z_Param_MakeActive);
		P_NATIVE_END;
	}
	struct RamaJoyPatrol_eventGetActorMeasureLocation_Parms
	{
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		RamaJoyPatrol_eventGetActorMeasureLocation_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	static FName NAME_URamaJoyPatrol_GetActorMeasureLocation = FName(TEXT("GetActorMeasureLocation"));
	FVector URamaJoyPatrol::GetActorMeasureLocation() const
	{
		RamaJoyPatrol_eventGetActorMeasureLocation_Parms Parms;
		const_cast<URamaJoyPatrol*>(this)->ProcessEvent(FindFunctionChecked(NAME_URamaJoyPatrol_GetActorMeasureLocation),&Parms);
		return Parms.ReturnValue;
	}
	void URamaJoyPatrol::StaticRegisterNativesURamaJoyPatrol()
	{
		UClass* Class = URamaJoyPatrol::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorMeasureLocation", &URamaJoyPatrol::execGetActorMeasureLocation },
			{ "IsPathFollowingActive", &URamaJoyPatrol::execIsPathFollowingActive },
			{ "SetPathFollowingActive", &URamaJoyPatrol::execSetPathFollowingActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URamaJoyPatrol_GetActorMeasureLocation_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URamaJoyPatrol_GetActorMeasureLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaJoyPatrol_eventGetActorMeasureLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URamaJoyPatrol_GetActorMeasureLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaJoyPatrol_GetActorMeasureLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URamaJoyPatrol_GetActorMeasureLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rama Joy Patrol" },
		{ "Comment", "/** \n\x09*This is the point on the actor from which the distance to current waypoint should be measured.\n\x09*\n\x09* Default implementation:\n\x09*\n\x09* Actors = Uses GetActorLocation()\n\x09* Characters = Uses Feet Location as per Nav Agent Interface (same method as UE4 AI system)\n\x09*\n\x09* <3 Rama\n\x09*/" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
		{ "ToolTip", "This is the point on the actor from which the distance to current waypoint should be measured.\n\nDefault implementation:\n\nActors = Uses GetActorLocation()\nCharacters = Uses Feet Location as per Nav Agent Interface (same method as UE4 AI system)\n\n<3 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URamaJoyPatrol_GetActorMeasureLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URamaJoyPatrol, nullptr, "GetActorMeasureLocation", nullptr, nullptr, sizeof(RamaJoyPatrol_eventGetActorMeasureLocation_Parms), Z_Construct_UFunction_URamaJoyPatrol_GetActorMeasureLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaJoyPatrol_GetActorMeasureLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URamaJoyPatrol_GetActorMeasureLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaJoyPatrol_GetActorMeasureLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URamaJoyPatrol_GetActorMeasureLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URamaJoyPatrol_GetActorMeasureLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URamaJoyPatrol_IsPathFollowingActive_Statics
	{
		struct RamaJoyPatrol_eventIsPathFollowingActive_Parms
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
	void Z_Construct_UFunction_URamaJoyPatrol_IsPathFollowingActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RamaJoyPatrol_eventIsPathFollowingActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URamaJoyPatrol_IsPathFollowingActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RamaJoyPatrol_eventIsPathFollowingActive_Parms), &Z_Construct_UFunction_URamaJoyPatrol_IsPathFollowingActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URamaJoyPatrol_IsPathFollowingActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaJoyPatrol_IsPathFollowingActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URamaJoyPatrol_IsPathFollowingActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rama Joy Patrol" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URamaJoyPatrol_IsPathFollowingActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URamaJoyPatrol, nullptr, "IsPathFollowingActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_URamaJoyPatrol_IsPathFollowingActive_Statics::RamaJoyPatrol_eventIsPathFollowingActive_Parms), Z_Construct_UFunction_URamaJoyPatrol_IsPathFollowingActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaJoyPatrol_IsPathFollowingActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URamaJoyPatrol_IsPathFollowingActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaJoyPatrol_IsPathFollowingActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URamaJoyPatrol_IsPathFollowingActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URamaJoyPatrol_IsPathFollowingActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URamaJoyPatrol_SetPathFollowingActive_Statics
	{
		struct RamaJoyPatrol_eventSetPathFollowingActive_Parms
		{
			bool MakeActive;
		};
		static void NewProp_MakeActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MakeActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URamaJoyPatrol_SetPathFollowingActive_Statics::NewProp_MakeActive_SetBit(void* Obj)
	{
		((RamaJoyPatrol_eventSetPathFollowingActive_Parms*)Obj)->MakeActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URamaJoyPatrol_SetPathFollowingActive_Statics::NewProp_MakeActive = { "MakeActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RamaJoyPatrol_eventSetPathFollowingActive_Parms), &Z_Construct_UFunction_URamaJoyPatrol_SetPathFollowingActive_Statics::NewProp_MakeActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URamaJoyPatrol_SetPathFollowingActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaJoyPatrol_SetPathFollowingActive_Statics::NewProp_MakeActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URamaJoyPatrol_SetPathFollowingActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rama Joy Patrol" },
		{ "Comment", "/** Turns waypoint following on or off, \xe2\x99\xa5\xe2\x99\xa5\xe2\x99\xa5 The Most Efficient way \xe2\x99\xa5\xe2\x99\xa5\xe2\x99\xa5, by stopping the ticking of the component if not active. Use Component->IsActive() to check if pathing is being followed! */" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
		{ "ToolTip", "Turns waypoint following on or off, \xe2\x99\xa5\xe2\x99\xa5\xe2\x99\xa5 The Most Efficient way \xe2\x99\xa5\xe2\x99\xa5\xe2\x99\xa5, by stopping the ticking of the component if not active. Use Component->IsActive() to check if pathing is being followed!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URamaJoyPatrol_SetPathFollowingActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URamaJoyPatrol, nullptr, "SetPathFollowingActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_URamaJoyPatrol_SetPathFollowingActive_Statics::RamaJoyPatrol_eventSetPathFollowingActive_Parms), Z_Construct_UFunction_URamaJoyPatrol_SetPathFollowingActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaJoyPatrol_SetPathFollowingActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URamaJoyPatrol_SetPathFollowingActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaJoyPatrol_SetPathFollowingActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URamaJoyPatrol_SetPathFollowingActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URamaJoyPatrol_SetPathFollowingActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URamaJoyPatrol);
	UClass* Z_Construct_UClass_URamaJoyPatrol_NoRegister()
	{
		return URamaJoyPatrol::StaticClass();
	}
	struct Z_Construct_UClass_URamaJoyPatrol_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowStopAtDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FollowStopAtDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HaveVisionOfFollowActor_MetaData[];
#endif
		static void NewProp_HaveVisionOfFollowActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HaveVisionOfFollowActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveGoalRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveGoalRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveToNextWayPointIfStuck_MetaData[];
#endif
		static void NewProp_MoveToNextWayPointIfStuck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MoveToNextWayPointIfStuck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinStuckDistancePerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinStuckDistancePerSecond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondsOfStuckBeforeMoveOn_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondsOfStuckBeforeMoveOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RamaPatrol_ChooseNextMoveGoal_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RamaPatrol_ChooseNextMoveGoal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaitTimeAtCurrentPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaitTimeAtCurrentPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMoveGoal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentMoveGoal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RamaPatrol_MoveRequest_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RamaPatrol_MoveRequest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RamaPatrol_WaitingAtWaypoint_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RamaPatrol_WaitingAtWaypoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RamaPatrol_SkippedBecauseStuck_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RamaPatrol_SkippedBecauseStuck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RamaPatrol_StuckWhileFollowing_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RamaPatrol_StuckWhileFollowing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrevLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StuckTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StuckTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaitStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaitStartTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URamaJoyPatrol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RamaCodePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URamaJoyPatrol_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URamaJoyPatrol_GetActorMeasureLocation, "GetActorMeasureLocation" }, // 688661608
		{ &Z_Construct_UFunction_URamaJoyPatrol_IsPathFollowingActive, "IsPathFollowingActive" }, // 991420668
		{ &Z_Construct_UFunction_URamaJoyPatrol_SetPathFollowingActive, "SetPathFollowingActive" }, // 1395319053
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URamaJoyPatrol_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rama" },
		{ "Comment", "/*\n\x09""A versatile AI Path Following component, where I do the pathing logic in C++ at highest possible speeds, and YOU determine the path to be followed!\n\x09\n\x09""A \xe2\x99\xa5\xe2\x99\xa5\xe2\x99\xa5 very Happy Synergy \xe2\x99\xa5\xe2\x99\xa5\xe2\x99\xa5 of UE Loving Friendship!\n\x09\n\x09How to use\n\x09\n\x09""1. Implement all of the events and report debug info when getting started.\n\x09\n\x09~ How to Move ~\n\x09""2. In the RamaPatrol_MoveRequest Event, tell the unit \xe2\x99\xa5 How \xe2\x99\xa5 to move, allows you to implement movement itself anyway you like!\n\x09\n\x09~ Where to Go ~\n\x09""3. In the RamaPatrol_ChooseNextMoveGoal, tell the unit \xe2\x99\xa5 Where \xe2\x99\xa5 you want them to go, by setting CurrentMoveGoal and any wait time you want!\n\x09\n\x09~ Waiting At a Proper Waypoint? ~\n\x09""4. Use RamaPatrol_WaitingAtWaypoint to know how long unit will keep waiting at a waypoint before moving on\n\x09\n\x09~ Got Stuck? ~\n\x09""5. Use MinStuckDistancePerSecond & SecondsOfStuckBeforeMoveOn to decide how long to \"try\" before attempting to advance to next move goal, I call RamaPatrol_ChooseNextMoveGoal() in C++ \n\x09\n\x09\xe2\x99\xa5 Rama\n*/" },
		{ "IncludePath", "RamaJoyPatrol/RamaJoyPatrol.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A versatile AI Path Following component, where I do the pathing logic in C++ at highest possible speeds, and YOU determine the path to be followed!\n\nA \xe2\x99\xa5\xe2\x99\xa5\xe2\x99\xa5 very Happy Synergy \xe2\x99\xa5\xe2\x99\xa5\xe2\x99\xa5 of UE Loving Friendship!\n\nHow to use\n\n1. Implement all of the events and report debug info when getting started.\n\n~ How to Move ~\n2. In the RamaPatrol_MoveRequest Event, tell the unit \xe2\x99\xa5 How \xe2\x99\xa5 to move, allows you to implement movement itself anyway you like!\n\n~ Where to Go ~\n3. In the RamaPatrol_ChooseNextMoveGoal, tell the unit \xe2\x99\xa5 Where \xe2\x99\xa5 you want them to go, by setting CurrentMoveGoal and any wait time you want!\n\n~ Waiting At a Proper Waypoint? ~\n4. Use RamaPatrol_WaitingAtWaypoint to know how long unit will keep waiting at a waypoint before moving on\n\n~ Got Stuck? ~\n5. Use MinStuckDistancePerSecond & SecondsOfStuckBeforeMoveOn to decide how long to \"try\" before attempting to advance to next move goal, I call RamaPatrol_ChooseNextMoveGoal() in C++\n\n\xe2\x99\xa5 Rama" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_FollowActor_MetaData[] = {
		{ "Category", "Rama Joy Patrol ~ Follow" },
		{ "Comment", "/** If this is set, unit will follow a specific actor, clear this value to return to path following like a spline or other system you create! */" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
		{ "ToolTip", "If this is set, unit will follow a specific actor, clear this value to return to path following like a spline or other system you create!" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_FollowActor = { "FollowActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URamaJoyPatrol, FollowActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_FollowActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_FollowActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_FollowStopAtDistance_MetaData[] = {
		{ "Category", "Rama Joy Patrol ~ Follow" },
		{ "Comment", "/** Stay this far away, if have vision of FollowActor! */" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
		{ "ToolTip", "Stay this far away, if have vision of FollowActor!" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_FollowStopAtDistance = { "FollowStopAtDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URamaJoyPatrol, FollowStopAtDistance), METADATA_PARAMS(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_FollowStopAtDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_FollowStopAtDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_HaveVisionOfFollowActor_MetaData[] = {
		{ "Category", "Rama Joy Patrol ~ Follow" },
		{ "Comment", "/** You determine if the unit has vision of Follow Actor */" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
		{ "ToolTip", "You determine if the unit has vision of Follow Actor" },
	};
#endif
	void Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_HaveVisionOfFollowActor_SetBit(void* Obj)
	{
		((URamaJoyPatrol*)Obj)->HaveVisionOfFollowActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_HaveVisionOfFollowActor = { "HaveVisionOfFollowActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URamaJoyPatrol), &Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_HaveVisionOfFollowActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_HaveVisionOfFollowActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_HaveVisionOfFollowActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_MoveGoalRadius_MetaData[] = {
		{ "Category", "Rama Joy Patrol ~ Stuck" },
		{ "Comment", "/** Has the unit reached the goal? Adjust this to reduce changes of trying to \"lean\" into a wall, a destination actor with a large capsule, or get closer than necessary to the current goal along your chosen path! */" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
		{ "ToolTip", "Has the unit reached the goal? Adjust this to reduce changes of trying to \"lean\" into a wall, a destination actor with a large capsule, or get closer than necessary to the current goal along your chosen path!" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_MoveGoalRadius = { "MoveGoalRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URamaJoyPatrol, MoveGoalRadius), METADATA_PARAMS(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_MoveGoalRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_MoveGoalRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_MoveToNextWayPointIfStuck_MetaData[] = {
		{ "Category", "Rama Joy Patrol ~ Stuck" },
		{ "Comment", "/** Should unit skip a way point if it cannot be reached and go to next? */" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
		{ "ToolTip", "Should unit skip a way point if it cannot be reached and go to next?" },
	};
#endif
	void Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_MoveToNextWayPointIfStuck_SetBit(void* Obj)
	{
		((URamaJoyPatrol*)Obj)->MoveToNextWayPointIfStuck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_MoveToNextWayPointIfStuck = { "MoveToNextWayPointIfStuck", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URamaJoyPatrol), &Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_MoveToNextWayPointIfStuck_SetBit, METADATA_PARAMS(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_MoveToNextWayPointIfStuck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_MoveToNextWayPointIfStuck_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_MinStuckDistancePerSecond_MetaData[] = {
		{ "Category", "Rama Joy Patrol ~ Stuck" },
		{ "Comment", "/** How much must the unit move per second to not count as stuck? */" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
		{ "ToolTip", "How much must the unit move per second to not count as stuck?" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_MinStuckDistancePerSecond = { "MinStuckDistancePerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URamaJoyPatrol, MinStuckDistancePerSecond), METADATA_PARAMS(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_MinStuckDistancePerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_MinStuckDistancePerSecond_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_SecondsOfStuckBeforeMoveOn_MetaData[] = {
		{ "Category", "Rama Joy Patrol ~ Stuck" },
		{ "Comment", "/** How long can the unit be stuck before simply moving on? */" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
		{ "ToolTip", "How long can the unit be stuck before simply moving on?" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_SecondsOfStuckBeforeMoveOn = { "SecondsOfStuckBeforeMoveOn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URamaJoyPatrol, SecondsOfStuckBeforeMoveOn), METADATA_PARAMS(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_SecondsOfStuckBeforeMoveOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_SecondsOfStuckBeforeMoveOn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_ChooseNextMoveGoal_MetaData[] = {
		{ "Category", "Rama Joy Patrol" },
		{ "Comment", "/** Rama + You Agreement: Should update CurrentMoveGoal */" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
		{ "ToolTip", "Rama + You Agreement: Should update CurrentMoveGoal" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_ChooseNextMoveGoal = { "RamaPatrol_ChooseNextMoveGoal", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URamaJoyPatrol, RamaPatrol_ChooseNextMoveGoal), Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolChooseNextMoveGoal__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_ChooseNextMoveGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_ChooseNextMoveGoal_MetaData)) }; // 2470517443
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_WaitTimeAtCurrentPosition_MetaData[] = {
		{ "Category", "Rama Joy Patrol ~ Stuck" },
		{ "Comment", "/** Set this when you pick your next goal, to cause the unit to wait at current goal, if you want them to. */" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
		{ "ToolTip", "Set this when you pick your next goal, to cause the unit to wait at current goal, if you want them to." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_WaitTimeAtCurrentPosition = { "WaitTimeAtCurrentPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URamaJoyPatrol, WaitTimeAtCurrentPosition), METADATA_PARAMS(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_WaitTimeAtCurrentPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_WaitTimeAtCurrentPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_CurrentMoveGoal_MetaData[] = {
		{ "Category", "Rama Joy Patrol ~ Core" },
		{ "Comment", "/** Rama + You Agreement: Should be set in your implementation of the DetermineNextMoveGoal event */" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
		{ "ToolTip", "Rama + You Agreement: Should be set in your implementation of the DetermineNextMoveGoal event" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_CurrentMoveGoal = { "CurrentMoveGoal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URamaJoyPatrol, CurrentMoveGoal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_CurrentMoveGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_CurrentMoveGoal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_MoveRequest_MetaData[] = {
		{ "Category", "Rama Joy Patrol" },
		{ "Comment", "/** Tell the unit how you'd like them to move to desired goal here! Runs every tick. RamaJoyPatrolComponent is included so you can instantly know the component and the owner (GetOwner()) anywhere this Delegate / Event Dispatch is being used. \xe2\x99\xa5 Rama */" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
		{ "ToolTip", "Tell the unit how you'd like them to move to desired goal here! Runs every tick. RamaJoyPatrolComponent is included so you can instantly know the component and the owner (GetOwner()) anywhere this Delegate / Event Dispatch is being used. \xe2\x99\xa5 Rama" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_MoveRequest = { "RamaPatrol_MoveRequest", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URamaJoyPatrol, RamaPatrol_MoveRequest), Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_MoveRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_MoveRequest_MetaData)) }; // 2889496388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_WaitingAtWaypoint_MetaData[] = {
		{ "Category", "Rama Joy Patrol" },
		{ "Comment", "/** Unit is waiting at waypoint for duration called Remaining Time. Runs every tick. RamaJoyPatrolComponent is included so you can instantly know the component and the owner (GetOwner()) anywhere this Delegate / Event Dispatch is being used. \xe2\x99\xa5 Rama */" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
		{ "ToolTip", "Unit is waiting at waypoint for duration called Remaining Time. Runs every tick. RamaJoyPatrolComponent is included so you can instantly know the component and the owner (GetOwner()) anywhere this Delegate / Event Dispatch is being used. \xe2\x99\xa5 Rama" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_WaitingAtWaypoint = { "RamaPatrol_WaitingAtWaypoint", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URamaJoyPatrol, RamaPatrol_WaitingAtWaypoint), Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_WaitingAtWaypoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_WaitingAtWaypoint_MetaData)) }; // 2338051405
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_SkippedBecauseStuck_MetaData[] = {
		{ "Category", "Rama Joy Patrol" },
		{ "Comment", "/** Unit moved on because got stuck! RamaJoyPatrolComponent is included so you can instantly know the component and the owner (GetOwner()) anywhere this Delegate / Event Dispatch is being used. \xe2\x99\xa5 Rama */" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
		{ "ToolTip", "Unit moved on because got stuck! RamaJoyPatrolComponent is included so you can instantly know the component and the owner (GetOwner()) anywhere this Delegate / Event Dispatch is being used. \xe2\x99\xa5 Rama" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_SkippedBecauseStuck = { "RamaPatrol_SkippedBecauseStuck", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URamaJoyPatrol, RamaPatrol_SkippedBecauseStuck), Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_SkippedBecauseStuck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_SkippedBecauseStuck_MetaData)) }; // 3636837911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_StuckWhileFollowing_MetaData[] = {
		{ "Category", "Rama Joy Patrol" },
		{ "Comment", "/** Unit is stuck while trying to follow the FollowActor! Use MinStuckDistancePerSecond & SecondsOfStuckBeforeMoveOn to customize when this activates! You can perform custom logics based on how long unit is stuck using StuckTime, reported by event, same as the variable you can access any time StuckTime. RamaJoyPatrolComponent is included so you can instantly know the component and the owner (GetOwner()) anywhere this Delegate / Event Dispatch is being used. \xe2\x99\xa5 Rama */" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
		{ "ToolTip", "Unit is stuck while trying to follow the FollowActor! Use MinStuckDistancePerSecond & SecondsOfStuckBeforeMoveOn to customize when this activates! You can perform custom logics based on how long unit is stuck using StuckTime, reported by event, same as the variable you can access any time StuckTime. RamaJoyPatrolComponent is included so you can instantly know the component and the owner (GetOwner()) anywhere this Delegate / Event Dispatch is being used. \xe2\x99\xa5 Rama" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_StuckWhileFollowing = { "RamaPatrol_StuckWhileFollowing", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URamaJoyPatrol, RamaPatrol_StuckWhileFollowing), Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_StuckWhileFollowing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_StuckWhileFollowing_MetaData)) }; // 1632828753
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_PrevLocation_MetaData[] = {
		{ "Category", "Rama Joy Patrol ~ Stuck" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_PrevLocation = { "PrevLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URamaJoyPatrol, PrevLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_PrevLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_PrevLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_StuckTime_MetaData[] = {
		{ "Category", "Rama Joy Patrol ~ Stuck" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_StuckTime = { "StuckTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URamaJoyPatrol, StuckTime), METADATA_PARAMS(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_StuckTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_StuckTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_WaitStartTime_MetaData[] = {
		{ "Category", "Rama Joy Patrol ~ Stuck" },
		{ "Comment", "/** might have to update this during a save/load procedure */" },
		{ "ModuleRelativePath", "Public/RamaJoyPatrol/RamaJoyPatrol.h" },
		{ "ToolTip", "might have to update this during a save/load procedure" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_WaitStartTime = { "WaitStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URamaJoyPatrol, WaitStartTime), METADATA_PARAMS(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_WaitStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_WaitStartTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URamaJoyPatrol_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_FollowActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_FollowStopAtDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_HaveVisionOfFollowActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_MoveGoalRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_MoveToNextWayPointIfStuck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_MinStuckDistancePerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_SecondsOfStuckBeforeMoveOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_ChooseNextMoveGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_WaitTimeAtCurrentPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_CurrentMoveGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_MoveRequest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_WaitingAtWaypoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_SkippedBecauseStuck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_RamaPatrol_StuckWhileFollowing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_PrevLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_StuckTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URamaJoyPatrol_Statics::NewProp_WaitStartTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URamaJoyPatrol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URamaJoyPatrol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URamaJoyPatrol_Statics::ClassParams = {
		&URamaJoyPatrol::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URamaJoyPatrol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URamaJoyPatrol_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URamaJoyPatrol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URamaJoyPatrol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URamaJoyPatrol()
	{
		if (!Z_Registration_Info_UClass_URamaJoyPatrol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URamaJoyPatrol.OuterSingleton, Z_Construct_UClass_URamaJoyPatrol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URamaJoyPatrol.OuterSingleton;
	}
	template<> RAMACODEPLUGIN_API UClass* StaticClass<URamaJoyPatrol>()
	{
		return URamaJoyPatrol::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URamaJoyPatrol);
	URamaJoyPatrol::~URamaJoyPatrol() {}
	struct Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URamaJoyPatrol, URamaJoyPatrol::StaticClass, TEXT("URamaJoyPatrol"), &Z_Registration_Info_UClass_URamaJoyPatrol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URamaJoyPatrol), 1626959313U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_183258653(TEXT("/Script/RamaCodePlugin"),
		Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
