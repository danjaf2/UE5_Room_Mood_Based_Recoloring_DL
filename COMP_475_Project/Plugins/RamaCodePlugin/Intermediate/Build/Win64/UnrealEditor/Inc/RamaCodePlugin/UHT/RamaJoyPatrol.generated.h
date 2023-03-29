// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RamaJoyPatrol/RamaJoyPatrol.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URamaJoyPatrol;
#ifdef RAMACODEPLUGIN_RamaJoyPatrol_generated_h
#error "RamaJoyPatrol.generated.h already included, missing '#pragma once' in RamaJoyPatrol.h"
#endif
#define RAMACODEPLUGIN_RamaJoyPatrol_generated_h

#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_8_DELEGATE \
struct _Script_RamaCodePlugin_eventRamaPatrolChooseNextMoveGoal_Parms \
{ \
	URamaJoyPatrol* RamaJoyPatrolComponent; \
}; \
static inline void FRamaPatrolChooseNextMoveGoal_DelegateWrapper(const FMulticastScriptDelegate& RamaPatrolChooseNextMoveGoal, URamaJoyPatrol* RamaJoyPatrolComponent) \
{ \
	_Script_RamaCodePlugin_eventRamaPatrolChooseNextMoveGoal_Parms Parms; \
	Parms.RamaJoyPatrolComponent=RamaJoyPatrolComponent; \
	RamaPatrolChooseNextMoveGoal.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_9_DELEGATE \
struct _Script_RamaCodePlugin_eventRamaPatrolMoveRequest_Parms \
{ \
	URamaJoyPatrol* RamaJoyPatrolComponent; \
	FVector MoveGoal; \
}; \
static inline void FRamaPatrolMoveRequest_DelegateWrapper(const FMulticastScriptDelegate& RamaPatrolMoveRequest, URamaJoyPatrol* RamaJoyPatrolComponent, FVector const& MoveGoal) \
{ \
	_Script_RamaCodePlugin_eventRamaPatrolMoveRequest_Parms Parms; \
	Parms.RamaJoyPatrolComponent=RamaJoyPatrolComponent; \
	Parms.MoveGoal=MoveGoal; \
	RamaPatrolMoveRequest.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_10_DELEGATE \
struct _Script_RamaCodePlugin_eventRamaPatrolWaiting_Parms \
{ \
	URamaJoyPatrol* RamaJoyPatrolComponent; \
	float RemainingTime; \
}; \
static inline void FRamaPatrolWaiting_DelegateWrapper(const FMulticastScriptDelegate& RamaPatrolWaiting, URamaJoyPatrol* RamaJoyPatrolComponent, float RemainingTime) \
{ \
	_Script_RamaCodePlugin_eventRamaPatrolWaiting_Parms Parms; \
	Parms.RamaJoyPatrolComponent=RamaJoyPatrolComponent; \
	Parms.RemainingTime=RemainingTime; \
	RamaPatrolWaiting.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_11_DELEGATE \
struct _Script_RamaCodePlugin_eventRamaPatrolSkippedBecauseStuck_Parms \
{ \
	URamaJoyPatrol* RamaJoyPatrolComponent; \
	FVector SkippedMoveGoal; \
}; \
static inline void FRamaPatrolSkippedBecauseStuck_DelegateWrapper(const FMulticastScriptDelegate& RamaPatrolSkippedBecauseStuck, URamaJoyPatrol* RamaJoyPatrolComponent, FVector SkippedMoveGoal) \
{ \
	_Script_RamaCodePlugin_eventRamaPatrolSkippedBecauseStuck_Parms Parms; \
	Parms.RamaJoyPatrolComponent=RamaJoyPatrolComponent; \
	Parms.SkippedMoveGoal=SkippedMoveGoal; \
	RamaPatrolSkippedBecauseStuck.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_12_DELEGATE \
struct _Script_RamaCodePlugin_eventRamaPatrolStuckWhileFollowing_Parms \
{ \
	URamaJoyPatrol* RamaJoyPatrolComponent; \
	float StuckTime; \
}; \
static inline void FRamaPatrolStuckWhileFollowing_DelegateWrapper(const FMulticastScriptDelegate& RamaPatrolStuckWhileFollowing, URamaJoyPatrol* RamaJoyPatrolComponent, float StuckTime) \
{ \
	_Script_RamaCodePlugin_eventRamaPatrolStuckWhileFollowing_Parms Parms; \
	Parms.RamaJoyPatrolComponent=RamaJoyPatrolComponent; \
	Parms.StuckTime=StuckTime; \
	RamaPatrolStuckWhileFollowing.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_SPARSE_DATA
#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_RPC_WRAPPERS \
	virtual FVector GetActorMeasureLocation_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetActorMeasureLocation); \
	DECLARE_FUNCTION(execIsPathFollowingActive); \
	DECLARE_FUNCTION(execSetPathFollowingActive);


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector GetActorMeasureLocation_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetActorMeasureLocation); \
	DECLARE_FUNCTION(execIsPathFollowingActive); \
	DECLARE_FUNCTION(execSetPathFollowingActive);


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_ACCESSORS
#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_CALLBACK_WRAPPERS
#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURamaJoyPatrol(); \
	friend struct Z_Construct_UClass_URamaJoyPatrol_Statics; \
public: \
	DECLARE_CLASS(URamaJoyPatrol, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RamaCodePlugin"), NO_API) \
	DECLARE_SERIALIZER(URamaJoyPatrol)


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_INCLASS \
private: \
	static void StaticRegisterNativesURamaJoyPatrol(); \
	friend struct Z_Construct_UClass_URamaJoyPatrol_Statics; \
public: \
	DECLARE_CLASS(URamaJoyPatrol, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RamaCodePlugin"), NO_API) \
	DECLARE_SERIALIZER(URamaJoyPatrol)


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URamaJoyPatrol(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URamaJoyPatrol) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URamaJoyPatrol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URamaJoyPatrol); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URamaJoyPatrol(URamaJoyPatrol&&); \
	NO_API URamaJoyPatrol(const URamaJoyPatrol&); \
public: \
	NO_API virtual ~URamaJoyPatrol();


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URamaJoyPatrol(URamaJoyPatrol&&); \
	NO_API URamaJoyPatrol(const URamaJoyPatrol&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URamaJoyPatrol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URamaJoyPatrol); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URamaJoyPatrol) \
	NO_API virtual ~URamaJoyPatrol();


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_36_PROLOG
#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_SPARSE_DATA \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_RPC_WRAPPERS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_ACCESSORS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_CALLBACK_WRAPPERS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_INCLASS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_SPARSE_DATA \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_ACCESSORS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_CALLBACK_WRAPPERS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_INCLASS_NO_PURE_DECLS \
	FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAMACODEPLUGIN_API UClass* StaticClass<class URamaJoyPatrol>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_RamaJoyPatrol_RamaJoyPatrol_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
