#pragma once
class CashRegister {
private:
	int cashOnHand; //���������� ����� � �����
public:
	CashRegister();
	CashRegister(int cashAmount);
	int getCurrentBalance(); 
	void acceptAmount(int cashAmount);
};