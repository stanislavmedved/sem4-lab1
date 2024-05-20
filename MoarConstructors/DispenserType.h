#pragma once
class DispenserType {
private:
	int numberOfItems;
	int typeCost;
public:
	DispenserType();
	DispenserType(int itemsAmount, int itemCost);
	int getNoOfItems();
	int getCost();
	void makeSale();
};