#include <iostream>
#pragma once
class Logger {

public:
	auto log(const char* msg)->void {
		std::cerr << msg << std::endl;
	}
};