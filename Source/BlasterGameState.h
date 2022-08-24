// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "BlasterGameState.generated.h"
#include "Blaster/PlayerState/BlasterPlayerState.h"
/**
 * 
 */
UCLASS()

class BLASTER_API ABlasterGameState : public AGameState // Clase derivada de AGameState
{
	GENERATED_BODY()
public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; // funcion que deriva de Aactor. Retorna los valores utilizadas para la replicación de red
	void UpdateTopScore(class ABlasterPlayerState* ScoringPlayer); //Funcion para obtener el jugador y el puntaje mas alto

	UPROPERTY(Replicated)
	TArray<ABlasterPlayerState*> TopScoringPlayers; // Templates de arrays dinamicos que guardara es este caso el estado de 1 jugador con el puntaje mas alto

	/** 
	* Teams
	*/

	void RedTeamScores(); // Funcion para capturar el puntaje del equipo rojo y enviarlo al HUD
	void BlueTeamScores(); // Funcion para capturar el puntaje del equipo azul y enviarlo al HUD

	TArray<ABlasterPlayerState*> RedTeam;	// Templates de arrays dinamicos que guardara es este caso el estado del equipo Rojo
	TArray<ABlasterPlayerState*> BlueTeam;	// Templates de arrays dinamicos que guardara es este caso el estado del equipo Azul

	UPROPERTY(ReplicatedUsing = OnRep_RedTeamScore)
	float RedTeamScore = 0.f; //Variable local que guarda el puntaje del equipo rojo

	UPROPERTY(ReplicatedUsing = OnRep_BlueTeamScore)
	float BlueTeamScore = 0.f; //Variable local que guarda el puntaje del equipo azul

	UFUNCTION()
	void OnRep_RedTeamScore(); //Funcion para replicar en la red nuestra variable RedTeamScore

	UFUNCTION()
	void OnRep_BlueTeamScore(); //Funcion para replicar en la red nuestra variable BlueTeamScore

private:

	float TopScore = 0.f; //Variable privada que guarda el puntaje mas alto en general para el Todos contra Todos
};
