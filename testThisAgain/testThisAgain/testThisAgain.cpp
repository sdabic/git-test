// testThisAgain.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "HELLO WORLD!" << endl;

	int goose = 0;

	cin >> goose;

	cout << goose*2 << endl;

	cin >> goose;

	cout << goose*100 << endl;

	cin >> goose;

	return 0;
}

