

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <chrono>
#include <thread>

#include "indenting.hpp"
#include "welcome.hpp"
#include "termcolor.hpp"
#include "math.hpp"
#include "clearTerm.hpp"

int status = 0;
int* pstatus = &status;


int main()
{
	clear_terminal(*pstatus);
	std::cout << termcolor::reset;
	std::cout << termcolor::white;

	welcome(*pstatus);

	while (*pstatus == 0)
	{
		std::string input;
		std::cout << termcolor::bright_magenta;
		std::cout << "jcalc:~$ ";
		std::cout << termcolor::white;
		std::getline(std::cin, input);

		std::istringstream iss(input);
		int mode;
		iss >> mode;
		int* pmode = &mode;

		if (*pmode == 0)
		{
			std::cout << "Quiting Program!\n";
			std::this_thread::sleep_for(std::chrono::seconds(1));
			clear_terminal(*pstatus);
			status++;
			break;
		}

		else if (*pmode == 1)
		{
			std::string command;
			iss >> command;
			system(command.c_str());
		}
		else if (*pmode == 2)
		{
			float num1;
			float num2;
			std::string operation;
			iss >> num1 >> operation >> num2;
			math(num1, operation, num2);
		}
		else
		{
			status++;
			break;
		}

	}

	return *pstatus - balancer;
}

