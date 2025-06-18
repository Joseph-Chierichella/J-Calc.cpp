#ifndef CLEARTERM_HPP
#define CLEARTERM_HPP
#include <cstdlib>

inline void clear_terminal(int cti) 
{
	if (cti == 0) 
	{
	#ifdef _WIN32
	std::system("cls");
	#else
	std::system("clear");
	#endif
	}
}

#endif

