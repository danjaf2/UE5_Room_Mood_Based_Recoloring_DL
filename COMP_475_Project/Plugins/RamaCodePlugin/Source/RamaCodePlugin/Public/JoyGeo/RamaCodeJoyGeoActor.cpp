//Copyright For EverNewJoy Eternity and Beyond, And With Love & Joy & Harmony to You!, ♥ Rama ♥

#include "RamaCodeJoyGeoActor.h"

#include "KismetProceduralMeshLibrary.h"

//~~~

//~~~~~~~~~ Begin of Static Functions ~~~~~~~~~~
//  An Example of Most-Responsible (to be read as "Rama Preferred") Coding Practices
//! static functions for one-off (single use) simple operations
// That are too simple to add to .h and not used elsewhere in code base
//   And if you don't feel like adding the .h just for little thingie
//     <3 Rama

//This is from RenderUtils.h
/**
* Constructs a basis matrix for the axis vectors and returns the sign of the determinant
*
* @param XAxis - x axis (tangent)
* @param YAxis - y axis (binormal)
* @param ZAxis - z axis (normal)
* @return sign of determinant either -1 or +1 
*/
static float JoyfulGetBasisDeterminantSign( const FVector& XAxis, const FVector& YAxis, const FVector& ZAxis )
{
	FMatrix Basis(
		FPlane(XAxis,0),
		FPlane(YAxis,0),
		FPlane(ZAxis,0),
		FPlane(0,0,0,1)
		);
	return (Basis.Determinant() < 0) ? -1.0f : +1.0f;
}
//End of from RenderUtils.h

static bool RamaCode_JoyfulShouldFlipY( const FVector& InTangentX, const FVector& InTangentY, const FVector& InTangentZ )
{
	return JoyfulGetBasisDeterminantSign(InTangentX,InTangentY,InTangentZ) < 0;
}

//~~~~~~~~~ End of Static Functions ~~~~~~~~~~

void ARamaCodeJoyGeoActor::JoyInitVertex(const FVector& Position, const FVector& Normal, const FVector2D& UV, FRamaCodeProcMeshData& ProcMeshData)
{
	//Relative ZAxis, accounting for rotation <3 Rama
	FVector ZAxis = GetActorUpVector();
	
	//Location of Owning Actor
	FVector WorldLocation 			= GetActorLocation();
	
	//! component is already relative in ProceduralMeshComponent
	//Adjust location based on where the owning actor is at the time this vertex is created!
	//const FVector FinalPosition = GetActorTransform().TransformPosition(Position);

	//Rotation Matrix Of Owning Actor
	//FTransform RotationTransform(GetActorTransform().GetRotation()); //FQuat, see TransformVectorized.h
	
	//Global Rotation Matrix
	//		Move from Origin to World Location
	//			ALL MATRIX TRANSFORMS MUST BE DONE AT ORIGIN
	//const FVector FinalPosition = WorldLocation + RotationTransform.TransformPosition(Position);
	
	//~~~
	
	//Position!
	ProcMeshData.Positions.Add(Position);
	
	//Add Normal!
	ProcMeshData.Normals.Add(Normal);

	//Add UVs
	ProcMeshData.UVs.Add(UV);
	
	//~~~
	
	//Tangents
	FVector TangentX = -ZAxis;
	
	//Flip?
	bool FlipY = 
		RamaCode_JoyfulShouldFlipY(
			-ZAxis,
			(-ZAxis) ^ Normal,
			Normal
		);
	
	//Add!
	ProcMeshData.Tangents.Add(FProcMeshTangent(TangentX,FlipY));
}
	
void ARamaCodeJoyGeoActor::RamaJoyTorus(FRamaCodeProcMeshData& ProcMeshData, float R1, float R2, int32 Segments, int32 Rings, float UVTiling)
{
	//Just in cases <3 Rama
	ProcMeshData.Clear();
	//~~~~~~~~~~~~~~~~~~~
	
	const int32 num_segments 	= Segments;
	const int32 num_rings 		= Rings;
	const int32 num_vertices 	= (num_rings+1) * (num_segments+1);
	const int32 num_indices 	= num_vertices * 2 + 2;
	
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~
	
	float u,v;
	float u_angle,v_angle;
	float x,y,z;
	float nx,ny,nz;
    for(int32 i=0; i<=num_rings; ++i) 
	{
		for(int32 j=0; j<=num_segments; ++j) 
		{	
			u = float(i) / num_rings;
			v = (float(j) + u) / num_segments;

			// Compute angles
			u_angle = u * 2 * PI;
			v_angle = v * 2 * PI;

			// Position
			x = FMath::Cos(u_angle) * (R1 + FMath::Cos(v_angle) * R2);
			y = FMath::Sin(u_angle) * (R1 + FMath::Cos(v_angle) * R2);
			z = FMath::Sin(v_angle) * R2;

			// Normal vector
			nx = FMath::Cos(u_angle) * FMath::Cos(v_angle);
			ny = FMath::Sin(u_angle) * FMath::Cos(v_angle);
			nz = FMath::Sin(v_angle);

			//This part works, need Community help with generating the Triangles
			JoyInitVertex(
				FVector(x, y, z),
				FVector(nx, ny, nz),
				FVector2D(u, v),
				ProcMeshData
			);
		}
    }
 
	
	//! generating triangles for the torus, someone is welcome to do this and tell me about it and I will add to this plugin!
	//! <3 Rama
    for(int32 i=0; i<=num_vertices; ++i) 
	{
		ProcMeshData.Triangles.Add(int32(i % num_vertices));
		ProcMeshData.Triangles.Add(int32((i + num_segments+1) % num_vertices));
    } 
}

void ARamaCodeJoyGeoActor::RamaJoyTorusKnot(FRamaCodeProcMeshData& ProcMeshData, int32 P, int32 Q, int32 R1, int32 R2, int32 Rings, int32 Sides, float UVTiling)
{
	//Just in cases <3 Rama
	ProcMeshData.Clear();
	//~~~~~~~~~~~~~~~~~~~
	
	const float p				= P;
	const float q				= Q;
	
	const float Radius			= R1;
	const float TubeRadius		= R2;
	
	const float TexTilesX		= UVTiling;
	const float TexTilesY		= UVTiling;
	//~~~~~~~~~~~~~~~~~

	FVector2D VPoint;
	int32 SideBlock;
	int32 i,j,ni, nj;
	float Phi;
	float Theta, Phi1, r;
	FVector Vertex, Pos, Next, t, n, b;
	FVector Normal;
	//~~~~~~~~~~~~

	//Consts
	const float PhiInc 		= 2.0 * PI / Rings;
	const float ThetaInc 	= 2.0 * PI / Sides;
	
	SideBlock = Sides + 1;
	Phi = 0.0;
 
	for(j = 0; j <= Rings; j++)
	{
		Theta= 0.0;

		r = 0.5 * (2.0 + FMath::Sin(q * Phi)) * Radius;
		Pos.X = r * FMath::Cos(p * Phi);
		Pos.Y = r * FMath::Cos(q * Phi);
		Pos.Z = r * FMath::Sin(p * Phi);

		Phi1 = Phi + PhiInc;
		r = 0.5 * (2.0 + FMath::Sin(q * Phi1)) * Radius;
		Next.X = r * FMath::Cos(p * Phi1);
		Next.Y = r * FMath::Cos(q * Phi1);
		Next.Z = r * FMath::Sin(p * Phi1);

		t = Next - Pos;
		n = Next + Pos;
		b = (FVector::CrossProduct(t, n)).GetSafeNormal();
		n = (FVector::CrossProduct(b, t)).GetSafeNormal();

		for(i = 0; i <= Sides; i++)
		{
			VPoint.X = FMath::Sin(Theta) * TubeRadius;
			VPoint.Y = FMath::Cos(Theta) * TubeRadius;

			Vertex = Pos + (n * VPoint.X) + (b * VPoint.Y);
			
			Normal = (Vertex - Pos).GetSafeNormal();
			
			FVector2D UV = 
				FVector2D(
					Phi * TexTilesX / (2.0 * PI),
					Theta * TexTilesY / (2.0 * PI)
				);
			
			//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			//Create Vertex!
			JoyInitVertex(Vertex,Normal,UV,ProcMeshData);
			//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
			
			ni = i + 1;
			nj = j + 1;

			if (i < Sides && j < Rings)
			{
				ProcMeshData.Triangles.Add(	i + nj * 	SideBlock	);
				ProcMeshData.Triangles.Add(	i + j * 	SideBlock	);
				ProcMeshData.Triangles.Add(	ni + nj * 	SideBlock	);
				
				ProcMeshData.Triangles.Add(	ni + nj * 	SideBlock	);
				ProcMeshData.Triangles.Add(	i + j * 	SideBlock	);
				ProcMeshData.Triangles.Add(	ni + j * 	SideBlock	);
				
				//Could Call Update Section Here with new vertex and tris
			}

			Theta = Theta + ThetaInc;
		}
		
		Phi += PhiInc;
	}
  
	//Example of a Macro / PreProcessor
	//! in an unusual but viable location
	//!		 <3 Rama
	#define VERT_MAX (ProcMeshData.Positions.Num() - 1)

	//Final Triangle!
	ProcMeshData.Triangles.Add(VERT_MAX);
	ProcMeshData.Triangles.Add(VERT_MAX - SideBlock);
	ProcMeshData.Triangles.Add(VERT_MAX - SideBlock -1);
}

void ARamaCodeJoyGeoActor::CurveyRamaJoyGeo(const FRamaCodeProcMeshData& ProcMeshData, FRamaCodeProcMeshData& CurvedProcMeshData, UCurveFloat* Curve, ERamaCodeJoyGeoCurveyTypes CurveyType, float AlphaShift, float CurveSpan, float CurveMaxHeight)
{
	//Always check Your...
	if(!Curve)
	{
		return;
	}
	if(CurveSpan < 0.0001)
	{
		CurveSpan = 0.0001;
	}
	
	//Copy
	CurvedProcMeshData = ProcMeshData;
	
	
	float AlphaInc = 1.f/CurveSpan;
	 
	float Alpha = AlphaShift;
	 
	//Data Validity Check <3 Rama
	if(CurvedProcMeshData.Positions.Num() != CurvedProcMeshData.Normals.Num())
	{
		RamaCodeLog("NORMALS AND POSITIONS WHERE NOT SAME SIZE ARRAY!");
		return;
	}
	
	for(int32 v = 0; v < CurvedProcMeshData.Positions.Num(); v++)
	{
		switch (CurveyType)
		{
			case ERamaCodeJoyGeoCurveyTypes::WorldZ :
			{
				//Z Shift
				float ZShift = CurveMaxHeight * Curve->GetFloatValue(Alpha);
				CurvedProcMeshData.Positions[v].Z += ZShift;
				
				//RamaCodeLog(FString::SanitizeFloat(ZShift));
				
				break;
			}
			case ERamaCodeJoyGeoCurveyTypes::ActorRelativeZ :
			{
				FVector RelativeZAxis = GetActorUpVector();
				
				float ZShift = CurveMaxHeight * Curve->GetFloatValue(Alpha);
				CurvedProcMeshData.Positions[v] += RelativeZAxis * ZShift;
				break;
			}
			
			//Vertex Normal or not defined
			default :
			{
				float NormalShift = CurveMaxHeight * Curve->GetFloatValue(Alpha);
				CurvedProcMeshData.Positions[v] += CurvedProcMeshData.Normals[v] * NormalShift;
				break;
			}
		}
		
		//Proceed along re-sized curve along the shape!
		Alpha += AlphaInc;
		
		if(Alpha >= 1) 
		{
			Alpha = 0;
		}
	}
}




