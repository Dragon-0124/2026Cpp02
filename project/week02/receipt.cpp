#include "receipt.h"
Receipt::Receipt(int receiptNumber) : receiptNumber(receiptNumber), receiptTotal(0)
{
}
Receipt::~Receipt()
{
}
void Receipt::add(int quantity, Beverage beverage)  // use-a
{
	receiptTotal += quantity * beverage.getPrice();
}
void Receipt::print() const
{
	cout << "¿µ¼öÁõ ¹øÈ£: " << receiptNumber << endl;
	cout << "ÃÑ ±Ý¾×: " << receiptTotal << endl;
}