#include <iostream>
#include "calculator.h"

int main()
{
	Calculator calculator;
	std::cout << "a*b=" << calculator.Mul(12,3) << std::endl;
	return 0;
}
