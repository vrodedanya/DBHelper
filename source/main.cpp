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
class test
{
private:
public:
	void hello()
	{
		std::cout << "Hello world!" << std::endl;
	}
};

class test2
{
private:
public:
	int pow(int number)
	{
		return number * number;
	}
};

int main()
{
	test t;
	test t2;
	test2 t3;
	DBHelper::check_exectime(&test::hello, &t);
	DBHelper::check_exectime(&test::hello, &t2);
	std::cout << DBHelper::check_exectime(&test2::pow, &t3, 10) << std::endl;


	return 0;
}

