#include <iostream>
#include <string>
#include <cstring>
#include "CheckInputData.h"
#include "CountingChips.h"
#include "CountingChips_Restart.h"

using namespace std;

int main() 
{
	int NumberOfPlayers, RedChipsMaxLevel, PlayerMaxLevel;
	bool NewCounter;
	do
	{
		bool InputNumbersSuccessfully = false;
		InputData(NumberOfPlayers, RedChipsMaxLevel, PlayerMaxLevel, InputNumbersSuccessfully);
		if (InputNumbersSuccessfully) 
		{
			cout << "The minimum number of Chips that must be prepared for the game: " << CountingChips(NumberOfPlayers, RedChipsMaxLevel, PlayerMaxLevel) << endl;
			NewCounter = CountingChips_Restart();
		}
		else 
		{
			cout << "End of counting minimum number of chips." << endl; 
			NewCounter = false;
		}
	} while (NewCounter);
	return 0;
}



