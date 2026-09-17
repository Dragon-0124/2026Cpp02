#pragma once
#include "beverage.h"
#include "company.h"

class Receipt {
private:
    int receiptNumber;
    int receiptTotal;
    Company company;
public:
    Receipt(int receiptNumber, string companyName, string companyTel);
    ~Receipt();
    void add(int quantity, Beverage beverage);
    void print() const;
};