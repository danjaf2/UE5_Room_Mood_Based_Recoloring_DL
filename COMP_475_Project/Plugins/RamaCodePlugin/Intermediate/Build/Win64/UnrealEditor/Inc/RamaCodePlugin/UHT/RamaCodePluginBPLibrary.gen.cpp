// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RamaCodePlugin/Public/RamaCodePluginBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRamaCodePluginBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	RAMACODEPLUGIN_API UClass* Z_Construct_UClass_URamaCodePluginBPLibrary();
	RAMACODEPLUGIN_API UClass* Z_Construct_UClass_URamaCodePluginBPLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RamaCodePlugin();
// End Cross Module References
	DEFINE_FUNCTION(URamaCodePluginBPLibrary::execRamaUE5Helper_Vector2DDivideFloat)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Vector2D);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Result);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Real);
		P_FINISH;
		P_NATIVE_BEGIN;
		URamaCodePluginBPLibrary::RamaUE5Helper_Vector2DDivideFloat(Z_Param_Vector2D,Z_Param_Out_Result,Z_Param_Real);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URamaCodePluginBPLibrary::execRamaUE5Helper_Vector2DMultFloat)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Vector2D);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Result);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Real);
		P_FINISH;
		P_NATIVE_BEGIN;
		URamaCodePluginBPLibrary::RamaUE5Helper_Vector2DMultFloat(Z_Param_Vector2D,Z_Param_Out_Result,Z_Param_Real);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URamaCodePluginBPLibrary::execRamaUE5PreviewHelper_SubtractDateTimes)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_Left);
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_Right);
		P_GET_STRUCT_REF(FTimespan,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		URamaCodePluginBPLibrary::RamaUE5PreviewHelper_SubtractDateTimes(Z_Param_Out_Left,Z_Param_Out_Right,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URamaCodePluginBPLibrary::execRamaAI_GetMoveInputDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathPoints);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_MoveDir);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ChosenIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SkipRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URamaCodePluginBPLibrary::RamaAI_GetMoveInputDirection(Z_Param_Actor,Z_Param_Out_PathPoints,Z_Param_Out_MoveDir,Z_Param_Out_ChosenIndex,Z_Param_SkipRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URamaCodePluginBPLibrary::execRamaAI_GetLeadTargetDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_FinalDir);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_FireStartLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_GoalUnitLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_VelocityOfGoalUnit);
		P_GET_STRUCT(FVector2D,Z_Param_RandomVelocityMultXY);
		P_GET_STRUCT(FVector2D,Z_Param_RandomVelocityMultZ);
		P_GET_STRUCT(FVector2D,Z_Param_RandomAngleOffsetXY);
		P_GET_STRUCT(FVector2D,Z_Param_RandomAngleOffsetZ);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RandomScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		URamaCodePluginBPLibrary::RamaAI_GetLeadTargetDirection(Z_Param_Out_FinalDir,Z_Param_Out_FireStartLocation,Z_Param_Out_GoalUnitLocation,Z_Param_Out_VelocityOfGoalUnit,Z_Param_RandomVelocityMultXY,Z_Param_RandomVelocityMultZ,Z_Param_RandomAngleOffsetXY,Z_Param_RandomAngleOffsetZ,Z_Param_RandomScale);
		P_NATIVE_END;
	}
	void URamaCodePluginBPLibrary::StaticRegisterNativesURamaCodePluginBPLibrary()
	{
		UClass* Class = URamaCodePluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RamaAI_GetLeadTargetDirection", &URamaCodePluginBPLibrary::execRamaAI_GetLeadTargetDirection },
			{ "RamaAI_GetMoveInputDirection", &URamaCodePluginBPLibrary::execRamaAI_GetMoveInputDirection },
			{ "RamaUE5Helper_Vector2DDivideFloat", &URamaCodePluginBPLibrary::execRamaUE5Helper_Vector2DDivideFloat },
			{ "RamaUE5Helper_Vector2DMultFloat", &URamaCodePluginBPLibrary::execRamaUE5Helper_Vector2DMultFloat },
			{ "RamaUE5PreviewHelper_SubtractDateTimes", &URamaCodePluginBPLibrary::execRamaUE5PreviewHelper_SubtractDateTimes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics
	{
		struct RamaCodePluginBPLibrary_eventRamaAI_GetLeadTargetDirection_Parms
		{
			FVector FinalDir;
			FVector FireStartLocation;
			FVector GoalUnitLocation;
			FVector VelocityOfGoalUnit;
			FVector2D RandomVelocityMultXY;
			FVector2D RandomVelocityMultZ;
			FVector2D RandomAngleOffsetXY;
			FVector2D RandomAngleOffsetZ;
			float RandomScale;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FinalDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireStartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FireStartLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalUnitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GoalUnitLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityOfGoalUnit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityOfGoalUnit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomVelocityMultXY;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomVelocityMultZ;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomAngleOffsetXY;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomAngleOffsetZ;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_FinalDir = { "FinalDir", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaAI_GetLeadTargetDirection_Parms, FinalDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_FireStartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_FireStartLocation = { "FireStartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaAI_GetLeadTargetDirection_Parms, FireStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_FireStartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_FireStartLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_GoalUnitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_GoalUnitLocation = { "GoalUnitLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaAI_GetLeadTargetDirection_Parms, GoalUnitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_GoalUnitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_GoalUnitLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_VelocityOfGoalUnit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_VelocityOfGoalUnit = { "VelocityOfGoalUnit", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaAI_GetLeadTargetDirection_Parms, VelocityOfGoalUnit), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_VelocityOfGoalUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_VelocityOfGoalUnit_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_RandomVelocityMultXY = { "RandomVelocityMultXY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaAI_GetLeadTargetDirection_Parms, RandomVelocityMultXY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_RandomVelocityMultZ = { "RandomVelocityMultZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaAI_GetLeadTargetDirection_Parms, RandomVelocityMultZ), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_RandomAngleOffsetXY = { "RandomAngleOffsetXY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaAI_GetLeadTargetDirection_Parms, RandomAngleOffsetXY), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_RandomAngleOffsetZ = { "RandomAngleOffsetZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaAI_GetLeadTargetDirection_Parms, RandomAngleOffsetZ), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_RandomScale = { "RandomScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaAI_GetLeadTargetDirection_Parms, RandomScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_FinalDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_FireStartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_GoalUnitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_VelocityOfGoalUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_RandomVelocityMultXY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_RandomVelocityMultZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_RandomAngleOffsetXY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_RandomAngleOffsetZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::NewProp_RandomScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode" },
		{ "Comment", "/** Lead a target, with optional randomization of final aim angle (assumes World Z is FVector(0,0,1) \xe2\x99\xa5 Rama*/" },
		{ "CPP_Default_RandomAngleOffsetXY", "" },
		{ "CPP_Default_RandomAngleOffsetZ", "" },
		{ "CPP_Default_RandomScale", "1.000000" },
		{ "CPP_Default_RandomVelocityMultXY", "(X=1.000,Y=1.000)" },
		{ "CPP_Default_RandomVelocityMultZ", "(X=1.000,Y=1.000)" },
		{ "ModuleRelativePath", "Public/RamaCodePluginBPLibrary.h" },
		{ "ToolTip", "Lead a target, with optional randomization of final aim angle (assumes World Z is FVector(0,0,1) \xe2\x99\xa5 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URamaCodePluginBPLibrary, nullptr, "RamaAI_GetLeadTargetDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::RamaCodePluginBPLibrary_eventRamaAI_GetLeadTargetDirection_Parms), Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics
	{
		struct RamaCodePluginBPLibrary_eventRamaAI_GetMoveInputDirection_Parms
		{
			AActor* Actor;
			TArray<FVector> PathPoints;
			FVector MoveDir;
			int32 ChosenIndex;
			float SkipRadius;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveDir;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChosenIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SkipRadius;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaAI_GetMoveInputDirection_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::NewProp_PathPoints_Inner = { "PathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::NewProp_PathPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::NewProp_PathPoints = { "PathPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaAI_GetMoveInputDirection_Parms, PathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::NewProp_PathPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::NewProp_PathPoints_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::NewProp_MoveDir = { "MoveDir", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaAI_GetMoveInputDirection_Parms, MoveDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::NewProp_ChosenIndex = { "ChosenIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaAI_GetMoveInputDirection_Parms, ChosenIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::NewProp_SkipRadius = { "SkipRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaAI_GetMoveInputDirection_Parms, SkipRadius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RamaCodePluginBPLibrary_eventRamaAI_GetMoveInputDirection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RamaCodePluginBPLibrary_eventRamaAI_GetMoveInputDirection_Parms), &Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::NewProp_PathPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::NewProp_PathPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::NewProp_MoveDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::NewProp_ChosenIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::NewProp_SkipRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode" },
		{ "Comment", "/** Another Rama Gift to Youuu! \n\x09\x09""1. This is a fix for fact that AI Move To is apparently not using Add Movement Input so capsule reports 0 velocity and no animation occurs.\n\x09\x09""2. Also, the pathing system seems to create oscillating destinations sometimes that make the chosen dir go back and forth, I hope you enjoy my solution!\n\x09\x09\n\x09\x09\xe2\x99\xa5 Rama */" },
		{ "CPP_Default_SkipRadius", "128.000000" },
		{ "ModuleRelativePath", "Public/RamaCodePluginBPLibrary.h" },
		{ "ToolTip", "Another Rama Gift to Youuu!\n              1. This is a fix for fact that AI Move To is apparently not using Add Movement Input so capsule reports 0 velocity and no animation occurs.\n              2. Also, the pathing system seems to create oscillating destinations sometimes that make the chosen dir go back and forth, I hope you enjoy my solution!\n\n              \xe2\x99\xa5 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URamaCodePluginBPLibrary, nullptr, "RamaAI_GetMoveInputDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::RamaCodePluginBPLibrary_eventRamaAI_GetMoveInputDirection_Parms), Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DDivideFloat_Statics
	{
		struct RamaCodePluginBPLibrary_eventRamaUE5Helper_Vector2DDivideFloat_Parms
		{
			FVector2D Vector2D;
			FVector2D Result;
			float Real;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2D;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Real;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DDivideFloat_Statics::NewProp_Vector2D = { "Vector2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaUE5Helper_Vector2DDivideFloat_Parms, Vector2D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DDivideFloat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaUE5Helper_Vector2DDivideFloat_Parms, Result), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DDivideFloat_Statics::NewProp_Real = { "Real", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaUE5Helper_Vector2DDivideFloat_Parms, Real), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DDivideFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DDivideFloat_Statics::NewProp_Vector2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DDivideFloat_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DDivideFloat_Statics::NewProp_Real,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DDivideFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode" },
		{ "Comment", "/** Cause UE5 is still like a young flower and growing fast! (Can't do V2D / non Vector2D maths) \xe2\x99\xa5 Rama */" },
		{ "CompactNodeTitle", "/" },
		{ "CPP_Default_Real", "1.000000" },
		{ "Keywords", "divide /" },
		{ "ModuleRelativePath", "Public/RamaCodePluginBPLibrary.h" },
		{ "ToolTip", "Cause UE5 is still like a young flower and growing fast! (Can't do V2D / non Vector2D maths) \xe2\x99\xa5 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DDivideFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URamaCodePluginBPLibrary, nullptr, "RamaUE5Helper_Vector2DDivideFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DDivideFloat_Statics::RamaCodePluginBPLibrary_eventRamaUE5Helper_Vector2DDivideFloat_Parms), Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DDivideFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DDivideFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DDivideFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DDivideFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DDivideFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DDivideFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DMultFloat_Statics
	{
		struct RamaCodePluginBPLibrary_eventRamaUE5Helper_Vector2DMultFloat_Parms
		{
			FVector2D Vector2D;
			FVector2D Result;
			float Real;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2D;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Real;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DMultFloat_Statics::NewProp_Vector2D = { "Vector2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaUE5Helper_Vector2DMultFloat_Parms, Vector2D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DMultFloat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaUE5Helper_Vector2DMultFloat_Parms, Result), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DMultFloat_Statics::NewProp_Real = { "Real", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaUE5Helper_Vector2DMultFloat_Parms, Real), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DMultFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DMultFloat_Statics::NewProp_Vector2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DMultFloat_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DMultFloat_Statics::NewProp_Real,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DMultFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode" },
		{ "Comment", "/** Cause UE5 is still like a young flower and growing fast! (Can't do V2D * non Vector2D maths) \xe2\x99\xa5 Rama*/" },
		{ "CompactNodeTitle", "*" },
		{ "CPP_Default_Real", "1.000000" },
		{ "Keywords", "multiply * x" },
		{ "ModuleRelativePath", "Public/RamaCodePluginBPLibrary.h" },
		{ "ToolTip", "Cause UE5 is still like a young flower and growing fast! (Can't do V2D * non Vector2D maths) \xe2\x99\xa5 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DMultFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URamaCodePluginBPLibrary, nullptr, "RamaUE5Helper_Vector2DMultFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DMultFloat_Statics::RamaCodePluginBPLibrary_eventRamaUE5Helper_Vector2DMultFloat_Parms), Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DMultFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DMultFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DMultFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DMultFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DMultFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DMultFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics
	{
		struct RamaCodePluginBPLibrary_eventRamaUE5PreviewHelper_SubtractDateTimes_Parms
		{
			FDateTime Left;
			FDateTime Right;
			FTimespan Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics::NewProp_Left_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaUE5PreviewHelper_SubtractDateTimes_Parms, Left), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics::NewProp_Left_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics::NewProp_Right_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaUE5PreviewHelper_SubtractDateTimes_Parms, Right), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics::NewProp_Right_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodePluginBPLibrary_eventRamaUE5PreviewHelper_SubtractDateTimes_Parms, Result), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode" },
		{ "Comment", "/** Cause UE5 is still like a young flower and growing fast! (Can't subtract DateTimes) \xe2\x99\xa5 Rama */" },
		{ "ModuleRelativePath", "Public/RamaCodePluginBPLibrary.h" },
		{ "ToolTip", "Cause UE5 is still like a young flower and growing fast! (Can't subtract DateTimes) \xe2\x99\xa5 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URamaCodePluginBPLibrary, nullptr, "RamaUE5PreviewHelper_SubtractDateTimes", nullptr, nullptr, sizeof(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics::RamaCodePluginBPLibrary_eventRamaUE5PreviewHelper_SubtractDateTimes_Parms), Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URamaCodePluginBPLibrary);
	UClass* Z_Construct_UClass_URamaCodePluginBPLibrary_NoRegister()
	{
		return URamaCodePluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URamaCodePluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URamaCodePluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RamaCodePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URamaCodePluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetLeadTargetDirection, "RamaAI_GetLeadTargetDirection" }, // 167685156
		{ &Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaAI_GetMoveInputDirection, "RamaAI_GetMoveInputDirection" }, // 2168825077
		{ &Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DDivideFloat, "RamaUE5Helper_Vector2DDivideFloat" }, // 881734296
		{ &Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5Helper_Vector2DMultFloat, "RamaUE5Helper_Vector2DMultFloat" }, // 3310147720
		{ &Z_Construct_UFunction_URamaCodePluginBPLibrary_RamaUE5PreviewHelper_SubtractDateTimes, "RamaUE5PreviewHelper_SubtractDateTimes" }, // 893763631
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URamaCodePluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RamaCodePluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/RamaCodePluginBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URamaCodePluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URamaCodePluginBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URamaCodePluginBPLibrary_Statics::ClassParams = {
		&URamaCodePluginBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URamaCodePluginBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URamaCodePluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URamaCodePluginBPLibrary()
	{
		if (!Z_Registration_Info_UClass_URamaCodePluginBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URamaCodePluginBPLibrary.OuterSingleton, Z_Construct_UClass_URamaCodePluginBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URamaCodePluginBPLibrary.OuterSingleton;
	}
	template<> RAMACODEPLUGIN_API UClass* StaticClass<URamaCodePluginBPLibrary>()
	{
		return URamaCodePluginBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URamaCodePluginBPLibrary);
	URamaCodePluginBPLibrary::~URamaCodePluginBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URamaCodePluginBPLibrary, URamaCodePluginBPLibrary::StaticClass, TEXT("URamaCodePluginBPLibrary"), &Z_Registration_Info_UClass_URamaCodePluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URamaCodePluginBPLibrary), 2469388771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_182558175(TEXT("/Script/RamaCodePlugin"),
		Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
