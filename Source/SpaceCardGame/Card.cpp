// Fill out your copyright notice in the Description page of Project Settings.


#include "Card.h"

// Sets default values
ACard::ACard()
{
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ACard::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("My size is %f, %f"), size.X, size.Y);
	UE_LOG(LogTemp, Warning, TEXT("My name is %s"), *name);
	
}

// Called every frame
void ACard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

