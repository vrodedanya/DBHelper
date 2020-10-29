#include "dbhelper.h"


void cycle(int max)
{
	int a = 0;
	for (int i = 0 ; i < max ; i++)
	{
		a += i;
	}
}

int main()
{
	DBHelper::check_exectime(cycle,1000000000);
	return 0;
}

