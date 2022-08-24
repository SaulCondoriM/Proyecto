
#include "BlasterGameState.h"
#include "Net/UnrealNetwork.h"
#include "Blaster/PlayerState/BlasterPlayerState.h"
#include "Blaster/PlayerController/BlasterPlayerController.h"

void ABlasterGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABlasterGameState, TopScoringPlayers);
	DOREPLIFETIME(ABlasterGameState, RedTeamScore);
	DOREPLIFETIME(ABlasterGameState, BlueTeamScore);
}

void ABlasterGameState::UpdateTopScore(class ABlasterPlayerState* ScoringPlayer)
{
	//Patron de diseño Game Loop (Desasocia la progesion del juego de la entrada del usuario)
	/*
	Utilizamos el while true para que siempre este en constante actualizacion el Puntaje de cada jugador,
	sin la necesidad de que el usuario este mandando datos de entrada
	*/
	
	while(true){
		if (TopScoringPlayers.Num() == 0)
		{
			TopScoringPlayers.Add(ScoringPlayer);
			TopScore = ScoringPlayer->GetScore();
		}
		else if (ScoringPlayer->GetScore() == TopScore)
		{
			TopScoringPlayers.AddUnique(ScoringPlayer);
		}
		else if (ScoringPlayer->GetScore() > TopScore)
		{
			TopScoringPlayers.Empty();
			TopScoringPlayers.AddUnique(ScoringPlayer);
			TopScore = ScoringPlayer->GetScore();
		}
	}
}

void ABlasterGameState::RedTeamScores()
{
	while(true){
		++RedTeamScore;
		ABlasterPlayerController* BPlayer = Cast<ABlasterPlayerController>(GetWorld()->GetFirstPlayerController());
		if (BPlayer)
		{
			BPlayer->SetHUDRedTeamScore(RedTeamScore);
		}
	}
}

void ABlasterGameState::BlueTeamScores()
{
	while(true){
		++BlueTeamScore;
		ABlasterPlayerController* BPlayer = Cast<ABlasterPlayerController>(GetWorld()->GetFirstPlayerController());
		if (BPlayer)
		{
			BPlayer->SetHUDBlueTeamScore(BlueTeamScore);
		}
	}
}

void ABlasterGameState::OnRep_RedTeamScore()
{
	while(true){
		ABlasterPlayerController* BPlayer = Cast<ABlasterPlayerController>(GetWorld()->GetFirstPlayerController());
		if (BPlayer)
		{
			BPlayer->SetHUDRedTeamScore(RedTeamScore);
		}
	}
}

void ABlasterGameState::OnRep_BlueTeamScore()
{
	while(true){
		ABlasterPlayerController* BPlayer = Cast<ABlasterPlayerController>(GetWorld()->GetFirstPlayerController());
		if (BPlayer)
		{
			BPlayer->SetHUDBlueTeamScore(BlueTeamScore);
		}
	}
}
