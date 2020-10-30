// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "icnfrpgCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class ICNFRPG_API AicnfrpgCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AicnfrpgCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Move the character forward (value = 1) or backward (value = -1)
	void MoveForward(float Value);

	// Move the character right (value = 1) or left (value = -1)
	void MoveRight(float Value);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCameraComponent* CameraComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USpringArmComponent* SpringArmComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
