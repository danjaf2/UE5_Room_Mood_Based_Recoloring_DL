// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JoyGeo/RamaCodeJoyGeoActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveFloat;
enum class ERamaCodeJoyGeoCurveyTypes : uint8;
struct FLinearColor;
struct FRamaCodeProcMeshData;
#ifdef RAMACODEPLUGIN_RamaCodeJoyGeoActor_generated_h
#error "RamaCodeJoyGeoActor.generated.h already included, missing '#pragma once' in RamaCodeJoyGeoActor.h"
#endif
#define RAMACODEPLUGIN_RamaCodeJoyGeoActor_generated_h

#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRamaCodeProcMeshData_Statics; \
	RAMACODEPLUGIN_API static class UScriptStruct* StaticStruct();


template<> RAMACODEPLUGIN_API UScriptStruct* StaticStruct<struct FRamaCodeProcMeshData>();

#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_SPARSE_DATA
#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCurveyRamaJoyGeo); \
	DECLARE_FUNCTION(execRamaJoyTorusKnot); \
	DECLARE_FUNCTION(execRamaJoyTorus);


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCurveyRamaJoyGeo); \
	DECLARE_FUNCTION(execRamaJoyTorusKnot); \
	DECLARE_FUNCTION(execRamaJoyTorus);


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_ACCESSORS
#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_CALLBACK_WRAPPERS
#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARamaCodeJoyGeoActor(); \
	friend struct Z_Construct_UClass_ARamaCodeJoyGeoActor_Statics; \
public: \
	DECLARE_CLASS(ARamaCodeJoyGeoActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RamaCodePlugin"), NO_API) \
	DECLARE_SERIALIZER(ARamaCodeJoyGeoActor)


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_INCLASS \
private: \
	static void StaticRegisterNativesARamaCodeJoyGeoActor(); \
	friend struct Z_Construct_UClass_ARamaCodeJoyGeoActor_Statics; \
public: \
	DECLARE_CLASS(ARamaCodeJoyGeoActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RamaCodePlugin"), NO_API) \
	DECLARE_SERIALIZER(ARamaCodeJoyGeoActor)


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARamaCodeJoyGeoActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARamaCodeJoyGeoActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARamaCodeJoyGeoActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARamaCodeJoyGeoActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARamaCodeJoyGeoActor(ARamaCodeJoyGeoActor&&); \
	NO_API ARamaCodeJoyGeoActor(const ARamaCodeJoyGeoActor&); \
public: \
	NO_API virtual ~ARamaCodeJoyGeoActor();


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARamaCodeJoyGeoActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARamaCodeJoyGeoActor(ARamaCodeJoyGeoActor&&); \
	NO_API ARamaCodeJoyGeoActor(const ARamaCodeJoyGeoActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARamaCodeJoyGeoActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARamaCodeJoyGeoActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARamaCodeJoyGeoActor) \
	NO_API virtual ~ARamaCodeJoyGeoActor();


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_56_PROLOG
#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_SPARSE_DATA \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_RPC_WRAPPERS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_ACCESSORS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_CALLBACK_WRAPPERS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_INCLASS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_SPARSE_DATA \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_ACCESSORS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_CALLBACK_WRAPPERS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_INCLASS_NO_PURE_DECLS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAMACODEPLUGIN_API UClass* StaticClass<class ARamaCodeJoyGeoActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyGeo_RamaCodeJoyGeoActor_h


#define FOREACH_ENUM_ERAMACODEJOYGEOCURVEYTYPES(op) \
	op(ERamaCodeJoyGeoCurveyTypes::None) \
	op(ERamaCodeJoyGeoCurveyTypes::WorldZ) \
	op(ERamaCodeJoyGeoCurveyTypes::ActorRelativeZ) \
	op(ERamaCodeJoyGeoCurveyTypes::VertexNormal) 

enum class ERamaCodeJoyGeoCurveyTypes : uint8;
template<> struct TIsUEnumClass<ERamaCodeJoyGeoCurveyTypes> { enum { Value = true }; };
template<> RAMACODEPLUGIN_API UEnum* StaticEnum<ERamaCodeJoyGeoCurveyTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
