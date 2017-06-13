// Copyright 2017, Institute for Artificial Intelligence - University of Bremen
// Author: Andrei Haidu (http://haidu.eu)

#pragma once

#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
//#include "PhysicsEngine/BodyInstance.h"
//#include "MotionControllerComponent.h"
#include "PIDController3D.h"
#include "MCHand.generated.h"


///** Enum indicating the finger type */
//UENUM(BlueprintType)
//enum class ERHandLimb : uint8
//{
//	Thumb		UMETA(DisplayName = "Thumb"),
//	Index		UMETA(DisplayName = "Index"),
//	Middle		UMETA(DisplayName = "Middle"),
//	Ring		UMETA(DisplayName = "Ring"),
//	Pinky		UMETA(DisplayName = "Pinky"),
//	Palm		UMETA(DisplayName = "Palm")
//};

/**
 * 
 */
UCLASS()
class ROBCOG_API AMCHand : public ASkeletalMeshActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor
	AMCHand();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;
	
//protected:
//	// Hand type
//	UPROPERTY(EditAnywhere, Category = "Motion Controller")
//	EControllerHand HandType;
//
//	// Body name to apply forces on
//	UPROPERTY(EditAnywhere, Category = "Motion Controller")
//	FName ControlBoneName;
//
//	// PID controller proportional argument
//	UPROPERTY(EditAnywhere, Category = "Motion Controller")
//	float PGain;
//
//	// PID controller integral argument
//	UPROPERTY(EditAnywhere, Category = "Motion Controller")
//	float IGain;
//
//	// PID controller derivative argument
//	UPROPERTY(EditAnywhere, Category = "Motion Controller")
//	float DGain;
//
//	// PID controller maximum output
//	UPROPERTY(EditAnywhere, Category = "Motion Controller")
//	float PIDMaxOutput;
//
//	// PID controller minimum output
//	UPROPERTY(EditAnywhere, Category = "Motion Controller")
//	float PIDMinOutput;
//
//	// Hand rotation controller output strength (multiply output velocity)
//	UPROPERTY(EditAnywhere, Category = "Motion Controller")
//	float RotOutStrength;
//
//	// Finger types of the hand (make sure the skeletal bone name is part of the finger name)
//	UPROPERTY(EditAnywhere, Category = "Joint Controller")
//	TArray<ERHandLimb> FingerTypes;
//
//	// Finger collision bone name (used for collision detection)
//	UPROPERTY(EditAnywhere, Category = "Joint Controller")
//	TArray<FName> CollisionBoneNames;
//
//	// Spring value to apply to the angular drive (Position strength)
//	UPROPERTY(EditAnywhere, Category = "Joint Controller")
//	float Spring;
//
//	// Damping value to apply to the angular drive (Velocity strength) 
//	UPROPERTY(EditAnywhere, Category = "Joint Controller")
//	float Damping;
//
//	// Limit of the force that the angular drive can apply
//	UPROPERTY(EditAnywhere, Category = "Joint Controller")
//	float ForceLimit;
//
//	// Initial velocity
//	UPROPERTY(EditAnywhere, Category = "Joint Controller")
//	float Velocity;
//
//	// Handles closing the hand
//	void CloseHand(const float Val);
//
//	// Attach grasped object to hand
//	void AttachToHand();
//
//	// Handles opening the left hand
//	void OpenHand(const float Val);
//
//	// Callback on collision
//	UFUNCTION()
//	void OnFingerHit(UPrimitiveComponent* SelfComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
//		FVector NormalImpulse, const FHitResult& Hit);
//
//private:
//	// Motion controller component for the hand to follow
//	UMotionControllerComponent* MCComponent;
//
	//// 3D PID controller for all axis
	//PIDController3D HandPID3D;
//
//	// Current location of the control body
//	FVector CurrLoc;
//
//	// Current rotation of the control body
//	FQuat CurrQuat;
//
//	// Control body
//	FBodyInstance* ControlBody;
//
//	// Fingers type to constraints Map
//	TMultiMap<ERHandLimb, FConstraintInstance*> FingerTypeToConstrs;
//
//	// Fingers type name to finger body (collision)
//	TMap<FName, FBodyInstance*> FingerBoneNameToBody;
//
//	// Bone name to finger type
//	TMap<FName, ERHandLimb> BoneNameToFingerTypeMap;
//
//	// Finger hit events enable flag
//	bool bFingerHitEvents;
//
//	// Store a map of components in contact with fingers,
//	// used for reasoning on what objects to attach to the hand
//	// (e.g. Cup : Index, Middle, Pinky, Thumb; Table : Palm; -> Attach Cup )
//	TMultiMap<AActor*, ERHandLimb> HitActorToFingerMMap;
//
//	// Currently grasped component (to enable/disable gravity when grasped)
//	UStaticMeshComponent* GraspedComponent;
//
//	// Player controller to apply force feedback and enable input
//	APlayerController* PC;
};
