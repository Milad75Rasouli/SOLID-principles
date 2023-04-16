#include <iostream>
#include "Logger.hpp"

/*
*   SOLID
*   =========================
*   S - SRP - Single Responsibility Principle = A class should have one, and only one, reson to change.
*   O - OCP - Open/Closed Principle = Entities should be open for extension, but closed for modification.
*   L - LCP - Liskov Substitution Principle
*   I - ISP - Interface Segregation Principle
*   D - DTP - Dependency Inversion Principle
*/

class Receipt 
{

};

// Contract
class PaymentInterface {
public:
    virtual auto acceptPayment() -> void = 0;
};

class BitcoinPaymentMethod :public PaymentInterface {
public:
    auto acceptPayment()->void override {
        // logic to accept bitcoin
    }
};
class CreditCardPaymentMethod :public PaymentInterface {
public:
    auto acceptPayment()->void override {
        // logic to accept creditcard
    }
};

// Uncle Bob says: Seperate extensible behavior behind an interface, and flip the dependencies.
class Payment
{
    PaymentInterface* _payment;
public:
    auto begin(PaymentInterface&& payment)->void
    {
        payment.acceptPayment();
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
