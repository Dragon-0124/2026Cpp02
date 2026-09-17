---
title: Week02 Receipt (Dependency)
---
```mermaid
classDiagram
    Receipt *-- Company : Dependency (use-a)
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
        +Receipt(int receiptNumber)
        +~Receipt()
        +add(int quantity, Beverage beverage) void
        +print(Company company) void
    }
```
