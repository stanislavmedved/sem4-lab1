#pragma once
class CashRegister {
private:
	int cashOnHand; //количество денег в кассе
public:
	int getCurrentBalance(); 
	void acceptAmount(int cashAmount);
	CashRegister();
	CashRegister(int cashAmount);
};