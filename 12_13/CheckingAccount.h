#pragma once
#include "Account.h"
class CheckingAccount :
    public Account
{
public:
    CheckingAccount();
    void credit();
    void debit();
private:
    double fee;
};

