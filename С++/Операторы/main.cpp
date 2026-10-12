/*
    Симдяшкин Александр Денисович
    попробуйте использовать унарные, бинарные и тернарный операторы в простых выражениях
*/
#include <iostream>
#include <meta>
#include <bitset>
using TYPE = std::bitset<4>;

int main()
{
    char c = 50;
    short s = 100;

    auto unary_plus = +c;
    auto unary_minus = -s;

    std::cout << "Original char size: " << std::meta::display_string_of(^^decltype(c)) << std::endl;
    std::cout << "Unary plus size: " << std::meta::display_string_of(^^decltype(unary_plus)) << std::endl;
    std::cout << "Original short size: " << std::meta::display_string_of(^^decltype(s)) << std::endl;
    std::cout << "Unary minus size: " << std::meta::display_string_of(^^decltype(unary_minus)) << std::endl;

    // если 5 больше 3 => 10 иначе 20. x = 10
    int x = (5 > 3) ? 10 : 20;
    std::cout << x << std::endl;

    int N = 42;
    // 43
    +N;
    //42
    -N;

    //-42
    N = -N;

    // выведет -41, сначала +1 потом вывод
    std::cout << ++N << std::endl;

    // тоже выведет -41, сначала вывод, потом +1
    std::cout << N++ << std::endl;

    // -40
    std::cout << N << std::endl;

    int A = 11;
    int B = 3;

    std::cout << "A % B = " << A % B << std::endl;   // 2  остатот от деления

    // A = A + B - 14
    A += B;
    std::cout << A << std::endl;
    // B = B * 100 - 300
    B *= 100;
    std::cout << B << std::endl;

    std::cout << std::boolalpha;
    bool b = true;
    // false
    std::cout << "!b = " << !b << std::endl;

    // Проверка попадания в диапазон [1, 10]
    int X = 5;
    // true
    std::cout << (X >= 1 && X <= 10) << std::endl;


    TYPE n1 = 0b1100;
    TYPE n2 = ~n1;
    // ~1100 = 0011
    std::cout << "~" << n1 << " = " << n2 << std::endl;


    TYPE n3 = 0b00111010;
    // сдвиг влево на 3
    std::cout << (n3 << 3) << std::endl;
}
