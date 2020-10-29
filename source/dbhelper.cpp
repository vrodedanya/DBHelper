#include "dbhelper.h"

double DBHelper::delta = 0;
std::chrono::system_clock::time_point DBHelper::st = std::chrono::system_clock::now();

void DBHelper::begin()
{
	st = std::chrono::system_clock::now();
}

void DBHelper::end()
{
	delta = static_cast<std::chrono::duration<double>>(std::chrono::system_clock::now() - st).count();
}

