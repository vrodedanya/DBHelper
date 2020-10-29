#include "dbhelper.h"
#include <iostream>


int cycle(int max)
{
	int a = 0;
	for (int i = 0 ; i < max ; i++)
	{
		a += i;
	}
	return a;
}

void cyc()
{
	for (unsigned int i = 0 ; i < 100000000 ; i ++)
	{
	}
}

int main()
{
	DBHelper::check_exectime(cyc);
	std::cout << DBHelper::check_exectime(cycle, 100000000) << std::endl;
	return 0;
}

