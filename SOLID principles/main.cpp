#include <iostream>
#include <memory>

/*
*   SOLID
*   =========================
*   S - SRP - Single Responsibility Principle = A class should have one, and only one, reson to change.
*   O - OCP - Open/Closed Principle = Entities should be open for extension, but closed for modification.
*   L - LCP - Liskov Substitution Principle = Derived classes must be substitutable for their bas classes.
*   I - ISP - Interface Segregation Principle = A client should not be forced to implement and interface that it doesn't use.
*   D - DTP - Dependency Inversion Principle
*/

// ISP - Interface Segregation Principle

class BirdInterface {
public:
    auto virtual fly()->void = 0;
};

class WalkInterface {
public:
    auto virtual walk()->void = 0;
};

//Combind Interface
class CombindInterface :public WalkInterface, BirdInterface {
public:
    auto virtual sing()->void = 0;
};
class Parrot: public CombindInterface {
public:
    auto fly()->void override {
        //
        std::clog << "Parrot fly has been invoked.\n";
    }
    auto walk()->void override {
        //
        std::clog << "Parrot walk has been invoked.\n";
    }
    auto sing()->void override {
        //
        std::clog << "Parrot sing has been invoked.\n";
    }
};

class Penguin:public WalkInterface {
public:
    auto walk()->void override {
        //
        std::clog << "Penguin walk has been invoked.\n";
    }
};


int main()
{
    std::unique_ptr<WalkInterface> penguin2(new Penguin);
    std::unique_ptr<CombindInterface> parrot2(new Parrot);
    Penguin penguin3;
    Parrot parrot3;

    penguin2->walk();
    penguin3.walk();
    parrot2->walk();
    parrot2->sing();
    std::cout << "Hello World!\n";
}
