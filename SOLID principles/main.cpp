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

// DIP - Dependency Inversion Principle 

// it's a low-level modules
class Mailer 
{
public:

};

// it's a high-level modules
class SendWelcomMessage
{
public:
    Mailer mailer;
    SendWelcomMessage(Mailer& mailer) {
        this->mailer = mailer;
    }
};



int main()
{
    std::cout << "Hello World!\n";
}
