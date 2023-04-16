#include <iostream>
#include "Logger.hpp"

/*
*   SOLID
*   =========================
*   S - SRP - Single Responsibility Principle
*   O - OCP - Open/Closed Principle
*   L - LCP - Liskov Substitution Principle
*   I - ISP - Interface Segregation Principle
*   D - DTP - Dependency Inversion Principle
*/




class User
{
public:

    auto create(int id)->void {
		try
		{
			//save
		}
		catch (const std::exception& err)
		{
			Logger::log(err.what());
		}
    }

};

int main()
{
    std::cout << "Hello World!\n";
}
