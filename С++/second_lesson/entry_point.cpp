/*
Попробуйте создать простейшую программу, сделайте точку входа.
Передайте процессу параметры из командной строки и выведите их на экран
*/

#include <iostream>
#include <stdio.h>

int main(int count, char* arguments[])
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Я точка входа в приложение! Возвращаю 0 даже если нет return" << std::endl;
	for (int i = 1; i < count; i++) {
		std::cout << "Параметр " << i << ": " << arguments[i] << std::endl;
	}
}