#pragma once
#include "beverage.h"
#include "company.h"

class Receipt {
private:
    int receiptNumber;
    int receiptTotal;

public:
    Receipt(int receiptNumber);
    ~Receipt();
    void add(int quantity, Beverage beverage);
    void print(const Company& company) const;
};