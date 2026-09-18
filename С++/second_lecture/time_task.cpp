/*
Пользователь вводит с клавиатуры время, выраженное в секундах (в переменную int total_seconds ).
Нужно отделить часы, минуты и остаток секунд. (1000 ->  0 : 16 : 40)
Вывести на экран.
*/
#include <iostream>

int main()
{
    int total_seconds = 0;
    std::cin >> total_seconds;
    
    int hours, minutes = 0;
    
    hours = total_seconds / 3600;
    total_seconds %= 3600;
    
    minutes = total_seconds / 60;
    total_seconds %= 60;
    
    
    std::cout << hours << ":" << minutes << ":" << total_seconds << std::endl;

}