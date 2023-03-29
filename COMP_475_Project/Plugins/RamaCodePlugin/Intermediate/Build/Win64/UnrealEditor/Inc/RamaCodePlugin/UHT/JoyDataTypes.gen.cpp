// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RamaCodePlugin/Public/JoyDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoyDataTypes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	RAMACODEPLUGIN_API UClass* Z_Construct_UClass_UJoyDataTypesBPLibrary();
	RAMACODEPLUGIN_API UClass* Z_Construct_UClass_UJoyDataTypesBPLibrary_NoRegister();
	RAMACODEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FJoyGroup();
	UPackage* Z_Construct_UPackage__Script_RamaCodePlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JoyGroup;
class UScriptStruct* FJoyGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JoyGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JoyGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJoyGroup, Z_Construct_UPackage__Script_RamaCodePlugin(), TEXT("JoyGroup"));
	}
	return Z_Registration_Info_UScriptStruct_JoyGroup.OuterSingleton;
}
template<> RAMACODEPLUGIN_API UScriptStruct* StaticStruct<FJoyGroup>()
{
	return FJoyGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJoyGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Units_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Units_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Units;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//BlueprintType if want access in BP\n" },
		{ "ModuleRelativePath", "Public/JoyDataTypes.h" },
		{ "ToolTip", "BlueprintType if want access in BP" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJoyGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJoyGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyGroup_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "RamaCode" },
		{ "ModuleRelativePath", "Public/JoyDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJoyGroup_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoyGroup, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyGroup_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyGroup_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FJoyGroup_Statics::NewProp_Units_Inner = { "Units", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyGroup_Statics::NewProp_Units_MetaData[] = {
		{ "Category", "RamaCode" },
		{ "ModuleRelativePath", "Public/JoyDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJoyGroup_Statics::NewProp_Units = { "Units", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoyGroup, Units), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyGroup_Statics::NewProp_Units_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyGroup_Statics::NewProp_Units_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoyGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyGroup_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyGroup_Statics::NewProp_Units_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyGroup_Statics::NewProp_Units,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoyGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RamaCodePlugin,
		nullptr,
		&NewStructOps,
		"JoyGroup",
		sizeof(FJoyGroup),
		alignof(FJoyGroup),
		Z_Construct_UScriptStruct_FJoyGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJoyGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_JoyGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JoyGroup.InnerSingleton, Z_Construct_UScriptStruct_FJoyGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JoyGroup.InnerSingleton;
	}
	DEFINE_FUNCTION(UJoyDataTypesBPLibrary::execJoyGroups_TrimGroups)
	{
		P_GET_TARRAY_REF(FJoyGroup,Z_Param_Out_Groups);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyDataTypesBPLibrary::JoyGroups_TrimGroups(Z_Param_Out_Groups);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyDataTypesBPLibrary::execJoyGroups_Get)
	{
		P_GET_TARRAY_REF(FJoyGroup,Z_Param_Out_Groups);
		P_GET_PROPERTY(FStrProperty,Z_Param_GroupName);
		P_GET_STRUCT_REF(FJoyGroup,Z_Param_Out_Group);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UJoyDataTypesBPLibrary::JoyGroups_Get(Z_Param_Out_Groups,Z_Param_GroupName,Z_Param_Out_Group);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyDataTypesBPLibrary::execJoyGroups_AddUniqueGroup)
	{
		P_GET_TARRAY_REF(FJoyGroup,Z_Param_Out_Groups);
		P_GET_PROPERTY(FStrProperty,Z_Param_GroupName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UJoyDataTypesBPLibrary::JoyGroups_AddUniqueGroup(Z_Param_Out_Groups,Z_Param_GroupName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyDataTypesBPLibrary::execJoyGroups_Remove)
	{
		P_GET_TARRAY_REF(FJoyGroup,Z_Param_Out_Groups);
		P_GET_PROPERTY(FStrProperty,Z_Param_GroupName);
		P_GET_OBJECT(AActor,Z_Param_UnitToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UJoyDataTypesBPLibrary::JoyGroups_Remove(Z_Param_Out_Groups,Z_Param_GroupName,Z_Param_UnitToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyDataTypesBPLibrary::execJoyGroups_AddUnique)
	{
		P_GET_TARRAY_REF(FJoyGroup,Z_Param_Out_Groups);
		P_GET_PROPERTY(FStrProperty,Z_Param_GroupName);
		P_GET_OBJECT(AActor,Z_Param_UnitToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UJoyDataTypesBPLibrary::JoyGroups_AddUnique(Z_Param_Out_Groups,Z_Param_GroupName,Z_Param_UnitToAdd);
		P_NATIVE_END;
	}
	void UJoyDataTypesBPLibrary::StaticRegisterNativesUJoyDataTypesBPLibrary()
	{
		UClass* Class = UJoyDataTypesBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "JoyGroups_AddUnique", &UJoyDataTypesBPLibrary::execJoyGroups_AddUnique },
			{ "JoyGroups_AddUniqueGroup", &UJoyDataTypesBPLibrary::execJoyGroups_AddUniqueGroup },
			{ "JoyGroups_Get", &UJoyDataTypesBPLibrary::execJoyGroups_Get },
			{ "JoyGroups_Remove", &UJoyDataTypesBPLibrary::execJoyGroups_Remove },
			{ "JoyGroups_TrimGroups", &UJoyDataTypesBPLibrary::execJoyGroups_TrimGroups },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics
	{
		struct JoyDataTypesBPLibrary_eventJoyGroups_AddUnique_Parms
		{
			TArray<FJoyGroup> Groups;
			FString GroupName;
			AActor* UnitToAdd;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Groups_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Groups;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitToAdd;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FJoyGroup, METADATA_PARAMS(nullptr, 0) }; // 1478079481
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyDataTypesBPLibrary_eventJoyGroups_AddUnique_Parms, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1478079481
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyDataTypesBPLibrary_eventJoyGroups_AddUnique_Parms, GroupName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics::NewProp_UnitToAdd = { "UnitToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyDataTypesBPLibrary_eventJoyGroups_AddUnique_Parms, UnitToAdd), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JoyDataTypesBPLibrary_eventJoyGroups_AddUnique_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JoyDataTypesBPLibrary_eventJoyGroups_AddUnique_Parms), &Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics::NewProp_Groups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics::NewProp_Groups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics::NewProp_UnitToAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode|JoyGroups" },
		{ "Comment", "/** Creates group as needed! Returns false if GroupName was not found, or Actor is not valid! \xe2\x99\xa5 Rama */" },
		{ "ModuleRelativePath", "Public/JoyDataTypes.h" },
		{ "ToolTip", "Creates group as needed! Returns false if GroupName was not found, or Actor is not valid! \xe2\x99\xa5 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyDataTypesBPLibrary, nullptr, "JoyGroups_AddUnique", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics::JoyDataTypesBPLibrary_eventJoyGroups_AddUnique_Parms), Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup_Statics
	{
		struct JoyDataTypesBPLibrary_eventJoyGroups_AddUniqueGroup_Parms
		{
			TArray<FJoyGroup> Groups;
			FString GroupName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Groups_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Groups;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FJoyGroup, METADATA_PARAMS(nullptr, 0) }; // 1478079481
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyDataTypesBPLibrary_eventJoyGroups_AddUniqueGroup_Parms, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1478079481
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyDataTypesBPLibrary_eventJoyGroups_AddUniqueGroup_Parms, GroupName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JoyDataTypesBPLibrary_eventJoyGroups_AddUniqueGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JoyDataTypesBPLibrary_eventJoyGroups_AddUniqueGroup_Parms), &Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup_Statics::NewProp_Groups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup_Statics::NewProp_Groups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode|JoyGroups" },
		{ "Comment", "/** Returns false if Group already exists, true if new group added \xe2\x99\xa5 Rama */" },
		{ "ModuleRelativePath", "Public/JoyDataTypes.h" },
		{ "ToolTip", "Returns false if Group already exists, true if new group added \xe2\x99\xa5 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyDataTypesBPLibrary, nullptr, "JoyGroups_AddUniqueGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup_Statics::JoyDataTypesBPLibrary_eventJoyGroups_AddUniqueGroup_Parms), Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics
	{
		struct JoyDataTypesBPLibrary_eventJoyGroups_Get_Parms
		{
			TArray<FJoyGroup> Groups;
			FString GroupName;
			FJoyGroup Group;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Groups_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Groups;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Group;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FJoyGroup, METADATA_PARAMS(nullptr, 0) }; // 1478079481
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyDataTypesBPLibrary_eventJoyGroups_Get_Parms, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1478079481
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyDataTypesBPLibrary_eventJoyGroups_Get_Parms, GroupName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyDataTypesBPLibrary_eventJoyGroups_Get_Parms, Group), Z_Construct_UScriptStruct_FJoyGroup, METADATA_PARAMS(nullptr, 0) }; // 1478079481
	void Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JoyDataTypesBPLibrary_eventJoyGroups_Get_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JoyDataTypesBPLibrary_eventJoyGroups_Get_Parms), &Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics::NewProp_Groups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics::NewProp_Groups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode|JoyGroups" },
		{ "Comment", "/** Returns true if group found and returned, returned item is a ref and modifications to the unit array or name of the group can be made! \xe2\x99\xa5 Rama */" },
		{ "ModuleRelativePath", "Public/JoyDataTypes.h" },
		{ "ToolTip", "Returns true if group found and returned, returned item is a ref and modifications to the unit array or name of the group can be made! \xe2\x99\xa5 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyDataTypesBPLibrary, nullptr, "JoyGroups_Get", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics::JoyDataTypesBPLibrary_eventJoyGroups_Get_Parms), Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics
	{
		struct JoyDataTypesBPLibrary_eventJoyGroups_Remove_Parms
		{
			TArray<FJoyGroup> Groups;
			FString GroupName;
			AActor* UnitToRemove;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Groups_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Groups;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitToRemove;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FJoyGroup, METADATA_PARAMS(nullptr, 0) }; // 1478079481
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyDataTypesBPLibrary_eventJoyGroups_Remove_Parms, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1478079481
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyDataTypesBPLibrary_eventJoyGroups_Remove_Parms, GroupName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics::NewProp_UnitToRemove = { "UnitToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyDataTypesBPLibrary_eventJoyGroups_Remove_Parms, UnitToRemove), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JoyDataTypesBPLibrary_eventJoyGroups_Remove_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JoyDataTypesBPLibrary_eventJoyGroups_Remove_Parms), &Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics::NewProp_Groups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics::NewProp_Groups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics::NewProp_UnitToRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode|JoyGroups" },
		{ "Comment", "/** Removes group if empty after removal of unit! Returns false if GroupName was not found, or Actor is not valid! \xe2\x99\xa5 Rama */" },
		{ "ModuleRelativePath", "Public/JoyDataTypes.h" },
		{ "ToolTip", "Removes group if empty after removal of unit! Returns false if GroupName was not found, or Actor is not valid! \xe2\x99\xa5 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyDataTypesBPLibrary, nullptr, "JoyGroups_Remove", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics::JoyDataTypesBPLibrary_eventJoyGroups_Remove_Parms), Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_TrimGroups_Statics
	{
		struct JoyDataTypesBPLibrary_eventJoyGroups_TrimGroups_Parms
		{
			TArray<FJoyGroup> Groups;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Groups_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Groups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_TrimGroups_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FJoyGroup, METADATA_PARAMS(nullptr, 0) }; // 1478079481
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_TrimGroups_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoyDataTypesBPLibrary_eventJoyGroups_TrimGroups_Parms, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1478079481
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_TrimGroups_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_TrimGroups_Statics::NewProp_Groups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_TrimGroups_Statics::NewProp_Groups,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_TrimGroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode|JoyGroups" },
		{ "Comment", "/** Remove empty groups! \xe2\x99\xa5 Rama */" },
		{ "ModuleRelativePath", "Public/JoyDataTypes.h" },
		{ "ToolTip", "Remove empty groups! \xe2\x99\xa5 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_TrimGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyDataTypesBPLibrary, nullptr, "JoyGroups_TrimGroups", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_TrimGroups_Statics::JoyDataTypesBPLibrary_eventJoyGroups_TrimGroups_Parms), Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_TrimGroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_TrimGroups_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_TrimGroups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_TrimGroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_TrimGroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_TrimGroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJoyDataTypesBPLibrary);
	UClass* Z_Construct_UClass_UJoyDataTypesBPLibrary_NoRegister()
	{
		return UJoyDataTypesBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UJoyDataTypesBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJoyDataTypesBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RamaCodePlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJoyDataTypesBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUnique, "JoyGroups_AddUnique" }, // 2473557933
		{ &Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_AddUniqueGroup, "JoyGroups_AddUniqueGroup" }, // 4074704638
		{ &Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Get, "JoyGroups_Get" }, // 2882252090
		{ &Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_Remove, "JoyGroups_Remove" }, // 3687528821
		{ &Z_Construct_UFunction_UJoyDataTypesBPLibrary_JoyGroups_TrimGroups, "JoyGroups_TrimGroups" }, // 1177152355
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoyDataTypesBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//~~~\n" },
		{ "IncludePath", "JoyDataTypes.h" },
		{ "ModuleRelativePath", "Public/JoyDataTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJoyDataTypesBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJoyDataTypesBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJoyDataTypesBPLibrary_Statics::ClassParams = {
		&UJoyDataTypesBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UJoyDataTypesBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJoyDataTypesBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJoyDataTypesBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UJoyDataTypesBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJoyDataTypesBPLibrary.OuterSingleton, Z_Construct_UClass_UJoyDataTypesBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJoyDataTypesBPLibrary.OuterSingleton;
	}
	template<> RAMACODEPLUGIN_API UClass* StaticClass<UJoyDataTypesBPLibrary>()
	{
		return UJoyDataTypesBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJoyDataTypesBPLibrary);
	UJoyDataTypesBPLibrary::~UJoyDataTypesBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_Statics::ScriptStructInfo[] = {
		{ FJoyGroup::StaticStruct, Z_Construct_UScriptStruct_FJoyGroup_Statics::NewStructOps, TEXT("JoyGroup"), &Z_Registration_Info_UScriptStruct_JoyGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJoyGroup), 1478079481U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJoyDataTypesBPLibrary, UJoyDataTypesBPLibrary::StaticClass, TEXT("UJoyDataTypesBPLibrary"), &Z_Registration_Info_UClass_UJoyDataTypesBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJoyDataTypesBPLibrary), 3716815741U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_2812241348(TEXT("/Script/RamaCodePlugin"),
		Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_COMP_475_Project_Plugins_RamaCodePlugin_Source_RamaCodePlugin_Public_JoyDataTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
