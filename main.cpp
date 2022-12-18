#include <iostream>
#include "mathfunc.h"
#include "userin.h"

#define MODE 2
#ifndef MODE
#error "Constante MODE do not defined."
#endif

int main()
{
#if (MODE == 0)
	std::cout << "Работаю в режиме тренировки." << std::endl;

#elif (MODE == 1)
	std::cout << "Работаю в боевом режиме." << std::endl;
	const std::string msg_num1 = "Введите число 1: ";
	const std::string msg_num2 = "Введите число 2: ";
	double num1 = 0;
	double num2 = 0;
	double result = 0;

	userIn(num1, msg_num1);
	userIn(num2, msg_num2);
	result = my_math::add(num1, num2);

	std::cout << "Результат сложения: " << result << std::endl;
	
#else
	std::cout << "Неизвестный режим. Завершение работы." << std::endl;

#endif

	return 0;
}
