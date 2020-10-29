#ifndef DBHELPER_H
#define DBHELPER_H

#pragma once

#include <chrono>
#include <stdio.h>

class DBHelper
{
private:
	static std::chrono::system_clock::time_point st;
public:
	static double delta;

	static void begin();
	static void end();

	template<typename T, typename... TArgs>
	static T check_exectime(T(*func)(TArgs... MArgs), TArgs... MArgs)
	{
		fprintf (stderr, "[DBHelper]: Function with address %p begins\n", func);
		std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
		T buf = func(MArgs...);
		fprintf(stderr, "[DBHelper]: Function with address %p ends with duration: %f\n", func, static_cast<std::chrono::duration<double>>(std::chrono::system_clock::now() - start).count());
		return buf;
	}
	template<typename... TArgs>
	static void check_exectime(void(*func)(TArgs... MArgs), TArgs... MArgs)
	{
		fprintf (stderr, "[DBHelper]: Function with address %p begins\n", func);
		std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
		func(MArgs...);
		fprintf(stderr, "[DBHelper]: Function with address %p ends with duration: %f\n", func, static_cast<std::chrono::duration<double>>(std::chrono::system_clock::now() - start).count());
	}

};

#endif
