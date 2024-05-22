#pragma once
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
void InputData_Restart(int& NumberOfPlayers, int& PlayerMaxLevel, int& RedChipsLevel,  bool& InputDataSuccessfully);
int CheckInputData(string InputData);

void InputData(int& NumberOfPlayers, int& PlayerMaxLevel, int& RedChipsLevel,  bool& InputDataSuccessfully)
{
	cout << "ATTENTION! Enter only positive integers!" << endl; 
	string Input_NumberOfPlayers, Input_RedChipsLevel, Input_PlayerMaxLevel;
	cout << "Enter the number of players: "; 
	cin >> Input_NumberOfPlayers;
	NumberOfPlayers = CheckInputData(Input_NumberOfPlayers);
	if (NumberOfPlayers <= 0)
	{
		cout << "Error: Invalid input." << endl; 
		InputData_Restart(NumberOfPlayers, PlayerMaxLevel, RedChipsLevel, InputDataSuccessfully);
		return;
	}
	else
	{
		cout << "Enter the maximum player level: "; 
		cin >> Input_PlayerMaxLevel;
		PlayerMaxLevel = CheckInputData(Input_PlayerMaxLevel);
		if (PlayerMaxLevel <= 0)
		{
			cout << "Error: Invalid input." << endl; 
			InputData_Restart(NumberOfPlayers, PlayerMaxLevel, RedChipsLevel, InputDataSuccessfully);
			return;
		}
		else
		{
			cout << "Enter the level of red Chips: "; 
			cin >> Input_RedChipsLevel; 
			RedChipsLevel = CheckInputData(Input_RedChipsLevel);
			if (RedChipsLevel <= 0)
			{
				cout << "Error: Invalid input." << endl;
				InputData_Restart(NumberOfPlayers, PlayerMaxLevel, RedChipsLevel, InputDataSuccessfully);
				return;
			}
			else
				InputDataSuccessfully = true;
		}
	}
}

int CheckInputData(string InputData)
{
	int LengthInputData = InputData.length();
	bool CheckData = true;
	for (int i = 0; i < LengthInputData; i++)
		if (!isdigit(InputData.at(i)))
		{
			CheckData = false;
			break;
		}
	if (CheckData)
		return stoi(InputData);
	else
		return 0;
}

void InputData_Restart(int& NumberOfPlayers, int& PlayerMaxLevel, int& RedChipsLevel,  bool& InputDataSuccessfully)
{
	string UserResponse;
	cout << endl << "Want to start over?" << endl; 
	cout << "1. Yes" << endl; 
	cout << "2. No" << endl; 
	cout << "Answer please: "; 
	cin >> UserResponse;
	if (UserResponse == "1")
	{
		cout << "--------------------------------------------------" << endl;
		InputData(NumberOfPlayers, PlayerMaxLevel, RedChipsLevel, InputDataSuccessfully);
	}
	else if (UserResponse == "2")
		return;
	else
	{
		cout << "Error: Enter 1 or 2" << endl;
		return InputData_Restart(NumberOfPlayers, PlayerMaxLevel, RedChipsLevel, InputDataSuccessfully);
	}
}

