//Copyright For EverNewJoy Eternity and Beyond, And With Love & Joy & Harmony to You!, ♥ Rama ♥

#pragma once

#include "DynamicMeshBuilder.h"

//See Build.cs of plugin
#include "ProceduralMeshComponent.h"

//Float Curve
#include "Curves/CurveFloat.h"

#include "GameFramework/Actor.h"
#include "RamaCodeJoyGeoActor.generated.h"

UENUM(BlueprintType) 
enum class ERamaCodeJoyGeoCurveyTypes : uint8
{    
	None,	
	WorldZ,
	ActorRelativeZ,
	VertexNormal,
};

/** Because it makes it easier to adapt C++ Code if I can just pass around a single data structure to non-UE algorithms <3 Rama */
USTRUCT(BlueprintType)
struct FRamaCodeProcMeshData
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=RamaCode) 
	TArray<int32> Triangles;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=RamaCode) 
	TArray<FVector> Positions; 
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=RamaCode) 
	TArray<FVector> Normals;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=RamaCode) 
	TArray<FVector2D> UVs;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=RamaCode) 
	TArray<FProcMeshTangent> Tangents;
	
	void Clear()
	{
		Triangles.Empty();
		Positions.Empty();
		Normals.Empty();
		UVs.Empty();
		Tangents.Empty();
	}
};

UCLASS()
class RAMACODEPLUGIN_API ARamaCodeJoyGeoActor : public AActor
{
	GENERATED_BODY()
public:	
	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,Category=RamaCode)
	void RamaCodeLog(const FString& Str, FLinearColor Color=FLinearColor::Yellow, float Duration=2);
	
//Joyful Geometry
public:
	UFUNCTION(BlueprintCallable,Category=RamaCode)
	void RamaJoyTorus(FRamaCodeProcMeshData& ProcMeshData, float R1 = 256, float R2=64, int32 Segments=30, int32 Rings=100, float UVTiling=1);
	
	UFUNCTION(BlueprintCallable,Category=RamaCode)
	void RamaJoyTorusKnot(FRamaCodeProcMeshData& ProcMeshData, int32 P=24, int32 Q=25, int32 R1=2400, int32 R2=64, int32 Rings=1200, int32 Sides=32, float UVTiling=1);
	
	void JoyInitVertex(const FVector& Position, const FVector& Normal, const FVector2D& UV, FRamaCodeProcMeshData& ProcMeshData);
	
	/** I assume curves go from 0 to 1 */
	UFUNCTION(BlueprintCallable,Category=RamaCode)
	void CurveyRamaJoyGeo(const FRamaCodeProcMeshData& ProcMeshData, FRamaCodeProcMeshData& CurvedProcMeshData, UCurveFloat* Curve, ERamaCodeJoyGeoCurveyTypes CurveyType = ERamaCodeJoyGeoCurveyTypes::VertexNormal, float AlphaShift = 0, float CurveSpan = 128, float CurveMaxHeight = 32);
};