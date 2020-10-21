// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/SceneComponent.h"
#include "TimerManager.h"
#include "Math/RotationMatrix.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/SplineComponent.h"
#include "AnimActor.generated.h"


USTRUCT(Blueprintable)
struct FRotateAnimations {
	GENERATED_USTRUCT_BODY()

		

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimatedComponents")
		bool RotateAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimatedComponents")
		FVector RotationVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimatedComponents")
		FName RotateAroundComponent;

	UPROPERTY()
		USceneComponent * RotateAround;

	
	FRotateAnimations() {
		
		RotateAnimation = false;
		RotationVector = FVector(0.0f, 0.0f, 0.0f);
		RotateAround = nullptr;
	}

};

USTRUCT(Blueprintable)
struct FLocationAnimations {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimatedComponents")
		bool LocationAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimatedComponents")
		bool Reverse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimatedComponents")
		FVector StartLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimatedComponents")
		FVector EndLocation;



	UPROPERTY()
		FVector delta;

	UPROPERTY()
		bool isReversing;

	FLocationAnimations() {
		
		LocationAnimation = false;
		isReversing = false;
		StartLocation = FVector(0.0f, 0.0f, 0.0f);
		EndLocation = FVector(0.0f, 0.0f, 0.0f);
		delta = FVector(0.0f, 0.0f, 0.0f);
		
	}

};

USTRUCT(Blueprintable)
struct FSplineMovement {
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimatedComponents")
		FName SplineComponentName;

	   UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimatedComponents")
		bool SplineMovement;

	   UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimatedComponents")
	   float Speed;

	   UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimatedComponents")
		   float MaxSpeed;


	   UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimatedComponents")
	   bool Reverse;

	   UPROPERTY()
		   USplineComponent* spline;

	   UPROPERTY()
		   float distance;


	   UPROPERTY()
		   float dt;

	   UPROPERTY()
		   bool isReversing;

	   UPROPERTY()
		   float p_speed;

	   FSplineMovement() {
		   SplineMovement = false;
		   isReversing = false;
		   SplineComponentName = "";
		   spline = nullptr;
		   distance = 0.0f;
		   Speed = 600.0f;
		   dt = 0.0f;
		   MaxSpeed = 0.0f;
	   }

};


USTRUCT(Blueprintable)
struct FAnimatedComponents {
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimatedComponents")
		FName ComponentName;

	    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimatedComponents")
		float TickSpeed;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimatedComponents")
			FLocationAnimations LocationAnimation;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimatedComponents")
			FRotateAnimations RotationAnimation;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimatedComponents")
			FSplineMovement SplineMovement;

	UPROPERTY()
		FTimerHandle TimerHandle;

	FAnimatedComponents() {
		ComponentName = "";
		TickSpeed = 0.05f;
	}

};


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAnimActorAnimTickSignature, USceneComponent *, Scene_component, int32, AnimComponentIndex);
DECLARE_DYNAMIC_DELEGATE(FAnimOverride);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ANIMATEDACTOR_API UAnimActor : public UActorComponent
{
	GENERATED_BODY()

public:	

	UAnimActor();

protected:

	virtual void BeginPlay() override;

private:

	USceneComponent* FindSceneComponentByName(FName ComponentName);

public:	

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintNativeEvent, Category = "Animation")
	void AnimTick(USceneComponent * sc, int32 AnimComponent);
	virtual void  AnimTick_Implementation(USceneComponent * sc, int32 AnimComponent);

	UPROPERTY(BlueprintAssignable, Category = "Components")
		FAnimActorAnimTickSignature OnAnimTick;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimatedComponents")
		TArray<FAnimatedComponents> AnimatedComponents;

	
	UFUNCTION(BlueprintCallable)
		void StartStopAnim(bool Start, int32 AnimationIndex);

	UFUNCTION(BlueprintCallable)
		void StopAnimations();

	UFUNCTION(BlueprintCallable, Category = "AnimatedComponents")
		void SetAnimCallBack(const FAnimOverride& AnimCallback, int32 AnimationIndex);
	
};
