// guessinggame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int chosen = 0;

	int through = 100;
	cout << "chose a random number" << endl;
	srand(time(0));
	cout << "chose max number." << endl;
	cin >> through;
	int number = 1 + (rand() % through);
	cout << "chose a number to guess" << endl;
	cin >> chosen;
	if (chosen == number) {
		cout << "you win" << endl;
		cout << number << endl;
	};
	if (chosen != number) {
		cout << "you lost" << endl;
		cout << number << endl;


	};








    return 0;
}

