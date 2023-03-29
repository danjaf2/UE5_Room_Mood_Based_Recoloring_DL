// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JoyDataTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FJoyGroup;
#ifdef RAMACODEPLUGIN_JoyDataTypes_generated_h
#error "JoyDataTypes.generated.h already included, missing '#pragma once' in JoyDataTypes.h"
#endif
#define RAMACODEPLUGIN_JoyDataTypes_generated_h

#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FJoyGroup_Statics; \
	RAMACODEPLUGIN_API static class UScriptStruct* StaticStruct();


template<> RAMACODEPLUGIN_API UScriptStruct* StaticStruct<struct FJoyGroup>();

#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_25_SPARSE_DATA
#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJoyGroups_TrimGroups); \
	DECLARE_FUNCTION(execJoyGroups_Get); \
	DECLARE_FUNCTION(execJoyGroups_AddUniqueGroup); \
	DECLARE_FUNCTION(execJoyGroups_Remove); \
	DECLARE_FUNCTION(execJoyGroups_AddUnique);


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJoyGroups_TrimGroups); \
	DECLARE_FUNCTION(execJoyGroups_Get); \
	DECLARE_FUNCTION(execJoyGroups_AddUniqueGroup); \
	DECLARE_FUNCTION(execJoyGroups_Remove); \
	DECLARE_FUNCTION(execJoyGroups_AddUnique);


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_25_ACCESSORS
#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJoyDataTypesBPLibrary(); \
	friend struct Z_Construct_UClass_UJoyDataTypesBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UJoyDataTypesBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RamaCodePlugin"), NO_API) \
	DECLARE_SERIALIZER(UJoyDataTypesBPLibrary)


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUJoyDataTypesBPLibrary(); \
	friend struct Z_Construct_UClass_UJoyDataTypesBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UJoyDataTypesBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RamaCodePlugin"), NO_API) \
	DECLARE_SERIALIZER(UJoyDataTypesBPLibrary)


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJoyDataTypesBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJoyDataTypesBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJoyDataTypesBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJoyDataTypesBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJoyDataTypesBPLibrary(UJoyDataTypesBPLibrary&&); \
	NO_API UJoyDataTypesBPLibrary(const UJoyDataTypesBPLibrary&); \
public: \
	NO_API virtual ~UJoyDataTypesBPLibrary();


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJoyDataTypesBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJoyDataTypesBPLibrary(UJoyDataTypesBPLibrary&&); \
	NO_API UJoyDataTypesBPLibrary(const UJoyDataTypesBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJoyDataTypesBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJoyDataTypesBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJoyDataTypesBPLibrary) \
	NO_API virtual ~UJoyDataTypesBPLibrary();


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_22_PROLOG
#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_25_SPARSE_DATA \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_25_RPC_WRAPPERS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_25_ACCESSORS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_25_INCLASS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_25_SPARSE_DATA \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_25_ACCESSORS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_25_INCLASS_NO_PURE_DECLS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAMACODEPLUGIN_API UClass* StaticClass<class UJoyDataTypesBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
