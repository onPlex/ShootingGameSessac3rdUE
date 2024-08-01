// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyTest.generated.h"

//Blueprintable: 블루프린트에서 이클래스를 확장 가능하게함
//BlueprintType: 블루프린트에서 이클래스의 인스턴스를 변수로 사용가능
UCLASS(Blueprintable,BlueprintType)
class SHOOTINGGAME_API AMyTest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
		


	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category ="Example")
	int32 number1 =10;

	UPROPERTY(VisibleAnywhere)
	float number2 = 1.234f;

	UPROPERTY(EditInstanceOnly)
	FString myName = "YoonJH"; 

	//블루프린트로 호출가능하게 해줌
	UFUNCTION(BlueprintCallable, Category = "Example")
	void BlueprintCallableFunction();

	//블루프린트에서 순수 함수로 호출가능, 퓨어,순수 -> 상태(값)를 변경하지 않음 , ReadOnly
	UFUNCTION(BlueprintPure, Category = "Example")
	int32 GetPureFunction() const; // 이값이 상수 

	//블루프린트에서 구현(되는X) 이벤트 -> 구현 필수, 해야하는  
	// C++ 클래스와 , 블루프린트의 구조를 인터페이스 관계 쓰고싶다 
	UFUNCTION(BlueprintImplementableEvent, Category = "Example")
	void ImplementableEventFunction();

	// 블루프린트에서 C++ 기본 구현을 제공하고, 블루프린트에서 재정의 가능
	// 블루프린트에서 재정의 안하면, C++내용으로 진행
	UFUNCTION(BlueprintNativeEvent, Category = "Example")
	void NativeEventFunction();
	virtual void NativeEventFunction_Implementation();
};
