// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Card.generated.h"

UCLASS()
class SPACECARDGAME_API ACard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACard();

	FString name = FString(TEXT("This is my test FString."));

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FVector2D size = FVector2D(400, 200);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
