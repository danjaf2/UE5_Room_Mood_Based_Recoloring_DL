// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRamaCodePlugin_init() {}
	RAMACODEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolChooseNextMoveGoal__DelegateSignature();
	RAMACODEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature();
	RAMACODEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature();
	RAMACODEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature();
	RAMACODEPLUGIN_API UFunction* Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RamaCodePlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RamaCodePlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_RamaCodePlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolChooseNextMoveGoal__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolMoveRequest__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolSkippedBecauseStuck__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolStuckWhileFollowing__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RamaCodePlugin_RamaPatrolWaiting__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RamaCodePlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3E582945,
				0x86E60157,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RamaCodePlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RamaCodePlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RamaCodePlugin(Z_Construct_UPackage__Script_RamaCodePlugin, TEXT("/Script/RamaCodePlugin"), Z_Registration_Info_UPackage__Script_RamaCodePlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3E582945, 0x86E60157));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
