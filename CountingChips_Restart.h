#pragma once
#include <iostream>
#include <string>

using namespace std;

bool CountingChips_Restart()
{
	string UserResponse;
	cout << endl << "Want to count the chips again?" << endl; 
	cout << "1. Yes" << endl; 
	cout << "2. No" << endl; 
	cout << "Answer please: "; 
	cin >> UserResponse;
	if (UserResponse == "1")
	{
		cout << "--------------------------------------------------" << endl;
		return true;
	}
	else if (UserResponse == "2")
	{
		cout << "End of counting minimum number of chips." << endl;
		return false;
	}
	else
	{
		cout << "Error: Enter 1 or 2" << endl;
		return CountingChips_Restart();
	}
}