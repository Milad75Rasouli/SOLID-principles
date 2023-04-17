#include <iostream>

/*
*   SOLID
*   =========================
*   S - SRP - Single Responsibility Principle = A class should have one, and only one, reson to change.
*   O - OCP - Open/Closed Principle = Entities should be open for extension, but closed for modification.
*   L - LCP - Liskov Substitution Principle = Derived classes must be substitutable for their bas classes.
*   I - ISP - Interface Segregation Principle
*   D - DTP - Dependency Inversion Principle
*/

// LCP - Liskov Substitution Principle 

class Car {
public:
    std::string color{};
    auto Drive(Car& car)->std::string // child must follow its parent. even the returnd paramer. like string
    {
        return "Please drive safely\n";
    }
};

class Honda : public Car {
public:
    auto Drive(Car& car)->std::string // it must have the same behavior as it parent.
    {
        return "Drive has been called from Honda class\n";
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
