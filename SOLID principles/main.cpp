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

class CarInterface {
public:
    auto virtual Drive()->std::string = 0;
};

class Car:public CarInterface {
public:
    auto Drive()->std::string // child must follow its parent. even the retund elements
    {
        return "Please drive safely\n";
    }
};

class Honda : public Car {
public:
    auto Drive()->std::string // it must have the same behavior as it parent.
    {
        return "Drive has been called from Honda class\n";
    }
};

// LCP says: you should replace Car with Honda and vise versa.
auto run(CarInterface& car)->std::string {
    return car.Drive(); 
}

int main()
{
    Car car;
    Honda honda;
    auto result = run(honda);
    std::clog << result;
    std::cout << "Hello World!\n";
}
