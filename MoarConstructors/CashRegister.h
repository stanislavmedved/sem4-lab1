#pragma once
class CashRegister {
private:
	int cashOnHand; //���������� ����� � �����
public:
	int getCurrentBalance(); 
	void acceptAmount(int cashAmount);
	CashRegister();
	CashRegister(int cashAmount);
};