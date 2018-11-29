// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Picker.generated.h"

class UStaticMeshComponent;
class UCapsuleComponent;
class APawn;

UCLASS()
class UNREALPROJECT_API APicker : public AActor
{
	GENERATED_BODY()

	
public:	
	// Sets default values for this actor's properties
	APicker();

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Mesh)
	UStaticMeshComponent* PickerMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
