#include "DispenserType.h"

DispenserType::DispenserType()
{
	this->cost = 50;
	this->numberOfItems = 50;
}

DispenserType::DispenserType(int numberOfItems, int cost)
{
	this->cost = cost;
	this->numberOfItems = numberOfItems;
}

int DispenserType::getNoOfItems()
{
	return this->numberOfItems;
}

int DispenserType::getCost()
{
	return this->cost;
}

void DispenserType::makeSale()
{
	this->numberOfItems -= 1;
}
