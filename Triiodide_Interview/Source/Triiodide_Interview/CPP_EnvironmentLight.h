// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/PointLightComponent.h"
#include "Components/TimelineComponent.h"
#include "Components/AudioComponent.h"
#include "CPP_EnvironmentLight.generated.h"

UCLASS()
class TRIIODIDE_INTERVIEW_API ACPP_EnvironmentLight : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_EnvironmentLight();

#pragma region Components
	
	//The actual point light
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UPointLightComponent* Light;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UAudioComponent* AudioComp;

#pragma endregion Components

#pragma region Flicker

	//The time between flicker checks
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float FlickerCheckTime;

	//This is multiplied by LightIntensity to determine how dark the flicker should go
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float FlickerMinMultiplier;

	//How likely a light is to flicker, on a 0 to 1 scale
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float FlickerChance;

#pragma endregion Flicker

	//The intensity of the light, used in the flicker
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LightIntensity;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	

public:	

	//Try to flicker
	UFUNCTION()
	void FlickerCheck();

	//Blueprint native event for easier customizability
	UFUNCTION(BlueprintImplementableEvent)
	void Flicker();
	
};
