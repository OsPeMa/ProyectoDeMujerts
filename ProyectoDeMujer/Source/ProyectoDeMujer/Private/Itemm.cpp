// Fill out your copyright notice in the Description page of Project Settings.


#include "Itemm.h"

// Sets default values
AItemm::AItemm()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItemm::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hola mundo desde c++"));	 //log in console
	float fuerza = 100;
	FString Messages = FString::Printf(TEXT("Mi fuerza es:%f "), fuerza);
	if(GEngine) GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Magenta, Messages);
}

// Called every frame
void AItemm::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

