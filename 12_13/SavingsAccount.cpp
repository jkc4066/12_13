#include "SavingsAccount.h"
#include <iostream>
using namespace std;



SavingsAccount::SavingsAccount()
{
	
	

		double x;
		cout << "Interest?"; cin >> x; cout << endl;
		if (x <= 1 && x >= .01)
			interest = x;
		else
			cout << "Invalid Interest rate";

	
}

void SavingsAccount::calculateInterest()
{
	bal = (bal * interest) + bal;
}

