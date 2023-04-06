// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "COMP_475_Project/MyNeuralNetwork.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyNeuralNetwork() {}
// Cross Module References
	COMP_475_PROJECT_API UClass* Z_Construct_UClass_UMyNeuralNetwork();
	COMP_475_PROJECT_API UClass* Z_Construct_UClass_UMyNeuralNetwork_NoRegister();
	NEURALNETWORKINFERENCE_API UClass* Z_Construct_UClass_UNeuralNetwork();
	NEURALNETWORKINFERENCE_API UClass* Z_Construct_UClass_UNeuralNetwork_NoRegister();
	UPackage* Z_Construct_UPackage__Script_COMP_475_Project();
// End Cross Module References
	void UMyNeuralNetwork::StaticRegisterNativesUMyNeuralNetwork()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyNeuralNetwork);
	UClass* Z_Construct_UClass_UMyNeuralNetwork_NoRegister()
	{
		return UMyNeuralNetwork::StaticClass();
	}
	struct Z_Construct_UClass_UMyNeuralNetwork_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Network_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Network;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyNeuralNetwork_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNeuralNetwork,
		(UObject* (*)())Z_Construct_UPackage__Script_COMP_475_Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyNeuralNetwork_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyNeuralNetwork.h" },
		{ "ModuleRelativePath", "MyNeuralNetwork.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyNeuralNetwork_Statics::NewProp_Network_MetaData[] = {
		{ "ModuleRelativePath", "MyNeuralNetwork.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyNeuralNetwork_Statics::NewProp_Network = { "Network", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMyNeuralNetwork, Network), Z_Construct_UClass_UNeuralNetwork_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyNeuralNetwork_Statics::NewProp_Network_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyNeuralNetwork_Statics::NewProp_Network_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyNeuralNetwork_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyNeuralNetwork_Statics::NewProp_Network,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyNeuralNetwork_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyNeuralNetwork>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyNeuralNetwork_Statics::ClassParams = {
		&UMyNeuralNetwork::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyNeuralNetwork_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyNeuralNetwork_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyNeuralNetwork_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyNeuralNetwork_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyNeuralNetwork()
	{
		if (!Z_Registration_Info_UClass_UMyNeuralNetwork.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyNeuralNetwork.OuterSingleton, Z_Construct_UClass_UMyNeuralNetwork_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyNeuralNetwork.OuterSingleton;
	}
	template<> COMP_475_PROJECT_API UClass* StaticClass<UMyNeuralNetwork>()
	{
		return UMyNeuralNetwork::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyNeuralNetwork);
	UMyNeuralNetwork::~UMyNeuralNetwork() {}
	struct Z_CompiledInDeferFile_FID_COMP_475_Project_Source_COMP_475_Project_MyNeuralNetwork_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP_475_Project_Source_COMP_475_Project_MyNeuralNetwork_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyNeuralNetwork, UMyNeuralNetwork::StaticClass, TEXT("UMyNeuralNetwork"), &Z_Registration_Info_UClass_UMyNeuralNetwork, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyNeuralNetwork), 3113529250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP_475_Project_Source_COMP_475_Project_MyNeuralNetwork_h_3902733613(TEXT("/Script/COMP_475_Project"),
		Z_CompiledInDeferFile_FID_COMP_475_Project_Source_COMP_475_Project_MyNeuralNetwork_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_COMP_475_Project_Source_COMP_475_Project_MyNeuralNetwork_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
