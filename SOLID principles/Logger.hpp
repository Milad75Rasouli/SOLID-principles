#include <iostream>
#pragma once
class Logger {

public:
	static auto log(const char* msg)->void {
		std::cerr << msg << std::endl;
	}
};