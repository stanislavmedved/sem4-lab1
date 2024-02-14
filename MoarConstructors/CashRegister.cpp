#include "CashRegister.h"

int CashRegister::getCurrentBalance()
{
    return this->cashOnHand;
}

void CashRegister::acceptAmount(int cashAmount)
{
    this->cashOnHand += cashAmount;
}

CashRegister::CashRegister()
{
    this->cashOnHand = 500;
}

CashRegister::CashRegister(int cashAmount)
{
    this->cashOnHand = cashAmount;
}
