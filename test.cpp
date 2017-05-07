#include "loadgl.h"
#include <iostream>

int main(int argc, char const *argv[]) {

	std::cout << GL::load() << std::endl;
	std::cout << GL::version.major << "." << GL::version.minor << std::endl;

	return 0;
}
