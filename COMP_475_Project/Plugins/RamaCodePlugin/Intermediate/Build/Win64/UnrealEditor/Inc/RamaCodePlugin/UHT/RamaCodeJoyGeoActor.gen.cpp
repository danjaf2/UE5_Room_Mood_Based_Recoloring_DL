// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RamaCodePlugin/Public/JoyGeo/RamaCodeJoyGeoActor.h"
#include "ProceduralMeshComponent/Public/ProceduralMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRamaCodeJoyGeoActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	PROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FProcMeshTangent();
	RAMACODEPLUGIN_API UClass* Z_Construct_UClass_ARamaCodeJoyGeoActor();
	RAMACODEPLUGIN_API UClass* Z_Construct_UClass_ARamaCodeJoyGeoActor_NoRegister();
	RAMACODEPLUGIN_API UEnum* Z_Construct_UEnum_RamaCodePlugin_ERamaCodeJoyGeoCurveyTypes();
	RAMACODEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRamaCodeProcMeshData();
	UPackage* Z_Construct_UPackage__Script_RamaCodePlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERamaCodeJoyGeoCurveyTypes;
	static UEnum* ERamaCodeJoyGeoCurveyTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERamaCodeJoyGeoCurveyTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERamaCodeJoyGeoCurveyTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RamaCodePlugin_ERamaCodeJoyGeoCurveyTypes, Z_Construct_UPackage__Script_RamaCodePlugin(), TEXT("ERamaCodeJoyGeoCurveyTypes"));
		}
		return Z_Registration_Info_UEnum_ERamaCodeJoyGeoCurveyTypes.OuterSingleton;
	}
	template<> RAMACODEPLUGIN_API UEnum* StaticEnum<ERamaCodeJoyGeoCurveyTypes>()
	{
		return ERamaCodeJoyGeoCurveyTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_RamaCodePlugin_ERamaCodeJoyGeoCurveyTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RamaCodePlugin_ERamaCodeJoyGeoCurveyTypes_Statics::Enumerators[] = {
		{ "ERamaCodeJoyGeoCurveyTypes::None", (int64)ERamaCodeJoyGeoCurveyTypes::None },
		{ "ERamaCodeJoyGeoCurveyTypes::WorldZ", (int64)ERamaCodeJoyGeoCurveyTypes::WorldZ },
		{ "ERamaCodeJoyGeoCurveyTypes::ActorRelativeZ", (int64)ERamaCodeJoyGeoCurveyTypes::ActorRelativeZ },
		{ "ERamaCodeJoyGeoCurveyTypes::VertexNormal", (int64)ERamaCodeJoyGeoCurveyTypes::VertexNormal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RamaCodePlugin_ERamaCodeJoyGeoCurveyTypes_Statics::Enum_MetaDataParams[] = {
		{ "ActorRelativeZ.Name", "ERamaCodeJoyGeoCurveyTypes::ActorRelativeZ" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JoyGeo/RamaCodeJoyGeoActor.h" },
		{ "None.Name", "ERamaCodeJoyGeoCurveyTypes::None" },
		{ "VertexNormal.Name", "ERamaCodeJoyGeoCurveyTypes::VertexNormal" },
		{ "WorldZ.Name", "ERamaCodeJoyGeoCurveyTypes::WorldZ" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RamaCodePlugin_ERamaCodeJoyGeoCurveyTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RamaCodePlugin,
		nullptr,
		"ERamaCodeJoyGeoCurveyTypes",
		"ERamaCodeJoyGeoCurveyTypes",
		Z_Construct_UEnum_RamaCodePlugin_ERamaCodeJoyGeoCurveyTypes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RamaCodePlugin_ERamaCodeJoyGeoCurveyTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RamaCodePlugin_ERamaCodeJoyGeoCurveyTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RamaCodePlugin_ERamaCodeJoyGeoCurveyTypes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RamaCodePlugin_ERamaCodeJoyGeoCurveyTypes()
	{
		if (!Z_Registration_Info_UEnum_ERamaCodeJoyGeoCurveyTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERamaCodeJoyGeoCurveyTypes.InnerSingleton, Z_Construct_UEnum_RamaCodePlugin_ERamaCodeJoyGeoCurveyTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERamaCodeJoyGeoCurveyTypes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RamaCodeProcMeshData;
class UScriptStruct* FRamaCodeProcMeshData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RamaCodeProcMeshData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RamaCodeProcMeshData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRamaCodeProcMeshData, Z_Construct_UPackage__Script_RamaCodePlugin(), TEXT("RamaCodeProcMeshData"));
	}
	return Z_Registration_Info_UScriptStruct_RamaCodeProcMeshData.OuterSingleton;
}
template<> RAMACODEPLUGIN_API UScriptStruct* StaticStruct<FRamaCodeProcMeshData>()
{
	return FRamaCodeProcMeshData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Because it makes it easier to adapt C++ Code if I can just pass around a single data structure to non-UE algorithms <3 Rama */" },
		{ "ModuleRelativePath", "Public/JoyGeo/RamaCodeJoyGeoActor.h" },
		{ "ToolTip", "Because it makes it easier to adapt C++ Code if I can just pass around a single data structure to non-UE algorithms <3 Rama" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRamaCodeProcMeshData>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Triangles_MetaData[] = {
		{ "Category", "RamaCode" },
		{ "ModuleRelativePath", "Public/JoyGeo/RamaCodeJoyGeoActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRamaCodeProcMeshData, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Triangles_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Positions_MetaData[] = {
		{ "Category", "RamaCode" },
		{ "ModuleRelativePath", "Public/JoyGeo/RamaCodeJoyGeoActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRamaCodeProcMeshData, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Positions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Positions_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Normals_MetaData[] = {
		{ "Category", "RamaCode" },
		{ "ModuleRelativePath", "Public/JoyGeo/RamaCodeJoyGeoActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRamaCodeProcMeshData, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Normals_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_UVs_Inner = { "UVs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_UVs_MetaData[] = {
		{ "Category", "RamaCode" },
		{ "ModuleRelativePath", "Public/JoyGeo/RamaCodeJoyGeoActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_UVs = { "UVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRamaCodeProcMeshData, UVs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_UVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_UVs_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) }; // 3570636161
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Tangents_MetaData[] = {
		{ "Category", "RamaCode" },
		{ "ModuleRelativePath", "Public/JoyGeo/RamaCodeJoyGeoActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRamaCodeProcMeshData, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Tangents_MetaData)) }; // 3570636161
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Positions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Positions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_UVs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_UVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Tangents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewProp_Tangents,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RamaCodePlugin,
		nullptr,
		&NewStructOps,
		"RamaCodeProcMeshData",
		sizeof(FRamaCodeProcMeshData),
		alignof(FRamaCodeProcMeshData),
		Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRamaCodeProcMeshData()
	{
		if (!Z_Registration_Info_UScriptStruct_RamaCodeProcMeshData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RamaCodeProcMeshData.InnerSingleton, Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RamaCodeProcMeshData.InnerSingleton;
	}
	DEFINE_FUNCTION(ARamaCodeJoyGeoActor::execCurveyRamaJoyGeo)
	{
		P_GET_STRUCT_REF(FRamaCodeProcMeshData,Z_Param_Out_ProcMeshData);
		P_GET_STRUCT_REF(FRamaCodeProcMeshData,Z_Param_Out_CurvedProcMeshData);
		P_GET_OBJECT(UCurveFloat,Z_Param_Curve);
		P_GET_ENUM(ERamaCodeJoyGeoCurveyTypes,Z_Param_CurveyType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AlphaShift);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurveSpan);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurveMaxHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CurveyRamaJoyGeo(Z_Param_Out_ProcMeshData,Z_Param_Out_CurvedProcMeshData,Z_Param_Curve,ERamaCodeJoyGeoCurveyTypes(Z_Param_CurveyType),Z_Param_AlphaShift,Z_Param_CurveSpan,Z_Param_CurveMaxHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARamaCodeJoyGeoActor::execRamaJoyTorusKnot)
	{
		P_GET_STRUCT_REF(FRamaCodeProcMeshData,Z_Param_Out_ProcMeshData);
		P_GET_PROPERTY(FIntProperty,Z_Param_P);
		P_GET_PROPERTY(FIntProperty,Z_Param_Q);
		P_GET_PROPERTY(FIntProperty,Z_Param_R1);
		P_GET_PROPERTY(FIntProperty,Z_Param_R2);
		P_GET_PROPERTY(FIntProperty,Z_Param_Rings);
		P_GET_PROPERTY(FIntProperty,Z_Param_Sides);
		P_GET_PROPERTY(FFloatProperty,Z_Param_UVTiling);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RamaJoyTorusKnot(Z_Param_Out_ProcMeshData,Z_Param_P,Z_Param_Q,Z_Param_R1,Z_Param_R2,Z_Param_Rings,Z_Param_Sides,Z_Param_UVTiling);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARamaCodeJoyGeoActor::execRamaJoyTorus)
	{
		P_GET_STRUCT_REF(FRamaCodeProcMeshData,Z_Param_Out_ProcMeshData);
		P_GET_PROPERTY(FFloatProperty,Z_Param_R1);
		P_GET_PROPERTY(FFloatProperty,Z_Param_R2);
		P_GET_PROPERTY(FIntProperty,Z_Param_Segments);
		P_GET_PROPERTY(FIntProperty,Z_Param_Rings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_UVTiling);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RamaJoyTorus(Z_Param_Out_ProcMeshData,Z_Param_R1,Z_Param_R2,Z_Param_Segments,Z_Param_Rings,Z_Param_UVTiling);
		P_NATIVE_END;
	}
	struct RamaCodeJoyGeoActor_eventRamaCodeLog_Parms
	{
		FString Str;
		FLinearColor Color;
		float Duration;
	};
	static FName NAME_ARamaCodeJoyGeoActor_RamaCodeLog = FName(TEXT("RamaCodeLog"));
	void ARamaCodeJoyGeoActor::RamaCodeLog(const FString& Str, FLinearColor Color, float Duration)
	{
		RamaCodeJoyGeoActor_eventRamaCodeLog_Parms Parms;
		Parms.Str=Str;
		Parms.Color=Color;
		Parms.Duration=Duration;
		ProcessEvent(FindFunctionChecked(NAME_ARamaCodeJoyGeoActor_RamaCodeLog),&Parms);
	}
	void ARamaCodeJoyGeoActor::StaticRegisterNativesARamaCodeJoyGeoActor()
	{
		UClass* Class = ARamaCodeJoyGeoActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CurveyRamaJoyGeo", &ARamaCodeJoyGeoActor::execCurveyRamaJoyGeo },
			{ "RamaJoyTorus", &ARamaCodeJoyGeoActor::execRamaJoyTorus },
			{ "RamaJoyTorusKnot", &ARamaCodeJoyGeoActor::execRamaJoyTorusKnot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics
	{
		struct RamaCodeJoyGeoActor_eventCurveyRamaJoyGeo_Parms
		{
			FRamaCodeProcMeshData ProcMeshData;
			FRamaCodeProcMeshData CurvedProcMeshData;
			UCurveFloat* Curve;
			ERamaCodeJoyGeoCurveyTypes CurveyType;
			float AlphaShift;
			float CurveSpan;
			float CurveMaxHeight;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcMeshData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProcMeshData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurvedProcMeshData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveyType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveyType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlphaShift;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveSpan;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveMaxHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::NewProp_ProcMeshData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::NewProp_ProcMeshData = { "ProcMeshData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventCurveyRamaJoyGeo_Parms, ProcMeshData), Z_Construct_UScriptStruct_FRamaCodeProcMeshData, METADATA_PARAMS(Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::NewProp_ProcMeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::NewProp_ProcMeshData_MetaData)) }; // 3057511711
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::NewProp_CurvedProcMeshData = { "CurvedProcMeshData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventCurveyRamaJoyGeo_Parms, CurvedProcMeshData), Z_Construct_UScriptStruct_FRamaCodeProcMeshData, METADATA_PARAMS(nullptr, 0) }; // 3057511711
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventCurveyRamaJoyGeo_Parms, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::NewProp_CurveyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::NewProp_CurveyType = { "CurveyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventCurveyRamaJoyGeo_Parms, CurveyType), Z_Construct_UEnum_RamaCodePlugin_ERamaCodeJoyGeoCurveyTypes, METADATA_PARAMS(nullptr, 0) }; // 2963112405
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::NewProp_AlphaShift = { "AlphaShift", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventCurveyRamaJoyGeo_Parms, AlphaShift), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::NewProp_CurveSpan = { "CurveSpan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventCurveyRamaJoyGeo_Parms, CurveSpan), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::NewProp_CurveMaxHeight = { "CurveMaxHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventCurveyRamaJoyGeo_Parms, CurveMaxHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::NewProp_ProcMeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::NewProp_CurvedProcMeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::NewProp_CurveyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::NewProp_CurveyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::NewProp_AlphaShift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::NewProp_CurveSpan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::NewProp_CurveMaxHeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode" },
		{ "Comment", "/** I assume curves go from 0 to 1 */" },
		{ "CPP_Default_AlphaShift", "0.000000" },
		{ "CPP_Default_CurveMaxHeight", "32.000000" },
		{ "CPP_Default_CurveSpan", "128.000000" },
		{ "CPP_Default_CurveyType", "VertexNormal" },
		{ "ModuleRelativePath", "Public/JoyGeo/RamaCodeJoyGeoActor.h" },
		{ "ToolTip", "I assume curves go from 0 to 1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARamaCodeJoyGeoActor, nullptr, "CurveyRamaJoyGeo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::RamaCodeJoyGeoActor_eventCurveyRamaJoyGeo_Parms), Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaCodeLog_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaCodeLog_Statics::NewProp_Str_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaCodeLog_Statics::NewProp_Str = { "Str", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventRamaCodeLog_Parms, Str), METADATA_PARAMS(Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaCodeLog_Statics::NewProp_Str_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaCodeLog_Statics::NewProp_Str_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaCodeLog_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventRamaCodeLog_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaCodeLog_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventRamaCodeLog_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaCodeLog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaCodeLog_Statics::NewProp_Str,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaCodeLog_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaCodeLog_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaCodeLog_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode" },
		{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "ModuleRelativePath", "Public/JoyGeo/RamaCodeJoyGeoActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaCodeLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARamaCodeJoyGeoActor, nullptr, "RamaCodeLog", nullptr, nullptr, sizeof(RamaCodeJoyGeoActor_eventRamaCodeLog_Parms), Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaCodeLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaCodeLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaCodeLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaCodeLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaCodeLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaCodeLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics
	{
		struct RamaCodeJoyGeoActor_eventRamaJoyTorus_Parms
		{
			FRamaCodeProcMeshData ProcMeshData;
			float R1;
			float R2;
			int32 Segments;
			int32 Rings;
			float UVTiling;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProcMeshData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_R1;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_R2;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Segments;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Rings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UVTiling;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics::NewProp_ProcMeshData = { "ProcMeshData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventRamaJoyTorus_Parms, ProcMeshData), Z_Construct_UScriptStruct_FRamaCodeProcMeshData, METADATA_PARAMS(nullptr, 0) }; // 3057511711
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics::NewProp_R1 = { "R1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventRamaJoyTorus_Parms, R1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics::NewProp_R2 = { "R2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventRamaJoyTorus_Parms, R2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventRamaJoyTorus_Parms, Segments), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics::NewProp_Rings = { "Rings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventRamaJoyTorus_Parms, Rings), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics::NewProp_UVTiling = { "UVTiling", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventRamaJoyTorus_Parms, UVTiling), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics::NewProp_ProcMeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics::NewProp_R1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics::NewProp_R2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics::NewProp_Segments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics::NewProp_Rings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics::NewProp_UVTiling,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode" },
		{ "CPP_Default_R1", "256.000000" },
		{ "CPP_Default_R2", "64.000000" },
		{ "CPP_Default_Rings", "100" },
		{ "CPP_Default_Segments", "30" },
		{ "CPP_Default_UVTiling", "1.000000" },
		{ "ModuleRelativePath", "Public/JoyGeo/RamaCodeJoyGeoActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARamaCodeJoyGeoActor, nullptr, "RamaJoyTorus", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics::RamaCodeJoyGeoActor_eventRamaJoyTorus_Parms), Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics
	{
		struct RamaCodeJoyGeoActor_eventRamaJoyTorusKnot_Parms
		{
			FRamaCodeProcMeshData ProcMeshData;
			int32 P;
			int32 Q;
			int32 R1;
			int32 R2;
			int32 Rings;
			int32 Sides;
			float UVTiling;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProcMeshData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_P;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Q;
		static const UECodeGen_Private::FIntPropertyParams NewProp_R1;
		static const UECodeGen_Private::FIntPropertyParams NewProp_R2;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Rings;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Sides;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UVTiling;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::NewProp_ProcMeshData = { "ProcMeshData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventRamaJoyTorusKnot_Parms, ProcMeshData), Z_Construct_UScriptStruct_FRamaCodeProcMeshData, METADATA_PARAMS(nullptr, 0) }; // 3057511711
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::NewProp_P = { "P", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventRamaJoyTorusKnot_Parms, P), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::NewProp_Q = { "Q", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventRamaJoyTorusKnot_Parms, Q), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::NewProp_R1 = { "R1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventRamaJoyTorusKnot_Parms, R1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::NewProp_R2 = { "R2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventRamaJoyTorusKnot_Parms, R2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::NewProp_Rings = { "Rings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventRamaJoyTorusKnot_Parms, Rings), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::NewProp_Sides = { "Sides", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventRamaJoyTorusKnot_Parms, Sides), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::NewProp_UVTiling = { "UVTiling", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaCodeJoyGeoActor_eventRamaJoyTorusKnot_Parms, UVTiling), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::NewProp_ProcMeshData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::NewProp_P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::NewProp_Q,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::NewProp_R1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::NewProp_R2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::NewProp_Rings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::NewProp_Sides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::NewProp_UVTiling,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode" },
		{ "CPP_Default_P", "24" },
		{ "CPP_Default_Q", "25" },
		{ "CPP_Default_R1", "2400" },
		{ "CPP_Default_R2", "64" },
		{ "CPP_Default_Rings", "1200" },
		{ "CPP_Default_Sides", "32" },
		{ "CPP_Default_UVTiling", "1.000000" },
		{ "ModuleRelativePath", "Public/JoyGeo/RamaCodeJoyGeoActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARamaCodeJoyGeoActor, nullptr, "RamaJoyTorusKnot", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::RamaCodeJoyGeoActor_eventRamaJoyTorusKnot_Parms), Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARamaCodeJoyGeoActor);
	UClass* Z_Construct_UClass_ARamaCodeJoyGeoActor_NoRegister()
	{
		return ARamaCodeJoyGeoActor::StaticClass();
	}
	struct Z_Construct_UClass_ARamaCodeJoyGeoActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARamaCodeJoyGeoActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RamaCodePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARamaCodeJoyGeoActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARamaCodeJoyGeoActor_CurveyRamaJoyGeo, "CurveyRamaJoyGeo" }, // 4161375431
		{ &Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaCodeLog, "RamaCodeLog" }, // 1903129937
		{ &Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorus, "RamaJoyTorus" }, // 3309257248
		{ &Z_Construct_UFunction_ARamaCodeJoyGeoActor_RamaJoyTorusKnot, "RamaJoyTorusKnot" }, // 1513528671
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARamaCodeJoyGeoActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "JoyGeo/RamaCodeJoyGeoActor.h" },
		{ "ModuleRelativePath", "Public/JoyGeo/RamaCodeJoyGeoActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARamaCodeJoyGeoActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARamaCodeJoyGeoActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARamaCodeJoyGeoActor_Statics::ClassParams = {
		&ARamaCodeJoyGeoActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARamaCodeJoyGeoActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARamaCodeJoyGeoActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARamaCodeJoyGeoActor()
	{
		if (!Z_Registration_Info_UClass_ARamaCodeJoyGeoActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARamaCodeJoyGeoActor.OuterSingleton, Z_Construct_UClass_ARamaCodeJoyGeoActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARamaCodeJoyGeoActor.OuterSingleton;
	}
	template<> RAMACODEPLUGIN_API UClass* StaticClass<ARamaCodeJoyGeoActor>()
	{
		return ARamaCodeJoyGeoActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARamaCodeJoyGeoActor);
	ARamaCodeJoyGeoActor::~ARamaCodeJoyGeoActor() {}
	struct Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_Statics::EnumInfo[] = {
		{ ERamaCodeJoyGeoCurveyTypes_StaticEnum, TEXT("ERamaCodeJoyGeoCurveyTypes"), &Z_Registration_Info_UEnum_ERamaCodeJoyGeoCurveyTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2963112405U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_Statics::ScriptStructInfo[] = {
		{ FRamaCodeProcMeshData::StaticStruct, Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics::NewStructOps, TEXT("RamaCodeProcMeshData"), &Z_Registration_Info_UScriptStruct_RamaCodeProcMeshData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRamaCodeProcMeshData), 3057511711U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARamaCodeJoyGeoActor, ARamaCodeJoyGeoActor::StaticClass, TEXT("ARamaCodeJoyGeoActor"), &Z_Registration_Info_UClass_ARamaCodeJoyGeoActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARamaCodeJoyGeoActor), 1294493578U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_620446699(TEXT("/Script/RamaCodePlugin"),
		Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
