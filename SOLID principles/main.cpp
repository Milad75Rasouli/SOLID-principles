#include <iostream>
#include "Logger.hpp"

/*
*   SOLID
*   =========================
*   S - SRP - Single Responsibility Principle = A class should have one, and only one, reson to change.
*   O - OCP - Open/Closed Principle = Entities should be open for extension, but closed for modification. Uncle Bob says:
*   L - LCP - Liskov Substitution Principle
*   I - ISP - Interface Segregation Principle
*   D - DTP - Dependency Inversion Principle
*/

class Receipt 
{

};

class Payment
{
public:
    auto begin(Receipt receipt)->void 
    {
        this->acceptCash(receipt);
    }

    auto acceptCash(Receipt& receipt)->void
    {
        // accept the cash.
    }
    auto card(Receipt& receipt)->void
    {
        // accept the cash.
    }
    auto paypal(Receipt& receipt)->void
    {
        // accept the cash.
    }

};

int main()
{
    std::cout << "Hello World!\n";
}
