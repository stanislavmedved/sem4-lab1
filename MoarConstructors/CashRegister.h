#pragma once
class CashRegister {
private:
	int cashOnHand; //количество денег в кассе
public:
	CashRegister();
	CashRegister(int cashAmount);
	int getCurrentBalance(); 
	void acceptAmount(int cashAmount);
};