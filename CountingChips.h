#pragma once
#include <iostream>

using namespace std;

int CountingChips(int NumberOfPlayers, int RedChipsMaxLevel, int PlayerMaxLevel) 
{
	int WhiteChips = (PlayerMaxLevel - 1) * NumberOfPlayers; 
	int RedChips = (RedChipsMaxLevel / PlayerMaxLevel) * NumberOfPlayers; 
	int TotalChips = WhiteChips + RedChips;
	return TotalChips;
}

