#include "receipt.h"

Receipt::Receipt(int receiptNumber, Company company) : receiptNumber(receiptNumber), company(company), receiptTotal(0)
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
	company.print();
	cout << "Receipt Num: " << receiptNumber << endl;
	cout << "Total Price: " << receiptTotal << endl;
}