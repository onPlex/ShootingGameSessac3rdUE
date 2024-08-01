// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTest.h"

// Sets default values
AMyTest::AMyTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyTest::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning , TEXT("number1 : %d"), number1);
}

// Called every frame
void AMyTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Warning, TEXT("number1 : %d"), number1);
}

void AMyTest::BlueprintCallableFunction()
{
	UE_LOG(LogTemp, Warning, TEXT("BlueprintCallableFunction called!"));
}

int32 AMyTest::GetPureFunction() const
{
	return 9999;
}

void AMyTest::NativeEventFunction_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("NativeEventFunction_Implementation called"));
}

