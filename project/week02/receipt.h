#pragma once
#include "beverage.h"

class Receipt
{
private:
    int receiptNumber;
    int receiptTotal;
public:
    Receipt(int receiptNumber);
    ~Receipt();
    void add(int quantity, Beverage beverage);  // use-a, dependency
    void print() const;
};