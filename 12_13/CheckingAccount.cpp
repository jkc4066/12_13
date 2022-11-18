#include "CheckingAccount.h"
#include <iostream>
using namespace std;

CheckingAccount::CheckingAccount()
{
	double x;
	cout << "Checking Fee?"; cin >> x; cout << endl;
	fee = x;
}

void CheckingAccount::credit()
{
	Account::credit();
	bal -= fee;

}

void CheckingAccount::debit()
{
	double x = bal;
	Account::debit();
	if (x != bal)
		bal -= fee;
}
