#include <iostream>
#include <memory>

/*
*   SOLID
*   =========================
*   S - SRP - Single Responsibility Principle = A class should have one, and only one, reson to change.
*   O - OCP - Open/Closed Principle = Entities should be open for extension, but closed for modification.
*   L - LCP - Liskov Substitution Principle = Derived classes must be substitutable for their bas classes.
*   I - ISP - Interface Segregation Principle = A client should not be forced to implement and interface that it doesn't use.
*   D - DIP - Dependency Inversion Principle = Hight-level modules shoulden't depend on low-level modules insted on anstractions, not on concretions.
*/


/*
* Dependency Inversion is a design principle in object-oriented programming
* that suggests that high-level modules should not depend on low-level modules,
* but instead both should depend on abstractions.
*/
// DIP - Dependency Inversion Principle 

class ConnectionInterface {
public:
    auto virtual connect()->void = 0;
};

class MYSQL :public ConnectionInterface {
public:
    auto connect()->void override {
        std::clog << "MYSQL has been connected.\n";
    }

};

// now you can you many database connection.
class ForgotPassword {
    
    ConnectionInterface* connection;
public:
    // this it Dependency Injection. ConnectionInterface*
    ForgotPassword(ConnectionInterface* connection) {
        // this is Dependency Inversion
        this->connection = connection;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
