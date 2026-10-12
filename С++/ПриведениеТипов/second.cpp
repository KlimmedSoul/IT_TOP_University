/*
    Симдяшкин Александр Денисович
    Какой тип будет у результата вычисления данных выражений? (Версия C++26)
*/

#include <iostream>
#include <meta> 

int main() {
    // 1. Вывод - 195. Тип: int
    std::cout << 'a' + 'b' << std::endl;
    // Получаем тип выражения напрямую через рефлексию без всяких using
    std::cout << std::meta::display_string_of(^^decltype('a' + 'b')) << std::endl;
   
    // 2. Вывод - 123.14. Тип: double
    std::cout << 'x' + 3.14 << std::endl;
    std::cout << std::meta::display_string_of(^^decltype('x' + 3.14)) << std::endl;
   
    // 3. Вывод - 142. Тип: unsigned long long
    std::cout << 42LL + 100UL << std::endl;
    std::cout << std::meta::display_string_of(^^decltype(42LL + 100UL)) << std::endl;
}

