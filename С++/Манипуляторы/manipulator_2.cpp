/*
  Симдяшкин Александр Денисович
  Программа получает целочисленный код на вход. 
  Нужно вывести полученный код в 3 системах счисления: в восьмиричной, в десятичной, в шестнадцатиричной
  Если код содержит букву в шестнадцатиричной системе, вывести "Код содержит шестнадцатеричные символы!"
  Иначе "Код не содержит шестнадцатеричные символы((("

*/
#include <iostream>
#include <iomanip>

int main()
{
  int code{};

  std::cout << "Введите код: ";
  std::cin >> code;

  std::cout << std::setfill('-') << std::setw(30) << "" << std::endl;
  std::cout << std::setw(15) << "Анализатор кода" << std::endl;;
  std::cout << std::setfill('-') << std::setw(30) << "" << std::endl;


  std::cout << std::setfill(' ');
  
  std::cout << "Восьмиричное: " << std::oct << code  << std::endl;
  
  std::cout << "Десятичное: "  << std::dec << code << std::endl;
  
  std::cout << "Шестнадцатеричное: "  << std::hex << std::uppercase  << code << std::endl;

  std::cout << std::dec;
  std::cout << std::setfill('-') << std::setw(30) << "" << std::endl;

  if(( code % 16 ) >= 10 ) 
  {
    std::cout << "Код содержит шестнадцатеричные символы!";
  } 
    else 
  {
    std::cout << "Код не содержит шестнадцатеричные символы(((";
  }
}