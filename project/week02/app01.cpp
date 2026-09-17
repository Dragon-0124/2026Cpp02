#include "receipt.h"
#include "company.h"

int main() {
    Beverage beverage1("Americano", 2000);
    Beverage beverage2("Cafe Latte", 3000);
    Company daelimDabang("Daelim Cafe", "031-1234-5678");

    Receipt receipt(1000);
    
    receipt.add(2, beverage1);
    receipt.add(4, beverage2);
    receipt.print(daelimDabang);
    return 0;
}