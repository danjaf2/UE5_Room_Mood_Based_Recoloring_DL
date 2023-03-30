// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "COMP_475_Project/ColorChanger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorChanger() {}
// Cross Module References
	COMP_475_PROJECT_API UClass* Z_Construct_UClass_AColorChanger();
	COMP_475_PROJECT_API UClass* Z_Construct_UClass_AColorChanger_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_COMP_475_Project();
// End Cross Module References
	void AColorChanger::StaticRegisterNativesAColorChanger()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AColorChanger);
	UClass* Z_Construct_UClass_AColorChanger_NoRegister()
	{
		return AColorChanger::StaticClass();
	}
	struct Z_Construct_UClass_AColorChanger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_blueprintActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_blueprintActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AColorChanger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_COMP_475_Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorChanger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ColorChanger.h" },
		{ "ModuleRelativePath", "ColorChanger.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorChanger_Statics::NewProp_blueprintActor_MetaData[] = {
		{ "Category", "BlueprintClass" },
		{ "ModuleRelativePath", "ColorChanger.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AColorChanger_Statics::NewProp_blueprintActor = { "blueprintActor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AColorChanger, blueprintActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AColorChanger_Statics::NewProp_blueprintActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorChanger_Statics::NewProp_blueprintActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AColorChanger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorChanger_Statics::NewProp_blueprintActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AColorChanger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AColorChanger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AColorChanger_Statics::ClassParams = {
		&AColorChanger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AColorChanger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AColorChanger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AColorChanger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AColorChanger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AColorChanger()
	{
		if (!Z_Registration_Info_UClass_AColorChanger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AColorChanger.OuterSingleton, Z_Construct_UClass_AColorChanger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AColorChanger.OuterSingleton;
	}
	template<> COMP_475_PROJECT_API UClass* StaticClass<AColorChanger>()
	{
		return AColorChanger::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AColorChanger);
	AColorChanger::~AColorChanger() {}
	struct Z_CompiledInDeferFile_FID_COMP_475_Project_Source_COMP_475_Project_ColorChanger_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP_475_Project_Source_COMP_475_Project_ColorChanger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AColorChanger, AColorChanger::StaticClass, TEXT("AColorChanger"), &Z_Registration_Info_UClass_AColorChanger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AColorChanger), 3834746068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP_475_Project_Source_COMP_475_Project_ColorChanger_h_407494375(TEXT("/Script/COMP_475_Project"),
		Z_CompiledInDeferFile_FID_COMP_475_Project_Source_COMP_475_Project_ColorChanger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_COMP_475_Project_Source_COMP_475_Project_ColorChanger_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
