// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"


#include "BaseGeometryActor.generated.h"

UCLASS()
class GEOMETRYSANDBOX2_API ABaseGeometryActor : public AActor
{
	GENERATED_BODY()
	
public:	

	ABaseGeometryActor();


	virtual void Tick(float DeltaTime) override;

protected:

	virtual void BeginPlay() override;

private:

	void PrintTypes();
	void PrintMessages();

};
