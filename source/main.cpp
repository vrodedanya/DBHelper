#include "dbhelper.h"
#include <iostream>

int cycle(const int& max)
{
	int a = 0;
	for (int i = 0 ; i < max ; i++)
	{
		a += i;
	}
	return a;
}

void cyc(int* hello)
{
	std::cout << *hello << std::endl;
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
	int pow(const int& number)
	{
		int res = number * number * 2;
		return res;
	}
};

int main()
{
	test t;
	test t2;
	test2 t3;
	int number = 10;
	DBHelper::check_exectime(cycle, 1000);
	DBHelper::check_exectime(cyc, &number);
	DBHelper::check_exectime(&test::hello, &t);
	DBHelper::check_exectime(&test::hello, &t2);

	std::cout << DBHelper::check_exectime(&test2::pow, &t3, number) << std::endl;


	return 0;
}

