#pragma once
#include "beverage.h"
#include "company.h"

class Receipt
{
private:
    int receiptNumber;
    int receiptTotal;
    Company company; // has-a 
public:
    Receipt(int receiptNumber, Company company); // aggregation
    ~Receipt();
    void add(int quantity, Beverage beverage);  // use-a, dependency
    void print() const;
};