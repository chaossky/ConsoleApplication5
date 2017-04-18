#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int numberOfLanguages;

	cout << "Hello Reader\n" 
		<< "Welcome to C++\n";

	cout << "How many languages did you know?";

	cin >> numberOfLanguages;

	if (numberOfLanguages > 1)
		cout << "Keep Going!!!!\n ";
	else
		cout << "Study Hard\n";
    return 0;
}

