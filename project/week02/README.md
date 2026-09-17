---
title: Week02 Receipt (Aggregation)
---
```mermaid
classDiagram
    Receipt o-- Company : Aggregation (has-a)
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
        +Receipt(int receiptNumber, Company company)
        +~Receipt()
        +add(int quantity, Beverage beverage) void
        +print() void
    }
```
