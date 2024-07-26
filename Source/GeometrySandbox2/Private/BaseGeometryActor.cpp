// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGeometryActor.h"
#include "Engine/Engine.h"

DEFINE_LOG_CATEGORY_STATIC(LogBaseGeometry, All, All);

// Sets default values
ABaseGeometryActor::ABaseGeometryActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}


void ABaseGeometryActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called when the game starts or when spawned
void ABaseGeometryActor::BeginPlay()
{
	Super::BeginPlay();
	

	PrintMessages();
	//PrintTypes();
}

void ABaseGeometryActor::PrintTypes()
{
	UE_LOG(LogTemp, Display, TEXT("Hello, Unreal Engine!"));
	UE_LOG(LogTemp, Warning, TEXT("Hello, Unreal Engine!"));
	UE_LOG(LogTemp, Error, TEXT("Hello, Unreal Engine!"));

	int WeaponsNum = 4;
	int KillsNum = 12;
	float Health = 40.1444f;
	bool IsDead = false;
	bool HasWeapon = true;

	UE_LOG(LogTemp, Display, TEXT("Weapons number = %d, kills number = %i"), WeaponsNum, KillsNum);
	UE_LOG(LogTemp, Display, TEXT("Health (full) = %f"), Health);
	UE_LOG(LogTemp, Display, TEXT("Health = %.2f"), Health);
	UE_LOG(LogTemp, Display, TEXT("Is player alive: %d"), !IsDead);
	UE_LOG(LogTemp, Display, TEXT("Is player dead: %i"), IsDead);
	UE_LOG(LogTemp, Display, TEXT("Has weapon: %d"), static_cast<int>(HasWeapon));
}

void ABaseGeometryActor::PrintMessages()
{
	FString Name = "John Connor";

	int WeaponsNum = 4;
	float Health = 40.1444f;
	bool IsDead = false;

	FString WeaponNumStr = "Weapons number: " + FString::FromInt(WeaponsNum);
	FString HealthStr = "Health = " + FString::SanitizeFloat(Health);
	FString IsDeadStr = "Is Dead = " + FString(IsDead ? "True" : "False");

	FString Stat = FString::Printf(TEXT("\n== All Stat ==\n %s\n %s\n %s"), *WeaponNumStr, *HealthStr, *IsDeadStr);

	UE_LOG(LogBaseGeometry, Warning, TEXT("Name: %s"), *Name);
	UE_LOG(LogBaseGeometry, Warning, TEXT("%s"), *Stat);

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Black, Name);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, Stat, true, FVector2D(1.2f, 1.2f));
}