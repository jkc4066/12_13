#pragma once
class Account
{
public:
	Account();
	virtual void credit();
	virtual void debit();
	double getBalance();

	double bal;

};

