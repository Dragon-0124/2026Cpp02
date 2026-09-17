#include "receipt.h"
Receipt::Receipt(int receiptNumber) : receiptNumber(receiptNumber), receiptTotal(0) {}
Receipt::~Receipt()
{
}
void Receipt::add(int quantity, Beverage beverage)
{
	receiptTotal += quantity * beverage.getPrice();
}
void Receipt::print(const Company& company) const {
    company.print();
    cout << "Receipt Num: " << receiptNumber << endl;
    cout << "Total Price: " << receiptTotal << endl;
}	