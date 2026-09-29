/*
  Симдяшкин Александр Денисович
  Задача №1 на отработку материала.
  Вывести в консоль true, если целое число, введеное пользователем, четное или вывести false, если оно нечетное
  Сделать отступ от левого края в 10 единиц для конечного вывода
  Заполнить отступ символом "*"
*/
#include <iostream>
#include <ios>
#include <iomanip>
int main()
{
  int user_value{};

  std::cout << std::boolalpha;
  std::cout << "Проверка на четность целого числа\n" << "Введите ваше число: ";
  std::cin >> user_value;
  

  std::cout << std::setfill('*') << std::setw(10)  << (user_value % 2 == 0);
  

  return 0;
}