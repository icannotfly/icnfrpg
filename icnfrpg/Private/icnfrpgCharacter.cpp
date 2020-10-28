// Fill out your copyright notice in the Description page of Project Settings.


#include "icnfrpgCharacter.h"

// Sets default values
AicnfrpgCharacter::AicnfrpgCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AicnfrpgCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AicnfrpgCharacter::MoveForward(float Value)
{
	AddMovementInput(GetActorForwardVector() * Value);
}

void AicnfrpgCharacter::MoveRight(float Value)
{
	AddMovementInput(GetActorRightVector() * Value);
}

// Called every frame
void AicnfrpgCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AicnfrpgCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AicnfrpgCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AicnfrpgCharacter::MoveRight);

	PlayerInputComponent->BindAxis("LookUp", this, &AicnfrpgCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &AicnfrpgCharacter::AddControllerYawInput);
}

