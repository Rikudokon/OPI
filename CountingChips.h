#pragma once
#include <iostream>

using namespace std;

int CountingChips(int NumberOfPlayers, int PlayerMaxLevel, int RedChipsLevel)
{
	int WhiteChips = (RedChipsLevel - 1) * NumberOfPlayers;
	int RedChips = (PlayerMaxLevel / RedChipsLevel) * NumberOfPlayers;
	int TotalChips = WhiteChips + RedChips;
	return TotalChips;
}

