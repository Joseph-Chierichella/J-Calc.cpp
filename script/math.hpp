#ifndef MATH_HPP
#define MATH_HPP

#include <iostream>

#include "termcolor.hpp"
#include "indenting.hpp"

void math(float num1, std::string operation, float num2)
{
	if (operation == "+")
	{
		float num3 = num1 + num2;
		std::cout << findent << num3 << "\n";
	}
	else if (operation == "-")
	{
		float num3 = num1 - num2;
		std::cout << findent << num3 << "\n";
	}
	else if (operation == "*" || operation == "x" || operation == "X")
	{
		float num3 = num1 * num2;
		std::cout << findent << num3 << "\n";
	}
	else if (operation == "/")
	{
		if (num1 != 0 && num2 != 0)
		{
			float num3 = num1 / num2;
			std::cout << findent << num3 << "\n";
		}
		else if (num1 == 0 || num2 == 0)
		{
			std::cout << findent << "Error || 'Can not divide by 0'\n";
		}
	}
}

#endif
