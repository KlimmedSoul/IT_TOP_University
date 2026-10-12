/*
    Симдяшкин Александр Денисович
    попробуйте поработать с приведением типов - с явным и неявным
*/
#include <iostream>
#include <meta>

int main()
{
    char a = 50;
    char b = 60;
    
    std::cout << "Result: " << a + b << "\n";
    // результат приведен в int
    std::cout << std::meta::display_string_of(^^decltype(a + b)) << std::endl;
    

    int c = -1;
    unsigned int d = 1;
    
    // неявное приведение к unsigned int
    if (c > d) {
        std::cout << "c > d\n";
    } else {
        std::cout << "c <= d\n";
    }
    
    
    int x = 7;
    int y = 2;
    
    double wrong = x / y;
    double right = static_cast<double>(x) / y;
    
    // дробная часть отбросилась
    std::cout << "Wrong: " << wrong << "\n";
    // дробная часть осталась
    std::cout << "Right: " << right << "\n";
    
    // 11111111 в битах
    char e = 255;
    
    // единицы копируются во все 4 байта и получаем -1
    std::cout << "Direct cast: " << static_cast<int>(e) << "\n";
    
    // чтобы вывести 255, нужно сначала обросить знак, а потом уже приводить в int
    std::cout << "Correct cast: " << static_cast<int>(static_cast<unsigned char>(e)) << "\n";
    

    
    double pi = 3.1415;
    // отбрасывается дробная часть
    int standard = pi;
    
    std::cout << "Standard assignment: " << standard << "\n";
    
}


