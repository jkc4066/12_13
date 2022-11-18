#include<iostream>
#include<vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

using namespace std;

int main()
{
	vector <Account *> accounts;
	SavingsAccount Acc1;
	CheckingAccount Acc2;
	SavingsAccount Acc3;
	CheckingAccount Acc4;


	accounts.push_back(&Acc1);
	accounts.push_back(&Acc2);
	accounts.push_back(&Acc3);
	accounts.push_back(&Acc4);

	for (int i = 0; i < accounts.size(); i++)
	{
		accounts[i]->debit();
		accounts[i]->credit();
		SavingsAccount* ptr = dynamic_cast<SavingsAccount*>(accounts[i]);
		if (ptr)
		{
			ptr->calculateInterest();
		}
		
		cout << accounts[i]->getBalance() << endl;
	
	}


	return 0;
}
