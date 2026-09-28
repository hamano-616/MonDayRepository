#pragma once
#include"Player.h"
#include"CPU.h"
#include"CardManager.h"
class Trun
{
public:
	//player'sTurn
	bool PlayPlayerTurn(Player* player, CardManager* cardManager);
	//
	void PlayCpuTurn(Player* player, CPU* cpu, CardManager* cardManager);

};

