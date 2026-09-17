---
title: Week02 Receipt (Composition)
---
```mermaid
classDiagram
    Receipt *-- Company : Composition (has-a)
    Receipt ..> Beverage : Dependency (use-a)

    class Company {
        -string name
        -string tel
        +Company(string name, string tel)
        +~Company()
        +print() void
    }

    class Beverage {
        -string name
        -int unitPrice
        +Beverage(string name, int unitPrice)
        +~Beverage()
        +getPrice() int
    }
    
    class Receipt {
        -int receiptNumber
        -int receiptTotal
        -Company company
        +Receipt(int receiptNumber, string companyName, string companyTel)
        +~Receipt()
        +add(int quantity, Beverage beverage) void
        +print() void
    }
```
