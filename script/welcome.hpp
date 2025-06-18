#ifndef WELCOME_HPP
#define WELCOME_HPP

#include <iostream>
#include <cstdlib>

#include "indenting.hpp"
#include "termcolor.hpp"

int x;

void welcome(int x)
{
	using namespace std;
	if (x == 0)
	{
		cout << termcolor::yellow;
		cout << "Welcome to J Calc.cpp\n";
		cout << termcolor::white;
	}
	else
	{
		cout << findent << "Error || 'welcome message error'\n";
	}
}

#endif
