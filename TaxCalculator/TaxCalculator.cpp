// TaxCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "IndividualInformation.h"

using namespace std;


int main()
{
	string state = "";
	int option = 0;
	double amount = 0.0;
	double total = 0.0;

	cout << "Welcome to the Sales/Income Tax Calculator" << endl;
	cout << "Choose your option: (1) Sales Tax   (2) Income Tax" << endl;
	cin >> option;

	if (option == 1)
	{
		cout << "What state are you making the purchase?" << endl;
		cin >> state;
		cout << "What is the amount of your purchase?" << endl;
		cin >> amount;
	}
	else if (option == 2)
	{
		cout << "What is your first name?" << endl;
		cout << "What is your last name?" << endl;
		cout << "What is your marital status?" << endl;
	}

	cout << "The total amount of your purchase is: $" << round(total) << endl;
}