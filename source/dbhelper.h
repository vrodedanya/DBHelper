#ifndef DBHELPER_H
#define DBHELPER_H

#pragma once

#include <chrono>
#include <iostream>

class DBHelper
{
public:
	static double delta;

	static void begin();
	static void end();

	template<typename... TArgs>
	static void check_exectime(void(*func)(TArgs... MArgs), TArgs... MArgs)
	{
		std::cout << "[DBHelper]: Function with address " << func << " begins" << std::endl;
		std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
		func(MArgs...);
		std::cout << "[DBHelper]: Function with address " << func << " ends with duration: " << static_cast<std::chrono::duration<double>>(std::chrono::system_clock::now() - start).count() << std::endl;
	}
};

#endif
