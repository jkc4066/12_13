#include "Account.h"
#include <iostream>
using namespace std;

Account::Account()
{
	double x = 0;

	cout << "Enter inital Balance: "; cin >> x; cout << endl;

	if (x < 0.0)
	{
		bal = 0.0;
		cout << "Error cannot set negative balance" << endl;
	}
	else bal = x;
}

void Account::credit()
{
	double x;
	cout << "Enter Credit:"; cin >> x; cout << endl;
	bal += x;
}

void Account::debit()
{
	double x;
	cout << "Enter Debit:"; cin >> x; cout << endl;
	if (bal - x < 0)
		cout << "Debbit amount exceeded account balance." << endl;
	else
		bal -= x;
}

double Account::getBalance()
{
	return bal;
}
