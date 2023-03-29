// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RamaCodePluginBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FDateTime;
struct FTimespan;
#ifdef RAMACODEPLUGIN_RamaCodePluginBPLibrary_generated_h
#error "RamaCodePluginBPLibrary.generated.h already included, missing '#pragma once' in RamaCodePluginBPLibrary.h"
#endif
#define RAMACODEPLUGIN_RamaCodePluginBPLibrary_generated_h

#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_11_SPARSE_DATA
#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRamaUE5Helper_Vector2DDivideFloat); \
	DECLARE_FUNCTION(execRamaUE5Helper_Vector2DMultFloat); \
	DECLARE_FUNCTION(execRamaUE5PreviewHelper_SubtractDateTimes); \
	DECLARE_FUNCTION(execRamaAI_GetMoveInputDirection); \
	DECLARE_FUNCTION(execRamaAI_GetLeadTargetDirection);


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRamaUE5Helper_Vector2DDivideFloat); \
	DECLARE_FUNCTION(execRamaUE5Helper_Vector2DMultFloat); \
	DECLARE_FUNCTION(execRamaUE5PreviewHelper_SubtractDateTimes); \
	DECLARE_FUNCTION(execRamaAI_GetMoveInputDirection); \
	DECLARE_FUNCTION(execRamaAI_GetLeadTargetDirection);


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_11_ACCESSORS
#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURamaCodePluginBPLibrary(); \
	friend struct Z_Construct_UClass_URamaCodePluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URamaCodePluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RamaCodePlugin"), NO_API) \
	DECLARE_SERIALIZER(URamaCodePluginBPLibrary)


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_11_INCLASS \
private: \
	static void StaticRegisterNativesURamaCodePluginBPLibrary(); \
	friend struct Z_Construct_UClass_URamaCodePluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URamaCodePluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RamaCodePlugin"), NO_API) \
	DECLARE_SERIALIZER(URamaCodePluginBPLibrary)


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URamaCodePluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URamaCodePluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URamaCodePluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URamaCodePluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URamaCodePluginBPLibrary(URamaCodePluginBPLibrary&&); \
	NO_API URamaCodePluginBPLibrary(const URamaCodePluginBPLibrary&); \
public: \
	NO_API virtual ~URamaCodePluginBPLibrary();


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URamaCodePluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URamaCodePluginBPLibrary(URamaCodePluginBPLibrary&&); \
	NO_API URamaCodePluginBPLibrary(const URamaCodePluginBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URamaCodePluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URamaCodePluginBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URamaCodePluginBPLibrary) \
	NO_API virtual ~URamaCodePluginBPLibrary();


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_8_PROLOG
#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_11_SPARSE_DATA \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_11_RPC_WRAPPERS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_11_ACCESSORS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_11_INCLASS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_11_SPARSE_DATA \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_11_ACCESSORS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_11_INCLASS_NO_PURE_DECLS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RamaCodePluginBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAMACODEPLUGIN_API UClass* StaticClass<class URamaCodePluginBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaCodePluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
