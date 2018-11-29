// Fill out your copyright notice in the Description page of Project Settings.

#include "Picker.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "FP_FirstPersonCharacter.h"


// Sets default values

APicker::APicker()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	auto Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	//SetRootComponent(Root);
	RootComponent = Root;
	RootComponent->bEditableWhenInherited = true;



	PickerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickerMesh"));
	PickerMesh->bEditableWhenInherited = true;

	

}

// Called when the game starts or when spawned
void APicker::BeginPlay()
{
	Super::BeginPlay();

	auto Player = GetWorld()->GetFirstPlayerController()->GetCharacter();
	//AttachToComponent

	//this->AttachToActor(Player, FAttachmentTransformRules::SnapToTargetIncludingScale, FName("GripPoint"));
}

// Called every frame
void APicker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

