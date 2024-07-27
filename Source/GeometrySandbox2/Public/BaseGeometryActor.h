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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
	int32 WeaponsNum = 4;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Weapon")
	bool HasWeapon = true;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Health")
	float Health = 40.1444f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	bool IsDead = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Stats")
	int32 KillsNum = 12;

	virtual void BeginPlay() override;

private:

	void PrintTypes();
	void PrintMessages();

};
