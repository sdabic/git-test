// testThisAgain.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void printSaying(){

	cout << "Hungers the goose!" << endl;

}

void printNewSaying(){

	cout << "Gobblers the Goose on the Loose!" << endl;

}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "HELLO WORLD!" << endl;

	int goose = 0;

	cin >> goose;

	cout << goose*2 << endl;

	cin >> goose;

	cout << goose*100 << endl;

	printSaying();
	printNewSaying();

	cin >> goose;

	return 0;
}

