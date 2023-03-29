//Copyright For EverNewJoy Eternity and Beyond, And With Love & Joy & Harmony to You! ♥ Rama ♥

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "JoyDataTypes.generated.h"

USTRUCT(BlueprintType) //BlueprintType if want access in BP
struct FJoyGroup
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=RamaCode) 
	FString Name;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=RamaCode) 
	TArray<AActor*> Units;
};

//~~~

UCLASS()
class UJoyDataTypesBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

//Joy Groups
public: 
	/** Creates group as needed! Returns false if GroupName was not found, or Actor is not valid! ♥ Rama */
	UFUNCTION(BlueprintCallable,Category="RamaCode|JoyGroups")
	static bool JoyGroups_AddUnique(UPARAM(ref) TArray<FJoyGroup>& Groups, FString GroupName, AActor* UnitToAdd)
	{
		if(!UnitToAdd)
		{
			return false;
		}
		
		//Ensure group is added!
		JoyGroups_AddUniqueGroup(Groups,GroupName);
		
		for(FJoyGroup& EachGroup : Groups)
		{
			if(EachGroup.Name == GroupName)
			{
				EachGroup.Units.AddUnique(UnitToAdd);
				return true;
			}
		}
		return false;
	}
	/** Removes group if empty after removal of unit! Returns false if GroupName was not found, or Actor is not valid! ♥ Rama */
	UFUNCTION(BlueprintCallable,Category="RamaCode|JoyGroups")
	static bool JoyGroups_Remove(UPARAM(ref) TArray<FJoyGroup>& Groups, FString GroupName, AActor* UnitToRemove)
	{
		if(!UnitToRemove)
		{
			return false;
		}
		
		for(int32 v = 0; v < Groups.Num(); v++)
		{
			//Rama Style <3 Rama
			FJoyGroup& EachGroup = Groups[v];
			
			if(EachGroup.Name == GroupName)
			{
				EachGroup.Units.Remove(UnitToRemove);
				
				//Remove group if now empty!
				if(EachGroup.Units.Num() < 1)
				{
					Groups.RemoveAt(v);
				}
				return true;
			}
		}
		return false;
	}
	/** Returns false if Group already exists, true if new group added ♥ Rama */
	UFUNCTION(BlueprintCallable,Category="RamaCode|JoyGroups")
	static bool JoyGroups_AddUniqueGroup(UPARAM(ref) TArray<FJoyGroup>& Groups, FString GroupName)
	{
		for(FJoyGroup& EachGroup : Groups)
		{
			if(EachGroup.Name == GroupName)
			{
				return false;
			}
		}
		Groups.AddDefaulted(1);
		Groups.Last().Name = GroupName;
		return true;
	}
	/** Returns true if group found and returned, returned item is a ref and modifications to the unit array or name of the group can be made! ♥ Rama */
	UFUNCTION(BlueprintCallable,Category="RamaCode|JoyGroups")
	static bool JoyGroups_Get(UPARAM(ref) TArray<FJoyGroup>& Groups, FString GroupName, FJoyGroup& Group)
	{
		for(FJoyGroup& EachGroup : Groups)
		{
			if(EachGroup.Name == GroupName)
			{
				Group = EachGroup; 
				return true;
			}
		}
		return false;
	}
	/** Remove empty groups! ♥ Rama */
	UFUNCTION(BlueprintCallable,Category="RamaCode|JoyGroups")
	static void JoyGroups_TrimGroups(UPARAM(ref) TArray<FJoyGroup>& Groups)
	{
		for(int32 v = 0; v < Groups.Num(); v++)
		{
			if(Groups[v].Units.Num() < 1)
			{
				Groups.RemoveAt(v);
				v--;
				continue;
			}
		}
	}
};