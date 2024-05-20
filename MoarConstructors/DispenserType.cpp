#include "DispenserType.h"

DispenserType::DispenserType()
{
	this->typeCost = 50;
	this->numberOfItems = 50;
}

DispenserType::DispenserType(int numberOfItems, int cost)
{
	this->typeCost = cost;
	this->numberOfItems = numberOfItems;
}

int DispenserType::getNoOfItems()
{
	return this->numberOfItems;
}

int DispenserType::getCost()
{
	return this->typeCost;
}

void DispenserType::makeSale()
{
	this->numberOfItems -= 1;
}
