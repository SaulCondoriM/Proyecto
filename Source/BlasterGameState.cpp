// Fill out your copyright notice in the Description page of Project Settings.


#include "BlasterGameState.h" 
#include "Net/UnrealNetwork.h"
#include "Blaster/PlayerState/BlasterPlayerState.h"  // Para usar getscore 
#include "Blaster/PlayerController/BlasterPlayerController.h"   // La incluimos para pasarle al hud la puntuacion del equipo

void ABlasterGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const // funcion que retorna los valores utilizadas para la replicación de red
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABlasterGameState, TopScoringPlayers); //Macro para replicar TopScoringPlayers en la red
	DOREPLIFETIME(ABlasterGameState, RedTeamScore); //Macro para replicar TopScoringPlayers en la red
	DOREPLIFETIME(ABlasterGameState, BlueTeamScore); //Macro para replicar TopScoringPlayers en la red
}

void ABlasterGameState::UpdateTopScore(class ABlasterPlayerState* ScoringPlayer) //Funcion para obtener el jugador y el puntaje mas alto
{
	if (TopScoringPlayers.Num() == 0) // Caso 1: si la lista esta vacia y tenemos que agregar al primer jugador con mas puntaje
	{
		TopScoringPlayers.Add(ScoringPlayer); // Agregamos al Tarray a nuestro jugador 
		TopScore = ScoringPlayer->GetScore(); // Obtenemos su puntaje y actualizamos nuestra variable privada con ese puntaje
	}
	else if (ScoringPlayer->GetScore() == TopScore) // Caso 2: si el puntaje de nuestro jugador es igual al puntaje mas alto
	{
		TopScoringPlayers.AddUnique(ScoringPlayer); // Agregamos a este jugador al Tarray pero con una restriccion, que no se repita el mismo jugador.
	}
	else if (ScoringPlayer->GetScore() > TopScore) // Caso 3: si el puntaje de nuestro scoringPlayer es mayor al TopScore
	{
		TopScoringPlayers.Empty();   // Vaciamos nuestra lista con jugadores 
		TopScoringPlayers.AddUnique(ScoringPlayer);  // Agregamos a este jugador al array y porseacaso le ponemos la restriccion.
		TopScore = ScoringPlayer->GetScore(); // Obtenemos su puntaje y actualizamos nuestra variable privada con ese puntaje
	}
}

void ABlasterGameState::RedTeamScores()
{
	++RedTeamScore; //Cuando se llame directamente se va a actualizar el puntaje del equipo rojo
	ABlasterPlayerController* BPlayer = Cast<ABlasterPlayerController>(GetWorld()->GetFirstPlayerController()); //hacemos un Cast a ABlasterPlayerController nos lanzara el resultado de getWorld() que es obtener el primer controlador del jugador o Null si falla la conversion.
	if (BPlayer) // Si no falla y no es null 
	{
		BPlayer->SetHUDRedTeamScore(RedTeamScore); // Le mandamos al HUD de nuestro Bplayer con el score que se a actualizado.
	}
}

void ABlasterGameState::BlueTeamScores()
{
	++BlueTeamScore; //Cuando se llame directamente se va a actualizar el puntaje del equipo azul
	ABlasterPlayerController* BPlayer = Cast<ABlasterPlayerController>(GetWorld()->GetFirstPlayerController()); //hacemos un Cast a ABlasterPlayerController nos lanzara el resultado de getWorld() que es obtener el primer controlador del jugador o Null si falla la conversion.
	if (BPlayer) // Si no falla y no es null 
	{
		BPlayer->SetHUDBlueTeamScore(BlueTeamScore); // Le mandamos al HUD de nuestro Bplayer con el score que se a actualizado.
	}
}

void ABlasterGameState::OnRep_RedTeamScore() // Funcion para replicar la variable RedTeamScore en la red, no se actualiza el valor porque la anterior funcion ya lo hizo 
{
	ABlasterPlayerController* BPlayer = Cast<ABlasterPlayerController>(GetWorld()->GetFirstPlayerController()); 
	if (BPlayer)
	{
		BPlayer->SetHUDRedTeamScore(RedTeamScore);
	}
}

void ABlasterGameState::OnRep_BlueTeamScore() // Funcion para replicar la variable BlueTeamScore en la red, no se actualiza el valor porque la anterior funcion ya lo hizo 
{
	ABlasterPlayerController* BPlayer = Cast<ABlasterPlayerController>(GetWorld()->GetFirstPlayerController());
	if (BPlayer)
	{
		BPlayer->SetHUDBlueTeamScore(BlueTeamScore);
	}
}

