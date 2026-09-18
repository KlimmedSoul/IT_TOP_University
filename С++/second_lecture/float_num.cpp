/*
С клавиатуры вводится дробное число (через точку).
12.45
Нужно отдельно выделить целую и дробную часть, не используя double.
Вывести их на экран.
12
45
*/
#include <iostream>

int main()
{
    int int_part;
    char dot;
    int float_part;
    
    std::cin >> int_part >> dot >> float_part;
    
    std::cout << int_part << "\n" << float_part << std::endl;
}