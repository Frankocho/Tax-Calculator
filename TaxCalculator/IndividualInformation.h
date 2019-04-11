#ifndef INDIVIDUALINFORMATION_H
#define INDIVIDUALINFORMATION_H

#include <string>

using namespace std;

class Individual
{
private:
	string firstName;
	string lastName;
	char status;
	double yearlyIncome;
	int bracketSelection();
public:
	string getFirstName();
	void setFirstName(string n);

	string getLastName();
	void setLastName(string n);

	char getStatus();
	void setStatus(char n);

	double getYearlyIncome();
	void setYearlyIncome(double n);

	double salesTaxCalc(string n, double l);
	double roundTotal(double n);
	double computeTaxPay(double n);
};

