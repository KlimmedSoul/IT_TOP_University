/*
    Симдяшкин Александр Денисович
    попробуйте создавать, инициализировать и использовать переменные и выражения, значения
    которых вычисляются на этапе компиляции.
*/
#include <iostream>
#include <iomanip>

int main() 
{
    constexpr int first = 0;
    std::cout << "Размер first через sizeof: " << sizeof(first) << " байт" << std::endl;
        
    double value;
    std::cout << "Введите значение для вещественной переменной: ";
    std::cin >> value;
    std::cout << "Размер normalVar через sizeof: " << sizeof(value) << " байт" << std::endl;
    
    std::cout << std::fixed << std::setprecision(20);
    constexpr double A = 10.0 / 30.0;
    double x = 10.0;
    double y = 30.0;
    double B = x / y;
    std::cout << "constexpr double А: " << A << std::endl;
    std::cout << "double B: " << B << std::endl;
    
    if(A == B) 
    {
        std::cout << "A равно B" << std::endl;
    }
    else 
    {
        std::cout << "A не равно B" << std::endl;
    }
    /*
        Почитал насчет равенства вещественных чисел, оказывается в стандарте IEEE 754
        компиляторы используют одинаковые 64-битные регистры, поэтому округление на уровне компиляции
        и рантайма одинаковы, поэтому они равны. 
        Не равны они могут быть: 
        1) Если указать флаги компиляции типо -ffast-math
        2) При кросс-компиляции
        3) И при разных точностях промежуточных вычислений (например, FPU в 80 битном double 
        посчитает в рантайме, а компилятор строго в 64 битном)
    */

    
    std::cout << "Размер выражения (1 + first): " << sizeof(1 + first) << " байт" << std::endl;
    
    std::cout << "Размер выражения (1 + 2): " << sizeof(1 + 2) << " байт" << std::endl;
    
    return 0;
}