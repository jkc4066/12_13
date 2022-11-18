#pragma once
#include "Account.h"
class SavingsAccount :
    public Account
{
public:
    SavingsAccount();
    void calculateInterest();

private:
    double interest;
    
};

