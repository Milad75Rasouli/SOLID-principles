#include <iostream>


/*
*   SOLID
*   =========================
*   S - SRP - Single Responsibility Principle
*   O - OCP - Open/Closed Principle
*   L - LCP - Liskov Substitution Principle
*   I - ISP - Interface Segregation Principle
*   D - DTP - Dependency Inversion Principle
*/


class Logger {

 public:
	auto log(const char* msg)->void{
		std::cerr << msg << std::endl;
	}
};

class User
{
	Logger _logger;
public:

	User(Logger&& logger): _logger(std::move(logger)) {

	}
    auto create(int id)->void {
		try
		{
			//save
		}
		catch (const std::exception& err)
		{
			_logger.log(err.what());
		}
    }

};

int main()
{
    std::cout << "Hello World!\n";
}
