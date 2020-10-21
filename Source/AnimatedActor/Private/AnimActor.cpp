// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimActor.h"



UAnimActor::UAnimActor()
{
	PrimaryComponentTick.bCanEverTick = false;

}

USceneComponent* UAnimActor::FindSceneComponentByName(FName ComponentName) {
	TArray< USceneComponent * > cmps = GetOwner()->GetRootComponent()->GetAttachChildren();
	USceneComponent* res = nullptr;
	for (int32 b = 0; b < cmps.Num(); b++)
		if (ComponentName.ToString() == cmps[b]->GetName()) {
			res = cmps[b];
			break;
		}

	return res;
}


void UAnimActor::BeginPlay()
{
	Super::BeginPlay();
	AActor* Own = GetOwner();

	USceneComponent *  root = Own->GetRootComponent();



	TArray< USceneComponent * > cmps = root->GetAttachChildren();
	cmps.Add(root);

	for (int32 b = 0; b < cmps.Num(); b++)
	{

		for (int32 c = 0; c < AnimatedComponents.Num(); c++)
		{
			if (AnimatedComponents[c].ComponentName.ToString() == cmps[b]->GetName()) {

				int32 cint = c;
				FTimerDelegate TimerDel;
				FTimerHandle TimerHandle;
				TimerDel.BindUFunction(this, FName("AnimTick"), cmps[b], cint);
				FAnimatedComponents ac = AnimatedComponents[c];

				if (AnimatedComponents[c].SplineMovement.SplineMovement) {

					USplineComponent* cspline = Cast<USplineComponent>(FindSceneComponentByName(AnimatedComponents[c].SplineMovement.SplineComponentName));
					ac.SplineMovement.spline = cspline;
					ac.SplineMovement.p_speed = ac.SplineMovement.Speed;
						
				}

				if (AnimatedComponents[c].RotationAnimation.RotateAnimation && !AnimatedComponents[c].RotationAnimation.RotateAroundComponent.ToString().IsEmpty()) {

					USceneComponent * caround = FindSceneComponentByName(AnimatedComponents[c].RotationAnimation.RotateAroundComponent);
					
						
						ac.RotationAnimation.RotateAround = caround;
							
				}



				if (AnimatedComponents[c].LocationAnimation.LocationAnimation) {

					if (AnimatedComponents[c].LocationAnimation.StartLocation.Size() != 0)
						cmps[b]->SetRelativeLocation(AnimatedComponents[c].LocationAnimation.StartLocation);
					else {
						
						ac.LocationAnimation.StartLocation = cmps[b]->GetRelativeTransform().GetLocation();
						

					}

					ac.LocationAnimation.delta = (ac.LocationAnimation.EndLocation - ac.LocationAnimation.StartLocation) / (AnimatedComponents[c].TickSpeed*1000.0f);
				}

		

				GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDel, AnimatedComponents[c].TickSpeed, true);

				
				ac.TimerHandle = TimerHandle;
				AnimatedComponents[c] = ac;

			}
		}

	}
	
}


void UAnimActor::StartStopAnim(bool Start, int32 AnimationIndex) {
	if (AnimationIndex < AnimatedComponents.Num()) {
		FAnimatedComponents ac = AnimatedComponents[AnimationIndex];

		if (GetWorld()->GetTimerManager().TimerExists(ac.TimerHandle)) {
			if (Start) {
				GetWorld()->GetTimerManager().UnPauseTimer(ac.TimerHandle);
			}
			else {
				GetWorld()->GetTimerManager().PauseTimer(ac.TimerHandle);
			}
		}
	}
}

void UAnimActor::StopAnimations() {
	for (int32 c = 0; c < AnimatedComponents.Num(); c++)
	{
		StartStopAnim(false, c);
	}
}

void UAnimActor::SetAnimCallBack(const FAnimOverride& AnimCallback, int32 AnimationIndex) {
	if (AnimationIndex < AnimatedComponents.Num()) {
		FAnimatedComponents ac = AnimatedComponents[AnimationIndex];
		if (GetWorld()->GetTimerManager().TimerExists(ac.TimerHandle)) 
			GetWorld()->GetTimerManager().ClearTimer(ac.TimerHandle);
		
		

		FTimerHandle TimerHandle;
	
		FTimerDelegate TimerCallback;
		TimerCallback.BindLambda([AnimCallback]
		{
			AnimCallback.ExecuteIfBound(); 
		});
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerCallback, ac.TickSpeed, true);
		

		ac.TimerHandle = TimerHandle;
		AnimatedComponents[AnimationIndex] = ac;

	}
}


void UAnimActor::AnimTick_Implementation(USceneComponent * sc, int32 AnimComponent) {

	FAnimatedComponents ac = AnimatedComponents[AnimComponent];

	OnAnimTick.Broadcast(sc, AnimComponent);

	if (ac.SplineMovement.SplineMovement && ac.SplineMovement.spline != nullptr) {

		
		
		float gtime = UKismetSystemLibrary::GetGameTimeInSeconds(GetWorld())+ac.TickSpeed-ac.SplineMovement.dt;

		if (ac.SplineMovement.isReversing == true) {
			gtime = ac.SplineMovement.dt - ac.TickSpeed-(UKismetSystemLibrary::GetGameTimeInSeconds(GetWorld())- ac.SplineMovement.dt);
		}

		ac.SplineMovement.distance = gtime*ac.SplineMovement.Speed;

		
		if (ac.SplineMovement.isReversing == false) {

			if (ac.SplineMovement.distance > ac.SplineMovement.spline->GetDistanceAlongSplineAtSplinePoint(ac.SplineMovement.spline->GetNumberOfSplinePoints()-1)) {
				
				ac.SplineMovement.dt = UKismetSystemLibrary::GetGameTimeInSeconds(GetWorld());

				if (!ac.SplineMovement.Reverse) {
					
					ac.SplineMovement.distance = 0.0f;
					ac.SplineMovement.Speed = ac.SplineMovement.p_speed;
				}
				else {
					ac.SplineMovement.isReversing = true;
					ac.SplineMovement.Speed = ac.SplineMovement.p_speed;
				}
			}
			

		}

		if (ac.SplineMovement.isReversing == true) 
			if (ac.SplineMovement.distance <= 0.0f) {
				ac.SplineMovement.isReversing = false;
				ac.SplineMovement.Speed = ac.SplineMovement.p_speed;
				ac.SplineMovement.dt = UKismetSystemLibrary::GetGameTimeInSeconds(GetWorld());

		}



		AnimatedComponents[AnimComponent] = ac;

		FVector new_location = ac.SplineMovement.spline->GetLocationAtDistanceAlongSpline(ac.SplineMovement.distance, ESplineCoordinateSpace::World);


		sc->SetWorldLocation(new_location);
	}


	if (ac.RotationAnimation.RotateAnimation && ac.RotationAnimation.RotationVector.Size() != 0) {

		if (ac.RotationAnimation.RotateAround != nullptr) {

			FVector norm= sc->GetComponentLocation() - ac.RotationAnimation.RotateAround->GetComponentLocation();
			
			FVector axis = norm.GetSafeNormal();

			float distance = norm.Size();
			FRotationMatrix RMatrix(FRotator(ac.RotationAnimation.RotationVector.X, ac.RotationAnimation.RotationVector.Y, ac.RotationAnimation.RotationVector.Z));

			FVector new_location = ac.RotationAnimation.RotateAround->GetComponentLocation()+RMatrix.TransformVector(axis)*distance;

			sc->SetWorldLocation(new_location);

			
		}
		else 
		sc->AddLocalRotation(FRotator(ac.RotationAnimation.RotationVector.X, ac.RotationAnimation.RotationVector.Y, ac.RotationAnimation.RotationVector.Z));


	}

	if (ac.LocationAnimation.LocationAnimation) {

		sc->AddLocalOffset(ac.LocationAnimation.delta);

		if (ac.LocationAnimation.isReversing == false) {

			if (((sc->GetRelativeTransform().GetLocation() - ac.LocationAnimation.EndLocation).Size() <= ac.LocationAnimation.delta.Size())) {

				if (!ac.LocationAnimation.Reverse)
					sc->SetRelativeLocation(ac.LocationAnimation.StartLocation);
				else {

					ac.LocationAnimation.isReversing = true;
					ac.LocationAnimation.delta = FVector(ac.LocationAnimation.delta.X*(-1), ac.LocationAnimation.delta.Y*(-1), ac.LocationAnimation.delta.Z*(-1));
					AnimatedComponents[AnimComponent] = ac;

				}

			}
		}

		if (ac.LocationAnimation.isReversing == true) {

			if (((sc->GetRelativeTransform().GetLocation() - ac.LocationAnimation.StartLocation).Size() <= ac.LocationAnimation.delta.Size())) {
				ac.LocationAnimation.isReversing = false;
				ac.LocationAnimation.delta = FVector(ac.LocationAnimation.delta.X*(-1), ac.LocationAnimation.delta.Y*(-1), ac.LocationAnimation.delta.Z*(-1));
				AnimatedComponents[AnimComponent] = ac;
			}

		}


	}


}



void UAnimActor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

