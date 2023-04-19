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

class MailerInterface {
public:
    auto virtual send()->void = 0;
};
// it's a low-level modules
class SmtpMailer :public MailerInterface
{
public:
    auto send()->void override {
        std::cout << "Send funtion in SmtpMailer\n";
    }
};
// it's a low-level modules
class SendGridMailer :public MailerInterface
{
public:
    auto send()->void override {
        std::cout << "Send funtion in SendGridMailer\n";
    }
};

// it's a high-level modules
class SendWelcomMessage
{
public:
    MailerInterface* mailer;
    SendWelcomMessage(MailerInterface* mailer) {
        this->mailer = mailer;
    }
};


int main()
{
    std::cout << "Hello World!\n";
}
