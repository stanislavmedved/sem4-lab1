#pragma once
class DispenserType {
private:
	int numberOfItems;
	int cost;
public:
	DispenserType();
	DispenserType(int itemsAmount, int itemCost);
	int getNoOfItems();
	int getCost();
	void makeSale();
};